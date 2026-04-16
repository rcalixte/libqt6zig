const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QCursor = @import("libqt6").QCursor;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QDesignerFormWindowCursorInterface = @import("libqt6").QDesignerFormWindowCursorInterface;
const QDesignerFormWindowToolInterface = @import("libqt6").QDesignerFormWindowToolInterface;
const QDir = @import("libqt6").QDir;
const QEvent = @import("libqt6").QEvent;
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
const QUndoStack = @import("libqt6").QUndoStack;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const abstractformwindow_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html)
pub const QDesignerFormWindowInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerFormWindowInterface,

    pub const _is_QDesignerFormWindowInterface = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MetaObject(self: QDesignerFormWindowInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDesignerFormWindowInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDesignerFormWindowInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormWindowInterface_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#absoluteDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn AbsoluteDir(self: QDesignerFormWindowInterface) QDir {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_AbsoluteDir(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#contents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormWindowInterface_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#checkContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CheckContents(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerFormWindowInterface_CheckContents(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdesignerformwindowinterface.CheckContents: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerformwindowinterface.CheckContents: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#features)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractformwindow_enums.FeatureFlag `
    ///
    pub fn Features(self: QDesignerFormWindowInterface) i32 {
        return qtc.QDesignerFormWindowInterface_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` f: flag of abstractformwindow_enums.FeatureFlag `
    ///
    pub fn HasFeature(self: QDesignerFormWindowInterface, f: i32) bool {
        return qtc.QDesignerFormWindowInterface_HasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#author)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormWindowInterface_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: QDesignerFormWindowInterface, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.QDesignerFormWindowInterface_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormWindowInterface_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` comment: []const u8 `
    ///
    pub fn SetComment(self: QDesignerFormWindowInterface, comment: []const u8) void {
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        qtc.QDesignerFormWindowInterface_SetComment(@ptrCast(self.ptr), comment_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#layoutDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` margin: *i32 `
    ///
    /// ` spacing: *i32 `
    ///
    pub fn LayoutDefault(self: QDesignerFormWindowInterface, margin: *i32, spacing: *i32) void {
        qtc.QDesignerFormWindowInterface_LayoutDefault(@ptrCast(self.ptr), @ptrCast(margin), @ptrCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setLayoutDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` margin: i32 `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetLayoutDefault(self: QDesignerFormWindowInterface, margin: i32, spacing: i32) void {
        qtc.QDesignerFormWindowInterface_SetLayoutDefault(@ptrCast(self.ptr), @bitCast(margin), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setLayoutFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` margin: []const u8 `
    ///
    /// ` spacing: []const u8 `
    ///
    pub fn SetLayoutFunction(self: QDesignerFormWindowInterface, margin: []const u8, spacing: []const u8) void {
        const margin_str = qtc.libqt_string{
            .len = margin.len,
            .data = margin.ptr,
        };
        const spacing_str = qtc.libqt_string{
            .len = spacing.len,
            .data = spacing.ptr,
        };
        qtc.QDesignerFormWindowInterface_SetLayoutFunction(@ptrCast(self.ptr), margin_str, spacing_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#pixmapFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PixmapFunction(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormWindowInterface_PixmapFunction(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.PixmapFunction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setPixmapFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` pixmapFunction: []const u8 `
    ///
    pub fn SetPixmapFunction(self: QDesignerFormWindowInterface, pixmapFunction: []const u8) void {
        const pixmapFunction_str = qtc.libqt_string{
            .len = pixmapFunction.len,
            .data = pixmapFunction.ptr,
        };
        qtc.QDesignerFormWindowInterface_SetPixmapFunction(@ptrCast(self.ptr), pixmapFunction_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#exportMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExportMacro(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerFormWindowInterface_ExportMacro(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.ExportMacro: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setExportMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` exportMacro: []const u8 `
    ///
    pub fn SetExportMacro(self: QDesignerFormWindowInterface, exportMacro: []const u8) void {
        const exportMacro_str = qtc.libqt_string{
            .len = exportMacro.len,
            .data = exportMacro.ptr,
        };
        qtc.QDesignerFormWindowInterface_SetExportMacro(@ptrCast(self.ptr), exportMacro_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#includeHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludeHints(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerFormWindowInterface_IncludeHints(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdesignerformwindowinterface.IncludeHints: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerformwindowinterface.IncludeHints: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setIncludeHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` includeHints: []const []const u8 `
    ///
    pub fn SetIncludeHints(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator, includeHints: []const []const u8) void {
        const includeHints_arr = allocator.alloc(qtc.libqt_string, includeHints.len) catch @panic("qdesignerformwindowinterface.SetIncludeHints: Memory allocation failed");
        defer allocator.free(includeHints_arr);
        for (includeHints, 0..includeHints.len) |item, i|
            includeHints_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const includeHints_list = qtc.libqt_list{
            .len = includeHints.len,
            .data = includeHints_arr.ptr,
        };
        qtc.QDesignerFormWindowInterface_SetIncludeHints(@ptrCast(self.ptr), includeHints_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFileSaveMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` abstractformwindow_enums.ResourceFileSaveMode `
    ///
    pub fn ResourceFileSaveMode(self: QDesignerFormWindowInterface) i32 {
        return qtc.QDesignerFormWindowInterface_ResourceFileSaveMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setResourceFileSaveMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` behaviour: abstractformwindow_enums.ResourceFileSaveMode `
    ///
    pub fn SetResourceFileSaveMode(self: QDesignerFormWindowInterface, behaviour: i32) void {
        qtc.QDesignerFormWindowInterface_SetResourceFileSaveMode(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activeResourceFilePaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActiveResourceFilePaths(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerFormWindowInterface_ActiveResourceFilePaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdesignerformwindowinterface.ActiveResourceFilePaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerformwindowinterface.ActiveResourceFilePaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Core(self: QDesignerFormWindowInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Cursor(self: QDesignerFormWindowInterface) QDesignerFormWindowCursorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#toolCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ToolCount(self: QDesignerFormWindowInterface) i32 {
        return qtc.QDesignerFormWindowInterface_ToolCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#currentTool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn CurrentTool(self: QDesignerFormWindowInterface) i32 {
        return qtc.QDesignerFormWindowInterface_CurrentTool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setCurrentTool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentTool(self: QDesignerFormWindowInterface, index: i32) void {
        qtc.QDesignerFormWindowInterface_SetCurrentTool(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#tool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn Tool(self: QDesignerFormWindowInterface, index: i32) QDesignerFormWindowToolInterface {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_Tool(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#registerTool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` tool: QDesignerFormWindowToolInterface `
    ///
    pub fn RegisterTool(self: QDesignerFormWindowInterface, tool: anytype) void {
        comptime _ = @TypeOf(tool)._is_QDesignerFormWindowToolInterface;
        qtc.QDesignerFormWindowInterface_RegisterTool(@ptrCast(self.ptr), @ptrCast(tool.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#grid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Grid(self: QDesignerFormWindowInterface) QPoint {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_Grid(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#mainContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MainContainer(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_MainContainer(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setMainContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` mainContainer: QWidget `
    ///
    pub fn SetMainContainer(self: QDesignerFormWindowInterface, mainContainer: anytype) void {
        comptime _ = @TypeOf(mainContainer)._is_QWidget;
        qtc.QDesignerFormWindowInterface_SetMainContainer(@ptrCast(self.ptr), @ptrCast(mainContainer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#formContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn FormContainer(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_FormContainer(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#isManaged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn IsManaged(self: QDesignerFormWindowInterface, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDesignerFormWindowInterface_IsManaged(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsDirty(self: QDesignerFormWindowInterface) bool {
        return qtc.QDesignerFormWindowInterface_IsDirty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#findFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    pub fn FindFormWindow(w: anytype) QDesignerFormWindowInterface {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QDesignerFormWindowInterface_FindFormWindow(@ptrCast(w.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#findFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    pub fn FindFormWindow2(obj: anytype) QDesignerFormWindowInterface {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QDesignerFormWindowInterface_FindFormWindow2(@ptrCast(obj.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#commandHistory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn CommandHistory(self: QDesignerFormWindowInterface) QUndoStack {
        return .{ .ptr = qtc.QDesignerFormWindowInterface_CommandHistory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#beginCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` description: []const u8 `
    ///
    pub fn BeginCommand(self: QDesignerFormWindowInterface, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QDesignerFormWindowInterface_BeginCommand(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#endCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn EndCommand(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_EndCommand(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#simplifySelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widgets: []QWidget `
    ///
    pub fn SimplifySelection(self: QDesignerFormWindowInterface, widgets: []QWidget) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        qtc.QDesignerFormWindowInterface_SimplifySelection(@ptrCast(self.ptr), widgets_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#emitSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn EmitSelectionChanged(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_EmitSelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResourceFiles(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerFormWindowInterface_ResourceFiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdesignerformwindowinterface.ResourceFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerformwindowinterface.ResourceFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#addResourceFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` path: []const u8 `
    ///
    pub fn AddResourceFile(self: QDesignerFormWindowInterface, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDesignerFormWindowInterface_AddResourceFile(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#removeResourceFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` path: []const u8 `
    ///
    pub fn RemoveResourceFile(self: QDesignerFormWindowInterface, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDesignerFormWindowInterface_RemoveResourceFile(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#ensureUniqueObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn EnsureUniqueObjectName(self: QDesignerFormWindowInterface, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QDesignerFormWindowInterface_EnsureUniqueObjectName(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#manageWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ManageWidget(self: QDesignerFormWindowInterface, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerFormWindowInterface_ManageWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#unmanageWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn UnmanageWidget(self: QDesignerFormWindowInterface, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerFormWindowInterface_UnmanageWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` f: flag of abstractformwindow_enums.FeatureFlag `
    ///
    pub fn SetFeatures(self: QDesignerFormWindowInterface, f: i32) void {
        qtc.QDesignerFormWindowInterface_SetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` dirty: bool `
    ///
    pub fn SetDirty(self: QDesignerFormWindowInterface, dirty: bool) void {
        qtc.QDesignerFormWindowInterface_SetDirty(@ptrCast(self.ptr), dirty);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` changePropertyDisplay: bool `
    ///
    pub fn ClearSelection(self: QDesignerFormWindowInterface, changePropertyDisplay: bool) void {
        qtc.QDesignerFormWindowInterface_ClearSelection(@ptrCast(self.ptr), changePropertyDisplay);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#selectWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` w: QWidget `
    ///
    /// ` selectVal: bool `
    ///
    pub fn SelectWidget(self: QDesignerFormWindowInterface, w: anytype, selectVal: bool) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QDesignerFormWindowInterface_SelectWidget(@ptrCast(self.ptr), @ptrCast(w.ptr), selectVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setGrid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` grid: QPoint `
    ///
    pub fn SetGrid(self: QDesignerFormWindowInterface, grid: anytype) void {
        comptime _ = @TypeOf(grid)._is_QPoint;
        qtc.QDesignerFormWindowInterface_SetGrid(@ptrCast(self.ptr), @ptrCast(grid.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: QDesignerFormWindowInterface, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QDesignerFormWindowInterface_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents2(self: QDesignerFormWindowInterface, contents: []const u8) bool {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        return qtc.QDesignerFormWindowInterface_SetContents2(@ptrCast(self.ptr), contents_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#editWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn EditWidgets(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_EditWidgets(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activateResourceFilePaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: []const []const u8 `
    ///
    pub fn ActivateResourceFilePaths(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator, paths: []const []const u8) void {
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("qdesignerformwindowinterface.ActivateResourceFilePaths: Memory allocation failed");
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
        qtc.QDesignerFormWindowInterface_ActivateResourceFilePaths(@ptrCast(self.ptr), paths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#mainContainerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` mainContainer: QWidget `
    ///
    pub fn MainContainerChanged(self: QDesignerFormWindowInterface, mainContainer: anytype) void {
        comptime _ = @TypeOf(mainContainer)._is_QWidget;
        qtc.QDesignerFormWindowInterface_MainContainerChanged(@ptrCast(self.ptr), @ptrCast(mainContainer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#mainContainerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, mainContainer: QWidget) callconv(.c) void `
    ///
    pub fn OnMainContainerChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QWidget) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_MainContainerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#toolChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` toolIndex: i32 `
    ///
    pub fn ToolChanged(self: QDesignerFormWindowInterface, toolIndex: i32) void {
        qtc.QDesignerFormWindowInterface_ToolChanged(@ptrCast(self.ptr), @bitCast(toolIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#toolChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, toolIndex: i32) callconv(.c) void `
    ///
    pub fn OnToolChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, i32) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_ToolChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#fileNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn FileNameChanged(self: QDesignerFormWindowInterface, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QDesignerFormWindowInterface_FileNameChanged(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#fileNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, fileName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFileNameChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_FileNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#featureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` f: flag of abstractformwindow_enums.FeatureFlag `
    ///
    pub fn FeatureChanged(self: QDesignerFormWindowInterface, f: i32) void {
        qtc.QDesignerFormWindowInterface_FeatureChanged(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#featureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, f: flag of abstractformwindow_enums.FeatureFlag) callconv(.c) void `
    ///
    pub fn OnFeatureChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, i32) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_FeatureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn SelectionChanged(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn GeometryChanged(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_GeometryChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnGeometryChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFilesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ResourceFilesChanged(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_ResourceFilesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFilesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnResourceFilesChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_ResourceFilesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetManaged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn WidgetManaged(self: QDesignerFormWindowInterface, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerFormWindowInterface_WidgetManaged(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetManaged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnWidgetManaged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QWidget) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_WidgetManaged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetUnmanaged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn WidgetUnmanaged(self: QDesignerFormWindowInterface, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerFormWindowInterface_WidgetUnmanaged(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetUnmanaged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnWidgetUnmanaged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QWidget) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_WidgetUnmanaged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#aboutToUnmanageWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AboutToUnmanageWidget(self: QDesignerFormWindowInterface, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerFormWindowInterface_AboutToUnmanageWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#aboutToUnmanageWidget)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnAboutToUnmanageWidget(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QWidget) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_AboutToUnmanageWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Activated(self: QDesignerFormWindowInterface, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerFormWindowInterface_Activated(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnActivated(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QWidget) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Changed(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_Changed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` w: QWidget `
    ///
    pub fn WidgetRemoved(self: QDesignerFormWindowInterface, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QDesignerFormWindowInterface_WidgetRemoved(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, w: QWidget) callconv(.c) void `
    ///
    pub fn OnWidgetRemoved(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QWidget) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_WidgetRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#objectRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` o: QObject `
    ///
    pub fn ObjectRemoved(self: QDesignerFormWindowInterface, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QObject;
        qtc.QDesignerFormWindowInterface_ObjectRemoved(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#objectRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, o: QObject) callconv(.c) void `
    ///
    pub fn OnObjectRemoved(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QObject) callconv(.c) void) void {
        qtc.QDesignerFormWindowInterface_Connect_ObjectRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activateResourceFilePaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: []const []const u8 `
    ///
    /// ` errorCount: *i32 `
    ///
    pub fn ActivateResourceFilePaths2(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator, paths: []const []const u8, errorCount: *i32) void {
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("qdesignerformwindowinterface.ActivateResourceFilePaths2: Memory allocation failed");
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
        qtc.QDesignerFormWindowInterface_ActivateResourceFilePaths2(@ptrCast(self.ptr), paths_list, @ptrCast(errorCount));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn DevType(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_DevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn WinId(self: QDesignerFormWindowInterface) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn CreateWinId(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn InternalWinId(self: QDesignerFormWindowInterface) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn EffectiveWinId(self: QDesignerFormWindowInterface) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Style(self: QDesignerFormWindowInterface) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QDesignerFormWindowInterface, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsTopLevel(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsWindow(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsModal(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QDesignerFormWindowInterface, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsEnabled(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QDesignerFormWindowInterface, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QDesignerFormWindowInterface, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QDesignerFormWindowInterface, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QDesignerFormWindowInterface, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn FrameGeometry(self: QDesignerFormWindowInterface) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Geometry(self: QDesignerFormWindowInterface) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn NormalGeometry(self: QDesignerFormWindowInterface) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn X(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Y(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Pos(self: QDesignerFormWindowInterface) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn FrameSize(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Size(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Width(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Height(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Rect(self: QDesignerFormWindowInterface) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ChildrenRect(self: QDesignerFormWindowInterface) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ChildrenRegion(self: QDesignerFormWindowInterface) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MinimumSize(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MaximumSize(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MinimumWidth(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MinimumHeight(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MaximumWidth(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MaximumHeight(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QDesignerFormWindowInterface, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QDesignerFormWindowInterface, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QDesignerFormWindowInterface, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QDesignerFormWindowInterface, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QDesignerFormWindowInterface, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QDesignerFormWindowInterface, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QDesignerFormWindowInterface, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QDesignerFormWindowInterface, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn SizeIncrement(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QDesignerFormWindowInterface, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QDesignerFormWindowInterface, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn BaseSize(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QDesignerFormWindowInterface, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QDesignerFormWindowInterface, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QDesignerFormWindowInterface, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QDesignerFormWindowInterface, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QDesignerFormWindowInterface, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QDesignerFormWindowInterface, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QDesignerFormWindowInterface, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QDesignerFormWindowInterface, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QDesignerFormWindowInterface, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QDesignerFormWindowInterface, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QDesignerFormWindowInterface, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QDesignerFormWindowInterface, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QDesignerFormWindowInterface, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QDesignerFormWindowInterface, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QDesignerFormWindowInterface, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QDesignerFormWindowInterface, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QDesignerFormWindowInterface, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QDesignerFormWindowInterface, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Window(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn NativeParentWidget(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn TopLevelWidget(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Palette(self: QDesignerFormWindowInterface) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QDesignerFormWindowInterface, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QDesignerFormWindowInterface, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QDesignerFormWindowInterface, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Font(self: QDesignerFormWindowInterface) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QDesignerFormWindowInterface, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn FontMetrics(self: QDesignerFormWindowInterface) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn FontInfo(self: QDesignerFormWindowInterface) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QDesignerFormWindowInterface, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn UnsetCursor(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QDesignerFormWindowInterface, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn HasMouseTracking(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn UnderMouse(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QDesignerFormWindowInterface, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn HasTabletTracking(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QDesignerFormWindowInterface, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QDesignerFormWindowInterface, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Mask(self: QDesignerFormWindowInterface) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ClearMask(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QDesignerFormWindowInterface, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QDesignerFormWindowInterface, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Grab(self: QDesignerFormWindowInterface) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn GraphicsEffect(self: QDesignerFormWindowInterface) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QDesignerFormWindowInterface, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QDesignerFormWindowInterface, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QDesignerFormWindowInterface, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QDesignerFormWindowInterface, windowTitle: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QDesignerFormWindowInterface, styleSheet: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QDesignerFormWindowInterface, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn WindowIcon(self: QDesignerFormWindowInterface) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QDesignerFormWindowInterface, windowIconText: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QDesignerFormWindowInterface, windowRole: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QDesignerFormWindowInterface, filePath: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QDesignerFormWindowInterface, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn WindowOpacity(self: QDesignerFormWindowInterface) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsWindowModified(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QDesignerFormWindowInterface, toolTip: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QDesignerFormWindowInterface, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ToolTipDuration(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QDesignerFormWindowInterface, statusTip: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QDesignerFormWindowInterface, whatsThis: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QDesignerFormWindowInterface, name: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QDesignerFormWindowInterface, description: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QDesignerFormWindowInterface, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn UnsetLayoutDirection(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QDesignerFormWindowInterface, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Locale(self: QDesignerFormWindowInterface) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn UnsetLocale(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsRightToLeft(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsLeftToRight(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn SetFocus(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsActiveWindow(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ActivateWindow(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ClearFocus(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QDesignerFormWindowInterface, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QDesignerFormWindowInterface, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn HasFocus(self: QDesignerFormWindowInterface) bool {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QDesignerFormWindowInterface, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn FocusProxy(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QDesignerFormWindowInterface, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn GrabMouse(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ReleaseMouse(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn GrabKeyboard(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ReleaseKeyboard(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QDesignerFormWindowInterface, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QDesignerFormWindowInterface, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QDesignerFormWindowInterface, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QDesignerFormWindowInterface, id: i32) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn UpdatesEnabled(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QDesignerFormWindowInterface, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn GraphicsProxyWidget(self: QDesignerFormWindowInterface) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Update(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Repaint(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QDesignerFormWindowInterface, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QDesignerFormWindowInterface, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QDesignerFormWindowInterface, visible: bool) void {
        qtc.QWidget_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QDesignerFormWindowInterface, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Show(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Hide(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ShowMinimized(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ShowMaximized(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ShowFullScreen(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ShowNormal(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Close(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Raise(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Lower(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QDesignerFormWindowInterface, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QDesignerFormWindowInterface, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QDesignerFormWindowInterface, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QDesignerFormWindowInterface, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdesignerformwindowinterface.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QDesignerFormWindowInterface, geometry: []u8) bool {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn AdjustSize(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsVisible(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QDesignerFormWindowInterface, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsHidden(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsMinimized(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsMaximized(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsFullScreen(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QDesignerFormWindowInterface, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QDesignerFormWindowInterface, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn SizeHint(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_SizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn MinimumSizeHint(self: QDesignerFormWindowInterface) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn SizePolicy(self: QDesignerFormWindowInterface) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QDesignerFormWindowInterface, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QDesignerFormWindowInterface, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QDesignerFormWindowInterface, param1: i32) i32 {
        return qtc.QWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn HasHeightForWidth(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn VisibleRegion(self: QDesignerFormWindowInterface) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QDesignerFormWindowInterface, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QDesignerFormWindowInterface, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ContentsMargins(self: QDesignerFormWindowInterface) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ContentsRect(self: QDesignerFormWindowInterface) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Layout(self: QDesignerFormWindowInterface) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QDesignerFormWindowInterface, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn UpdateGeometry(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QDesignerFormWindowInterface, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QDesignerFormWindowInterface, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QDesignerFormWindowInterface, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QDesignerFormWindowInterface, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn FocusWidget(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn NextInFocusChain(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn PreviousInFocusChain(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn AcceptDrops(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QDesignerFormWindowInterface, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QDesignerFormWindowInterface, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QDesignerFormWindowInterface, actions: []QAction) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QDesignerFormWindowInterface, before: anytype, actions: []QAction) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QDesignerFormWindowInterface, before: anytype, action: anytype) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QDesignerFormWindowInterface, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qdesignerformwindowinterface.Actions: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QDesignerFormWindowInterface, text: []const u8) QAction {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QDesignerFormWindowInterface, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QDesignerFormWindowInterface, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QDesignerFormWindowInterface, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ParentWidget(self: QDesignerFormWindowInterface) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QDesignerFormWindowInterface, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QDesignerFormWindowInterface, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QDesignerFormWindowInterface, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QDesignerFormWindowInterface) i32 {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QDesignerFormWindowInterface, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QDesignerFormWindowInterface, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QDesignerFormWindowInterface, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QDesignerFormWindowInterface, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QDesignerFormWindowInterface, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn PaintEngine(self: QDesignerFormWindowInterface) QPaintEngine {
        return .{ .ptr = qtc.QWidget_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn EnsurePolished(self: QDesignerFormWindowInterface) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QDesignerFormWindowInterface, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn AutoFillBackground(self: QDesignerFormWindowInterface) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QDesignerFormWindowInterface, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn BackingStore(self: QDesignerFormWindowInterface) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn WindowHandle(self: QDesignerFormWindowInterface) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Screen(self: QDesignerFormWindowInterface) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QDesignerFormWindowInterface, screen: anytype) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QDesignerFormWindowInterface, title: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QDesignerFormWindowInterface, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QDesignerFormWindowInterface, iconText: []const u8) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QDesignerFormWindowInterface, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QDesignerFormWindowInterface, param1: i32) QVariant {
        return .{ .ptr = qtc.QWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QDesignerFormWindowInterface) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QDesignerFormWindowInterface, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QDesignerFormWindowInterface, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QDesignerFormWindowInterface, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QDesignerFormWindowInterface, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QDesignerFormWindowInterface, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QDesignerFormWindowInterface, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QDesignerFormWindowInterface, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QDesignerFormWindowInterface, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QDesignerFormWindowInterface, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QDesignerFormWindowInterface, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QDesignerFormWindowInterface, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QDesignerFormWindowInterface, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QDesignerFormWindowInterface, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QDesignerFormWindowInterface, param1: i32, on: bool) void {
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDesignerFormWindowInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDesignerFormWindowInterface, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsWidgetType(self: QDesignerFormWindowInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsWindowType(self: QDesignerFormWindowInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn IsQuickItemType(self: QDesignerFormWindowInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn SignalsBlocked(self: QDesignerFormWindowInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDesignerFormWindowInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Thread(self: QDesignerFormWindowInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDesignerFormWindowInterface, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDesignerFormWindowInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDesignerFormWindowInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDesignerFormWindowInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDesignerFormWindowInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignerformwindowinterface.Children: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDesignerFormWindowInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDesignerFormWindowInterface, obj: anytype) void {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDesignerFormWindowInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Disconnect3(self: QDesignerFormWindowInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDesignerFormWindowInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn DumpObjectTree(self: QDesignerFormWindowInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn DumpObjectInfo(self: QDesignerFormWindowInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDesignerFormWindowInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDesignerFormWindowInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDesignerFormWindowInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignerformwindowinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerformwindowinterface.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn BindingStorage(self: QDesignerFormWindowInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn BindingStorage2(self: QDesignerFormWindowInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Destroyed(self: QDesignerFormWindowInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Parent(self: QDesignerFormWindowInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDesignerFormWindowInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn DeleteLater(self: QDesignerFormWindowInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDesignerFormWindowInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDesignerFormWindowInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDesignerFormWindowInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDesignerFormWindowInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDesignerFormWindowInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDesignerFormWindowInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDesignerFormWindowInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDesignerFormWindowInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn PaintingActive(self: QDesignerFormWindowInterface) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn WidthMM(self: QDesignerFormWindowInterface) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn HeightMM(self: QDesignerFormWindowInterface) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn LogicalDpiX(self: QDesignerFormWindowInterface) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn LogicalDpiY(self: QDesignerFormWindowInterface) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn PhysicalDpiX(self: QDesignerFormWindowInterface) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn PhysicalDpiY(self: QDesignerFormWindowInterface) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn DevicePixelRatio(self: QDesignerFormWindowInterface) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn DevicePixelRatioF(self: QDesignerFormWindowInterface) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn ColorCount(self: QDesignerFormWindowInterface) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Depth(self: QDesignerFormWindowInterface) i32 {
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
    /// ` self: QDesignerFormWindowInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDesignerFormWindowInterface, callback: *const fn (QDesignerFormWindowInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#dtor.QDesignerFormWindowInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormWindowInterface `
    ///
    pub fn Delete(self: QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractformwindow.html#public-types)
pub const enums = struct {
    pub const FeatureFlag = enum(i32) {
        pub const EditFeature: i32 = 1;
        pub const GridFeature: i32 = 2;
        pub const TabOrderFeature: i32 = 4;
        pub const DefaultFeature: i32 = 3;
    };

    pub const ResourceFileSaveMode = enum(i32) {
        pub const SaveAllResourceFiles: i32 = 0;
        pub const SaveOnlyUsedResourceFiles: i32 = 1;
        pub const DontSaveResourceFiles: i32 = 2;
    };
};
