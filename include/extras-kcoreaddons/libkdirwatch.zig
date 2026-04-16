const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const kdirwatch_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kdirwatch.html)
pub const KDirWatch = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDirWatch,

    pub const _is_KDirWatch = {};
    pub const _is_QObject = {};

    /// New constructs a new KDirWatch object.
    ///
    pub fn New() KDirWatch {
        return .{ .ptr = qtc.KDirWatch_new() };
    }

    /// New2 constructs a new KDirWatch object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KDirWatch {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KDirWatch_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn MetaObject(self: KDirWatch) QMetaObject {
        return .{ .ptr = qtc.KDirWatch_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KDirWatch, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDirWatch_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirWatch `
    ///
    pub fn SuperMetaObject(self: KDirWatch) QMetaObject {
        return .{ .ptr = qtc.KDirWatch_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KDirWatch, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirWatch_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KDirWatch, callback: *const fn (KDirWatch, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDirWatch_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KDirWatch, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirWatch_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KDirWatch, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirWatch_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KDirWatch, callback: *const fn (KDirWatch, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDirWatch_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KDirWatch, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirWatch_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirwatch.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#addDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn AddDir(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_AddDir(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#addFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` file: []const u8 `
    ///
    pub fn AddFile(self: KDirWatch, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KDirWatch_AddFile(@ptrCast(self.ptr), file_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#ctime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn Ctime(self: KDirWatch, path: []const u8) QDateTime {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KDirWatch_Ctime(@ptrCast(self.ptr), path_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#removeDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn RemoveDir(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_RemoveDir(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#removeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` file: []const u8 `
    ///
    pub fn RemoveFile(self: KDirWatch, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KDirWatch_RemoveFile(@ptrCast(self.ptr), file_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#stopDirScan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn StopDirScan(self: KDirWatch, path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDirWatch_StopDirScan(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#restartDirScan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn RestartDirScan(self: KDirWatch, path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDirWatch_RestartDirScan(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#startScan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn StartScan(self: KDirWatch) void {
        qtc.KDirWatch_StartScan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#stopScan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn StopScan(self: KDirWatch) void {
        qtc.KDirWatch_StopScan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#isStopped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn IsStopped(self: KDirWatch) bool {
        return qtc.KDirWatch_IsStopped(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn Contains(self: KDirWatch, path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.KDirWatch_Contains(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#internalMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ## Returns:
    ///
    /// ` kdirwatch_enums.Method `
    ///
    pub fn InternalMethod(self: KDirWatch) i32 {
        return qtc.KDirWatch_InternalMethod(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#self)
    ///
    pub fn Self() KDirWatch {
        return .{ .ptr = qtc.KDirWatch_Self() };
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#exists)
    ///
    pub fn Exists() bool {
        return qtc.KDirWatch_Exists();
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KDirWatch, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirWatch_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KDirWatch, callback: *const fn (KDirWatch, QEvent) callconv(.c) bool) void {
        qtc.KDirWatch_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KDirWatch, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirWatch_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#setCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetCreated(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_SetCreated(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#setDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetDirty(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_SetDirty(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#setDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetDeleted(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_SetDeleted(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#dirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn Dirty(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_Dirty(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#dirty)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDirty(self: KDirWatch, callback: *const fn (KDirWatch, [*:0]const u8) callconv(.c) void) void {
        qtc.KDirWatch_Connect_Dirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#created)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn Created(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_Created(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#created)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCreated(self: KDirWatch, callback: *const fn (KDirWatch, [*:0]const u8) callconv(.c) void) void {
        qtc.KDirWatch_Connect_Created(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#deleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    pub fn Deleted(self: KDirWatch, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_Deleted(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#deleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDeleted(self: KDirWatch, callback: *const fn (KDirWatch, [*:0]const u8) callconv(.c) void) void {
        qtc.KDirWatch_Connect_Deleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirwatch.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirwatch.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#addDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` path: []const u8 `
    ///
    /// ` watchModes: flag of kdirwatch_enums.WatchMode `
    ///
    pub fn AddDir2(self: KDirWatch, path: []const u8, watchModes: i32) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KDirWatch_AddDir2(@ptrCast(self.ptr), path_str, @bitCast(watchModes));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#startScan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` notify: bool `
    ///
    pub fn StartScan1(self: KDirWatch, notify: bool) void {
        qtc.KDirWatch_StartScan1(@ptrCast(self.ptr), notify);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#startScan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` notify: bool `
    ///
    /// ` skippedToo: bool `
    ///
    pub fn StartScan2(self: KDirWatch, notify: bool, skippedToo: bool) void {
        qtc.KDirWatch_StartScan2(@ptrCast(self.ptr), notify, skippedToo);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KDirWatch, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirwatch.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KDirWatch, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn IsWidgetType(self: KDirWatch) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn IsWindowType(self: KDirWatch) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn IsQuickItemType(self: KDirWatch) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn SignalsBlocked(self: KDirWatch) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KDirWatch, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn Thread(self: KDirWatch) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KDirWatch, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KDirWatch, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KDirWatch, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KDirWatch, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KDirWatch, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KDirWatch, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kdirwatch.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KDirWatch, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KDirWatch, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KDirWatch, obj: anytype) void {
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
    /// ` self: KDirWatch `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KDirWatch, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KDirWatch `
    ///
    pub fn Disconnect3(self: KDirWatch) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KDirWatch, receiver: anytype) bool {
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
    /// ` self: KDirWatch `
    ///
    pub fn DumpObjectTree(self: KDirWatch) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn DumpObjectInfo(self: KDirWatch) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KDirWatch, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KDirWatch `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KDirWatch, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KDirWatch, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kdirwatch.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdirwatch.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDirWatch `
    ///
    pub fn BindingStorage(self: KDirWatch) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn BindingStorage2(self: KDirWatch) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn Destroyed(self: KDirWatch) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KDirWatch, callback: *const fn (KDirWatch) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn Parent(self: KDirWatch) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KDirWatch, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn DeleteLater(self: KDirWatch) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KDirWatch, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KDirWatch, time: i64, timerType: i32) i32 {
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
    /// ` self: KDirWatch `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KDirWatch, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KDirWatch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KDirWatch, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KDirWatch, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KDirWatch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KDirWatch, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirWatch `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KDirWatch, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirWatch `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KDirWatch, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KDirWatch, callback: *const fn (KDirWatch, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KDirWatch, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirWatch_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirWatch `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KDirWatch, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirWatch_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KDirWatch, callback: *const fn (KDirWatch, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDirWatch_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KDirWatch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirWatch_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirWatch `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KDirWatch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirWatch_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KDirWatch, callback: *const fn (KDirWatch, QTimerEvent) callconv(.c) void) void {
        qtc.KDirWatch_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KDirWatch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirWatch_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirWatch `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KDirWatch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirWatch_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KDirWatch, callback: *const fn (KDirWatch, QChildEvent) callconv(.c) void) void {
        qtc.KDirWatch_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KDirWatch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirWatch_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirWatch `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KDirWatch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirWatch_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KDirWatch, callback: *const fn (KDirWatch, QEvent) callconv(.c) void) void {
        qtc.KDirWatch_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KDirWatch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirWatch_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirWatch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KDirWatch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirWatch_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KDirWatch, callback: *const fn (KDirWatch, QMetaMethod) callconv(.c) void) void {
        qtc.KDirWatch_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KDirWatch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirWatch_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirWatch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KDirWatch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirWatch_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KDirWatch, callback: *const fn (KDirWatch, QMetaMethod) callconv(.c) void) void {
        qtc.KDirWatch_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn Sender(self: KDirWatch) QObject {
        return .{ .ptr = qtc.KDirWatch_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirWatch `
    ///
    pub fn SuperSender(self: KDirWatch) QObject {
        return .{ .ptr = qtc.KDirWatch_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KDirWatch, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDirWatch_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    pub fn SenderSignalIndex(self: KDirWatch) i32 {
        return qtc.KDirWatch_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirWatch `
    ///
    pub fn SuperSenderSignalIndex(self: KDirWatch) i32 {
        return qtc.KDirWatch_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KDirWatch, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirWatch_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KDirWatch, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirWatch_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirWatch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KDirWatch, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirWatch_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KDirWatch, callback: *const fn (KDirWatch, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirWatch_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirWatch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KDirWatch, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirWatch_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirWatch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KDirWatch, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirWatch_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch`
    ///
    /// ` callback: *const fn (self: KDirWatch, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KDirWatch, callback: *const fn (KDirWatch, QMetaMethod) callconv(.c) bool) void {
        qtc.KDirWatch_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirWatch `
    ///
    /// ` callback: *const fn (self: KDirWatch, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KDirWatch, callback: *const fn (KDirWatch, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kdirwatch.html#dtor.KDirWatch)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KDirWatch `
    ///
    pub fn Delete(self: KDirWatch) void {
        qtc.KDirWatch_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kdirwatch.html#public-types)
pub const enums = struct {
    pub const WatchMode = enum(i32) {
        pub const WatchDirOnly: i32 = 0;
        pub const WatchFiles: i32 = 1;
        pub const WatchSubDirs: i32 = 2;
    };

    pub const Method = enum(i32) {
        pub const INotify: i32 = 0;
        pub const Stat: i32 = 1;
        pub const QFSWatch: i32 = 2;
    };
};
