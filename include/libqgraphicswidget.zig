const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgraphicsitem_enums = @import("libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgraphicswidget.html
pub const qgraphicswidget = struct {
    /// New constructs a new QGraphicsWidget object.
    ///
    ///
    pub fn New() QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_new();
    }

    /// New2 constructs a new QGraphicsWidget object.
    ///
    /// ``` parent: QtC.QGraphicsItem ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QGraphicsWidget object.
    ///
    /// ``` parent: QtC.QGraphicsItem, wFlags: flag of qnamespace_enums.WindowType ```
    pub fn New3(parent: ?*anyopaque, wFlags: i64) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_new3(@ptrCast(parent), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsWidget_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsWidget, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsWidget_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsWidget_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsWidget_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Layout(self: ?*anyopaque) QtC.QGraphicsLayout {
        return qtc.QGraphicsWidget_Layout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ``` self: QtC.QGraphicsWidget, layout: QtC.QGraphicsLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QGraphicsWidget, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QGraphicsWidget_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ``` self: QtC.QGraphicsWidget, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QGraphicsWidget_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ``` self: QtC.QGraphicsWidget, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QGraphicsWidget_Palette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ``` self: QtC.QGraphicsWidget, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QGraphicsWidget, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: QtC.QGraphicsWidget, size: QtC.QSizeF ```
    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsWidget_Resize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: QtC.QGraphicsWidget, w: f64, h: f64 ```
    pub fn Resize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsWidget_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn SetGeometry2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QGraphicsWidget, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QGraphicsWidget, margins: QtC.QMarginsF ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// ``` self: QtC.QGraphicsWidget, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, slot: fn (?*anyopaque, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnGetContentsMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_QBaseGetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: QtC.QGraphicsWidget, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetWindowFrameMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: QtC.QGraphicsWidget, margins: QtC.QMarginsF ```
    pub fn SetWindowFrameMargins2(self: ?*anyopaque, margins: QtC.QMarginsF) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ``` self: QtC.QGraphicsWidget, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetWindowFrameMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn UnsetWindowFrameMargins(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn WindowFrameGeometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn WindowFrameRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QGraphicsWidget, wFlags: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, wFlags: i64) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QGraphicsWidget, title: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QGraphicsWidget, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ``` first: QtC.QGraphicsWidget, second: QtC.QGraphicsWidget ```
    pub fn SetTabOrder(first: ?*anyopaque, second: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first), @ptrCast(second));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsWidget_FocusWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QGraphicsWidget, sequence: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, sequence: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self), @ptrCast(sequence));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QGraphicsWidget, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QGraphicsWidget, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QGraphicsWidget, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ``` self: QtC.QGraphicsWidget, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ``` self: QtC.QGraphicsWidget, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ``` self: QtC.QGraphicsWidget, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ``` self: QtC.QGraphicsWidget, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ``` self: QtC.QGraphicsWidget, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QGraphicsWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qgraphicswidget.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: QtC.QGraphicsWidget, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ``` self: QtC.QGraphicsWidget, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsWidget_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// ``` self: QtC.QGraphicsWidget, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnPaint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// ``` self: QtC.QGraphicsWidget, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn PaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_PaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPaintWindowFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnPaintWindowFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn QBasePaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBasePaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsWidget_OnBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsWidget_QBaseBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Shape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsWidget_Shape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) QtC.QPainterPath ```
    pub fn OnShape(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsWidget_OnShape(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseShape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsWidget_QBaseShape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn GeometryChanged(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// ``` self: QtC.QGraphicsWidget, option: QtC.QStyleOption ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QGraphicsWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, option: QtC.QStyleOption) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, option: QtC.QStyleOption ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// ``` self: QtC.QGraphicsWidget, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsWidget_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF) callconv(.c) QtC.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QSizeF) void {
        qtc.QGraphicsWidget_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsWidget_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UpdateGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsWidget_OnUpdateGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// ``` self: QtC.QGraphicsWidget, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant ```
    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsWidget_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnItemChange(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsWidget_OnItemChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant ```
    pub fn QBaseItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsWidget_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// ``` self: QtC.QGraphicsWidget, propertyName: []const u8, value: QtC.QVariant ```
    pub fn PropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QGraphicsWidget_PropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, propertyName: [*:0]const u8, value: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnPropertyChange(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsWidget_OnPropertyChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, propertyName: []const u8, value: QtC.QVariant ```
    pub fn QBasePropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.QGraphicsWidget_QBasePropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnSceneEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnSceneEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, e: QtC.QEvent ```
    pub fn WindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_WindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnWindowFrameEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnWindowFrameEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, e: QtC.QEvent ```
    pub fn QBaseWindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseWindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// ``` self: QtC.QGraphicsWidget, pos: QtC.QPointF ```
    ///
    /// Returns: ``` qnamespace_enums.WindowFrameSection ```
    pub fn WindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_WindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, pos: QtC.QPointF) callconv(.c) i32 ```
    pub fn OnWindowFrameSectionAt(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsWidget_OnWindowFrameSectionAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, pos: QtC.QPointF ```
    ///
    /// Returns: ``` qnamespace_enums.WindowFrameSection ```
    pub fn QBaseWindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_QBaseWindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// ``` self: QtC.QGraphicsWidget, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn PolishEvent(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_PolishEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnPolishEvent(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsWidget_OnPolishEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBasePolishEvent(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBasePolishEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnHoverMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnHoverLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn GrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_GrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnGrabMouseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnGrabMouseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseGrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseGrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn UngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_UngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnUngrabMouseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnUngrabMouseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseUngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseUngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn GrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_GrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnGrabKeyboardEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnGrabKeyboardEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseGrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseGrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn UngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_UngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnUngrabKeyboardEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnUngrabKeyboardEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseUngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseUngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsWidget_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsWidget_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QGraphicsWidget, sequence: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, sequence: ?*anyopaque, context: i32) i32 {
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self), @ptrCast(sequence), @intCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QGraphicsWidget, id: i32, enabled: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QGraphicsWidget, id: i32, enabled: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: QtC.QGraphicsWidget, attribute: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self), @intCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: QtC.QGraphicsWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ``` self: QtC.QGraphicsWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ParentChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnParentChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn EnabledChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn XChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn YChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ZChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnZChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn RotationChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnRotationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ScaleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnScaleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ChildrenChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnChildrenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn WidthChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn HeightChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: QtC.QGraphicsWidget, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsWidget, name: []const u8 ```
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
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsWidget, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsWidget, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsWidget, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsWidget, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsWidget, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicswidget.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsWidget, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsWidget, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsWidget, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsWidget, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsWidget, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicswidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicswidget.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsWidget, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsWidget, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsWidget, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QGraphicsWidget, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsWidget, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Scene(self: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsItem_Scene(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ParentItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn TopLevelItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ParentObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Window(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_Window(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Panel(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_Panel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, parent: QtC.QGraphicsItem ```
    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn ChildItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicswidget.ChildItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsWidget(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ToGraphicsObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ToGraphicsObject2(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Group(self: ?*anyopaque) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItem_Group(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ``` self: QtC.QGraphicsWidget, group: QtC.QGraphicsItemGroup ```
    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` flag of qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: QtC.QGraphicsWidget, flag: qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self), @intCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ``` self: QtC.QGraphicsWidget, flags: flag of qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` qgraphicsitem_enums.CacheMode ```
    pub fn CacheMode(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: QtC.QGraphicsWidget, mode: qgraphicsitem_enums.CacheMode ```
    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` qgraphicsitem_enums.PanelModality ```
    pub fn PanelModality(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ``` self: QtC.QGraphicsWidget, panelModality: qgraphicsitem_enums.PanelModality ```
    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self), @intCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsBlockedByModalPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicswidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ``` self: QtC.QGraphicsWidget, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QGraphicsItem_Cursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ``` self: QtC.QGraphicsWidget, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn HasCursor(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ``` self: QtC.QGraphicsWidget, parent: QtC.QGraphicsItem ```
    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Show(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ``` self: QtC.QGraphicsWidget, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ``` self: QtC.QGraphicsWidget, selected: bool ```
    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QGraphicsWidget, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn EffectiveOpacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ``` self: QtC.QGraphicsWidget, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QGraphicsWidget, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.MouseButton ```
    pub fn AcceptedMouseButtons(self: ?*anyopaque) i64 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ``` self: QtC.QGraphicsWidget, buttons: flag of qnamespace_enums.MouseButton ```
    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @intCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn AcceptHoverEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget, enabled: bool ```
    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn AcceptTouchEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget, enabled: bool ```
    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn FiltersChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget, enabled: bool ```
    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn HandlesChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ``` self: QtC.QGraphicsWidget, enabled: bool ```
    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ``` self: QtC.QGraphicsWidget, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem ```
    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn FocusItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn FocusScopeItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn UngrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn UngrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_Pos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64 ```
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self), @floatCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ``` self: QtC.QGraphicsWidget, y: f64 ```
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsWidget, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64 ```
    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ``` self: QtC.QGraphicsWidget, dx: f64, dy: f64 ```
    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn EnsureVisible(self: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_Transform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn SceneTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ``` self: QtC.QGraphicsWidget, viewportTransform: QtC.QTransform ```
    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: QtC.QGraphicsWidget, other: QtC.QGraphicsItem ```
    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: QtC.QGraphicsWidget, matrix: QtC.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ``` self: QtC.QGraphicsWidget, angle: f64 ```
    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ``` self: QtC.QGraphicsWidget, scale: f64 ```
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self), @floatCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn Transformations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsTransform, _arr.len) catch @panic("qgraphicswidget.Transformations: Memory allocation failed");
        const _data: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ``` self: QtC.QGraphicsWidget, transformations: []QtC.QGraphicsTransform ```
    pub fn SetTransformations(self: ?*anyopaque, transformations: []?*anyopaque) void {
        const transformations_list = qtc.libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn TransformOriginPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: QtC.QGraphicsWidget, origin: QtC.QPointF ```
    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: QtC.QGraphicsWidget, ax: f64, ay: f64 ```
    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), @floatCast(ax), @floatCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ZValue(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ``` self: QtC.QGraphicsWidget, z: f64 ```
    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self), @floatCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ``` self: QtC.QGraphicsWidget, sibling: QtC.QGraphicsItem ```
    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        qtc.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ChildrenBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn SceneBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsClipped(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: QtC.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn CollidingItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicswidget.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsObscured(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ``` self: QtC.QGraphicsWidget, itemToDeviceTransform: QtC.QTransform ```
    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) QtC.QRegion {
        return qtc.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn BoundingRegionGranularity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ``` self: QtC.QGraphicsWidget, granularity: f64 ```
    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), @floatCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, width: f64, height: f64 ```
    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: QtC.QGraphicsWidget, dx: f64, dy: f64 ```
    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, point: QtC.QPointF ```
    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, point: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, point: QtC.QPointF ```
    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, rect: QtC.QRectF ```
    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, path: QtC.QPainterPath ```
    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, path: QtC.QPainterPath ```
    pub fn MapToParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, path: QtC.QPainterPath ```
    pub fn MapToScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, point: QtC.QPointF ```
    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, point: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, point: QtC.QPointF ```
    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, rect: QtC.QRectF ```
    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, path: QtC.QPainterPath ```
    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, path: QtC.QPainterPath ```
    pub fn MapFromParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, path: QtC.QPainterPath ```
    pub fn MapFromScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapToParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapToScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapFromParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapFromScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ``` self: QtC.QGraphicsWidget, child: QtC.QGraphicsItem ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, other: QtC.QGraphicsItem ```
    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsUnderMouse(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ``` self: QtC.QGraphicsWidget, key: i32 ```
    pub fn Data(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QGraphicsItem_Data(@ptrCast(self), @intCast(key));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ``` self: QtC.QGraphicsWidget, key: i32, value: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        qtc.QGraphicsItem_SetData(@ptrCast(self), @intCast(key), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QGraphicsWidget, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ``` self: QtC.QGraphicsWidget, filterItem: QtC.QGraphicsItem ```
    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ``` self: QtC.QGraphicsWidget, filterItem: QtC.QGraphicsItem ```
    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: QtC.QGraphicsWidget, flag: qgraphicsitem_enums.GraphicsItemFlag, enabled: bool ```
    pub fn SetFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: QtC.QGraphicsWidget, mode: qgraphicsitem_enums.CacheMode, cacheSize: QtC.QSize ```
    pub fn SetCacheMode2(self: ?*anyopaque, mode: i32, cacheSize: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self), @intCast(mode), @ptrCast(cacheSize));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: QtC.QGraphicsWidget, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF, xmargin: i32 ```
    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64, xmargin: i32 ```
    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: QtC.QGraphicsWidget, other: QtC.QGraphicsItem, ok: *bool ```
    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: *bool) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: QtC.QGraphicsWidget, matrix: QtC.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: QtC.QGraphicsWidget, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn CollidingItems1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self), @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicswidget.CollidingItems1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QGraphicsWidget, rect: QtC.QRectF ```
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: QtC.QGraphicsWidget, dx: f64, dy: f64, rect: QtC.QRectF ```
    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Scroll3(@ptrCast(self), @floatCast(dx), @floatCast(dy), @ptrCast(rect));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsWidget, policy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsWidget, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsWidget, size: QtC.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: QtC.QGraphicsWidget, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QGraphicsWidget, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QGraphicsWidget, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsWidget, size: QtC.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: QtC.QGraphicsWidget, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn PreferredSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: QtC.QGraphicsWidget, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: QtC.QGraphicsWidget, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsWidget, size: QtC.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: QtC.QGraphicsWidget, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QGraphicsWidget, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QGraphicsWidget, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsWidget, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i32) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn ParentLayoutItem(self: ?*anyopaque) QtC.QGraphicsLayoutItem {
        return qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: QtC.QGraphicsWidget, parent: QtC.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn GraphicsItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: QtC.QGraphicsWidget, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: QtC.QGraphicsWidget, which: qnamespace_enums.SizeHint, constraint: QtC.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i32, constraint: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsWidget_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsWidget_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, phase: i32 ```
    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsWidget_Advance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, phase: i32 ```
    pub fn QBaseAdvance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsWidget_QBaseAdvance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, phase: i32) callconv(.c) void ```
    pub fn OnAdvance(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnAdvance(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, point: QtC.QPointF ```
    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, point: QtC.QPointF ```
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, point: QtC.QPointF) callconv(.c) bool ```
    pub fn OnContains(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnContains(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsWidget_CollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsWidget_QBaseCollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnCollidesWithItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsWidget_CollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsWidget_QBaseCollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithPath(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnCollidesWithPath(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem ```
    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem ```
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem) callconv(.c) bool ```
    pub fn OnIsObscuredBy(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnIsObscuredBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn OpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsWidget_OpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseOpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsWidget_QBaseOpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) QtC.QPainterPath ```
    pub fn OnOpaqueArea(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsWidget_OnOpaqueArea(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, watched: QtC.QGraphicsItem, event: QtC.QEvent ```
    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, watched: QtC.QGraphicsItem, event: QtC.QEvent ```
    pub fn QBaseSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, watched: QtC.QGraphicsItem, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnSceneEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnSceneEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnHoverEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QGraphicsSceneWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsWidget_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsWidget_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, extension: qgraphicsitem_enums.Extension ```
    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsWidget_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, extension: qgraphicsitem_enums.Extension ```
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsWidget_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, extension: qgraphicsitem_enums.Extension) callconv(.c) bool ```
    pub fn OnSupportsExtension(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnSupportsExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant ```
    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant ```
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetExtension(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnSetExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, variant: QtC.QVariant ```
    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsWidget_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, variant: QtC.QVariant ```
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsWidget_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, variant: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnExtension(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsWidget_OnExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsWidget_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsWidget_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsWidget_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsWidget_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsWidget_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsWidget_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsWidget_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsWidget_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsWidget_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsWidget_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsWidget_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn AddToIndex(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_AddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseAddToIndex(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseAddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnAddToIndex(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsWidget_OnAddToIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn RemoveFromIndex(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_RemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBaseRemoveFromIndex(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseRemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnRemoveFromIndex(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsWidget_OnRemoveFromIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn PrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_PrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QBasePrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBasePrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsWidget_OnPrepareGeometryChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsWidget_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsWidget_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, item: QtC.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnSetGraphicsItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsWidget_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        qtc.QGraphicsWidget_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, ownedByLayout: bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsWidget_OnSetOwnedByLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsWidget, slot: fn (self: QtC.QGraphicsWidget, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#dtor.QGraphicsWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicswidget.html#types
pub const enums = struct {
    pub const QGraphicsWidget = enum {
        pub const Type: i32 = 11;
    };
};
