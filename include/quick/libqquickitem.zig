const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QCursor = @import("libqt6").QCursor;
const QDragEnterEvent = @import("libqt6").QDragEnterEvent;
const QDragLeaveEvent = @import("libqt6").QDragLeaveEvent;
const QDragMoveEvent = @import("libqt6").QDragMoveEvent;
const QDropEvent = @import("libqt6").QDropEvent;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QHoverEvent = @import("libqt6").QHoverEvent;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QJSValue = @import("libqt6").QJSValue;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QObject = @import("libqt6").QObject;
const QPointF = @import("libqt6").QPointF;
const QQmlParserStatus = @import("libqt6").QQmlParserStatus;
const QQuickWindow = @import("libqt6").QQuickWindow;
const QRectF = @import("libqt6").QRectF;
const QSGNode = @import("libqt6").QSGNode;
const QSGTextureProvider = @import("libqt6").QSGTextureProvider;
const QSGTransformNode = @import("libqt6").QSGTransformNode;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTouchEvent = @import("libqt6").QTouchEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquickitem_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html)
pub const QQuickTransform = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickTransform,

    pub const _is_QQuickTransform = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickTransform object in C++ memory
    ///
    pub fn new() QQuickTransform {
        return .{ .ptr = qtc.QQuickTransform_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickTransform object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QQuickTransform {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQuickTransform_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    pub fn metaObject(self: QQuickTransform) QMetaObject {
        return .{ .ptr = qtc.QQuickTransform_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuickTransform, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuickTransform_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    pub fn superMetaObject(self: QQuickTransform) QMetaObject {
        return .{ .ptr = qtc.QQuickTransform_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickTransform, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickTransform_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn (self: QQuickTransform, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuickTransform, callback: *const fn (QQuickTransform, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuickTransform_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuickTransform, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickTransform_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickTransform, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickTransform_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn (self: QQuickTransform, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuickTransform, callback: *const fn (QQuickTransform, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuickTransform_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuickTransform, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickTransform_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuickTransform_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickTransform.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `appendToItem` instead
    ///
    pub const AppendToItem = appendToItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#appendToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn appendToItem(self: QQuickTransform, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickTransform_AppendToItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `prependToItem` instead
    ///
    pub const PrependToItem = prependToItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#prependToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn prependToItem(self: QQuickTransform, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickTransform_PrependToItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `applyTo` instead
    ///
    pub const ApplyTo = applyTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#applyTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` matrix: QMatrix4x4 `
    ///
    pub fn applyTo(self: QQuickTransform, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QMatrix4x4;
        qtc.QQuickTransform_ApplyTo(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `onApplyTo` instead
    ///
    pub const OnApplyTo = onApplyTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#applyTo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn (self: QQuickTransform, matrix: QMatrix4x4) callconv(.c) void `
    ///
    pub fn onApplyTo(self: QQuickTransform, callback: *const fn (QQuickTransform, QMatrix4x4) callconv(.c) void) void {
        qtc.QQuickTransform_OnApplyTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superApplyTo` instead
    ///
    pub const SuperApplyTo = superApplyTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#applyTo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` matrix: QMatrix4x4 `
    ///
    pub fn superApplyTo(self: QQuickTransform, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QMatrix4x4;
        qtc.QQuickTransform_SuperApplyTo(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    pub fn update(self: QQuickTransform) void {
        qtc.QQuickTransform_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdate` instead
    ///
    pub const OnUpdate = onUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#update)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdate(self: QQuickTransform, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickTransform_OnUpdate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdate` instead
    ///
    pub const SuperUpdate = superUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#update)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickTransform `
    ///
    pub fn superUpdate(self: QQuickTransform) void {
        qtc.QQuickTransform_SuperUpdate(@ptrCast(self.ptr));
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
        var _str = qtc.QQuickTransform_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickTransform.tr2: Memory allocation failed");
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
        var _str = qtc.QQuickTransform_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickTransform.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QQuickTransform `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickTransform, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickTransform.objectName: Memory allocation failed");
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
    /// ` self: QQuickTransform `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickTransform, name: []const u8) void {
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
    /// ` self: QQuickTransform `
    ///
    pub fn isWidgetType(self: QQuickTransform) bool {
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
    /// ` self: QQuickTransform `
    ///
    pub fn isWindowType(self: QQuickTransform) bool {
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
    /// ` self: QQuickTransform `
    ///
    pub fn isQuickItemType(self: QQuickTransform) bool {
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
    /// ` self: QQuickTransform `
    ///
    pub fn signalsBlocked(self: QQuickTransform) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickTransform, b: bool) bool {
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
    /// ` self: QQuickTransform `
    ///
    pub fn thread(self: QQuickTransform) QThread {
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
    /// ` self: QQuickTransform `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickTransform, _thread: anytype) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickTransform, interval: i32) i32 {
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
    /// ` self: QQuickTransform `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickTransform, time: i64) i32 {
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
    /// ` self: QQuickTransform `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuickTransform, id: i32) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickTransform, id: i32) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickTransform, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickTransform.children: Memory allocation failed");
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
    /// ` self: QQuickTransform `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuickTransform, _parent: anytype) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickTransform, filterObj: anytype) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickTransform, obj: anytype) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickTransform, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickTransform `
    ///
    pub fn disconnect3(self: QQuickTransform) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickTransform, receiver: anytype) bool {
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
    /// ` self: QQuickTransform `
    ///
    pub fn dumpObjectTree(self: QQuickTransform) void {
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
    /// ` self: QQuickTransform `
    ///
    pub fn dumpObjectInfo(self: QQuickTransform) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickTransform, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickTransform, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickTransform `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickTransform, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickTransform.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickTransform.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickTransform `
    ///
    pub fn bindingStorage(self: QQuickTransform) QBindingStorage {
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
    /// ` self: QQuickTransform `
    ///
    pub fn bindingStorage2(self: QQuickTransform) QBindingStorage {
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
    /// ` self: QQuickTransform `
    ///
    pub fn destroyed(self: QQuickTransform) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn (self: QQuickTransform) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickTransform, callback: *const fn (QQuickTransform) callconv(.c) void) void {
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
    /// ` self: QQuickTransform `
    ///
    pub fn parent(self: QQuickTransform) QObject {
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
    /// ` self: QQuickTransform `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickTransform, classname: [:0]const u8) bool {
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
    /// ` self: QQuickTransform `
    ///
    pub fn deleteLater(self: QQuickTransform) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickTransform, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickTransform `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickTransform, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickTransform `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickTransform, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickTransform, signal: [:0]const u8) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickTransform, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickTransform, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickTransform, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickTransform `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickTransform, param1: anytype) void {
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
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn (self: QQuickTransform, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickTransform, callback: *const fn (QQuickTransform, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQuickTransform, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickTransform_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQuickTransform, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickTransform_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuickTransform, callback: *const fn (QQuickTransform, QEvent) callconv(.c) bool) void {
        qtc.QQuickTransform_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickTransform, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickTransform_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuickTransform, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickTransform_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuickTransform, callback: *const fn (QQuickTransform, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickTransform_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuickTransform, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickTransform_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuickTransform, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickTransform_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuickTransform, callback: *const fn (QQuickTransform, QTimerEvent) callconv(.c) void) void {
        qtc.QQuickTransform_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuickTransform, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickTransform_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuickTransform, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickTransform_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuickTransform, callback: *const fn (QQuickTransform, QChildEvent) callconv(.c) void) void {
        qtc.QQuickTransform_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuickTransform, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickTransform_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuickTransform, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickTransform_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuickTransform, callback: *const fn (QQuickTransform, QEvent) callconv(.c) void) void {
        qtc.QQuickTransform_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuickTransform, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickTransform_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuickTransform, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickTransform_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuickTransform, callback: *const fn (QQuickTransform, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickTransform_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuickTransform, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickTransform_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuickTransform, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickTransform_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuickTransform, callback: *const fn (QQuickTransform, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickTransform_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    pub fn sender(self: QQuickTransform) QObject {
        return .{ .ptr = qtc.QQuickTransform_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickTransform `
    ///
    pub fn superSender(self: QQuickTransform) QObject {
        return .{ .ptr = qtc.QQuickTransform_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuickTransform, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickTransform_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    pub fn senderSignalIndex(self: QQuickTransform) i32 {
        return qtc.QQuickTransform_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickTransform `
    ///
    pub fn superSenderSignalIndex(self: QQuickTransform) i32 {
        return qtc.QQuickTransform_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuickTransform, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickTransform_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuickTransform, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickTransform_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuickTransform, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickTransform_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuickTransform, callback: *const fn (QQuickTransform, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuickTransform_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuickTransform, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickTransform_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickTransform `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuickTransform, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickTransform_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickTransform`
    ///
    /// ` callback: *const fn (self: QQuickTransform, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuickTransform, callback: *const fn (QQuickTransform, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuickTransform_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickTransform `
    ///
    /// ` callback: *const fn (self: QQuickTransform, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickTransform, callback: *const fn (QQuickTransform, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#dtor.QQuickTransform)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickTransform `
    ///
    pub fn delete(self: QQuickTransform) void {
        qtc.QQuickTransform_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html)
pub const QQuickItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickItem,

    pub const _is_QQuickItem = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickItem object in C++ memory
    ///
    pub fn new() QQuickItem {
        return .{ .ptr = qtc.QQuickItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn new2(_parent: anytype) QQuickItem {
        comptime _ = @TypeOf(_parent)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_new2(@ptrCast(_parent.ptr)) };
    }

    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn asQQmlParserStatus(self: QQuickItem) QQmlParserStatus {
        return .{ .ptr = qtc.QQuickItem_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Downcasts to a QQuickItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuickItem {
        comptime _ = @TypeOf(_qqmlparserstatus)._is_QQmlParserStatus;
        return .{ .ptr = @ptrCast(qtc.QQuickItem_FromQQmlParserStatus(@ptrCast(_qqmlparserstatus.ptr))) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn metaObject(self: QQuickItem) QMetaObject {
        return .{ .ptr = qtc.QQuickItem_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuickItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuickItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    pub fn superMetaObject(self: QQuickItem) QMetaObject {
        return .{ .ptr = qtc.QQuickItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuickItem, callback: *const fn (QQuickItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuickItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuickItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuickItem, callback: *const fn (QQuickItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuickItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuickItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuickItem_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickItem.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn window(self: QQuickItem) QQuickWindow {
        return .{ .ptr = qtc.QQuickItem_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn parentItem(self: QQuickItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ParentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn setParentItem(self: QQuickItem, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QQuickItem;
        qtc.QQuickItem_SetParentItem(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `stackBefore` instead
    ///
    pub const StackBefore = stackBefore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackBefore(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickItem_StackBefore(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `stackAfter` instead
    ///
    pub const StackAfter = stackAfter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackAfter(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickItem_StackAfter(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `childrenRect` instead
    ///
    pub const ChildrenRect = childrenRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn childrenRect(self: QQuickItem) QRectF {
        return .{ .ptr = qtc.QQuickItem_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuickItem, allocator: std.mem.Allocator) []QQuickItem {
        const _arr: qtc.libqt_list = qtc.QQuickItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuickItem, _arr.len) catch @panic("QQuickItem.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QQuickItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clip` instead
    ///
    pub const Clip = clip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn clip(self: QQuickItem) bool {
        return qtc.QQuickItem_Clip(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClip` instead
    ///
    pub const SetClip = setClip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setClip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _clip: bool `
    ///
    pub fn setClip(self: QQuickItem, _clip: bool) void {
        qtc.QQuickItem_SetClip(@ptrCast(self.ptr), _clip);
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuickItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickItem_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickItem.state: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuickItem, _state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = _state.len,
            .data = _state.ptr,
        };
        qtc.QQuickItem_SetState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `baselineOffset` instead
    ///
    pub const BaselineOffset = baselineOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn baselineOffset(self: QQuickItem) f64 {
        return qtc.QQuickItem_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaselineOffset` instead
    ///
    pub const SetBaselineOffset = setBaselineOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _baselineOffset: f64 `
    ///
    pub fn setBaselineOffset(self: QQuickItem, _baselineOffset: f64) void {
        qtc.QQuickItem_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(_baselineOffset));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn x(self: QQuickItem) f64 {
        return qtc.QQuickItem_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn y(self: QQuickItem) f64 {
        return qtc.QQuickItem_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn position(self: QQuickItem) QPointF {
        return .{ .ptr = qtc.QQuickItem_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QQuickItem, _x: f64) void {
        qtc.QQuickItem_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QQuickItem, _y: f64) void {
        qtc.QQuickItem_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _position: QPointF `
    ///
    pub fn setPosition(self: QQuickItem, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QPointF;
        qtc.QQuickItem_SetPosition(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn width(self: QQuickItem) f64 {
        return qtc.QQuickItem_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QQuickItem, _width: f64) void {
        qtc.QQuickItem_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `resetWidth` instead
    ///
    pub const ResetWidth = resetWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn resetWidth(self: QQuickItem) void {
        qtc.QQuickItem_ResetWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImplicitWidth` instead
    ///
    pub const SetImplicitWidth = setImplicitWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _implicitWidth: f64 `
    ///
    pub fn setImplicitWidth(self: QQuickItem, _implicitWidth: f64) void {
        qtc.QQuickItem_SetImplicitWidth(@ptrCast(self.ptr), @bitCast(_implicitWidth));
    }

    /// ### DEPRECATED: Use `implicitWidth` instead
    ///
    pub const ImplicitWidth = implicitWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn implicitWidth(self: QQuickItem) f64 {
        return qtc.QQuickItem_ImplicitWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn height(self: QQuickItem) f64 {
        return qtc.QQuickItem_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QQuickItem, _height: f64) void {
        qtc.QQuickItem_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `resetHeight` instead
    ///
    pub const ResetHeight = resetHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn resetHeight(self: QQuickItem) void {
        qtc.QQuickItem_ResetHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImplicitHeight` instead
    ///
    pub const SetImplicitHeight = setImplicitHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _implicitHeight: f64 `
    ///
    pub fn setImplicitHeight(self: QQuickItem, _implicitHeight: f64) void {
        qtc.QQuickItem_SetImplicitHeight(@ptrCast(self.ptr), @bitCast(_implicitHeight));
    }

    /// ### DEPRECATED: Use `implicitHeight` instead
    ///
    pub const ImplicitHeight = implicitHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn implicitHeight(self: QQuickItem) f64 {
        return qtc.QQuickItem_ImplicitHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn size(self: QQuickItem) QSizeF {
        return .{ .ptr = qtc.QQuickItem_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setSize(self: QQuickItem, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QQuickItem_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `transformOrigin` instead
    ///
    pub const TransformOrigin = transformOrigin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ## Returns:
    ///
    /// ` qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOrigin(self: QQuickItem) i32 {
        return qtc.QQuickItem_TransformOrigin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransformOrigin` instead
    ///
    pub const SetTransformOrigin = setTransformOrigin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _transformOrigin: qquickitem_enums.TransformOrigin `
    ///
    pub fn setTransformOrigin(self: QQuickItem, _transformOrigin: i32) void {
        qtc.QQuickItem_SetTransformOrigin(@ptrCast(self.ptr), @bitCast(_transformOrigin));
    }

    /// ### DEPRECATED: Use `transformOriginPoint` instead
    ///
    pub const TransformOriginPoint = transformOriginPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn transformOriginPoint(self: QQuickItem) QPointF {
        return .{ .ptr = qtc.QQuickItem_TransformOriginPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint` instead
    ///
    pub const SetTransformOriginPoint = setTransformOriginPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _transformOriginPoint: QPointF `
    ///
    pub fn setTransformOriginPoint(self: QQuickItem, _transformOriginPoint: anytype) void {
        comptime _ = @TypeOf(_transformOriginPoint)._is_QPointF;
        qtc.QQuickItem_SetTransformOriginPoint(@ptrCast(self.ptr), @ptrCast(_transformOriginPoint.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn z(self: QQuickItem) f64 {
        return qtc.QQuickItem_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZ` instead
    ///
    pub const SetZ = setZ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _z: f64 `
    ///
    pub fn setZ(self: QQuickItem, _z: f64) void {
        qtc.QQuickItem_SetZ(@ptrCast(self.ptr), @bitCast(_z));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn rotation(self: QQuickItem) f64 {
        return qtc.QQuickItem_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _rotation: f64 `
    ///
    pub fn setRotation(self: QQuickItem, _rotation: f64) void {
        qtc.QQuickItem_SetRotation(@ptrCast(self.ptr), @bitCast(_rotation));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn scale(self: QQuickItem) f64 {
        return qtc.QQuickItem_Scale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScale` instead
    ///
    pub const SetScale = setScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QQuickItem, _scale: f64) void {
        qtc.QQuickItem_SetScale(@ptrCast(self.ptr), @bitCast(_scale));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn opacity(self: QQuickItem) f64 {
        return qtc.QQuickItem_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QQuickItem, _opacity: f64) void {
        qtc.QQuickItem_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn isVisible(self: QQuickItem) bool {
        return qtc.QQuickItem_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QQuickItem, visible: bool) void {
        qtc.QQuickItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn isEnabled(self: QQuickItem) bool {
        return qtc.QQuickItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QQuickItem, enabled: bool) void {
        qtc.QQuickItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `smooth` instead
    ///
    pub const Smooth = smooth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn smooth(self: QQuickItem) bool {
        return qtc.QQuickItem_Smooth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSmooth` instead
    ///
    pub const SetSmooth = setSmooth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSmooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _smooth: bool `
    ///
    pub fn setSmooth(self: QQuickItem, _smooth: bool) void {
        qtc.QQuickItem_SetSmooth(@ptrCast(self.ptr), _smooth);
    }

    /// ### DEPRECATED: Use `activeFocusOnTab` instead
    ///
    pub const ActiveFocusOnTab = activeFocusOnTab;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn activeFocusOnTab(self: QQuickItem) bool {
        return qtc.QQuickItem_ActiveFocusOnTab(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveFocusOnTab` instead
    ///
    pub const SetActiveFocusOnTab = setActiveFocusOnTab;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setActiveFocusOnTab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _activeFocusOnTab: bool `
    ///
    pub fn setActiveFocusOnTab(self: QQuickItem, _activeFocusOnTab: bool) void {
        qtc.QQuickItem_SetActiveFocusOnTab(@ptrCast(self.ptr), _activeFocusOnTab);
    }

    /// ### DEPRECATED: Use `antialiasing` instead
    ///
    pub const Antialiasing = antialiasing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn antialiasing(self: QQuickItem) bool {
        return qtc.QQuickItem_Antialiasing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAntialiasing` instead
    ///
    pub const SetAntialiasing = setAntialiasing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAntialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _antialiasing: bool `
    ///
    pub fn setAntialiasing(self: QQuickItem, _antialiasing: bool) void {
        qtc.QQuickItem_SetAntialiasing(@ptrCast(self.ptr), _antialiasing);
    }

    /// ### DEPRECATED: Use `resetAntialiasing` instead
    ///
    pub const ResetAntialiasing = resetAntialiasing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetAntialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn resetAntialiasing(self: QQuickItem) void {
        qtc.QQuickItem_ResetAntialiasing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qquickitem_enums.Flag `
    ///
    pub fn flags(self: QQuickItem) i32 {
        return qtc.QQuickItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    pub fn setFlag(self: QQuickItem, flag: i32) void {
        qtc.QQuickItem_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _flags: flag of qquickitem_enums.Flag `
    ///
    pub fn setFlags(self: QQuickItem, _flags: i32) void {
        qtc.QQuickItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn boundingRect(self: QQuickItem) QRectF {
        return .{ .ptr = qtc.QQuickItem_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRect` instead
    ///
    pub const OnBoundingRect = onBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRect(self: QQuickItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickItem_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBoundingRect` instead
    ///
    pub const SuperBoundingRect = superBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superBoundingRect(self: QQuickItem) QRectF {
        return .{ .ptr = qtc.QQuickItem_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipRect` instead
    ///
    pub const ClipRect = clipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn clipRect(self: QQuickItem) QRectF {
        return .{ .ptr = qtc.QQuickItem_ClipRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClipRect` instead
    ///
    pub const OnClipRect = onClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onClipRect(self: QQuickItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickItem_OnClipRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClipRect` instead
    ///
    pub const SuperClipRect = superClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superClipRect(self: QQuickItem) QRectF {
        return .{ .ptr = qtc.QQuickItem_SuperClipRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `viewportItem` instead
    ///
    pub const ViewportItem = viewportItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#viewportItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn viewportItem(self: QQuickItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ViewportItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasActiveFocus` instead
    ///
    pub const HasActiveFocus = hasActiveFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasActiveFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn hasActiveFocus(self: QQuickItem) bool {
        return qtc.QQuickItem_HasActiveFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn hasFocus(self: QQuickItem) bool {
        return qtc.QQuickItem_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` focus: bool `
    ///
    pub fn setFocus(self: QQuickItem, focus: bool) void {
        qtc.QQuickItem_SetFocus(@ptrCast(self.ptr), focus);
    }

    /// ### DEPRECATED: Use `setFocus2` instead
    ///
    pub const SetFocus2 = setFocus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` focus: bool `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QQuickItem, focus: bool, reason: i32) void {
        qtc.QQuickItem_SetFocus2(@ptrCast(self.ptr), focus, @bitCast(reason));
    }

    /// ### DEPRECATED: Use `isFocusScope` instead
    ///
    pub const IsFocusScope = isFocusScope;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isFocusScope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn isFocusScope(self: QQuickItem) bool {
        return qtc.QQuickItem_IsFocusScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scopedFocusItem` instead
    ///
    pub const ScopedFocusItem = scopedFocusItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scopedFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn scopedFocusItem(self: QQuickItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ScopedFocusItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QQuickItem) i32 {
        return qtc.QQuickItem_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QQuickItem, policy: i32) void {
        qtc.QQuickItem_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` child: QQuickItem `
    ///
    pub fn isAncestorOf(self: QQuickItem, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QQuickItem;
        return qtc.QQuickItem_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `acceptedMouseButtons` instead
    ///
    pub const AcceptedMouseButtons = acceptedMouseButtons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn acceptedMouseButtons(self: QQuickItem) i32 {
        return qtc.QQuickItem_AcceptedMouseButtons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptedMouseButtons` instead
    ///
    pub const SetAcceptedMouseButtons = setAcceptedMouseButtons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setAcceptedMouseButtons(self: QQuickItem, buttons: i32) void {
        qtc.QQuickItem_SetAcceptedMouseButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// ### DEPRECATED: Use `acceptHoverEvents` instead
    ///
    pub const AcceptHoverEvents = acceptHoverEvents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn acceptHoverEvents(self: QQuickItem) bool {
        return qtc.QQuickItem_AcceptHoverEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptHoverEvents` instead
    ///
    pub const SetAcceptHoverEvents = setAcceptHoverEvents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptHoverEvents(self: QQuickItem, enabled: bool) void {
        qtc.QQuickItem_SetAcceptHoverEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `acceptTouchEvents` instead
    ///
    pub const AcceptTouchEvents = acceptTouchEvents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn acceptTouchEvents(self: QQuickItem) bool {
        return qtc.QQuickItem_AcceptTouchEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptTouchEvents` instead
    ///
    pub const SetAcceptTouchEvents = setAcceptTouchEvents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` accept: bool `
    ///
    pub fn setAcceptTouchEvents(self: QQuickItem, accept: bool) void {
        qtc.QQuickItem_SetAcceptTouchEvents(@ptrCast(self.ptr), accept);
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn cursor(self: QQuickItem) QCursor {
        return .{ .ptr = qtc.QQuickItem_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QQuickItem, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QQuickItem_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn unsetCursor(self: QQuickItem) void {
        qtc.QQuickItem_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUnderMouse` instead
    ///
    pub const IsUnderMouse = isUnderMouse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn isUnderMouse(self: QQuickItem) bool {
        return qtc.QQuickItem_IsUnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn grabMouse(self: QQuickItem) void {
        qtc.QQuickItem_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ungrabMouse` instead
    ///
    pub const UngrabMouse = ungrabMouse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn ungrabMouse(self: QQuickItem) void {
        qtc.QQuickItem_UngrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keepMouseGrab` instead
    ///
    pub const KeepMouseGrab = keepMouseGrab;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepMouseGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn keepMouseGrab(self: QQuickItem) bool {
        return qtc.QQuickItem_KeepMouseGrab(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeepMouseGrab` instead
    ///
    pub const SetKeepMouseGrab = setKeepMouseGrab;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepMouseGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _keepMouseGrab: bool `
    ///
    pub fn setKeepMouseGrab(self: QQuickItem, _keepMouseGrab: bool) void {
        qtc.QQuickItem_SetKeepMouseGrab(@ptrCast(self.ptr), _keepMouseGrab);
    }

    /// ### DEPRECATED: Use `filtersChildMouseEvents` instead
    ///
    pub const FiltersChildMouseEvents = filtersChildMouseEvents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#filtersChildMouseEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn filtersChildMouseEvents(self: QQuickItem) bool {
        return qtc.QQuickItem_FiltersChildMouseEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltersChildMouseEvents` instead
    ///
    pub const SetFiltersChildMouseEvents = setFiltersChildMouseEvents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFiltersChildMouseEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` filter: bool `
    ///
    pub fn setFiltersChildMouseEvents(self: QQuickItem, filter: bool) void {
        qtc.QQuickItem_SetFiltersChildMouseEvents(@ptrCast(self.ptr), filter);
    }

    /// ### DEPRECATED: Use `grabTouchPoints` instead
    ///
    pub const GrabTouchPoints = grabTouchPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabTouchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` ids: []i32 `
    ///
    pub fn grabTouchPoints(self: QQuickItem, ids: []i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QQuickItem_GrabTouchPoints(@ptrCast(self.ptr), ids_list);
    }

    /// ### DEPRECATED: Use `ungrabTouchPoints` instead
    ///
    pub const UngrabTouchPoints = ungrabTouchPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabTouchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn ungrabTouchPoints(self: QQuickItem) void {
        qtc.QQuickItem_UngrabTouchPoints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keepTouchGrab` instead
    ///
    pub const KeepTouchGrab = keepTouchGrab;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepTouchGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn keepTouchGrab(self: QQuickItem) bool {
        return qtc.QQuickItem_KeepTouchGrab(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeepTouchGrab` instead
    ///
    pub const SetKeepTouchGrab = setKeepTouchGrab;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepTouchGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _keepTouchGrab: bool `
    ///
    pub fn setKeepTouchGrab(self: QQuickItem, _keepTouchGrab: bool) void {
        qtc.QQuickItem_SetKeepTouchGrab(@ptrCast(self.ptr), _keepTouchGrab);
    }

    /// ### DEPRECATED: Use `grabToImage` instead
    ///
    pub const GrabToImage = grabToImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: QJSValue `
    ///
    pub fn grabToImage(self: QQuickItem, callback: anytype) bool {
        comptime _ = @TypeOf(callback)._is_QJSValue;
        return qtc.QQuickItem_GrabToImage(@ptrCast(self.ptr), @ptrCast(callback.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn contains(self: QQuickItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickItem_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onContains` instead
    ///
    pub const OnContains = onContains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, point: QPointF) callconv(.c) bool `
    ///
    pub fn onContains(self: QQuickItem, callback: *const fn (QQuickItem, QPointF) callconv(.c) bool) void {
        qtc.QQuickItem_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContains` instead
    ///
    pub const SuperContains = superContains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn superContains(self: QQuickItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickItem_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `containmentMask` instead
    ///
    pub const ContainmentMask = containmentMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn containmentMask(self: QQuickItem) QObject {
        return .{ .ptr = qtc.QQuickItem_ContainmentMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContainmentMask` instead
    ///
    pub const SetContainmentMask = setContainmentMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setContainmentMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` mask: QObject `
    ///
    pub fn setContainmentMask(self: QQuickItem, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QObject;
        qtc.QQuickItem_SetContainmentMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### DEPRECATED: Use `itemTransform` instead
    ///
    pub const ItemTransform = itemTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: *bool `
    ///
    pub fn itemTransform(self: QQuickItem, param1: anytype, param2: *bool) QTransform {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_ItemTransform(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2)) };
    }

    /// ### DEPRECATED: Use `mapToScene` instead
    ///
    pub const MapToScene = mapToScene;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToScene(self: QQuickItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem` instead
    ///
    pub const MapRectToItem = mapRectToItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToItem(self: QQuickItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene` instead
    ///
    pub const MapRectToScene = mapRectToScene;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToScene(self: QQuickItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectToScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene` instead
    ///
    pub const MapFromScene = mapFromScene;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromScene(self: QQuickItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem` instead
    ///
    pub const MapRectFromItem = mapRectFromItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QQuickItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene` instead
    ///
    pub const MapRectFromScene = mapRectFromScene;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QQuickItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectFromScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `polish` instead
    ///
    pub const Polish = polish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn polish(self: QQuickItem) void {
        qtc.QQuickItem_Polish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mapFromItem2` instead
    ///
    pub const MapFromItem2 = mapFromItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromItem2(self: QQuickItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem3` instead
    ///
    pub const MapFromItem3 = mapFromItem3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem3(self: QQuickItem, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapFromItem3(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromItem4` instead
    ///
    pub const MapFromItem4 = mapFromItem4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapFromItem4(self: QQuickItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapFromItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem5` instead
    ///
    pub const MapFromItem5 = mapFromItem5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` _width: f64 `
    ///
    /// ` _height: f64 `
    ///
    pub fn mapFromItem5(self: QQuickItem, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapFromItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `mapToItem2` instead
    ///
    pub const MapToItem2 = mapToItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToItem2(self: QQuickItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem3` instead
    ///
    pub const MapToItem3 = mapToItem3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem3(self: QQuickItem, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapToItem3(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToItem4` instead
    ///
    pub const MapToItem4 = mapToItem4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapToItem4(self: QQuickItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapToItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem5` instead
    ///
    pub const MapToItem5 = mapToItem5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` _width: f64 `
    ///
    /// ` _height: f64 `
    ///
    pub fn mapToItem5(self: QQuickItem, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapToItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromGlobal2(self: QQuickItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QQuickItem_MapFromGlobal2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal3` instead
    ///
    pub const MapFromGlobal3 = mapFromGlobal3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromGlobal3(self: QQuickItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapFromGlobal3(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToGlobal2(self: QQuickItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QQuickItem_MapToGlobal2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal3` instead
    ///
    pub const MapToGlobal3 = mapToGlobal3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToGlobal3(self: QQuickItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapToGlobal3(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `forceActiveFocus` instead
    ///
    pub const ForceActiveFocus = forceActiveFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn forceActiveFocus(self: QQuickItem) void {
        qtc.QQuickItem_ForceActiveFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `forceActiveFocus2` instead
    ///
    pub const ForceActiveFocus2 = forceActiveFocus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn forceActiveFocus2(self: QQuickItem, reason: i32) void {
        qtc.QQuickItem_ForceActiveFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `nextItemInFocusChain` instead
    ///
    pub const NextItemInFocusChain = nextItemInFocusChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn nextItemInFocusChain(self: QQuickItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_NextItemInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn childAt(self: QQuickItem, _x: f64, _y: f64) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ChildAt(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `ensurePolished` instead
    ///
    pub const EnsurePolished = ensurePolished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn ensurePolished(self: QQuickItem) void {
        qtc.QQuickItem_EnsurePolished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpItemTree` instead
    ///
    pub const DumpItemTree = dumpItemTree;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dumpItemTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn dumpItemTree(self: QQuickItem) void {
        qtc.QQuickItem_DumpItemTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QQuickItem, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickItem_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QQuickItem, callback: *const fn (QQuickItem, i32) callconv(.c) QVariant) void {
        qtc.QQuickItem_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QQuickItem, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickItem_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `isTextureProvider` instead
    ///
    pub const IsTextureProvider = isTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isTextureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn isTextureProvider(self: QQuickItem) bool {
        return qtc.QQuickItem_IsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsTextureProvider` instead
    ///
    pub const OnIsTextureProvider = onIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isTextureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsTextureProvider(self: QQuickItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickItem_OnIsTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsTextureProvider` instead
    ///
    pub const SuperIsTextureProvider = superIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isTextureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superIsTextureProvider(self: QQuickItem) bool {
        return qtc.QQuickItem_SuperIsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textureProvider` instead
    ///
    pub const TextureProvider = textureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#textureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn textureProvider(self: QQuickItem) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickItem_TextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onTextureProvider` instead
    ///
    pub const OnTextureProvider = onTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#textureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSGTextureProvider `
    ///
    pub fn onTextureProvider(self: QQuickItem, callback: *const fn () callconv(.c) QSGTextureProvider) void {
        qtc.QQuickItem_OnTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextureProvider` instead
    ///
    pub const SuperTextureProvider = superTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#textureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superTextureProvider(self: QQuickItem) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickItem_SuperTextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn update(self: QQuickItem) void {
        qtc.QQuickItem_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `childrenRectChanged` instead
    ///
    pub const ChildrenRectChanged = childrenRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QRectF `
    ///
    pub fn childrenRectChanged(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QQuickItem_ChildrenRectChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenRectChanged` instead
    ///
    pub const OnChildrenRectChanged = onChildrenRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QRectF) callconv(.c) void `
    ///
    pub fn onChildrenRectChanged(self: QQuickItem, callback: *const fn (QQuickItem, QRectF) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ChildrenRectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baselineOffsetChanged` instead
    ///
    pub const BaselineOffsetChanged = baselineOffsetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: f64 `
    ///
    pub fn baselineOffsetChanged(self: QQuickItem, param1: f64) void {
        qtc.QQuickItem_BaselineOffsetChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onBaselineOffsetChanged` instead
    ///
    pub const OnBaselineOffsetChanged = onBaselineOffsetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: f64) callconv(.c) void `
    ///
    pub fn onBaselineOffsetChanged(self: QQuickItem, callback: *const fn (QQuickItem, f64) callconv(.c) void) void {
        qtc.QQuickItem_Connect_BaselineOffsetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn stateChanged(self: QQuickItem, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QQuickItem_StateChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuickItem, callback: *const fn (QQuickItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QQuickItem_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusChanged` instead
    ///
    pub const FocusChanged = focusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: bool `
    ///
    pub fn focusChanged(self: QQuickItem, param1: bool) void {
        qtc.QQuickItem_FocusChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onFocusChanged` instead
    ///
    pub const OnFocusChanged = onFocusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: bool) callconv(.c) void `
    ///
    pub fn onFocusChanged(self: QQuickItem, callback: *const fn (QQuickItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_FocusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeFocusChanged` instead
    ///
    pub const ActiveFocusChanged = activeFocusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusChanged(self: QQuickItem, param1: bool) void {
        qtc.QQuickItem_ActiveFocusChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onActiveFocusChanged` instead
    ///
    pub const OnActiveFocusChanged = onActiveFocusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusChanged(self: QQuickItem, callback: *const fn (QQuickItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ActiveFocusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusPolicyChanged` instead
    ///
    pub const FocusPolicyChanged = focusPolicyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicyChanged(self: QQuickItem, param1: i32) void {
        qtc.QQuickItem_FocusPolicyChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onFocusPolicyChanged` instead
    ///
    pub const OnFocusPolicyChanged = onFocusPolicyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: qnamespace_enums.FocusPolicy) callconv(.c) void `
    ///
    pub fn onFocusPolicyChanged(self: QQuickItem, callback: *const fn (QQuickItem, i32) callconv(.c) void) void {
        qtc.QQuickItem_Connect_FocusPolicyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeFocusOnTabChanged` instead
    ///
    pub const ActiveFocusOnTabChanged = activeFocusOnTabChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusOnTabChanged(self: QQuickItem, param1: bool) void {
        qtc.QQuickItem_ActiveFocusOnTabChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onActiveFocusOnTabChanged` instead
    ///
    pub const OnActiveFocusOnTabChanged = onActiveFocusOnTabChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusOnTabChanged(self: QQuickItem, callback: *const fn (QQuickItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ActiveFocusOnTabChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn parentChanged(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickItem_ParentChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QQuickItem) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuickItem, callback: *const fn (QQuickItem, QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transformOriginChanged` instead
    ///
    pub const TransformOriginChanged = transformOriginChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOriginChanged(self: QQuickItem, param1: i32) void {
        qtc.QQuickItem_TransformOriginChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onTransformOriginChanged` instead
    ///
    pub const OnTransformOriginChanged = onTransformOriginChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: qquickitem_enums.TransformOrigin) callconv(.c) void `
    ///
    pub fn onTransformOriginChanged(self: QQuickItem, callback: *const fn (QQuickItem, i32) callconv(.c) void) void {
        qtc.QQuickItem_Connect_TransformOriginChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `smoothChanged` instead
    ///
    pub const SmoothChanged = smoothChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: bool `
    ///
    pub fn smoothChanged(self: QQuickItem, param1: bool) void {
        qtc.QQuickItem_SmoothChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onSmoothChanged` instead
    ///
    pub const OnSmoothChanged = onSmoothChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: bool) callconv(.c) void `
    ///
    pub fn onSmoothChanged(self: QQuickItem, callback: *const fn (QQuickItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_SmoothChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `antialiasingChanged` instead
    ///
    pub const AntialiasingChanged = antialiasingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: bool `
    ///
    pub fn antialiasingChanged(self: QQuickItem, param1: bool) void {
        qtc.QQuickItem_AntialiasingChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onAntialiasingChanged` instead
    ///
    pub const OnAntialiasingChanged = onAntialiasingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: bool) callconv(.c) void `
    ///
    pub fn onAntialiasingChanged(self: QQuickItem, callback: *const fn (QQuickItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_AntialiasingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clipChanged` instead
    ///
    pub const ClipChanged = clipChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: bool `
    ///
    pub fn clipChanged(self: QQuickItem, param1: bool) void {
        qtc.QQuickItem_ClipChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onClipChanged` instead
    ///
    pub const OnClipChanged = onClipChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: bool) callconv(.c) void `
    ///
    pub fn onClipChanged(self: QQuickItem, callback: *const fn (QQuickItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ClipChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowChanged` instead
    ///
    pub const WindowChanged = windowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _window: QQuickWindow `
    ///
    pub fn windowChanged(self: QQuickItem, _window: anytype) void {
        comptime _ = @TypeOf(_window)._is_QQuickWindow;
        qtc.QQuickItem_WindowChanged(@ptrCast(self.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `onWindowChanged` instead
    ///
    pub const OnWindowChanged = onWindowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, window: QQuickWindow) callconv(.c) void `
    ///
    pub fn onWindowChanged(self: QQuickItem, callback: *const fn (QQuickItem, QQuickWindow) callconv(.c) void) void {
        qtc.QQuickItem_Connect_WindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn childrenChanged(self: QQuickItem) void {
        qtc.QQuickItem_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn opacityChanged(self: QQuickItem) void {
        qtc.QQuickItem_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn enabledChanged(self: QQuickItem) void {
        qtc.QQuickItem_EnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn visibleChanged(self: QQuickItem) void {
        qtc.QQuickItem_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChildrenChanged` instead
    ///
    pub const VisibleChildrenChanged = visibleChildrenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn visibleChildrenChanged(self: QQuickItem) void {
        qtc.QQuickItem_VisibleChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChildrenChanged` instead
    ///
    pub const OnVisibleChildrenChanged = onVisibleChildrenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onVisibleChildrenChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_VisibleChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn rotationChanged(self: QQuickItem) void {
        qtc.QQuickItem_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scaleChanged` instead
    ///
    pub const ScaleChanged = scaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn scaleChanged(self: QQuickItem) void {
        qtc.QQuickItem_ScaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScaleChanged` instead
    ///
    pub const OnScaleChanged = onScaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onScaleChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn xChanged(self: QQuickItem) void {
        qtc.QQuickItem_XChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onXChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn yChanged(self: QQuickItem) void {
        qtc.QQuickItem_YChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onYChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn widthChanged(self: QQuickItem) void {
        qtc.QQuickItem_WidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn heightChanged(self: QQuickItem) void {
        qtc.QQuickItem_HeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zChanged` instead
    ///
    pub const ZChanged = zChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn zChanged(self: QQuickItem) void {
        qtc.QQuickItem_ZChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZChanged` instead
    ///
    pub const OnZChanged = onZChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onZChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `implicitWidthChanged` instead
    ///
    pub const ImplicitWidthChanged = implicitWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn implicitWidthChanged(self: QQuickItem) void {
        qtc.QQuickItem_ImplicitWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImplicitWidthChanged` instead
    ///
    pub const OnImplicitWidthChanged = onImplicitWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onImplicitWidthChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ImplicitWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `implicitHeightChanged` instead
    ///
    pub const ImplicitHeightChanged = implicitHeightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn implicitHeightChanged(self: QQuickItem) void {
        qtc.QQuickItem_ImplicitHeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImplicitHeightChanged` instead
    ///
    pub const OnImplicitHeightChanged = onImplicitHeightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onImplicitHeightChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ImplicitHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `containmentMaskChanged` instead
    ///
    pub const ContainmentMaskChanged = containmentMaskChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn containmentMaskChanged(self: QQuickItem) void {
        qtc.QQuickItem_ContainmentMaskChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContainmentMaskChanged` instead
    ///
    pub const OnContainmentMaskChanged = onContainmentMaskChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onContainmentMaskChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ContainmentMaskChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteChanged` instead
    ///
    pub const PaletteChanged = paletteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn paletteChanged(self: QQuickItem) void {
        qtc.QQuickItem_PaletteChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteChanged` instead
    ///
    pub const OnPaletteChanged = onPaletteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onPaletteChanged(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteCreated` instead
    ///
    pub const PaletteCreated = paletteCreated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn paletteCreated(self: QQuickItem) void {
        qtc.QQuickItem_PaletteCreated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteCreated` instead
    ///
    pub const OnPaletteCreated = onPaletteCreated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onPaletteCreated(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_PaletteCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QQuickItem, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickItem_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuickItem, callback: *const fn (QQuickItem, QEvent) callconv(.c) bool) void {
        qtc.QQuickItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: QQuickItem, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isComponentComplete` instead
    ///
    pub const IsComponentComplete = isComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn isComponentComplete(self: QQuickItem) bool {
        return qtc.QQuickItem_IsComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsComponentComplete` instead
    ///
    pub const OnIsComponentComplete = onIsComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsComponentComplete(self: QQuickItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickItem_OnIsComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsComponentComplete` instead
    ///
    pub const SuperIsComponentComplete = superIsComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superIsComponentComplete(self: QQuickItem) bool {
        return qtc.QQuickItem_SuperIsComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn itemChange(self: QQuickItem, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickItem_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: qquickitem_enums.ItemChange, param2: QQuickItem__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuickItem, callback: *const fn (QQuickItem, i32, QQuickItem__ItemChangeData) callconv(.c) void) void {
        qtc.QQuickItem_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuickItem, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickItem_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `geometryChange` instead
    ///
    pub const GeometryChange = geometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn geometryChange(self: QQuickItem, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickItem_GeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChange` instead
    ///
    pub const OnGeometryChange = onGeometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, newGeometry: QRectF, oldGeometry: QRectF) callconv(.c) void `
    ///
    pub fn onGeometryChange(self: QQuickItem, callback: *const fn (QQuickItem, QRectF, QRectF) callconv(.c) void) void {
        qtc.QQuickItem_OnGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeometryChange` instead
    ///
    pub const SuperGeometryChange = superGeometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn superGeometryChange(self: QQuickItem, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickItem_SuperGeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `updateInputMethod` instead
    ///
    pub const UpdateInputMethod = updateInputMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn updateInputMethod(self: QQuickItem) void {
        qtc.QQuickItem_UpdateInputMethod(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateInputMethod` instead
    ///
    pub const OnUpdateInputMethod = onUpdateInputMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateInputMethod(self: QQuickItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickItem_OnUpdateInputMethod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateInputMethod` instead
    ///
    pub const SuperUpdateInputMethod = superUpdateInputMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superUpdateInputMethod(self: QQuickItem) void {
        qtc.QQuickItem_SuperUpdateInputMethod(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthValid` instead
    ///
    pub const WidthValid = widthValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn widthValid(self: QQuickItem) bool {
        return qtc.QQuickItem_WidthValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthValid` instead
    ///
    pub const OnWidthValid = onWidthValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onWidthValid(self: QQuickItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickItem_OnWidthValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWidthValid` instead
    ///
    pub const SuperWidthValid = superWidthValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superWidthValid(self: QQuickItem) bool {
        return qtc.QQuickItem_SuperWidthValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightValid` instead
    ///
    pub const HeightValid = heightValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn heightValid(self: QQuickItem) bool {
        return qtc.QQuickItem_HeightValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightValid` instead
    ///
    pub const OnHeightValid = onHeightValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHeightValid(self: QQuickItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickItem_OnHeightValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeightValid` instead
    ///
    pub const SuperHeightValid = superHeightValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superHeightValid(self: QQuickItem) bool {
        return qtc.QQuickItem_SuperHeightValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImplicitSize` instead
    ///
    pub const SetImplicitSize = setImplicitSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn setImplicitSize(self: QQuickItem, param1: f64, param2: f64) void {
        qtc.QQuickItem_SetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onSetImplicitSize` instead
    ///
    pub const OnSetImplicitSize = onSetImplicitSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: f64, param2: f64) callconv(.c) void `
    ///
    pub fn onSetImplicitSize(self: QQuickItem, callback: *const fn (QQuickItem, f64, f64) callconv(.c) void) void {
        qtc.QQuickItem_OnSetImplicitSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetImplicitSize` instead
    ///
    pub const SuperSetImplicitSize = superSetImplicitSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn superSetImplicitSize(self: QQuickItem, param1: f64, param2: f64) void {
        qtc.QQuickItem_SuperSetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `classBegin` instead
    ///
    pub const ClassBegin = classBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn classBegin(self: QQuickItem) void {
        qtc.QQuickItem_ClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClassBegin` instead
    ///
    pub const OnClassBegin = onClassBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuickItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickItem_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClassBegin` instead
    ///
    pub const SuperClassBegin = superClassBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superClassBegin(self: QQuickItem) void {
        qtc.QQuickItem_SuperClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `componentComplete` instead
    ///
    pub const ComponentComplete = componentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn componentComplete(self: QQuickItem) void {
        qtc.QQuickItem_ComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComponentComplete` instead
    ///
    pub const OnComponentComplete = onComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuickItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickItem_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superComponentComplete` instead
    ///
    pub const SuperComponentComplete = superComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superComponentComplete(self: QQuickItem) void {
        qtc.QQuickItem_SuperComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickItem_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QQuickItem, callback: *const fn (QQuickItem, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickItem_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickItem_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QQuickItem, callback: *const fn (QQuickItem, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickItem_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickItem_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QQuickItem, callback: *const fn (QQuickItem, QInputMethodEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickItem_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusInEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickItem_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QQuickItem, callback: *const fn (QQuickItem, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickItem_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickItem_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QQuickItem, callback: *const fn (QQuickItem, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickItem_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QQuickItem, callback: *const fn (QQuickItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QQuickItem, callback: *const fn (QQuickItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QQuickItem, callback: *const fn (QQuickItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QQuickItem, callback: *const fn (QQuickItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickItem_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseUngrabEvent` instead
    ///
    pub const MouseUngrabEvent = mouseUngrabEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn mouseUngrabEvent(self: QQuickItem) void {
        qtc.QQuickItem_MouseUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMouseUngrabEvent` instead
    ///
    pub const OnMouseUngrabEvent = onMouseUngrabEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onMouseUngrabEvent(self: QQuickItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickItem_OnMouseUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseUngrabEvent` instead
    ///
    pub const SuperMouseUngrabEvent = superMouseUngrabEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superMouseUngrabEvent(self: QQuickItem) void {
        qtc.QQuickItem_SuperMouseUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `touchUngrabEvent` instead
    ///
    pub const TouchUngrabEvent = touchUngrabEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn touchUngrabEvent(self: QQuickItem) void {
        qtc.QQuickItem_TouchUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTouchUngrabEvent` instead
    ///
    pub const OnTouchUngrabEvent = onTouchUngrabEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onTouchUngrabEvent(self: QQuickItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickItem_OnTouchUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTouchUngrabEvent` instead
    ///
    pub const SuperTouchUngrabEvent = superTouchUngrabEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superTouchUngrabEvent(self: QQuickItem) void {
        qtc.QQuickItem_SuperTouchUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickItem_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QQuickItem, callback: *const fn (QQuickItem, QWheelEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickItem_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `touchEvent` instead
    ///
    pub const TouchEvent = touchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn touchEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickItem_TouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTouchEvent` instead
    ///
    pub const OnTouchEvent = onTouchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QTouchEvent) callconv(.c) void `
    ///
    pub fn onTouchEvent(self: QQuickItem, callback: *const fn (QQuickItem, QTouchEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTouchEvent` instead
    ///
    pub const SuperTouchEvent = superTouchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn superTouchEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickItem_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `hoverEnterEvent` instead
    ///
    pub const HoverEnterEvent = hoverEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverEnterEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickItem_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverEnterEvent` instead
    ///
    pub const OnHoverEnterEvent = onHoverEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverEnterEvent(self: QQuickItem, callback: *const fn (QQuickItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHoverEnterEvent` instead
    ///
    pub const SuperHoverEnterEvent = superHoverEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverEnterEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickItem_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `hoverMoveEvent` instead
    ///
    pub const HoverMoveEvent = hoverMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverMoveEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickItem_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverMoveEvent` instead
    ///
    pub const OnHoverMoveEvent = onHoverMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverMoveEvent(self: QQuickItem, callback: *const fn (QQuickItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHoverMoveEvent` instead
    ///
    pub const SuperHoverMoveEvent = superHoverMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverMoveEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickItem_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `hoverLeaveEvent` instead
    ///
    pub const HoverLeaveEvent = hoverLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverLeaveEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickItem_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverLeaveEvent` instead
    ///
    pub const OnHoverLeaveEvent = onHoverLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverLeaveEvent(self: QQuickItem, callback: *const fn (QQuickItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHoverLeaveEvent` instead
    ///
    pub const SuperHoverLeaveEvent = superHoverLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverLeaveEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickItem_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickItem_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QQuickItem, callback: *const fn (QQuickItem, QDragEnterEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickItem_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickItem_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QQuickItem, callback: *const fn (QQuickItem, QDragMoveEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickItem_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickItem_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QQuickItem, callback: *const fn (QQuickItem, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickItem_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn dropEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickItem_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QQuickItem, callback: *const fn (QQuickItem, QDropEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn superDropEvent(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickItem_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `childMouseEventFilter` instead
    ///
    pub const ChildMouseEventFilter = childMouseEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn childMouseEventFilter(self: QQuickItem, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickItem_ChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onChildMouseEventFilter` instead
    ///
    pub const OnChildMouseEventFilter = onChildMouseEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QQuickItem, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onChildMouseEventFilter(self: QQuickItem, callback: *const fn (QQuickItem, QQuickItem, QEvent) callconv(.c) bool) void {
        qtc.QQuickItem_OnChildMouseEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChildMouseEventFilter` instead
    ///
    pub const SuperChildMouseEventFilter = superChildMouseEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superChildMouseEventFilter(self: QQuickItem, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickItem_SuperChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `updatePaintNode` instead
    ///
    pub const UpdatePaintNode = updatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePaintNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn updatePaintNode(self: QQuickItem, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickItem_UpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `onUpdatePaintNode` instead
    ///
    pub const OnUpdatePaintNode = onUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePaintNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QSGNode, param2: QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode `
    ///
    pub fn onUpdatePaintNode(self: QQuickItem, callback: *const fn (QQuickItem, QSGNode, QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode) void {
        qtc.QQuickItem_OnUpdatePaintNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdatePaintNode` instead
    ///
    pub const SuperUpdatePaintNode = superUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePaintNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn superUpdatePaintNode(self: QQuickItem, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickItem_SuperUpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `releaseResources` instead
    ///
    pub const ReleaseResources = releaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#releaseResources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn releaseResources(self: QQuickItem) void {
        qtc.QQuickItem_ReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleaseResources` instead
    ///
    pub const OnReleaseResources = onReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#releaseResources)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReleaseResources(self: QQuickItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickItem_OnReleaseResources(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReleaseResources` instead
    ///
    pub const SuperReleaseResources = superReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#releaseResources)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superReleaseResources(self: QQuickItem) void {
        qtc.QQuickItem_SuperReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updatePolish` instead
    ///
    pub const UpdatePolish = updatePolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn updatePolish(self: QQuickItem) void {
        qtc.QQuickItem_UpdatePolish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdatePolish` instead
    ///
    pub const OnUpdatePolish = onUpdatePolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdatePolish(self: QQuickItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickItem_OnUpdatePolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdatePolish` instead
    ///
    pub const SuperUpdatePolish = superUpdatePolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    pub fn superUpdatePolish(self: QQuickItem) void {
        qtc.QQuickItem_SuperUpdatePolish(@ptrCast(self.ptr));
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
        var _str = qtc.QQuickItem_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickItem.tr2: Memory allocation failed");
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
        var _str = qtc.QQuickItem_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickItem.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlag2(self: QQuickItem, flag: i32, enabled: bool) void {
        qtc.QQuickItem_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `grabToImage22` instead
    ///
    pub const GrabToImage22 = grabToImage22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: QJSValue `
    ///
    /// ` targetSize: QSize `
    ///
    pub fn grabToImage22(self: QQuickItem, callback: anytype, targetSize: anytype) bool {
        comptime _ = @TypeOf(callback)._is_QJSValue;
        comptime _ = @TypeOf(targetSize)._is_QSize;
        return qtc.QQuickItem_GrabToImage22(@ptrCast(self.ptr), @ptrCast(callback.ptr), @ptrCast(targetSize.ptr));
    }

    /// ### DEPRECATED: Use `nextItemInFocusChain1` instead
    ///
    pub const NextItemInFocusChain1 = nextItemInFocusChain1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` forward: bool `
    ///
    pub fn nextItemInFocusChain1(self: QQuickItem, forward: bool) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_NextItemInFocusChain1(@ptrCast(self.ptr), forward) };
    }

    /// ### DEPRECATED: Use `updateInputMethod1` instead
    ///
    pub const UpdateInputMethod1 = updateInputMethod1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` queries: flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn updateInputMethod1(self: QQuickItem, queries: i32) void {
        qtc.QQuickItem_UpdateInputMethod1(@ptrCast(self.ptr), @bitCast(queries));
    }

    /// ### DEPRECATED: Use `onUpdateInputMethod1` instead
    ///
    pub const OnUpdateInputMethod1 = onUpdateInputMethod1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, queries: flag of qnamespace_enums.InputMethodQuery) callconv(.c) void `
    ///
    pub fn onUpdateInputMethod1(self: QQuickItem, callback: *const fn (QQuickItem, i32) callconv(.c) void) void {
        qtc.QQuickItem_OnUpdateInputMethod1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateInputMethod1` instead
    ///
    pub const SuperUpdateInputMethod1 = superUpdateInputMethod1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` queries: flag of qnamespace_enums.InputMethodQuery `
    ///
    pub fn superUpdateInputMethod1(self: QQuickItem, queries: i32) void {
        qtc.QQuickItem_SuperUpdateInputMethod1(@ptrCast(self.ptr), @bitCast(queries));
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
    /// ` self: QQuickItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickItem.objectName: Memory allocation failed");
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
    /// ` self: QQuickItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickItem, name: []const u8) void {
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
    /// ` self: QQuickItem `
    ///
    pub fn isWidgetType(self: QQuickItem) bool {
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
    /// ` self: QQuickItem `
    ///
    pub fn isWindowType(self: QQuickItem) bool {
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
    /// ` self: QQuickItem `
    ///
    pub fn isQuickItemType(self: QQuickItem) bool {
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
    /// ` self: QQuickItem `
    ///
    pub fn signalsBlocked(self: QQuickItem) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickItem, b: bool) bool {
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
    /// ` self: QQuickItem `
    ///
    pub fn thread(self: QQuickItem) QThread {
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
    /// ` self: QQuickItem `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickItem, _thread: anytype) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickItem, interval: i32) i32 {
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
    /// ` self: QQuickItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickItem, time: i64) i32 {
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
    /// ` self: QQuickItem `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuickItem, id: i32) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickItem, id: i32) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickItem.children: Memory allocation failed");
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
    /// ` self: QQuickItem `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuickItem, _parent: anytype) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickItem, filterObj: anytype) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickItem, obj: anytype) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickItem `
    ///
    pub fn disconnect3(self: QQuickItem) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickItem, receiver: anytype) bool {
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
    /// ` self: QQuickItem `
    ///
    pub fn dumpObjectTree(self: QQuickItem) void {
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
    /// ` self: QQuickItem `
    ///
    pub fn dumpObjectInfo(self: QQuickItem) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickItem, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickItem.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickItem.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickItem `
    ///
    pub fn bindingStorage(self: QQuickItem) QBindingStorage {
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
    /// ` self: QQuickItem `
    ///
    pub fn bindingStorage2(self: QQuickItem) QBindingStorage {
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
    /// ` self: QQuickItem `
    ///
    pub fn destroyed(self: QQuickItem) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickItem, callback: *const fn (QQuickItem) callconv(.c) void) void {
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
    /// ` self: QQuickItem `
    ///
    pub fn parent(self: QQuickItem) QObject {
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
    /// ` self: QQuickItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickItem, classname: [:0]const u8) bool {
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
    /// ` self: QQuickItem `
    ///
    pub fn deleteLater(self: QQuickItem) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickItem, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickItem, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickItem, signal: [:0]const u8) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickItem, param1: anytype) void {
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
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickItem, callback: *const fn (QQuickItem, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QQmlParserStatus
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem `
    ///
    /// ` param1: QQmlParserStatus `
    ///
    pub fn operatorAssign(self: QQuickItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlParserStatus;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlParserStatus")) param1.asQQmlParserStatus() else param1;
        qtc.QQmlParserStatus_OperatorAssign(@ptrCast(self.asQQmlParserStatus().ptr), @ptrCast(param1_.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuickItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuickItem, callback: *const fn (QQuickItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuickItem, callback: *const fn (QQuickItem, QTimerEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuickItem, callback: *const fn (QQuickItem, QChildEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuickItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuickItem, callback: *const fn (QQuickItem, QEvent) callconv(.c) void) void {
        qtc.QQuickItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuickItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuickItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuickItem, callback: *const fn (QQuickItem, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuickItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuickItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuickItem, callback: *const fn (QQuickItem, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    pub fn sender(self: QQuickItem) QObject {
        return .{ .ptr = qtc.QQuickItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickItem `
    ///
    pub fn superSender(self: QQuickItem) QObject {
        return .{ .ptr = qtc.QQuickItem_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuickItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    pub fn senderSignalIndex(self: QQuickItem) i32 {
        return qtc.QQuickItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickItem `
    ///
    pub fn superSenderSignalIndex(self: QQuickItem) i32 {
        return qtc.QQuickItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuickItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuickItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuickItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuickItem, callback: *const fn (QQuickItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuickItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuickItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuickItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickItem`
    ///
    /// ` callback: *const fn (self: QQuickItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuickItem, callback: *const fn (QQuickItem, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuickItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickItem `
    ///
    /// ` callback: *const fn (self: QQuickItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickItem, callback: *const fn (QQuickItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dtor.QQuickItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickItem `
    ///
    pub fn delete(self: QQuickItem) void {
        qtc.QQuickItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)
pub const QQuickItem__ItemChangeData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickItem__ItemChangeData,

    pub const _is_QQuickItem__ItemChangeData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickItem::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickItem__ItemChangeData `
    ///
    pub fn new(other: anytype) QQuickItem__ItemChangeData {
        comptime _ = @TypeOf(other)._is_QQuickItem__ItemChangeData;
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickItem::ItemChangeData object and invalidate the source QQuickItem::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickItem__ItemChangeData `
    ///
    pub fn new2(other: anytype) QQuickItem__ItemChangeData {
        comptime _ = @TypeOf(other)._is_QQuickItem__ItemChangeData;
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQuickItem::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: QQuickItem `
    ///
    pub fn new3(v: anytype) QQuickItem__ItemChangeData {
        comptime _ = @TypeOf(v)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_new3(@ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQuickItem::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: QQuickWindow `
    ///
    pub fn new4(v: anytype) QQuickItem__ItemChangeData {
        comptime _ = @TypeOf(v)._is_QQuickWindow;
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_new4(@ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QQuickItem::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: f64 `
    ///
    pub fn new5(v: f64) QQuickItem__ItemChangeData {
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_new5(@bitCast(v)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QQuickItem::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn new6(v: bool) QQuickItem__ItemChangeData {
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_new6(v) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    /// ` other: QQuickItem__ItemChangeData `
    ///
    pub fn copyAssign(self: QQuickItem__ItemChangeData, other: QQuickItem__ItemChangeData) void {
        qtc.QQuickItem__ItemChangeData_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    /// ` other: QQuickItem__ItemChangeData `
    ///
    pub fn moveAssign(self: QQuickItem__ItemChangeData, other: QQuickItem__ItemChangeData) void {
        qtc.QQuickItem__ItemChangeData_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#item-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    pub fn item(self: QQuickItem__ItemChangeData) QQuickItem {
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_Item(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#item-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    /// ` _item: QQuickItem `
    ///
    pub fn setItem(self: QQuickItem__ItemChangeData, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QQuickItem;
        qtc.QQuickItem__ItemChangeData_SetItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#window-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    pub fn window(self: QQuickItem__ItemChangeData) QQuickWindow {
        return .{ .ptr = qtc.QQuickItem__ItemChangeData_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindow` instead
    ///
    pub const SetWindow = setWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#window-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    /// ` _window: QQuickWindow `
    ///
    pub fn setWindow(self: QQuickItem__ItemChangeData, _window: anytype) void {
        comptime _ = @TypeOf(_window)._is_QQuickWindow;
        qtc.QQuickItem__ItemChangeData_SetWindow(@ptrCast(self.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `realValue` instead
    ///
    pub const RealValue = realValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#realValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    pub fn realValue(self: QQuickItem__ItemChangeData) f64 {
        return qtc.QQuickItem__ItemChangeData_RealValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRealValue` instead
    ///
    pub const SetRealValue = setRealValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#realValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    /// ` _realValue: f64 `
    ///
    pub fn setRealValue(self: QQuickItem__ItemChangeData, _realValue: f64) void {
        qtc.QQuickItem__ItemChangeData_SetRealValue(@ptrCast(self.ptr), @bitCast(_realValue));
    }

    /// ### DEPRECATED: Use `boolValue` instead
    ///
    pub const BoolValue = boolValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#boolValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    pub fn boolValue(self: QQuickItem__ItemChangeData) bool {
        return qtc.QQuickItem__ItemChangeData_BoolValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBoolValue` instead
    ///
    pub const SetBoolValue = setBoolValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#boolValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    /// ` _boolValue: bool `
    ///
    pub fn setBoolValue(self: QQuickItem__ItemChangeData, _boolValue: bool) void {
        qtc.QQuickItem__ItemChangeData_SetBoolValue(@ptrCast(self.ptr), _boolValue);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickItem__ItemChangeData `
    ///
    pub fn delete(self: QQuickItem__ItemChangeData) void {
        qtc.QQuickItem__ItemChangeData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html)
pub const QQuickItem__UpdatePaintNodeData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickItem__UpdatePaintNodeData,

    pub const _is_QQuickItem__UpdatePaintNodeData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickItem::UpdatePaintNodeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn new(other: anytype) QQuickItem__UpdatePaintNodeData {
        comptime _ = @TypeOf(other)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickItem__UpdatePaintNodeData_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickItem::UpdatePaintNodeData object and invalidate the source QQuickItem::UpdatePaintNodeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn new2(other: anytype) QQuickItem__UpdatePaintNodeData {
        comptime _ = @TypeOf(other)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickItem__UpdatePaintNodeData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem__UpdatePaintNodeData `
    ///
    /// ` other: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn copyAssign(self: QQuickItem__UpdatePaintNodeData, other: QQuickItem__UpdatePaintNodeData) void {
        qtc.QQuickItem__UpdatePaintNodeData_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickItem__UpdatePaintNodeData `
    ///
    /// ` other: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn moveAssign(self: QQuickItem__UpdatePaintNodeData, other: QQuickItem__UpdatePaintNodeData) void {
        qtc.QQuickItem__UpdatePaintNodeData_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `transformNode` instead
    ///
    pub const TransformNode = transformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html#transformNode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn transformNode(self: QQuickItem__UpdatePaintNodeData) QSGTransformNode {
        return .{ .ptr = qtc.QQuickItem__UpdatePaintNodeData_TransformNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransformNode` instead
    ///
    pub const SetTransformNode = setTransformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html#transformNode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickItem__UpdatePaintNodeData `
    ///
    /// ` _transformNode: QSGTransformNode `
    ///
    pub fn setTransformNode(self: QQuickItem__UpdatePaintNodeData, _transformNode: anytype) void {
        comptime _ = @TypeOf(_transformNode)._is_QSGTransformNode;
        qtc.QQuickItem__UpdatePaintNodeData_SetTransformNode(@ptrCast(self.ptr), @ptrCast(_transformNode.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn delete(self: QQuickItem__UpdatePaintNodeData) void {
        qtc.QQuickItem__UpdatePaintNodeData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#public-types)
pub const enums = struct {
    pub const Flag = enum {
        pub const ItemClipsChildrenToShape: i32 = 1;
        pub const ItemAcceptsInputMethod: i32 = 2;
        pub const ItemIsFocusScope: i32 = 4;
        pub const ItemHasContents: i32 = 8;
        pub const ItemAcceptsDrops: i32 = 16;
        pub const ItemIsViewport: i32 = 32;
        pub const ItemObservesViewport: i32 = 64;
    };

    pub const ItemChange = enum {
        pub const ItemChildAddedChange: i32 = 0;
        pub const ItemChildRemovedChange: i32 = 1;
        pub const ItemSceneChange: i32 = 2;
        pub const ItemVisibleHasChanged: i32 = 3;
        pub const ItemParentHasChanged: i32 = 4;
        pub const ItemOpacityHasChanged: i32 = 5;
        pub const ItemActiveFocusHasChanged: i32 = 6;
        pub const ItemRotationHasChanged: i32 = 7;
        pub const ItemAntialiasingHasChanged: i32 = 8;
        pub const ItemDevicePixelRatioHasChanged: i32 = 9;
        pub const ItemEnabledHasChanged: i32 = 10;
    };

    pub const TransformOrigin = enum {
        pub const TopLeft: i32 = 0;
        pub const Top: i32 = 1;
        pub const TopRight: i32 = 2;
        pub const Left: i32 = 3;
        pub const Center: i32 = 4;
        pub const Right: i32 = 5;
        pub const BottomLeft: i32 = 6;
        pub const Bottom: i32 = 7;
        pub const BottomRight: i32 = 8;
    };
};
