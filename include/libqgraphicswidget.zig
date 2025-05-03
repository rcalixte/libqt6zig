const C = @import("qt6c");
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
    pub fn New() ?*C.QGraphicsWidget {
        return C.QGraphicsWidget_new();
    }

    /// New2 constructs a new QGraphicsWidget object.
    ///
    /// ``` parent: ?*C.QGraphicsItem ```
    pub fn New2(parent: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsWidget_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QGraphicsWidget object.
    ///
    /// ``` parent: ?*C.QGraphicsItem, wFlags: i32 ```
    pub fn New3(parent: ?*anyopaque, wFlags: i64) ?*C.QGraphicsWidget {
        return C.QGraphicsWidget_new3(@ptrCast(parent), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QGraphicsWidget_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QGraphicsWidget, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QGraphicsWidget_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QGraphicsWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGraphicsWidget_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QGraphicsWidget_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGraphicsWidget_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QGraphicsWidget_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Layout(self: ?*anyopaque) ?*C.QGraphicsLayout {
        return C.QGraphicsWidget_Layout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ``` self: ?*C.QGraphicsWidget, layout: ?*C.QGraphicsLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QGraphicsWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        C.QGraphicsWidget_AdjustSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_LayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ``` self: ?*C.QGraphicsWidget, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        C.QGraphicsWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        C.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Style(self: ?*anyopaque) ?*C.QStyle {
        return C.QGraphicsWidget_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ``` self: ?*C.QGraphicsWidget, style: ?*C.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QGraphicsWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QGraphicsWidget_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ``` self: ?*C.QGraphicsWidget, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QGraphicsWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Palette(self: ?*anyopaque) ?*C.QPalette {
        return C.QGraphicsWidget_Palette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ``` self: ?*C.QGraphicsWidget, palette: ?*C.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QGraphicsWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_AutoFillBackground(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ``` self: ?*C.QGraphicsWidget, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, size: ?*C.QSizeF ```
    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsWidget_Resize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, w: f64, h: f64 ```
    pub fn Resize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsWidget_Resize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Size(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsWidget_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsWidget_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn SetGeometry2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        C.QGraphicsWidget_SetGeometry2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Rect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QGraphicsWidget, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        C.QGraphicsWidget_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QGraphicsWidget, margins: ?*C.QMarginsF ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*C.QMarginsF) void {
        C.QGraphicsWidget_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// ``` self: ?*C.QGraphicsWidget, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QGraphicsWidget_GetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*f64, ?*f64, ?*f64, ?*f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnGetContentsMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseGetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: ?*C.QGraphicsWidget, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetWindowFrameMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        C.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ``` self: ?*C.QGraphicsWidget, margins: ?*C.QMarginsF ```
    pub fn SetWindowFrameMarginsWithMargins(self: ?*anyopaque, margins: ?*C.QMarginsF) void {
        C.QGraphicsWidget_SetWindowFrameMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ``` self: ?*C.QGraphicsWidget, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn GetWindowFrameMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn UnsetWindowFrameMargins(self: ?*anyopaque) void {
        C.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn WindowFrameGeometry(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn WindowFrameRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_WindowFrameRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_WindowFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_WindowType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ``` self: ?*C.QGraphicsWidget, wFlags: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, wFlags: i64) void {
        C.QGraphicsWidget_SetWindowFlags(@ptrCast(self), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_IsActiveWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ``` self: ?*C.QGraphicsWidget, title: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QGraphicsWidget_SetWindowTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGraphicsWidget_WindowTitle(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return C.QGraphicsWidget_FocusPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ``` self: ?*C.QGraphicsWidget, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        C.QGraphicsWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ``` first: ?*C.QGraphicsWidget, second: ?*C.QGraphicsWidget ```
    pub fn SetTabOrder(first: ?*anyopaque, second: ?*anyopaque) void {
        C.QGraphicsWidget_SetTabOrder(@ptrCast(first), @ptrCast(second));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn FocusWidget(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsWidget_FocusWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QGraphicsWidget, sequence: ?*C.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, sequence: ?*anyopaque) i32 {
        return C.QGraphicsWidget_GrabShortcut(@ptrCast(self), @ptrCast(sequence));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ``` self: ?*C.QGraphicsWidget, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        C.QGraphicsWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QGraphicsWidget, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        C.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QGraphicsWidget, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        C.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ``` self: ?*C.QGraphicsWidget, action: ?*C.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QGraphicsWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ``` self: ?*C.QGraphicsWidget, actions: []?*C.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QGraphicsWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ``` self: ?*C.QGraphicsWidget, before: ?*C.QAction, actions: []?*C.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QGraphicsWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ``` self: ?*C.QGraphicsWidget, before: ?*C.QAction, action: ?*C.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        C.QGraphicsWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ``` self: ?*C.QGraphicsWidget, action: ?*C.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QGraphicsWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAction {
        const _arr: C.struct_libqt_list = C.QGraphicsWidget_Actions(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAction, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QGraphicsWidget, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, attribute: i64) void {
        C.QGraphicsWidget_SetAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ``` self: ?*C.QGraphicsWidget, attribute: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, attribute: i64) bool {
        return C.QGraphicsWidget_TestAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Type(self: ?*anyopaque) i32 {
        return C.QGraphicsWidget_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGraphicsWidget_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return C.QGraphicsWidget_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
    ///
    /// ``` self: ?*C.QGraphicsWidget, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QGraphicsWidget_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QPainter, ?*C.QStyleOptionGraphicsItem, ?*C.QWidget) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnPaint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QGraphicsWidget_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// ``` self: ?*C.QGraphicsWidget, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn PaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QGraphicsWidget_PaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QPainter, ?*C.QStyleOptionGraphicsItem, ?*C.QWidget) callconv(.c) void ```
    pub fn OnPaintWindowFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnPaintWindowFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, painter: ?*C.QPainter, option: ?*C.QStyleOptionGraphicsItem, widget: ?*C.QWidget ```
    pub fn QBasePaintWindowFrame(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        C.QGraphicsWidget_QBasePaintWindowFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn BoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_BoundingRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) ?*C.QRectF ```
    pub fn OnBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRectF) void {
        C.QGraphicsWidget_OnBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsWidget_QBaseBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Shape(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsWidget_Shape(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) ?*C.QPainterPath ```
    pub fn OnShape(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainterPath) void {
        C.QGraphicsWidget_OnShape(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseShape(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsWidget_QBaseShape(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn GeometryChanged(self: ?*anyopaque) void {
        C.QGraphicsWidget_GeometryChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget) callconv(.c) void ```
    pub fn OnGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        C.QGraphicsWidget_LayoutChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// ``` self: ?*C.QGraphicsWidget, option: ?*C.QStyleOption ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QGraphicsWidget_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QStyleOption) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, option: ?*C.QStyleOption ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
    ///
    /// ``` self: ?*C.QGraphicsWidget, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsWidget_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, qnamespace_enums.SizeHint, ?*C.QSizeF) callconv(.c) ?*C.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) ?*C.QSizeF) void {
        C.QGraphicsWidget_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsWidget_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        C.QGraphicsWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsWidget_OnUpdateGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
    ///
    /// ``` self: ?*C.QGraphicsWidget, change: qgraphicsitem_enums.GraphicsItemChange, value: ?*C.QVariant ```
    pub fn ItemChange(self: ?*anyopaque, change: i64, value: ?*anyopaque) ?*C.QVariant {
        return C.QGraphicsWidget_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, qgraphicsitem_enums.GraphicsItemChange, ?*C.QVariant) callconv(.c) ?*C.QVariant ```
    pub fn OnItemChange(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) ?*C.QVariant) void {
        C.QGraphicsWidget_OnItemChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, change: qgraphicsitem_enums.GraphicsItemChange, value: ?*C.QVariant ```
    pub fn QBaseItemChange(self: ?*anyopaque, change: i64, value: ?*anyopaque) ?*C.QVariant {
        return C.QGraphicsWidget_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// ``` self: ?*C.QGraphicsWidget, propertyName: []const u8, value: ?*C.QVariant ```
    pub fn PropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) ?*C.QVariant {
        const propertyName_str = C.struct_libqt_string{
            .len = propertyName.len,
            .data = @constCast(propertyName.ptr),
        };
        return C.QGraphicsWidget_PropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, []const u8, ?*C.QVariant) callconv(.c) ?*C.QVariant ```
    pub fn OnPropertyChange(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, ?*anyopaque) callconv(.c) ?*C.QVariant) void {
        C.QGraphicsWidget_OnPropertyChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, propertyName: []const u8, value: ?*C.QVariant ```
    pub fn QBasePropertyChange(self: ?*anyopaque, propertyName: []const u8, value: ?*anyopaque) ?*C.QVariant {
        const propertyName_str = C.struct_libqt_string{
            .len = propertyName.len,
            .data = @constCast(propertyName.ptr),
        };
        return C.QGraphicsWidget_QBasePropertyChange(@ptrCast(self), propertyName_str, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnSceneEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnSceneEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, e: ?*C.QEvent ```
    pub fn WindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QGraphicsWidget_WindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnWindowFrameEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnWindowFrameEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, e: ?*C.QEvent ```
    pub fn QBaseWindowFrameEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseWindowFrameEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// ``` self: ?*C.QGraphicsWidget, pos: ?*C.QPointF ```
    pub fn WindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i64 {
        return C.QGraphicsWidget_WindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QPointF) callconv(.c) i64 ```
    pub fn OnWindowFrameSectionAt(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QGraphicsWidget_OnWindowFrameSectionAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, pos: ?*C.QPointF ```
    pub fn QBaseWindowFrameSectionAt(self: ?*anyopaque, pos: ?*anyopaque) i64 {
        return C.QGraphicsWidget_QBaseWindowFrameSectionAt(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_ChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseChangeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
    ///
    /// ``` self: ?*C.QGraphicsWidget, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QGraphicsWidget_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        C.QGraphicsWidget_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QGraphicsWidget_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn PolishEvent(self: ?*anyopaque) void {
        C.QGraphicsWidget_PolishEvent(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnPolishEvent(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsWidget_OnPolishEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBasePolishEvent(self: ?*anyopaque) void {
        C.QGraphicsWidget_QBasePolishEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnHoverMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnHoverLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn GrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_GrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnGrabMouseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnGrabMouseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseGrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseGrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn UngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_UngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnUngrabMouseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnUngrabMouseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseUngrabMouseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseUngrabMouseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn GrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_GrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnGrabKeyboardEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnGrabKeyboardEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseGrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseGrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn UngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_UngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnUngrabKeyboardEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnUngrabKeyboardEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseUngrabKeyboardEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseUngrabKeyboardEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGraphicsWidget_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGraphicsWidget_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QGraphicsWidget, sequence: ?*C.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, sequence: ?*anyopaque, context: i64) i32 {
        return C.QGraphicsWidget_GrabShortcut2(@ptrCast(self), @ptrCast(sequence), @intCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QGraphicsWidget, id: i32, enabled: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enabled: bool) void {
        C.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QGraphicsWidget, id: i32, enabled: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enabled: bool) void {
        C.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QGraphicsWidget, attribute: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, attribute: i64, on: bool) void {
        C.QGraphicsWidget_SetAttribute2(@ptrCast(self), @intCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: ?*C.QGraphicsWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QGraphicsObject_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ``` self: ?*C.QGraphicsWidget, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QGraphicsObject_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ParentChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnParentChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn EnabledChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn XChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_XChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_XChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn YChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_YChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_YChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ZChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnZChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn RotationChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnRotationChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ScaleChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnScaleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ChildrenChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnChildrenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn WidthChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn HeightChanged(self: ?*anyopaque) void {
        C.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ``` self: ?*C.QGraphicsObject, slot: fn (?*C.QGraphicsObject) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: ?*C.QGraphicsWidget, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        C.QGraphicsObject_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QGraphicsWidget, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QGraphicsWidget, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QGraphicsWidget, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsWidget, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QGraphicsWidget, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsWidget, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsWidget, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGraphicsWidget, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QGraphicsWidget, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QGraphicsWidget, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QGraphicsWidget, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsWidget, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGraphicsWidget, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsWidget, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Scene(self: ?*anyopaque) ?*C.QGraphicsScene {
        return C.QGraphicsItem_Scene(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ParentItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn TopLevelItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ParentObject(self: ?*anyopaque) ?*C.QGraphicsObject {
        return C.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn TopLevelWidget(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Window(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsItem_Window(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Panel(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_Panel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, parent: ?*C.QGraphicsItem ```
    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn ChildItems(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_ChildItems(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsWidget(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsPanel(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ToGraphicsObject(self: ?*anyopaque) ?*C.QGraphicsObject {
        return C.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ToGraphicsObject2(self: ?*anyopaque) ?*C.QGraphicsObject {
        return C.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Group(self: ?*anyopaque) ?*C.QGraphicsItemGroup {
        return C.QGraphicsItem_Group(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ``` self: ?*C.QGraphicsWidget, group: ?*C.QGraphicsItemGroup ```
    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        C.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_Flags(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: ?*C.QGraphicsWidget, flag: qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlag(self: ?*anyopaque, flag: i64) void {
        C.QGraphicsItem_SetFlag(@ptrCast(self), @intCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ``` self: ?*C.QGraphicsWidget, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        C.QGraphicsItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn CacheMode(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: ?*C.QGraphicsWidget, mode: qgraphicsitem_enums.CacheMode ```
    pub fn SetCacheMode(self: ?*anyopaque, mode: i64) void {
        C.QGraphicsItem_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn PanelModality(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ``` self: ?*C.QGraphicsWidget, panelModality: qgraphicsitem_enums.PanelModality ```
    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i64) void {
        C.QGraphicsItem_SetPanelModality(@ptrCast(self), @intCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsBlockedByModalPanel(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGraphicsItem_ToolTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ``` self: ?*C.QGraphicsWidget, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QGraphicsItem_Cursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ``` self: ?*C.QGraphicsWidget, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn HasCursor(self: ?*anyopaque) bool {
        return C.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ``` self: ?*C.QGraphicsWidget, parent: ?*C.QGraphicsItem ```
    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QGraphicsItem_Hide(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Show(self: ?*anyopaque) void {
        C.QGraphicsItem_Show(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ``` self: ?*C.QGraphicsWidget, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ``` self: ?*C.QGraphicsWidget, selected: bool ```
    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        C.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return C.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ``` self: ?*C.QGraphicsWidget, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        C.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Opacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn EffectiveOpacity(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ``` self: ?*C.QGraphicsWidget, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        C.QGraphicsItem_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn GraphicsEffect(self: ?*anyopaque) ?*C.QGraphicsEffect {
        return C.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ``` self: ?*C.QGraphicsWidget, effect: ?*C.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        C.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn AcceptedMouseButtons(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ``` self: ?*C.QGraphicsWidget, buttons: i32 ```
    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i64) void {
        C.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @intCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn AcceptHoverEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget, enabled: bool ```
    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn AcceptTouchEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget, enabled: bool ```
    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn FiltersChildEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget, enabled: bool ```
    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn HandlesChildEvents(self: ?*anyopaque) bool {
        return C.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ``` self: ?*C.QGraphicsWidget, enabled: bool ```
    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsActive(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ``` self: ?*C.QGraphicsWidget, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        C.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return C.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn SetFocus(self: ?*anyopaque) void {
        C.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        C.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn FocusProxy(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem ```
    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn FocusItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn FocusScopeItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        C.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn UngrabMouse(self: ?*anyopaque) void {
        C.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        C.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn UngrabKeyboard(self: ?*anyopaque) void {
        C.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Pos(self: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_Pos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn X(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_X(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64 ```
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        C.QGraphicsItem_SetX(@ptrCast(self), @floatCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Y(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Y(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ``` self: ?*C.QGraphicsWidget, y: f64 ```
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        C.QGraphicsItem_SetY(@ptrCast(self), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ScenePos(self: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: ?*C.QGraphicsWidget, pos: ?*C.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        C.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64 ```
    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        C.QGraphicsItem_SetPos2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ``` self: ?*C.QGraphicsWidget, dx: f64, dy: f64 ```
    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        C.QGraphicsItem_MoveBy(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn EnsureVisible(self: ?*anyopaque) void {
        C.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        C.QGraphicsItem_EnsureVisible2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Transform(self: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_Transform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn SceneTransform(self: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ``` self: ?*C.QGraphicsWidget, viewportTransform: ?*C.QTransform ```
    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: ?*C.QGraphicsWidget, other: ?*C.QGraphicsItem ```
    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: ?*C.QGraphicsWidget, matrix: ?*C.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        C.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        C.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ``` self: ?*C.QGraphicsWidget, angle: f64 ```
    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        C.QGraphicsItem_SetRotation(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Rotation(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Rotation(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ``` self: ?*C.QGraphicsWidget, scale: f64 ```
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        C.QGraphicsItem_SetScale(@ptrCast(self), @floatCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Scale(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_Scale(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn Transformations(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsTransform {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_Transformations(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsTransform, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ``` self: ?*C.QGraphicsWidget, transformations: []?*C.QGraphicsTransform ```
    pub fn SetTransformations(self: ?*anyopaque, transformations: []?*anyopaque) void {
        const transformations_list = C.struct_libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        C.QGraphicsItem_SetTransformations(@ptrCast(self), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn TransformOriginPoint(self: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: ?*C.QGraphicsWidget, origin: ?*C.QPointF ```
    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        C.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: ?*C.QGraphicsWidget, ax: f64, ay: f64 ```
    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        C.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), @floatCast(ax), @floatCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ZValue(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_ZValue(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ``` self: ?*C.QGraphicsWidget, z: f64 ```
    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        C.QGraphicsItem_SetZValue(@ptrCast(self), @floatCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ``` self: ?*C.QGraphicsWidget, sibling: ?*C.QGraphicsItem ```
    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        C.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ChildrenBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn SceneBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsClipped(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ClipPath(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: ?*C.QGraphicsWidget, allocator: std.mem.Allocator ```
    pub fn CollidingItems(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_CollidingItems(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsObscured(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return C.QGraphicsItem_IsObscured2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ``` self: ?*C.QGraphicsWidget, itemToDeviceTransform: ?*C.QTransform ```
    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) ?*C.QRegion {
        return C.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn BoundingRegionGranularity(self: ?*anyopaque) f64 {
        return C.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ``` self: ?*C.QGraphicsWidget, granularity: f64 ```
    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        C.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), @floatCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Update(self: ?*anyopaque) void {
        C.QGraphicsItem_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, width: f64, height: f64 ```
    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        C.QGraphicsItem_Update2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: ?*C.QGraphicsWidget, dx: f64, dy: f64 ```
    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        C.QGraphicsItem_Scroll(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, point: ?*C.QPointF ```
    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, point: ?*C.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, point: ?*C.QPointF ```
    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, rect: ?*C.QRectF ```
    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, path: ?*C.QPainterPath ```
    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, path: ?*C.QPainterPath ```
    pub fn MapToParentWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapToParentWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, path: ?*C.QPainterPath ```
    pub fn MapToSceneWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapToSceneWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, point: ?*C.QPointF ```
    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, point: ?*C.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, point: ?*C.QPointF ```
    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) ?*C.QPointF {
        return C.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, rect: ?*C.QRectF ```
    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, path: ?*C.QPainterPath ```
    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, path: ?*C.QPainterPath ```
    pub fn MapFromParentWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapFromParentWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, path: ?*C.QPainterPath ```
    pub fn MapFromSceneWithPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsItem_MapFromSceneWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapToParent2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapToParent2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapToScene2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapToScene2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectToScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapFromParent2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapFromParent2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64 ```
    pub fn MapFromScene2(self: ?*anyopaque, x: f64, y: f64) ?*C.QPointF {
        return C.QGraphicsItem_MapFromScene2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QRectF {
        return C.QGraphicsItem_MapRectFromScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QGraphicsWidget, child: ?*C.QGraphicsItem ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, other: ?*C.QGraphicsItem ```
    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsUnderMouse(self: ?*anyopaque) bool {
        return C.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ``` self: ?*C.QGraphicsWidget, key: i32 ```
    pub fn Data(self: ?*anyopaque, key: i32) ?*C.QVariant {
        return C.QGraphicsItem_Data(@ptrCast(self), @intCast(key));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ``` self: ?*C.QGraphicsWidget, key: i32, value: ?*C.QVariant ```
    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        C.QGraphicsItem_SetData(@ptrCast(self), @intCast(key), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return C.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ``` self: ?*C.QGraphicsWidget, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        C.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsWidget, filterItem: ?*C.QGraphicsItem ```
    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        C.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsWidget, filterItem: ?*C.QGraphicsItem ```
    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        C.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: ?*C.QGraphicsWidget, flag: qgraphicsitem_enums.GraphicsItemFlag, enabled: bool ```
    pub fn SetFlag2(self: ?*anyopaque, flag: i64, enabled: bool) void {
        C.QGraphicsItem_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: ?*C.QGraphicsWidget, mode: qgraphicsitem_enums.CacheMode, cacheSize: ?*C.QSize ```
    pub fn SetCacheMode2(self: ?*anyopaque, mode: i64, cacheSize: ?*anyopaque) void {
        C.QGraphicsItem_SetCacheMode2(@ptrCast(self), @intCast(mode), @ptrCast(cacheSize));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: ?*C.QGraphicsWidget, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i64) void {
        C.QGraphicsItem_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF, xmargin: i32 ```
    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        C.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        C.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64, xmargin: i32 ```
    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        C.QGraphicsItem_EnsureVisible5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: ?*C.QGraphicsWidget, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        C.QGraphicsItem_EnsureVisible6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: ?*C.QGraphicsWidget, other: ?*C.QGraphicsItem, ok: ?*bool ```
    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: ?*anyopaque) ?*C.QTransform {
        return C.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: ?*C.QGraphicsWidget, matrix: ?*C.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        C.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: ?*C.QGraphicsWidget, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn CollidingItems1(self: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsItem_CollidingItems1(@ptrCast(self), @intCast(mode));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return C.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: ?*C.QGraphicsWidget, rect: ?*C.QRectF ```
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: ?*C.QGraphicsWidget, dx: f64, dy: f64, rect: ?*C.QRectF ```
    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        C.QGraphicsItem_Scroll3(@ptrCast(self), @floatCast(dx), @floatCast(dy), @ptrCast(rect));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsWidget, policy: ?*C.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsWidget, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i64, vPolicy: i64) void {
        C.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn SizePolicy(self: ?*anyopaque) ?*C.QSizePolicy {
        return C.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, size: ?*C.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QGraphicsWidget, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QGraphicsWidget, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, size: ?*C.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn PreferredSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: ?*C.QGraphicsWidget, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: ?*C.QGraphicsWidget, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, size: ?*C.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QGraphicsWidget, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QGraphicsWidget, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: ?*C.QGraphicsWidget, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i64) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn ParentLayoutItem(self: ?*anyopaque) ?*C.QGraphicsLayoutItem {
        return C.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget, parent: ?*C.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return C.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn GraphicsItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return C.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsWidget, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i64, vPolicy: i64, controlType: i64) void {
        C.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: ?*C.QGraphicsWidget, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsWidget_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsWidget_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, phase: i32 ```
    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        C.QGraphicsWidget_Advance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, phase: i32 ```
    pub fn QBaseAdvance(self: ?*anyopaque, phase: i32) void {
        C.QGraphicsWidget_QBaseAdvance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, i32) callconv(.c) void ```
    pub fn OnAdvance(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QGraphicsWidget_OnAdvance(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, point: ?*C.QPointF ```
    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return C.QGraphicsWidget_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, point: ?*C.QPointF ```
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QPointF) callconv(.c) bool ```
    pub fn OnContains(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnContains(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, other: ?*C.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i64) bool {
        return C.QGraphicsWidget_CollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, other: ?*C.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i64) bool {
        return C.QGraphicsWidget_QBaseCollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsItem, qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) bool) void {
        C.QGraphicsWidget_OnCollidesWithItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, path: ?*C.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i64) bool {
        return C.QGraphicsWidget_CollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, path: ?*C.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i64) bool {
        return C.QGraphicsWidget_QBaseCollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QPainterPath, qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithPath(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) bool) void {
        C.QGraphicsWidget_OnCollidesWithPath(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem ```
    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return C.QGraphicsWidget_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem ```
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsItem) callconv(.c) bool ```
    pub fn OnIsObscuredBy(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnIsObscuredBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn OpaqueArea(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsWidget_OpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseOpaqueArea(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsWidget_QBaseOpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) ?*C.QPainterPath ```
    pub fn OnOpaqueArea(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainterPath) void {
        C.QGraphicsWidget_OnOpaqueArea(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, watched: ?*C.QGraphicsItem, event: ?*C.QEvent ```
    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, watched: ?*C.QGraphicsItem, event: ?*C.QEvent ```
    pub fn QBaseSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsItem, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnSceneEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnSceneEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnHoverEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QGraphicsSceneWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsSceneWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, event: ?*C.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QGraphicsWidget_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QGraphicsWidget_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, qnamespace_enums.InputMethodQuery) callconv(.c) ?*C.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QGraphicsWidget_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, extension: qgraphicsitem_enums.Extension ```
    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return C.QGraphicsWidget_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, extension: qgraphicsitem_enums.Extension ```
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return C.QGraphicsWidget_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, qgraphicsitem_enums.Extension) callconv(.c) bool ```
    pub fn OnSupportsExtension(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QGraphicsWidget_OnSupportsExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, extension: qgraphicsitem_enums.Extension, variant: ?*C.QVariant ```
    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        C.QGraphicsWidget_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, extension: qgraphicsitem_enums.Extension, variant: ?*C.QVariant ```
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, qgraphicsitem_enums.Extension, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetExtension(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnSetExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, variant: ?*C.QVariant ```
    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) ?*C.QVariant {
        return C.QGraphicsWidget_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, variant: ?*C.QVariant ```
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) ?*C.QVariant {
        return C.QGraphicsWidget_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QVariant) callconv(.c) ?*C.QVariant ```
    pub fn OnExtension(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QVariant) void {
        C.QGraphicsWidget_OnExtension(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QGraphicsWidget_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        C.QGraphicsWidget_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsWidget_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QGraphicsWidget_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QGraphicsWidget_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QGraphicsWidget_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGraphicsWidget_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGraphicsWidget_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGraphicsWidget_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGraphicsWidget_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGraphicsWidget_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QGraphicsWidget_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGraphicsWidget_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGraphicsWidget_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsWidget_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn AddToIndex(self: ?*anyopaque) void {
        C.QGraphicsWidget_AddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseAddToIndex(self: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseAddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnAddToIndex(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsWidget_OnAddToIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn RemoveFromIndex(self: ?*anyopaque) void {
        C.QGraphicsWidget_RemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBaseRemoveFromIndex(self: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseRemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnRemoveFromIndex(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsWidget_OnRemoveFromIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn PrepareGeometryChange(self: ?*anyopaque) void {
        C.QGraphicsWidget_PrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QBasePrepareGeometryChange(self: ?*anyopaque) void {
        C.QGraphicsWidget_QBasePrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn () callconv(.c) void ```
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsWidget_OnPrepareGeometryChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsWidget_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, item: ?*C.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsWidget_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, ?*C.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsWidget_OnSetGraphicsItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        C.QGraphicsWidget_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        C.QGraphicsWidget_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsWidget, slot: fn (?*C.QGraphicsWidget, bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QGraphicsWidget_OnSetOwnedByLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGraphicsWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGraphicsWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicswidget.html#types
pub const enums = struct {
    pub const QGraphicsWidget = enum {
        pub const Type: i32 = 11;
    };
};
