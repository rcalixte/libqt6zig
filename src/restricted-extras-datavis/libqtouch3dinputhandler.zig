const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Q3DScene = @import("libqt6").Q3DScene;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTouchEvent = @import("libqt6").QTouchEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const qabstract3dinputhandler_enums = @import("libqabstract3dinputhandler.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtouch3dinputhandler-qtdatavis.html)
pub const QTouch3DInputHandler = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouch3dinputhandler-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTouch3DInputHandler,

    pub const _is_QTouch3DInputHandler = {};
    pub const _is_Q3DInputHandler = {};
    pub const _is_QAbstract3DInputHandler = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTouch3DInputHandler object in C++ memory
    ///
    pub fn new() QTouch3DInputHandler {
        return .{ .ptr = qtc.QTouch3DInputHandler_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTouch3DInputHandler object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QTouch3DInputHandler {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTouch3DInputHandler_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn metaObject(self: QTouch3DInputHandler) QMetaObject {
        return .{ .ptr = qtc.QTouch3DInputHandler_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler) callconv(.c) QMetaObject) void {
        qtc.QTouch3DInputHandler_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn superMetaObject(self: QTouch3DInputHandler) QMetaObject {
        return .{ .ptr = qtc.QTouch3DInputHandler_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTouch3DInputHandler, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTouch3DInputHandler_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTouch3DInputHandler_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTouch3DInputHandler, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTouch3DInputHandler_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QTouch3DInputHandler, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTouch3DInputHandler_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTouch3DInputHandler_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QTouch3DInputHandler, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTouch3DInputHandler_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QTouch3DInputHandler_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTouch3DInputHandler.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `touchEvent` instead
    ///
    pub const TouchEvent = touchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouch3dinputhandler-qtdatavis.html#touchEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn touchEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QTouch3DInputHandler_TouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTouchEvent` instead
    ///
    pub const OnTouchEvent = onTouchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouch3dinputhandler-qtdatavis.html#touchEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QTouchEvent) callconv(.c) void `
    ///
    pub fn onTouchEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QTouchEvent) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTouchEvent` instead
    ///
    pub const SuperTouchEvent = superTouchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouch3dinputhandler-qtdatavis.html#touchEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn superTouchEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QTouch3DInputHandler_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QTouch3DInputHandler_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTouch3DInputHandler.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QTouch3DInputHandler_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTouch3DInputHandler.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRotationEnabled` instead
    ///
    pub const SetRotationEnabled = setRotationEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#setRotationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn setRotationEnabled(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_SetRotationEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isRotationEnabled` instead
    ///
    pub const IsRotationEnabled = isRotationEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#isRotationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn isRotationEnabled(self: QTouch3DInputHandler) bool {
        return qtc.Q3DInputHandler_IsRotationEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZoomEnabled` instead
    ///
    pub const SetZoomEnabled = setZoomEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#setZoomEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn setZoomEnabled(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_SetZoomEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isZoomEnabled` instead
    ///
    pub const IsZoomEnabled = isZoomEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#isZoomEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn isZoomEnabled(self: QTouch3DInputHandler) bool {
        return qtc.Q3DInputHandler_IsZoomEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionEnabled` instead
    ///
    pub const SetSelectionEnabled = setSelectionEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#setSelectionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn setSelectionEnabled(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_SetSelectionEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isSelectionEnabled` instead
    ///
    pub const IsSelectionEnabled = isSelectionEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#isSelectionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn isSelectionEnabled(self: QTouch3DInputHandler) bool {
        return qtc.Q3DInputHandler_IsSelectionEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZoomAtTargetEnabled` instead
    ///
    pub const SetZoomAtTargetEnabled = setZoomAtTargetEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#setZoomAtTargetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn setZoomAtTargetEnabled(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_SetZoomAtTargetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isZoomAtTargetEnabled` instead
    ///
    pub const IsZoomAtTargetEnabled = isZoomAtTargetEnabled;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#isZoomAtTargetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn isZoomAtTargetEnabled(self: QTouch3DInputHandler) bool {
        return qtc.Q3DInputHandler_IsZoomAtTargetEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rotationEnabledChanged` instead
    ///
    pub const RotationEnabledChanged = rotationEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#rotationEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn rotationEnabledChanged(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_RotationEnabledChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onRotationEnabledChanged` instead
    ///
    pub const OnRotationEnabledChanged = onRotationEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#rotationEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, enable: bool) callconv(.c) void `
    ///
    pub fn onRotationEnabledChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, bool) callconv(.c) void) void {
        qtc.Q3DInputHandler_Connect_RotationEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zoomEnabledChanged` instead
    ///
    pub const ZoomEnabledChanged = zoomEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#zoomEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn zoomEnabledChanged(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_ZoomEnabledChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onZoomEnabledChanged` instead
    ///
    pub const OnZoomEnabledChanged = onZoomEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#zoomEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, enable: bool) callconv(.c) void `
    ///
    pub fn onZoomEnabledChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, bool) callconv(.c) void) void {
        qtc.Q3DInputHandler_Connect_ZoomEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionEnabledChanged` instead
    ///
    pub const SelectionEnabledChanged = selectionEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#selectionEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn selectionEnabledChanged(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_SelectionEnabledChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onSelectionEnabledChanged` instead
    ///
    pub const OnSelectionEnabledChanged = onSelectionEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#selectionEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, enable: bool) callconv(.c) void `
    ///
    pub fn onSelectionEnabledChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, bool) callconv(.c) void) void {
        qtc.Q3DInputHandler_Connect_SelectionEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zoomAtTargetEnabledChanged` instead
    ///
    pub const ZoomAtTargetEnabledChanged = zoomAtTargetEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#zoomAtTargetEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` enable: bool `
    ///
    pub fn zoomAtTargetEnabledChanged(self: QTouch3DInputHandler, enable: bool) void {
        qtc.Q3DInputHandler_ZoomAtTargetEnabledChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onZoomAtTargetEnabledChanged` instead
    ///
    pub const OnZoomAtTargetEnabledChanged = onZoomAtTargetEnabledChanged;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#zoomAtTargetEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, enable: bool) callconv(.c) void `
    ///
    pub fn onZoomAtTargetEnabledChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, bool) callconv(.c) void) void {
        qtc.Q3DInputHandler_Connect_ZoomAtTargetEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputView` instead
    ///
    pub const InputView = inputView;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dinputhandler_enums.InputView `
    ///
    pub fn inputView(self: QTouch3DInputHandler) i32 {
        return qtc.QAbstract3DInputHandler_InputView(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputView` instead
    ///
    pub const SetInputView = setInputView;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setInputView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _inputView: qabstract3dinputhandler_enums.InputView `
    ///
    pub fn setInputView(self: QTouch3DInputHandler, _inputView: i32) void {
        qtc.QAbstract3DInputHandler_SetInputView(@ptrCast(self.ptr), @bitCast(_inputView));
    }

    /// ### DEPRECATED: Use `inputPosition` instead
    ///
    pub const InputPosition = inputPosition;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn inputPosition(self: QTouch3DInputHandler) QPoint {
        return .{ .ptr = qtc.QAbstract3DInputHandler_InputPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInputPosition` instead
    ///
    pub const SetInputPosition = setInputPosition;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setInputPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` position: QPoint `
    ///
    pub fn setInputPosition(self: QTouch3DInputHandler, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.QAbstract3DInputHandler_SetInputPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn scene(self: QTouch3DInputHandler) Q3DScene {
        return .{ .ptr = qtc.QAbstract3DInputHandler_Scene(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScene` instead
    ///
    pub const SetScene = setScene;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _scene: Q3DScene `
    ///
    pub fn setScene(self: QTouch3DInputHandler, _scene: anytype) void {
        comptime _ = @TypeOf(_scene)._is_Q3DScene;
        qtc.QAbstract3DInputHandler_SetScene(@ptrCast(self.ptr), @ptrCast(_scene.ptr));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` position: QPoint `
    ///
    pub fn positionChanged(self: QTouch3DInputHandler, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.QAbstract3DInputHandler_PositionChanged(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, position: QPoint) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QPoint) callconv(.c) void) void {
        qtc.QAbstract3DInputHandler_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputViewChanged` instead
    ///
    pub const InputViewChanged = inputViewChanged;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputViewChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` view: qabstract3dinputhandler_enums.InputView `
    ///
    pub fn inputViewChanged(self: QTouch3DInputHandler, view: i32) void {
        qtc.QAbstract3DInputHandler_InputViewChanged(@ptrCast(self.ptr), @bitCast(view));
    }

    /// ### DEPRECATED: Use `onInputViewChanged` instead
    ///
    pub const OnInputViewChanged = onInputViewChanged;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#inputViewChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, view: qabstract3dinputhandler_enums.InputView) callconv(.c) void `
    ///
    pub fn onInputViewChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, i32) callconv(.c) void) void {
        qtc.QAbstract3DInputHandler_Connect_InputViewChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneChanged` instead
    ///
    pub const SceneChanged = sceneChanged;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#sceneChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _scene: Q3DScene `
    ///
    pub fn sceneChanged(self: QTouch3DInputHandler, _scene: anytype) void {
        comptime _ = @TypeOf(_scene)._is_Q3DScene;
        qtc.QAbstract3DInputHandler_SceneChanged(@ptrCast(self.ptr), @ptrCast(_scene.ptr));
    }

    /// ### DEPRECATED: Use `onSceneChanged` instead
    ///
    pub const OnSceneChanged = onSceneChanged;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#sceneChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, scene: Q3DScene) callconv(.c) void `
    ///
    pub fn onSceneChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, Q3DScene) callconv(.c) void) void {
        qtc.QAbstract3DInputHandler_Connect_SceneChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTouch3DInputHandler, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTouch3DInputHandler.objectName: Memory allocation failed");
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTouch3DInputHandler, name: []const u8) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn isWidgetType(self: QTouch3DInputHandler) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn isWindowType(self: QTouch3DInputHandler) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn isQuickItemType(self: QTouch3DInputHandler) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn signalsBlocked(self: QTouch3DInputHandler) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTouch3DInputHandler, b: bool) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn thread(self: QTouch3DInputHandler) QThread {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTouch3DInputHandler, _thread: anytype) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTouch3DInputHandler, interval: i32) i32 {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTouch3DInputHandler, time: i64) i32 {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTouch3DInputHandler, id: i32) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTouch3DInputHandler, id: i32) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTouch3DInputHandler, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTouch3DInputHandler.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTouch3DInputHandler, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTouch3DInputHandler, filterObj: anytype) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTouch3DInputHandler, obj: anytype) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTouch3DInputHandler, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn disconnect3(self: QTouch3DInputHandler) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTouch3DInputHandler, receiver: anytype) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn dumpObjectTree(self: QTouch3DInputHandler) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn dumpObjectInfo(self: QTouch3DInputHandler) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTouch3DInputHandler, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTouch3DInputHandler, name: [:0]const u8) QVariant {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTouch3DInputHandler, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTouch3DInputHandler.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTouch3DInputHandler.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn bindingStorage(self: QTouch3DInputHandler) QBindingStorage {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn bindingStorage2(self: QTouch3DInputHandler) QBindingStorage {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn destroyed(self: QTouch3DInputHandler) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler) callconv(.c) void) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn parent(self: QTouch3DInputHandler) QObject {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTouch3DInputHandler, classname: [:0]const u8) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn deleteLater(self: QTouch3DInputHandler) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTouch3DInputHandler, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTouch3DInputHandler, time: i64, timerType: i32) i32 {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTouch3DInputHandler, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTouch3DInputHandler, signal: [:0]const u8) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTouch3DInputHandler, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTouch3DInputHandler, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTouch3DInputHandler, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTouch3DInputHandler, param1: anytype) void {
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn mousePressEvent(self: QTouch3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QTouch3DInputHandler_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn superMousePressEvent(self: QTouch3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QTouch3DInputHandler_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QMouseEvent, mousePos: QPoint) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QMouseEvent, QPoint) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn mouseReleaseEvent(self: QTouch3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QTouch3DInputHandler_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn superMouseReleaseEvent(self: QTouch3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QTouch3DInputHandler_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QMouseEvent, mousePos: QPoint) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QMouseEvent, QPoint) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn mouseMoveEvent(self: QTouch3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QTouch3DInputHandler_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn superMouseMoveEvent(self: QTouch3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QTouch3DInputHandler_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QMouseEvent, mousePos: QPoint) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QMouseEvent, QPoint) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QTouch3DInputHandler_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QTouch3DInputHandler_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from Q3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dinputhandler.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QWheelEvent) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTouch3DInputHandler_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTouch3DInputHandler_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QMouseEvent) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTouch3DInputHandler, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTouch3DInputHandler_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTouch3DInputHandler, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTouch3DInputHandler_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QEvent) callconv(.c) bool) void {
        qtc.QTouch3DInputHandler_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTouch3DInputHandler, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTouch3DInputHandler_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTouch3DInputHandler, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTouch3DInputHandler_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTouch3DInputHandler_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTouch3DInputHandler_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTouch3DInputHandler_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QTimerEvent) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTouch3DInputHandler_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTouch3DInputHandler_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QChildEvent) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTouch3DInputHandler_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTouch3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTouch3DInputHandler_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QEvent) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTouch3DInputHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTouch3DInputHandler_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTouch3DInputHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTouch3DInputHandler_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QMetaMethod) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTouch3DInputHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTouch3DInputHandler_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTouch3DInputHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTouch3DInputHandler_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTouch3DInputHandler`
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, QMetaMethod) callconv(.c) void) void {
        qtc.QTouch3DInputHandler_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPrevDistance` instead
    ///
    pub const SetPrevDistance = setPrevDistance;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPrevDistance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` distance: i32 `
    ///
    pub fn setPrevDistance(self: QTouch3DInputHandler, distance: i32) void {
        qtc.QTouch3DInputHandler_SetPrevDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### DEPRECATED: Use `prevDistance` instead
    ///
    pub const PrevDistance = prevDistance;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#prevDistance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn prevDistance(self: QTouch3DInputHandler) i32 {
        return qtc.QTouch3DInputHandler_PrevDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreviousInputPos` instead
    ///
    pub const SetPreviousInputPos = setPreviousInputPos;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#setPreviousInputPos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` position: QPoint `
    ///
    pub fn setPreviousInputPos(self: QTouch3DInputHandler, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.QTouch3DInputHandler_SetPreviousInputPos(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `previousInputPos` instead
    ///
    pub const PreviousInputPos = previousInputPos;

    /// Inherited from QAbstract3DInputHandler
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler.html#previousInputPos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn previousInputPos(self: QTouch3DInputHandler) QPoint {
        return .{ .ptr = qtc.QTouch3DInputHandler_PreviousInputPos(@ptrCast(self.ptr)) };
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn sender(self: QTouch3DInputHandler) QObject {
        return .{ .ptr = qtc.QTouch3DInputHandler_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn senderSignalIndex(self: QTouch3DInputHandler) i32 {
        return qtc.QTouch3DInputHandler_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTouch3DInputHandler, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTouch3DInputHandler_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTouch3DInputHandler, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTouch3DInputHandler_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTouch3DInputHandler `
    ///
    /// ` callback: *const fn (self: QTouch3DInputHandler, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTouch3DInputHandler, callback: *const fn (QTouch3DInputHandler, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtouch3dinputhandler-qtdatavis.html#dtor.QTouch3DInputHandler)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTouch3DInputHandler `
    ///
    pub fn delete(self: QTouch3DInputHandler) void {
        qtc.QTouch3DInputHandler_Delete(@ptrCast(self.ptr));
    }
};
