const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Q3DScene = @import("libqt6").Q3DScene;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTouchEvent = @import("libqt6").QTouchEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const qabstract3dinputhandler_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html)
pub const QAbstract3DInputHandler = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstract3DInputHandler,

    pub const _is_QAbstract3DInputHandler = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn metaObject(self: QAbstract3DInputHandler) QMetaObject {
        return .{ .ptr = qtc.QAbstract3DInputHandler_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstract3DInputHandler, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstract3DInputHandler_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAbstract3DInputHandler, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstract3DInputHandler_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QAbstract3DInputHandler_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DInputHandler.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QAbstract3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QAbstract3DInputHandler_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `touchEvent` instead
    ///
    pub const TouchEvent = touchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#touchEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn touchEvent(self: QAbstract3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QAbstract3DInputHandler_TouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn mousePressEvent(self: QAbstract3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QAbstract3DInputHandler_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn mouseReleaseEvent(self: QAbstract3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QAbstract3DInputHandler_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _event: QMouseEvent `
    ///
    /// ` mousePos: QPoint `
    ///
    pub fn mouseMoveEvent(self: QAbstract3DInputHandler, _event: anytype, mousePos: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        comptime _ = @TypeOf(mousePos)._is_QPoint;
        qtc.QAbstract3DInputHandler_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(mousePos.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: QAbstract3DInputHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QAbstract3DInputHandler_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `inputView` instead
    ///
    pub const InputView = inputView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dinputhandler_enums.InputView `
    ///
    pub fn inputView(self: QAbstract3DInputHandler) i32 {
        return qtc.QAbstract3DInputHandler_InputView(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputView` instead
    ///
    pub const SetInputView = setInputView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#setInputView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _inputView: qabstract3dinputhandler_enums.InputView `
    ///
    pub fn setInputView(self: QAbstract3DInputHandler, _inputView: i32) void {
        qtc.QAbstract3DInputHandler_SetInputView(@ptrCast(self.ptr), @bitCast(_inputView));
    }

    /// ### DEPRECATED: Use `inputPosition` instead
    ///
    pub const InputPosition = inputPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn inputPosition(self: QAbstract3DInputHandler) QPoint {
        return .{ .ptr = qtc.QAbstract3DInputHandler_InputPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInputPosition` instead
    ///
    pub const SetInputPosition = setInputPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#setInputPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` position: QPoint `
    ///
    pub fn setInputPosition(self: QAbstract3DInputHandler, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.QAbstract3DInputHandler_SetInputPosition(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn scene(self: QAbstract3DInputHandler) Q3DScene {
        return .{ .ptr = qtc.QAbstract3DInputHandler_Scene(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScene` instead
    ///
    pub const SetScene = setScene;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#setScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _scene: Q3DScene `
    ///
    pub fn setScene(self: QAbstract3DInputHandler, _scene: anytype) void {
        comptime _ = @TypeOf(_scene)._is_Q3DScene;
        qtc.QAbstract3DInputHandler_SetScene(@ptrCast(self.ptr), @ptrCast(_scene.ptr));
    }

    /// ### DEPRECATED: Use `positionChanged` instead
    ///
    pub const PositionChanged = positionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#positionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` position: QPoint `
    ///
    pub fn positionChanged(self: QAbstract3DInputHandler, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.QAbstract3DInputHandler_PositionChanged(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `onPositionChanged` instead
    ///
    pub const OnPositionChanged = onPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#positionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` callback: *const fn (self: QAbstract3DInputHandler, position: QPoint) callconv(.c) void `
    ///
    pub fn onPositionChanged(self: QAbstract3DInputHandler, callback: *const fn (QAbstract3DInputHandler, QPoint) callconv(.c) void) void {
        qtc.QAbstract3DInputHandler_Connect_PositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputViewChanged` instead
    ///
    pub const InputViewChanged = inputViewChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputViewChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` view: qabstract3dinputhandler_enums.InputView `
    ///
    pub fn inputViewChanged(self: QAbstract3DInputHandler, view: i32) void {
        qtc.QAbstract3DInputHandler_InputViewChanged(@ptrCast(self.ptr), @bitCast(view));
    }

    /// ### DEPRECATED: Use `onInputViewChanged` instead
    ///
    pub const OnInputViewChanged = onInputViewChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#inputViewChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` callback: *const fn (self: QAbstract3DInputHandler, view: qabstract3dinputhandler_enums.InputView) callconv(.c) void `
    ///
    pub fn onInputViewChanged(self: QAbstract3DInputHandler, callback: *const fn (QAbstract3DInputHandler, i32) callconv(.c) void) void {
        qtc.QAbstract3DInputHandler_Connect_InputViewChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneChanged` instead
    ///
    pub const SceneChanged = sceneChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#sceneChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _scene: Q3DScene `
    ///
    pub fn sceneChanged(self: QAbstract3DInputHandler, _scene: anytype) void {
        comptime _ = @TypeOf(_scene)._is_Q3DScene;
        qtc.QAbstract3DInputHandler_SceneChanged(@ptrCast(self.ptr), @ptrCast(_scene.ptr));
    }

    /// ### DEPRECATED: Use `onSceneChanged` instead
    ///
    pub const OnSceneChanged = onSceneChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#sceneChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` callback: *const fn (self: QAbstract3DInputHandler, scene: Q3DScene) callconv(.c) void `
    ///
    pub fn onSceneChanged(self: QAbstract3DInputHandler, callback: *const fn (QAbstract3DInputHandler, Q3DScene) callconv(.c) void) void {
        qtc.QAbstract3DInputHandler_Connect_SceneChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QAbstract3DInputHandler_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DInputHandler.tr2: Memory allocation failed");
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
        var _str = qtc.QAbstract3DInputHandler_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DInputHandler.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstract3DInputHandler, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstract3DInputHandler, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstract3DInputHandler, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DInputHandler.objectName: Memory allocation failed");
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstract3DInputHandler, name: []const u8) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn isWidgetType(self: QAbstract3DInputHandler) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn isWindowType(self: QAbstract3DInputHandler) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn isQuickItemType(self: QAbstract3DInputHandler) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn signalsBlocked(self: QAbstract3DInputHandler) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstract3DInputHandler, b: bool) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn thread(self: QAbstract3DInputHandler) QThread {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstract3DInputHandler, _thread: anytype) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstract3DInputHandler, interval: i32) i32 {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstract3DInputHandler, time: i64) i32 {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstract3DInputHandler, id: i32) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstract3DInputHandler, id: i32) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstract3DInputHandler, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstract3DInputHandler.children: Memory allocation failed");
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstract3DInputHandler, _parent: anytype) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstract3DInputHandler, filterObj: anytype) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstract3DInputHandler, obj: anytype) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstract3DInputHandler, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn disconnect3(self: QAbstract3DInputHandler) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstract3DInputHandler, receiver: anytype) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn dumpObjectTree(self: QAbstract3DInputHandler) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn dumpObjectInfo(self: QAbstract3DInputHandler) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstract3DInputHandler, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstract3DInputHandler, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstract3DInputHandler, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAbstract3DInputHandler.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstract3DInputHandler.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn bindingStorage(self: QAbstract3DInputHandler) QBindingStorage {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn bindingStorage2(self: QAbstract3DInputHandler) QBindingStorage {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn destroyed(self: QAbstract3DInputHandler) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` callback: *const fn (self: QAbstract3DInputHandler) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstract3DInputHandler, callback: *const fn (QAbstract3DInputHandler) callconv(.c) void) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn parent(self: QAbstract3DInputHandler) QObject {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstract3DInputHandler, classname: [:0]const u8) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn deleteLater(self: QAbstract3DInputHandler) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstract3DInputHandler, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstract3DInputHandler, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstract3DInputHandler, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstract3DInputHandler, signal: [:0]const u8) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstract3DInputHandler, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstract3DInputHandler, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstract3DInputHandler, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstract3DInputHandler, param1: anytype) void {
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` callback: *const fn (self: QAbstract3DInputHandler, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstract3DInputHandler, callback: *const fn (QAbstract3DInputHandler, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstract3DInputHandler `
    ///
    /// ` callback: *const fn (self: QAbstract3DInputHandler, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstract3DInputHandler, callback: *const fn (QAbstract3DInputHandler, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#dtor.QAbstract3DInputHandler)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstract3DInputHandler `
    ///
    pub fn delete(self: QAbstract3DInputHandler) void {
        qtc.QAbstract3DInputHandler_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dinputhandler-qtdatavis.html#public-types)
pub const enums = struct {
    pub const InputView = enum {
        pub const InputViewNone: i32 = 0;
        pub const InputViewOnPrimary: i32 = 1;
        pub const InputViewOnSecondary: i32 = 2;
    };
};
