const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCompletion = @import("libqt6").KCompletion;
const KCompletionBase = @import("libqt6").KCompletionBase;
const KCompletionBox = @import("libqt6").KCompletionBox;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QCompleter = @import("libqt6").QCompleter;
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
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QValidator = @import("libqt6").QValidator;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const kcompletion_enums = @import("libkcompletion.zig").enums;
const kcompletionbase_enums = @import("libkcompletionbase.zig").enums;
const qlineedit_enums = @import("../libqlineedit.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");
const ArrayMap_i32_SliceQKeySequence = std.array_hash_map.Auto(i32, []QKeySequence);

/// ### [Upstream resources](https://api.kde.org/klineedit.html)
pub const KLineEdit = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klineedit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLineEdit,

    pub const _is_KLineEdit = {};
    pub const _is_QLineEdit = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};
    pub const _is_KCompletionBase = {};

    /// New constructs a new KLineEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KLineEdit {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KLineEdit_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KLineEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn New2(stringVal: []const u8) KLineEdit {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.KLineEdit_new2(stringVal_str) };
    }

    /// New3 constructs a new KLineEdit object.
    ///
    pub fn New3() KLineEdit {
        return .{ .ptr = qtc.KLineEdit_new3() };
    }

    /// New4 constructs a new KLineEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(stringVal: []const u8, parent: anytype) KLineEdit {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KLineEdit_new4(stringVal_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MetaObject(self: KLineEdit) QMetaObject {
        return .{ .ptr = qtc.KLineEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KLineEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KLineEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperMetaObject(self: KLineEdit) QMetaObject {
        return .{ .ptr = qtc.KLineEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KLineEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLineEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KLineEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KLineEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLineEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KLineEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLineEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KLineEdit, callback: *const fn (KLineEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KLineEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KLineEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KLineEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KLineEdit, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KLineEdit_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SetCompletionMode(self: KLineEdit, mode: i32) void {
        qtc.KLineEdit_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, mode: kcompletion_enums.CompletionMode) callconv(.c) void `
    ///
    pub fn OnSetCompletionMode(self: KLineEdit, callback: *const fn (KLineEdit, i32) callconv(.c) void) void {
        qtc.KLineEdit_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletionMode` instead
    ///
    pub const QBaseSetCompletionMode = SuperSetCompletionMode;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SuperSetCompletionMode(self: KLineEdit, mode: i32) void {
        qtc.KLineEdit_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionModeDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SetCompletionModeDisabled(self: KLineEdit, mode: i32) void {
        qtc.KLineEdit_SetCompletionModeDisabled(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#urlDropsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UrlDropsEnabled(self: KLineEdit) bool {
        return qtc.KLineEdit_UrlDropsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setTrapReturnKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` trap: bool `
    ///
    pub fn SetTrapReturnKey(self: KLineEdit, trap: bool) void {
        qtc.KLineEdit_SetTrapReturnKey(@ptrCast(self.ptr), trap);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#trapReturnKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn TrapReturnKey(self: KLineEdit) bool {
        return qtc.KLineEdit_TrapReturnKey(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completionBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` create: bool `
    ///
    pub fn CompletionBox(self: KLineEdit, create: bool) KCompletionBox {
        return .{ .ptr = qtc.KLineEdit_CompletionBox(@ptrCast(self.ptr), create) };
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completionBox)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, create: bool) callconv(.c) KCompletionBox `
    ///
    pub fn OnCompletionBox(self: KLineEdit, callback: *const fn (KLineEdit, bool) callconv(.c) KCompletionBox) void {
        qtc.KLineEdit_OnCompletionBox(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCompletionBox` instead
    ///
    pub const QBaseCompletionBox = SuperCompletionBox;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completionBox)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` create: bool `
    ///
    pub fn SuperCompletionBox(self: KLineEdit, create: bool) KCompletionBox {
        return .{ .ptr = qtc.KLineEdit_SuperCompletionBox(@ptrCast(self.ptr), create) };
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: KCompletion `
    ///
    /// ` handle: bool `
    ///
    pub fn SetCompletionObject(self: KLineEdit, param1: anytype, handle: bool) void {
        comptime _ = @TypeOf(param1)._is_KCompletion;
        qtc.KLineEdit_SetCompletionObject(@ptrCast(self.ptr), @ptrCast(param1.ptr), handle);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: KCompletion, handle: bool) callconv(.c) void `
    ///
    pub fn OnSetCompletionObject(self: KLineEdit, callback: *const fn (KLineEdit, KCompletion, bool) callconv(.c) void) void {
        qtc.KLineEdit_OnSetCompletionObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletionObject` instead
    ///
    pub const QBaseSetCompletionObject = SuperSetCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: KCompletion `
    ///
    /// ` handle: bool `
    ///
    pub fn SuperSetCompletionObject(self: KLineEdit, param1: anytype, handle: bool) void {
        comptime _ = @TypeOf(param1)._is_KCompletion;
        qtc.KLineEdit_SuperSetCompletionObject(@ptrCast(self.ptr), @ptrCast(param1.ptr), handle);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Copy(self: KLineEdit) void {
        qtc.KLineEdit_Copy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#copy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCopy(self: KLineEdit, callback: *const fn () callconv(.c) void) void {
        qtc.KLineEdit_OnCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCopy` instead
    ///
    pub const QBaseCopy = SuperCopy;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#copy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SuperCopy(self: KLineEdit) void {
        qtc.KLineEdit_SuperCopy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setSqueezedTextEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetSqueezedTextEnabled(self: KLineEdit, enable: bool) void {
        qtc.KLineEdit_SetSqueezedTextEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#isSqueezedTextEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsSqueezedTextEnabled(self: KLineEdit) bool {
        return qtc.KLineEdit_IsSqueezedTextEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#originalText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OriginalText(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLineEdit_OriginalText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.OriginalText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#userText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserText(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KLineEdit_UserText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.UserText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` box: KCompletionBox `
    ///
    pub fn SetCompletionBox(self: KLineEdit, box: anytype) void {
        comptime _ = @TypeOf(box)._is_KCompletionBox;
        qtc.KLineEdit_SetCompletionBox(@ptrCast(self.ptr), @ptrCast(box.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#clearButtonUsedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ClearButtonUsedSize(self: KLineEdit) QSize {
        return .{ .ptr = qtc.KLineEdit_ClearButtonUsedSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#doCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DoCompletion(self: KLineEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KLineEdit_DoCompletion(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completionBoxActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn CompletionBoxActivated(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KLineEdit_CompletionBoxActivated(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completionBoxActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCompletionBoxActivated(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_Connect_CompletionBoxActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#returnKeyPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ReturnKeyPressed(self: KLineEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KLineEdit_ReturnKeyPressed(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#returnKeyPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnReturnKeyPressed(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_Connect_ReturnKeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Completion(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KLineEdit_Completion(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completion)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCompletion(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_Connect_Completion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#substringCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SubstringCompletion(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KLineEdit_SubstringCompletion(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#substringCompletion)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSubstringCompletion(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_Connect_SubstringCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#textRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: kcompletionbase_enums.KeyBindingType `
    ///
    pub fn TextRotation(self: KLineEdit, param1: i32) void {
        qtc.KLineEdit_TextRotation(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#textRotation)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: kcompletionbase_enums.KeyBindingType) callconv(.c) void `
    ///
    pub fn OnTextRotation(self: KLineEdit, callback: *const fn (KLineEdit, i32) callconv(.c) void) void {
        qtc.KLineEdit_Connect_TextRotation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completionModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: kcompletion_enums.CompletionMode `
    ///
    pub fn CompletionModeChanged(self: KLineEdit, param1: i32) void {
        qtc.KLineEdit_CompletionModeChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#completionModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: kcompletion_enums.CompletionMode) callconv(.c) void `
    ///
    pub fn OnCompletionModeChanged(self: KLineEdit, callback: *const fn (KLineEdit, i32) callconv(.c) void) void {
        qtc.KLineEdit_Connect_CompletionModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#aboutToShowContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` contextMenu: QMenu `
    ///
    pub fn AboutToShowContextMenu(self: KLineEdit, contextMenu: anytype) void {
        comptime _ = @TypeOf(contextMenu)._is_QMenu;
        qtc.KLineEdit_AboutToShowContextMenu(@ptrCast(self.ptr), @ptrCast(contextMenu.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#aboutToShowContextMenu)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, contextMenu: QMenu) callconv(.c) void `
    ///
    pub fn OnAboutToShowContextMenu(self: KLineEdit, callback: *const fn (KLineEdit, QMenu) callconv(.c) void) void {
        qtc.KLineEdit_Connect_AboutToShowContextMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#clearButtonClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ClearButtonClicked(self: KLineEdit) void {
        qtc.KLineEdit_ClearButtonClicked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#clearButtonClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit) callconv(.c) void `
    ///
    pub fn OnClearButtonClicked(self: KLineEdit, callback: *const fn (KLineEdit) callconv(.c) void) void {
        qtc.KLineEdit_Connect_ClearButtonClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SetReadOnly(self: KLineEdit, readOnly: bool) void {
        qtc.KLineEdit_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setReadOnly)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, readOnly: bool) callconv(.c) void `
    ///
    pub fn OnSetReadOnly(self: KLineEdit, callback: *const fn (KLineEdit, bool) callconv(.c) void) void {
        qtc.KLineEdit_OnSetReadOnly(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReadOnly` instead
    ///
    pub const QBaseSetReadOnly = SuperSetReadOnly;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setReadOnly)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SuperSetReadOnly(self: KLineEdit, readOnly: bool) void {
        qtc.KLineEdit_SuperSetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#rotateText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` typeVal: kcompletionbase_enums.KeyBindingType `
    ///
    pub fn RotateText(self: KLineEdit, typeVal: i32) void {
        qtc.KLineEdit_RotateText(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` completedText: []const u8 `
    ///
    pub fn SetCompletedText(self: KLineEdit, completedText: []const u8) void {
        const completedText_str = qtc.libqt_string{
            .len = completedText.len,
            .data = completedText.ptr,
        };
        qtc.KLineEdit_SetCompletedText(@ptrCast(self.ptr), completedText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, completedText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetCompletedText(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_OnSetCompletedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletedText` instead
    ///
    pub const QBaseSetCompletedText = SuperSetCompletedText;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` completedText: []const u8 `
    ///
    pub fn SuperSetCompletedText(self: KLineEdit, completedText: []const u8) void {
        const completedText_str = qtc.libqt_string{
            .len = completedText.len,
            .data = completedText.ptr,
        };
        qtc.KLineEdit_SuperSetCompletedText(@ptrCast(self.ptr), completedText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: []const []const u8 `
    ///
    /// ` autoSuggest: bool `
    ///
    pub fn SetCompletedItems(self: KLineEdit, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("klineedit.SetCompletedItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i|
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KLineEdit_SetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, items: ?[*:null]?[*:0]const u8, autoSuggest: bool) callconv(.c) void `
    ///
    pub fn OnSetCompletedItems(self: KLineEdit, callback: *const fn (KLineEdit, ?[*:null]?[*:0]const u8, bool) callconv(.c) void) void {
        qtc.KLineEdit_OnSetCompletedItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletedItems` instead
    ///
    pub const QBaseSetCompletedItems = SuperSetCompletedItems;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedItems)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: []const []const u8 `
    ///
    /// ` autoSuggest: bool `
    ///
    pub fn SuperSetCompletedItems(self: KLineEdit, allocator: std.mem.Allocator, items: []const []const u8, autoSuggest: bool) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("klineedit.SetCompletedItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i|
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KLineEdit_SuperSetCompletedItems(@ptrCast(self.ptr), items_list, autoSuggest);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setSqueezedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetSqueezedText(self: KLineEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KLineEdit_SetSqueezedText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KLineEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KLineEdit_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetText(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetText` instead
    ///
    pub const QBaseSetText = SuperSetText;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetText(self: KLineEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KLineEdit_SuperSetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#makeCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn MakeCompletion(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KLineEdit_MakeCompletion(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#makeCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnMakeCompletion(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_OnMakeCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMakeCompletion` instead
    ///
    pub const QBaseMakeCompletion = SuperMakeCompletion;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#makeCompletion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SuperMakeCompletion(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KLineEdit_SuperMakeCompletion(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#userCancelled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` cancelText: []const u8 `
    ///
    pub fn UserCancelled(self: KLineEdit, cancelText: []const u8) void {
        const cancelText_str = qtc.libqt_string{
            .len = cancelText.len,
            .data = cancelText.ptr,
        };
        qtc.KLineEdit_UserCancelled(@ptrCast(self.ptr), cancelText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#userCancelled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, cancelText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUserCancelled(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.KLineEdit_OnUserCancelled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUserCancelled` instead
    ///
    pub const QBaseUserCancelled = SuperUserCancelled;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#userCancelled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` cancelText: []const u8 `
    ///
    pub fn SuperUserCancelled(self: KLineEdit, cancelText: []const u8) void {
        const cancelText_str = qtc.libqt_string{
            .len = cancelText.len,
            .data = cancelText.ptr,
        };
        qtc.KLineEdit_SuperUserCancelled(@ptrCast(self.ptr), cancelText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: KLineEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KLineEdit_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KLineEdit, callback: *const fn (KLineEdit, QEvent) callconv(.c) bool) void {
        qtc.KLineEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: KLineEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KLineEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.KLineEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KLineEdit, callback: *const fn (KLineEdit, QResizeEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.KLineEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KLineEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KLineEdit, callback: *const fn (KLineEdit, QKeyEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KLineEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KLineEdit, callback: *const fn (KLineEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KLineEdit, callback: *const fn (KLineEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KLineEdit, callback: *const fn (KLineEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KLineEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KLineEdit, callback: *const fn (KLineEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KLineEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn CreateStandardContextMenu(self: KLineEdit) QMenu {
        return .{ .ptr = qtc.KLineEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#createStandardContextMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMenu `
    ///
    pub fn OnCreateStandardContextMenu(self: KLineEdit, callback: *const fn () callconv(.c) QMenu) void {
        qtc.KLineEdit_OnCreateStandardContextMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateStandardContextMenu` instead
    ///
    pub const QBaseCreateStandardContextMenu = SuperCreateStandardContextMenu;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#createStandardContextMenu)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SuperCreateStandardContextMenu(self: KLineEdit) QMenu {
        return .{ .ptr = qtc.KLineEdit_SuperCreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: bool `
    ///
    pub fn SetCompletedText2(self: KLineEdit, param1: []const u8, param2: bool) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KLineEdit_SetCompletedText2(@ptrCast(self.ptr), param1_str, param2);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8, param2: bool) callconv(.c) void `
    ///
    pub fn OnSetCompletedText2(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KLineEdit_OnSetCompletedText2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCompletedText2` instead
    ///
    pub const QBaseSetCompletedText2 = SuperSetCompletedText2;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletedText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: bool `
    ///
    pub fn SuperSetCompletedText2(self: KLineEdit, param1: []const u8, param2: bool) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KLineEdit_SuperSetCompletedText2(@ptrCast(self.ptr), param1_str, param2);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setUserSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` userSelection: bool `
    ///
    pub fn SetUserSelection(self: KLineEdit, userSelection: bool) void {
        qtc.KLineEdit_SetUserSelection(@ptrCast(self.ptr), userSelection);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setUserSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, userSelection: bool) callconv(.c) void `
    ///
    pub fn OnSetUserSelection(self: KLineEdit, callback: *const fn (KLineEdit, bool) callconv(.c) void) void {
        qtc.KLineEdit_OnSetUserSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetUserSelection` instead
    ///
    pub const QBaseSetUserSelection = SuperSetUserSelection;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setUserSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` userSelection: bool `
    ///
    pub fn SuperSetUserSelection(self: KLineEdit, userSelection: bool) void {
        qtc.KLineEdit_SuperSetUserSelection(@ptrCast(self.ptr), userSelection);
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#autoSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn AutoSuggest(self: KLineEdit) bool {
        return qtc.KLineEdit_AutoSuggest(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#autoSuggest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAutoSuggest(self: KLineEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.KLineEdit_OnAutoSuggest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAutoSuggest` instead
    ///
    pub const QBaseAutoSuggest = SuperAutoSuggest;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#autoSuggest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SuperAutoSuggest(self: KLineEdit) bool {
        return qtc.KLineEdit_SuperAutoSuggest(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` ev: QPaintEvent `
    ///
    pub fn PaintEvent(self: KLineEdit, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QPaintEvent;
        qtc.KLineEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, ev: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KLineEdit, callback: *const fn (KLineEdit, QPaintEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` ev: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KLineEdit, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QPaintEvent;
        qtc.KLineEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#setCompletionModeDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    /// ` disable: bool `
    ///
    pub fn SetCompletionModeDisabled2(self: KLineEdit, mode: i32, disable: bool) void {
        qtc.KLineEdit_SetCompletionModeDisabled2(@ptrCast(self.ptr), @bitCast(mode), disable);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#displayText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayText(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_DisplayText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.DisplayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: KLineEdit, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QLineEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MaxLength(self: KLineEdit) i32 {
        return qtc.QLineEdit_MaxLength(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` maxLength: i32 `
    ///
    pub fn SetMaxLength(self: KLineEdit, maxLength: i32) void {
        qtc.QLineEdit_SetMaxLength(@ptrCast(self.ptr), @bitCast(maxLength));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: KLineEdit, frame: bool) void {
        qtc.QLineEdit_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HasFrame(self: KLineEdit) bool {
        return qtc.QLineEdit_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetClearButtonEnabled(self: KLineEdit, enable: bool) void {
        qtc.QLineEdit_SetClearButtonEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsClearButtonEnabled(self: KLineEdit) bool {
        return qtc.QLineEdit_IsClearButtonEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qlineedit_enums.EchoMode `
    ///
    pub fn EchoMode(self: KLineEdit) i32 {
        return qtc.QLineEdit_EchoMode(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` echoMode: qlineedit_enums.EchoMode `
    ///
    pub fn SetEchoMode(self: KLineEdit, echoMode: i32) void {
        qtc.QLineEdit_SetEchoMode(@ptrCast(self.ptr), @bitCast(echoMode));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsReadOnly(self: KLineEdit) bool {
        return qtc.QLineEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` validator: QValidator `
    ///
    pub fn SetValidator(self: KLineEdit, validator: anytype) void {
        comptime _ = @TypeOf(validator)._is_QValidator;
        qtc.QLineEdit_SetValidator(@ptrCast(self.ptr), @ptrCast(validator.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#validator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Validator(self: KLineEdit) QValidator {
        return .{ .ptr = qtc.QLineEdit_Validator(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` completer: QCompleter `
    ///
    pub fn SetCompleter(self: KLineEdit, completer: anytype) void {
        comptime _ = @TypeOf(completer)._is_QCompleter;
        qtc.QLineEdit_SetCompleter(@ptrCast(self.ptr), @ptrCast(completer.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#completer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Completer(self: KLineEdit) QCompleter {
        return .{ .ptr = qtc.QLineEdit_Completer(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn CursorPosition(self: KLineEdit) i32 {
        return qtc.QLineEdit_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn SetCursorPosition(self: KLineEdit, cursorPosition: i32) void {
        qtc.QLineEdit_SetCursorPosition(@ptrCast(self.ptr), @bitCast(cursorPosition));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CursorPositionAt(self: KLineEdit, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QLineEdit_CursorPositionAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: KLineEdit, flag: i32) void {
        qtc.QLineEdit_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: KLineEdit) i32 {
        return qtc.QLineEdit_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorForward(self: KLineEdit, mark: bool) void {
        qtc.QLineEdit_CursorForward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorBackward(self: KLineEdit, mark: bool) void {
        qtc.QLineEdit_CursorBackward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorWordForward(self: KLineEdit, mark: bool) void {
        qtc.QLineEdit_CursorWordForward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorWordBackward(self: KLineEdit, mark: bool) void {
        qtc.QLineEdit_CursorWordBackward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#backspace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Backspace(self: KLineEdit) void {
        qtc.QLineEdit_Backspace(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Del(self: KLineEdit) void {
        qtc.QLineEdit_Del(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#home)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    pub fn Home(self: KLineEdit, mark: bool) void {
        qtc.QLineEdit_Home(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    pub fn End(self: KLineEdit, mark: bool) void {
        qtc.QLineEdit_End(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsModified(self: KLineEdit) bool {
        return qtc.QLineEdit_IsModified(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` modified: bool `
    ///
    pub fn SetModified(self: KLineEdit, modified: bool) void {
        qtc.QLineEdit_SetModified(@ptrCast(self.ptr), modified);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn SetSelection(self: KLineEdit, param1: i32, param2: i32) void {
        qtc.QLineEdit_SetSelection(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HasSelectedText(self: KLineEdit) bool {
        return qtc.QLineEdit_HasSelectedText(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SelectionStart(self: KLineEdit) i32 {
        return qtc.QLineEdit_SelectionStart(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SelectionEnd(self: KLineEdit) i32 {
        return qtc.QLineEdit_SelectionEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SelectionLength(self: KLineEdit) i32 {
        return qtc.QLineEdit_SelectionLength(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsUndoAvailable(self: KLineEdit) bool {
        return qtc.QLineEdit_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsRedoAvailable(self: KLineEdit) bool {
        return qtc.QLineEdit_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` b: bool `
    ///
    pub fn SetDragEnabled(self: KLineEdit, b: bool) void {
        qtc.QLineEdit_SetDragEnabled(@ptrCast(self.ptr), b);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn DragEnabled(self: KLineEdit) bool {
        return qtc.QLineEdit_DragEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn SetCursorMoveStyle(self: KLineEdit, style: i32) void {
        qtc.QLineEdit_SetCursorMoveStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CursorMoveStyle `
    ///
    pub fn CursorMoveStyle(self: KLineEdit) i32 {
        return qtc.QLineEdit_CursorMoveStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMask(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_InputMask(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.InputMask: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` inputMask: []const u8 `
    ///
    pub fn SetInputMask(self: KLineEdit, inputMask: []const u8) void {
        const inputMask_str = qtc.libqt_string{
            .len = inputMask.len,
            .data = inputMask.ptr,
        };
        qtc.QLineEdit_SetInputMask(@ptrCast(self.ptr), inputMask_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HasAcceptableInput(self: KLineEdit) bool {
        return qtc.QLineEdit_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetTextMargins(self: KLineEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLineEdit_SetTextMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetTextMargins2(self: KLineEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLineEdit_SetTextMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn TextMargins(self: KLineEdit) QMargins {
        return .{ .ptr = qtc.QLineEdit_TextMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` action: QAction `
    ///
    /// ` position: qlineedit_enums.ActionPosition `
    ///
    pub fn AddAction(self: KLineEdit, action: anytype, position: i32) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QLineEdit_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr), @bitCast(position));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` position: qlineedit_enums.ActionPosition `
    ///
    pub fn AddAction2(self: KLineEdit, icon: anytype, position: i32) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        return .{ .ptr = qtc.QLineEdit_AddAction2(@ptrCast(self.ptr), @ptrCast(icon.ptr), @bitCast(position)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Clear(self: KLineEdit) void {
        qtc.QLineEdit_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SelectAll(self: KLineEdit) void {
        qtc.QLineEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Undo(self: KLineEdit) void {
        qtc.QLineEdit_Undo(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Redo(self: KLineEdit) void {
        qtc.QLineEdit_Redo(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Cut(self: KLineEdit) void {
        qtc.QLineEdit_Cut(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Paste(self: KLineEdit) void {
        qtc.QLineEdit_Paste(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#deselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Deselect(self: KLineEdit) void {
        qtc.QLineEdit_Deselect(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Insert(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_Insert(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextChanged(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextEdited(self: KLineEdit, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextEdited(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextEdited(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextEdited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn CursorPositionChanged(self: KLineEdit, param1: i32, param2: i32) void {
        qtc.QLineEdit_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: i32, param2: i32) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: KLineEdit, callback: *const fn (KLineEdit, i32, i32) callconv(.c) void) void {
        qtc.QLineEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ReturnPressed(self: KLineEdit) void {
        qtc.QLineEdit_ReturnPressed(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit) callconv(.c) void `
    ///
    pub fn OnReturnPressed(self: KLineEdit, callback: *const fn (KLineEdit) callconv(.c) void) void {
        qtc.QLineEdit_Connect_ReturnPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn EditingFinished(self: KLineEdit) void {
        qtc.QLineEdit_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: KLineEdit, callback: *const fn (KLineEdit) callconv(.c) void) void {
        qtc.QLineEdit_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SelectionChanged(self: KLineEdit) void {
        qtc.QLineEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: KLineEdit, callback: *const fn (KLineEdit) callconv(.c) void) void {
        qtc.QLineEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn InputRejected(self: KLineEdit) void {
        qtc.QLineEdit_InputRejected(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit) callconv(.c) void `
    ///
    pub fn OnInputRejected(self: KLineEdit, callback: *const fn (KLineEdit) callconv(.c) void) void {
        qtc.QLineEdit_Connect_InputRejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: KLineEdit, property: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QLineEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(property), @ptrCast(argument.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    /// ` steps: i32 `
    ///
    pub fn CursorForward2(self: KLineEdit, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorForward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mark: bool `
    ///
    /// ` steps: i32 `
    ///
    pub fn CursorBackward2(self: KLineEdit, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorBackward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn WinId(self: KLineEdit) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn CreateWinId(self: KLineEdit) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn InternalWinId(self: KLineEdit) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn EffectiveWinId(self: KLineEdit) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Style(self: KLineEdit) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KLineEdit, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsTopLevel(self: KLineEdit) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsWindow(self: KLineEdit) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsModal(self: KLineEdit) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KLineEdit) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KLineEdit, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsEnabled(self: KLineEdit) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KLineEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KLineEdit, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KLineEdit, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KLineEdit, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FrameGeometry(self: KLineEdit) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Geometry(self: KLineEdit) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn NormalGeometry(self: KLineEdit) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn X(self: KLineEdit) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Y(self: KLineEdit) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Pos(self: KLineEdit) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FrameSize(self: KLineEdit) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Size(self: KLineEdit) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Width(self: KLineEdit) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Height(self: KLineEdit) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Rect(self: KLineEdit) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ChildrenRect(self: KLineEdit) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ChildrenRegion(self: KLineEdit) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MinimumSize(self: KLineEdit) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MaximumSize(self: KLineEdit) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MinimumWidth(self: KLineEdit) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MinimumHeight(self: KLineEdit) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MaximumWidth(self: KLineEdit) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MaximumHeight(self: KLineEdit) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KLineEdit, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KLineEdit, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KLineEdit, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KLineEdit, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KLineEdit, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KLineEdit, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KLineEdit, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KLineEdit, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SizeIncrement(self: KLineEdit) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KLineEdit, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KLineEdit, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn BaseSize(self: KLineEdit) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KLineEdit, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KLineEdit, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KLineEdit, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KLineEdit, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KLineEdit, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KLineEdit, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KLineEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KLineEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KLineEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KLineEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KLineEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KLineEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KLineEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KLineEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KLineEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KLineEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KLineEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KLineEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KLineEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KLineEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KLineEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KLineEdit `
    ///
    pub fn Window(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn NativeParentWidget(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn TopLevelWidget(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Palette(self: KLineEdit) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KLineEdit, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KLineEdit, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KLineEdit) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KLineEdit, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KLineEdit) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Font(self: KLineEdit) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KLineEdit, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FontMetrics(self: KLineEdit) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FontInfo(self: KLineEdit) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Cursor(self: KLineEdit) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KLineEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UnsetCursor(self: KLineEdit) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KLineEdit, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HasMouseTracking(self: KLineEdit) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UnderMouse(self: KLineEdit) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KLineEdit, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HasTabletTracking(self: KLineEdit) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KLineEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KLineEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Mask(self: KLineEdit) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ClearMask(self: KLineEdit) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KLineEdit, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KLineEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Grab(self: KLineEdit) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn GraphicsEffect(self: KLineEdit) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KLineEdit, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KLineEdit, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KLineEdit, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KLineEdit, windowTitle: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KLineEdit, styleSheet: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KLineEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn WindowIcon(self: KLineEdit) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KLineEdit, windowIconText: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KLineEdit, windowRole: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KLineEdit, filePath: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KLineEdit, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn WindowOpacity(self: KLineEdit) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsWindowModified(self: KLineEdit) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KLineEdit, toolTip: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KLineEdit, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ToolTipDuration(self: KLineEdit) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KLineEdit, statusTip: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KLineEdit, whatsThis: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KLineEdit, name: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KLineEdit, description: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KLineEdit, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KLineEdit) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UnsetLayoutDirection(self: KLineEdit) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KLineEdit, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Locale(self: KLineEdit) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UnsetLocale(self: KLineEdit) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsRightToLeft(self: KLineEdit) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsLeftToRight(self: KLineEdit) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SetFocus(self: KLineEdit) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsActiveWindow(self: KLineEdit) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ActivateWindow(self: KLineEdit) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ClearFocus(self: KLineEdit) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KLineEdit, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KLineEdit) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KLineEdit, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HasFocus(self: KLineEdit) bool {
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
    /// ` self: KLineEdit `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KLineEdit, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FocusProxy(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KLineEdit) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KLineEdit, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn GrabMouse(self: KLineEdit) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ReleaseMouse(self: KLineEdit) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn GrabKeyboard(self: KLineEdit) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ReleaseKeyboard(self: KLineEdit) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KLineEdit, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KLineEdit, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KLineEdit, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KLineEdit, id: i32) void {
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
    /// ` self: KLineEdit `
    ///
    pub fn UpdatesEnabled(self: KLineEdit) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KLineEdit, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn GraphicsProxyWidget(self: KLineEdit) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Update(self: KLineEdit) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Repaint(self: KLineEdit) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KLineEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KLineEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KLineEdit, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Show(self: KLineEdit) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Hide(self: KLineEdit) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ShowMinimized(self: KLineEdit) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ShowMaximized(self: KLineEdit) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ShowFullScreen(self: KLineEdit) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ShowNormal(self: KLineEdit) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Close(self: KLineEdit) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Raise(self: KLineEdit) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Lower(self: KLineEdit) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KLineEdit, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KLineEdit, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KLineEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KLineEdit, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KLineEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("klineedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KLineEdit, geometry: []u8) bool {
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
    /// ` self: KLineEdit `
    ///
    pub fn AdjustSize(self: KLineEdit) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsVisible(self: KLineEdit) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KLineEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsHidden(self: KLineEdit) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsMinimized(self: KLineEdit) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsMaximized(self: KLineEdit) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsFullScreen(self: KLineEdit) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KLineEdit) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KLineEdit, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KLineEdit, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SizePolicy(self: KLineEdit) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KLineEdit, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KLineEdit, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn VisibleRegion(self: KLineEdit) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KLineEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KLineEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ContentsMargins(self: KLineEdit) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ContentsRect(self: KLineEdit) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Layout(self: KLineEdit) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KLineEdit, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UpdateGeometry(self: KLineEdit) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KLineEdit, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KLineEdit, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KLineEdit, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KLineEdit, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FocusWidget(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn NextInFocusChain(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn PreviousInFocusChain(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn AcceptDrops(self: KLineEdit) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KLineEdit, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KLineEdit, actions: []QAction) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KLineEdit, before: anytype, actions: []QAction) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KLineEdit, before: anytype, action: anytype) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KLineEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KLineEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("klineedit.Actions: Memory allocation failed");
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
    /// ` self: KLineEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KLineEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KLineEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KLineEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KLineEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KLineEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KLineEdit `
    ///
    pub fn ParentWidget(self: KLineEdit) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KLineEdit, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KLineEdit) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KLineEdit, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KLineEdit, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KLineEdit) i32 {
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
    /// ` self: KLineEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KLineEdit, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KLineEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KLineEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KLineEdit, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KLineEdit, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn EnsurePolished(self: KLineEdit) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KLineEdit, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn AutoFillBackground(self: KLineEdit) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KLineEdit, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn BackingStore(self: KLineEdit) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn WindowHandle(self: KLineEdit) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Screen(self: KLineEdit) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KLineEdit, screen: anytype) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KLineEdit, title: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KLineEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KLineEdit, callback: *const fn (KLineEdit, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KLineEdit, iconText: []const u8) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KLineEdit, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KLineEdit, callback: *const fn (KLineEdit, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KLineEdit) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KLineEdit, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KLineEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KLineEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KLineEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KLineEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KLineEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KLineEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KLineEdit, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KLineEdit, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KLineEdit, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KLineEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KLineEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KLineEdit, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KLineEdit, param1: i32, on: bool) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KLineEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klineedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KLineEdit, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsWidgetType(self: KLineEdit) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsWindowType(self: KLineEdit) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsQuickItemType(self: KLineEdit) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SignalsBlocked(self: KLineEdit) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KLineEdit, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Thread(self: KLineEdit) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KLineEdit, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KLineEdit, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KLineEdit, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KLineEdit, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KLineEdit, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KLineEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("klineedit.Children: Memory allocation failed");
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
    /// ` self: KLineEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KLineEdit, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KLineEdit, obj: anytype) void {
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
    /// ` self: KLineEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KLineEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KLineEdit `
    ///
    pub fn Disconnect3(self: KLineEdit) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KLineEdit, receiver: anytype) bool {
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
    /// ` self: KLineEdit `
    ///
    pub fn DumpObjectTree(self: KLineEdit) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn DumpObjectInfo(self: KLineEdit) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KLineEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KLineEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KLineEdit, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KLineEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klineedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klineedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KLineEdit `
    ///
    pub fn BindingStorage(self: KLineEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn BindingStorage2(self: KLineEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Destroyed(self: KLineEdit) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KLineEdit, callback: *const fn (KLineEdit) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Parent(self: KLineEdit) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KLineEdit, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn DeleteLater(self: KLineEdit) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KLineEdit, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KLineEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: KLineEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KLineEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KLineEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KLineEdit, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KLineEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KLineEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KLineEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KLineEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KLineEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KLineEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KLineEdit, callback: *const fn (KLineEdit, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn PaintingActive(self: KLineEdit) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn WidthMM(self: KLineEdit) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HeightMM(self: KLineEdit) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn LogicalDpiX(self: KLineEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn LogicalDpiY(self: KLineEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn PhysicalDpiX(self: KLineEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn PhysicalDpiY(self: KLineEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn DevicePixelRatio(self: KLineEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn DevicePixelRatioF(self: KLineEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn ColorCount(self: KLineEdit) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Depth(self: KLineEdit) i32 {
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

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn CompletionObject(self: KLineEdit) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn IsCompletionObjectAutoDeleted(self: KLineEdit) bool {
        return qtc.KCompletionBase_IsCompletionObjectAutoDeleted(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDeleteCompletionObject(self: KLineEdit, autoDelete: bool) void {
        qtc.KCompletionBase_SetAutoDeleteCompletionObject(@ptrCast(self.ptr), autoDelete);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEnableSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEnableSignals(self: KLineEdit, enable: bool) void {
        qtc.KCompletionBase_SetEnableSignals(@ptrCast(self.ptr), enable);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#handleSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HandleSignals(self: KLineEdit) bool {
        return qtc.KCompletionBase_HandleSignals(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#emitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn EmitSignals(self: KLineEdit) bool {
        return qtc.KCompletionBase_EmitSignals(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setEmitSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` emitRotationSignals: bool `
    ///
    pub fn SetEmitSignals(self: KLineEdit, emitRotationSignals: bool) void {
        qtc.KCompletionBase_SetEmitSignals(@ptrCast(self.ptr), emitRotationSignals);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ## Returns:
    ///
    /// ` kcompletion_enums.CompletionMode `
    ///
    pub fn CompletionMode(self: KLineEdit) i32 {
        return qtc.KCompletionBase_CompletionMode(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` item: kcompletionbase_enums.KeyBindingType `
    ///
    /// ` key: []QKeySequence `
    ///
    pub fn SetKeyBinding(self: KLineEdit, item: i32, key: []QKeySequence) bool {
        const key_list = qtc.libqt_list{
            .len = key.len,
            .data = @ptrCast(key.ptr),
        };
        return qtc.KCompletionBase_SetKeyBinding(@ptrCast(self.ptr), @bitCast(item), key_list);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` item: kcompletionbase_enums.KeyBindingType `
    ///
    pub fn KeyBinding(self: KLineEdit, allocator: std.mem.Allocator, item: i32) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.KCompletionBase_KeyBinding(@ptrCast(self.ptr), @bitCast(item));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("klineedit.KeyBinding: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UseGlobalKeyBindings(self: KLineEdit) void {
        qtc.KCompletionBase_UseGlobalKeyBindings(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#compObj)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn CompObj(self: KLineEdit) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompObj(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` handleSignals: bool `
    ///
    pub fn CompletionObject1(self: KLineEdit, handleSignals: bool) KCompletion {
        return .{ .ptr = qtc.KCompletionBase_CompletionObject1(@ptrCast(self.ptr), handleSignals) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SizeHint(self: KLineEdit) QSize {
        return .{ .ptr = qtc.KLineEdit_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SuperSizeHint(self: KLineEdit) QSize {
        return .{ .ptr = qtc.KLineEdit_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KLineEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.KLineEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn MinimumSizeHint(self: KLineEdit) QSize {
        return .{ .ptr = qtc.KLineEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SuperMinimumSizeHint(self: KLineEdit) QSize {
        return .{ .ptr = qtc.KLineEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KLineEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.KLineEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KLineEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KLineEdit, callback: *const fn (KLineEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KLineEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KLineEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KLineEdit, callback: *const fn (KLineEdit, QKeyEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KLineEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KLineEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KLineEdit, callback: *const fn (KLineEdit, QFocusEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KLineEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KLineEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KLineEdit, callback: *const fn (KLineEdit, QFocusEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KLineEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KLineEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KLineEdit, callback: *const fn (KLineEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KLineEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KLineEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KLineEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KLineEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KLineEdit, callback: *const fn (KLineEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KLineEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KLineEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KLineEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KLineEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KLineEdit, callback: *const fn (KLineEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn DropEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KLineEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KLineEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KLineEdit, callback: *const fn (KLineEdit, QDropEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KLineEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KLineEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KLineEdit, callback: *const fn (KLineEdit, QEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KLineEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KLineEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KLineEdit, callback: *const fn (KLineEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: KLineEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KLineEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: KLineEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KLineEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KLineEdit, callback: *const fn (KLineEdit, QStyleOptionFrame) callconv(.c) void) void {
        qtc.KLineEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KLineEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.KLineEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KLineEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.KLineEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KLineEdit, callback: *const fn (KLineEdit, i32) callconv(.c) QVariant) void {
        qtc.KLineEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn TimerEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KLineEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KLineEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KLineEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KLineEdit, callback: *const fn (KLineEdit, QTimerEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn DevType(self: KLineEdit) i32 {
        return qtc.KLineEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperDevType(self: KLineEdit) i32 {
        return qtc.KLineEdit_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KLineEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.KLineEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KLineEdit, visible: bool) void {
        qtc.KLineEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KLineEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KLineEdit, visible: bool) void {
        qtc.KLineEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KLineEdit, callback: *const fn (KLineEdit, bool) callconv(.c) void) void {
        qtc.KLineEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KLineEdit, param1: i32) i32 {
        return qtc.KLineEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KLineEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KLineEdit, param1: i32) i32 {
        return qtc.KLineEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KLineEdit, callback: *const fn (KLineEdit, i32) callconv(.c) i32) void {
        qtc.KLineEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn HasHeightForWidth(self: KLineEdit) bool {
        return qtc.KLineEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperHasHeightForWidth(self: KLineEdit) bool {
        return qtc.KLineEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KLineEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.KLineEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn PaintEngine(self: KLineEdit) QPaintEngine {
        return .{ .ptr = qtc.KLineEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperPaintEngine(self: KLineEdit) QPaintEngine {
        return .{ .ptr = qtc.KLineEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KLineEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KLineEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KLineEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KLineEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KLineEdit, callback: *const fn (KLineEdit, QWheelEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KLineEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KLineEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KLineEdit, callback: *const fn (KLineEdit, QEnterEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLineEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLineEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KLineEdit, callback: *const fn (KLineEdit, QEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KLineEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KLineEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KLineEdit, callback: *const fn (KLineEdit, QMoveEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KLineEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KLineEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KLineEdit, callback: *const fn (KLineEdit, QCloseEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KLineEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KLineEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KLineEdit, callback: *const fn (KLineEdit, QTabletEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KLineEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KLineEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KLineEdit, callback: *const fn (KLineEdit, QActionEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KLineEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KLineEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KLineEdit, callback: *const fn (KLineEdit, QShowEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KLineEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KLineEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KLineEdit, callback: *const fn (KLineEdit, QHideEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KLineEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KLineEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KLineEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KLineEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KLineEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KLineEdit, callback: *const fn (KLineEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KLineEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KLineEdit, param1: i32) i32 {
        return qtc.KLineEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KLineEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KLineEdit, param1: i32) i32 {
        return qtc.KLineEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KLineEdit, callback: *const fn (KLineEdit, i32) callconv(.c) i32) void {
        qtc.KLineEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KLineEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KLineEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KLineEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KLineEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KLineEdit, callback: *const fn (KLineEdit, QPainter) callconv(.c) void) void {
        qtc.KLineEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KLineEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KLineEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KLineEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KLineEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KLineEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KLineEdit, callback: *const fn (KLineEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KLineEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SharedPainter(self: KLineEdit) QPainter {
        return .{ .ptr = qtc.KLineEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperSharedPainter(self: KLineEdit) QPainter {
        return .{ .ptr = qtc.KLineEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KLineEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KLineEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KLineEdit, next: bool) bool {
        return qtc.KLineEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KLineEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KLineEdit, next: bool) bool {
        return qtc.KLineEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KLineEdit, callback: *const fn (KLineEdit, bool) callconv(.c) bool) void {
        qtc.KLineEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KLineEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLineEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KLineEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KLineEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KLineEdit, callback: *const fn (KLineEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.KLineEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KLineEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KLineEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KLineEdit, callback: *const fn (KLineEdit, QChildEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLineEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KLineEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KLineEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KLineEdit, callback: *const fn (KLineEdit, QEvent) callconv(.c) void) void {
        qtc.KLineEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KLineEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLineEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KLineEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLineEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KLineEdit, callback: *const fn (KLineEdit, QMetaMethod) callconv(.c) void) void {
        qtc.KLineEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KLineEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLineEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KLineEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KLineEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KLineEdit, callback: *const fn (KLineEdit, QMetaMethod) callconv(.c) void) void {
        qtc.KLineEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` handle: bool `
    ///
    pub fn SetHandleSignals(self: KLineEdit, handle: bool) void {
        qtc.KLineEdit_SetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// ### DEPRECATED: Use `SuperSetHandleSignals` instead
    ///
    pub const QBaseSetHandleSignals = SuperSetHandleSignals;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` handle: bool `
    ///
    pub fn SuperSetHandleSignals(self: KLineEdit, handle: bool) void {
        qtc.KLineEdit_SuperSetHandleSignals(@ptrCast(self.ptr), handle);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, handle: bool) callconv(.c) void `
    ///
    pub fn OnSetHandleSignals(self: KLineEdit, callback: *const fn (KLineEdit, bool) callconv(.c) void) void {
        qtc.KLineEdit_OnSetHandleSignals(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: KLineEdit, id: i32, data: ?*anyopaque) void {
        qtc.KLineEdit_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KLineEdit, id: i32, data: ?*anyopaque) void {
        qtc.KLineEdit_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: KLineEdit, callback: *const fn (KLineEdit, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KLineEdit_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn CursorRect(self: KLineEdit) QRect {
        return .{ .ptr = qtc.KLineEdit_CursorRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCursorRect` instead
    ///
    pub const QBaseCursorRect = SuperCursorRect;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SuperCursorRect(self: KLineEdit) QRect {
        return .{ .ptr = qtc.KLineEdit_SuperCursorRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnCursorRect(self: KLineEdit, callback: *const fn () callconv(.c) QRect) void {
        qtc.KLineEdit_OnCursorRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn UpdateMicroFocus(self: KLineEdit) void {
        qtc.KLineEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: KLineEdit) void {
        qtc.KLineEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KLineEdit, callback: *const fn () callconv(.c) void) void {
        qtc.KLineEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Create(self: KLineEdit) void {
        qtc.KLineEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperCreate(self: KLineEdit) void {
        qtc.KLineEdit_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KLineEdit, callback: *const fn () callconv(.c) void) void {
        qtc.KLineEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Destroy(self: KLineEdit) void {
        qtc.KLineEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperDestroy(self: KLineEdit) void {
        qtc.KLineEdit_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KLineEdit, callback: *const fn () callconv(.c) void) void {
        qtc.KLineEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FocusNextChild(self: KLineEdit) bool {
        return qtc.KLineEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperFocusNextChild(self: KLineEdit) bool {
        return qtc.KLineEdit_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KLineEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.KLineEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn FocusPreviousChild(self: KLineEdit) bool {
        return qtc.KLineEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperFocusPreviousChild(self: KLineEdit) bool {
        return qtc.KLineEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KLineEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.KLineEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Sender(self: KLineEdit) QObject {
        return .{ .ptr = qtc.KLineEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperSender(self: KLineEdit) QObject {
        return .{ .ptr = qtc.KLineEdit_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KLineEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.KLineEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SenderSignalIndex(self: KLineEdit) i32 {
        return qtc.KLineEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KLineEdit `
    ///
    pub fn SuperSenderSignalIndex(self: KLineEdit) i32 {
        return qtc.KLineEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KLineEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.KLineEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KLineEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLineEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KLineEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KLineEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLineEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.KLineEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KLineEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLineEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KLineEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KLineEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KLineEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KLineEdit, callback: *const fn (KLineEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.KLineEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KLineEdit, metricA: i32, metricB: i32) f64 {
        return qtc.KLineEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KLineEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KLineEdit, metricA: i32, metricB: i32) f64 {
        return qtc.KLineEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KLineEdit, callback: *const fn (KLineEdit, i32, i32) callconv(.c) f64) void {
        qtc.KLineEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn KeyBindingMap(self: KLineEdit, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KLineEdit_KeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("klineedit.KeyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("klineedit.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperKeyBindingMap` instead
    ///
    pub const QBaseKeyBindingMap = SuperKeyBindingMap;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SuperKeyBindingMap(self: KLineEdit, allocator: std.mem.Allocator) ArrayMap_i32_SliceQKeySequence {
        const _map: qtc.libqt_map = qtc.KLineEdit_SuperKeyBindingMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_SliceQKeySequence = .empty;
        defer {
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(QKeySequence, _value.len) catch @panic("klineedit.KeyBindingMap: Memory allocation failed");
            const _value_data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_value.data));
            for (0.._value.len) |ii|
                _value_slice[ii] = .{ .ptr = _value_data[ii] };
            _ret.put(allocator, _key, _value_slice) catch @panic("klineedit.KeyBindingMap: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_SliceQKeySequence `
    ///
    pub fn OnKeyBindingMap(self: KLineEdit, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KLineEdit_OnKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SetKeyBindingMap(self: KLineEdit, allocator: std.mem.Allocator, keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("klineedit.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("klineedit.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |it_entry| : (i += 1) {
            const keyBindingMap_key = it_entry.key_ptr.*;
            keyBindingMap_keys[i] = @bitCast(keyBindingMap_key);
            const value = it_entry.value_ptr.*;
            keyBindingMap_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap_count,
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KLineEdit_SetKeyBindingMap(@ptrCast(self.ptr), keyBindingMap_map);
    }

    /// ### DEPRECATED: Use `SuperSetKeyBindingMap` instead
    ///
    pub const QBaseSetKeyBindingMap = SuperSetKeyBindingMap;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyBindingMap: ArrayMap_i32_SliceQKeySequence (key: kcompletionbase_enums.KeyBindingType) `
    ///
    pub fn SuperSetKeyBindingMap(self: KLineEdit, allocator: std.mem.Allocator, keyBindingMap: ArrayMap_i32_SliceQKeySequence) void {
        const keyBindingMap_count = keyBindingMap.count();
        const keyBindingMap_keys = allocator.alloc(i32, keyBindingMap_count) catch @panic("klineedit.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_keys);
        const keyBindingMap_values = allocator.alloc(qtc.libqt_list, keyBindingMap_count) catch @panic("klineedit.SetKeyBindingMap: Memory allocation failed");
        defer allocator.free(keyBindingMap_values);
        var i: usize = 0;
        var keyBindingMap_it = keyBindingMap.iterator();
        while (keyBindingMap_it.next()) |it_entry| : (i += 1) {
            const keyBindingMap_key = it_entry.key_ptr.*;
            keyBindingMap_keys[i] = @bitCast(keyBindingMap_key);
            const value = it_entry.value_ptr.*;
            keyBindingMap_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const keyBindingMap_map = qtc.libqt_map{
            .len = keyBindingMap_count,
            .keys = @ptrCast(keyBindingMap_keys.ptr),
            .values = @ptrCast(keyBindingMap_values.ptr),
        };
        qtc.KLineEdit_SuperSetKeyBindingMap(@ptrCast(self.ptr), keyBindingMap_map);
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, keyBindingMap: qtc.libqt_map (ArrayMap_i32_SliceQKeySequence)) callconv(.c) void `
    ///
    pub fn OnSetKeyBindingMap(self: KLineEdit, callback: *const fn (KLineEdit, qtc.libqt_map) callconv(.c) void) void {
        qtc.KLineEdit_OnSetKeyBindingMap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` delegate: KCompletionBase `
    ///
    pub fn SetDelegate(self: KLineEdit, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KCompletionBase;
        qtc.KLineEdit_SetDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetDelegate` instead
    ///
    pub const QBaseSetDelegate = SuperSetDelegate;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    /// ` delegate: KCompletionBase `
    ///
    pub fn SuperSetDelegate(self: KLineEdit, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KCompletionBase;
        qtc.KLineEdit_SuperSetDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn (self: KLineEdit, delegate: KCompletionBase) callconv(.c) void `
    ///
    pub fn OnSetDelegate(self: KLineEdit, callback: *const fn (KLineEdit, KCompletionBase) callconv(.c) void) void {
        qtc.KLineEdit_OnSetDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Delegate(self: KLineEdit) KCompletionBase {
        return .{ .ptr = qtc.KLineEdit_Delegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDelegate` instead
    ///
    pub const QBaseDelegate = SuperDelegate;

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KLineEdit `
    ///
    pub fn SuperDelegate(self: KLineEdit) KCompletionBase {
        return .{ .ptr = qtc.KLineEdit_SuperDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCompletionBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit`
    ///
    /// ` callback: *const fn () callconv(.c) KCompletionBase `
    ///
    pub fn OnDelegate(self: KLineEdit, callback: *const fn () callconv(.c) KCompletionBase) void {
        qtc.KLineEdit_OnDelegate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KLineEdit `
    ///
    /// ` callback: *const fn (self: KLineEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KLineEdit, callback: *const fn (KLineEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klineedit.html#dtor.KLineEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KLineEdit `
    ///
    pub fn Delete(self: KLineEdit) void {
        qtc.KLineEdit_Delete(@ptrCast(self.ptr));
    }
};
