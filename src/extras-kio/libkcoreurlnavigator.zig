const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html)
pub const KCoreUrlNavigator = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreUrlNavigator,

    pub const _is_KCoreUrlNavigator = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreUrlNavigator object in C++ memory
    ///
    pub fn new() KCoreUrlNavigator {
        return .{ .ptr = qtc.KCoreUrlNavigator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreUrlNavigator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn new2(url: anytype) KCoreUrlNavigator {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KCoreUrlNavigator_new2(@ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KCoreUrlNavigator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(url: anytype, _parent: anytype) KCoreUrlNavigator {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KCoreUrlNavigator_new3(@ptrCast(url.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn metaObject(self: KCoreUrlNavigator) QMetaObject {
        return .{ .ptr = qtc.KCoreUrlNavigator_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KCoreUrlNavigator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCoreUrlNavigator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn superMetaObject(self: KCoreUrlNavigator) QMetaObject {
        return .{ .ptr = qtc.KCoreUrlNavigator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KCoreUrlNavigator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreUrlNavigator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCoreUrlNavigator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KCoreUrlNavigator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreUrlNavigator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KCoreUrlNavigator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreUrlNavigator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCoreUrlNavigator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KCoreUrlNavigator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreUrlNavigator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreUrlNavigator.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentLocationUrl` instead
    ///
    pub const CurrentLocationUrl = currentLocationUrl;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#currentLocationUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn currentLocationUrl(self: KCoreUrlNavigator) QUrl {
        return .{ .ptr = qtc.KCoreUrlNavigator_CurrentLocationUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCurrentLocationUrl` instead
    ///
    pub const SetCurrentLocationUrl = setCurrentLocationUrl;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#setCurrentLocationUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` url: QUrl `
    ///
    pub fn setCurrentLocationUrl(self: KCoreUrlNavigator, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KCoreUrlNavigator_SetCurrentLocationUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `currentLocationUrlChanged` instead
    ///
    pub const CurrentLocationUrlChanged = currentLocationUrlChanged;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#currentLocationUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn currentLocationUrlChanged(self: KCoreUrlNavigator) void {
        qtc.KCoreUrlNavigator_CurrentLocationUrlChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentUrlAboutToChange` instead
    ///
    pub const CurrentUrlAboutToChange = currentUrlAboutToChange;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#currentUrlAboutToChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` newUrl: QUrl `
    ///
    pub fn currentUrlAboutToChange(self: KCoreUrlNavigator, newUrl: anytype) void {
        comptime _ = @TypeOf(newUrl)._is_QUrl;
        qtc.KCoreUrlNavigator_CurrentUrlAboutToChange(@ptrCast(self.ptr), @ptrCast(newUrl.ptr));
    }

    /// ### DEPRECATED: Use `historySize` instead
    ///
    pub const HistorySize = historySize;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historySize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn historySize(self: KCoreUrlNavigator) i32 {
        return qtc.KCoreUrlNavigator_HistorySize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `historySizeChanged` instead
    ///
    pub const HistorySizeChanged = historySizeChanged;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historySizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn historySizeChanged(self: KCoreUrlNavigator) void {
        qtc.KCoreUrlNavigator_HistorySizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `urlSelectionRequested` instead
    ///
    pub const UrlSelectionRequested = urlSelectionRequested;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#urlSelectionRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` url: QUrl `
    ///
    pub fn urlSelectionRequested(self: KCoreUrlNavigator, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KCoreUrlNavigator_UrlSelectionRequested(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `historyIndex` instead
    ///
    pub const HistoryIndex = historyIndex;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historyIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn historyIndex(self: KCoreUrlNavigator) i32 {
        return qtc.KCoreUrlNavigator_HistoryIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `historyIndexChanged` instead
    ///
    pub const HistoryIndexChanged = historyIndexChanged;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historyIndexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn historyIndexChanged(self: KCoreUrlNavigator) void {
        qtc.KCoreUrlNavigator_HistoryIndexChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `historyChanged` instead
    ///
    pub const HistoryChanged = historyChanged;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#historyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn historyChanged(self: KCoreUrlNavigator) void {
        qtc.KCoreUrlNavigator_HistoryChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `locationUrl` instead
    ///
    pub const LocationUrl = locationUrl;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn locationUrl(self: KCoreUrlNavigator) QUrl {
        return .{ .ptr = qtc.KCoreUrlNavigator_LocationUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `saveLocationState` instead
    ///
    pub const SaveLocationState = saveLocationState;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#saveLocationState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` state: QVariant `
    ///
    pub fn saveLocationState(self: KCoreUrlNavigator, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QVariant;
        qtc.KCoreUrlNavigator_SaveLocationState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `locationState` instead
    ///
    pub const LocationState = locationState;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn locationState(self: KCoreUrlNavigator) QVariant {
        return .{ .ptr = qtc.KCoreUrlNavigator_LocationState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `goBack` instead
    ///
    pub const GoBack = goBack;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#goBack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn goBack(self: KCoreUrlNavigator) bool {
        return qtc.KCoreUrlNavigator_GoBack(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `goForward` instead
    ///
    pub const GoForward = goForward;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#goForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn goForward(self: KCoreUrlNavigator) bool {
        return qtc.KCoreUrlNavigator_GoForward(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `goUp` instead
    ///
    pub const GoUp = goUp;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#goUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn goUp(self: KCoreUrlNavigator) bool {
        return qtc.KCoreUrlNavigator_GoUp(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreUrlNavigator.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreUrlNavigator.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `locationUrl1` instead
    ///
    pub const LocationUrl1 = locationUrl1;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _historyIndex: i32 `
    ///
    pub fn locationUrl1(self: KCoreUrlNavigator, _historyIndex: i32) QUrl {
        return .{ .ptr = qtc.KCoreUrlNavigator_LocationUrl1(@ptrCast(self.ptr), @bitCast(_historyIndex)) };
    }

    /// ### DEPRECATED: Use `locationState1` instead
    ///
    pub const LocationState1 = locationState1;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#locationState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _historyIndex: i32 `
    ///
    pub fn locationState1(self: KCoreUrlNavigator, _historyIndex: i32) QVariant {
        return .{ .ptr = qtc.KCoreUrlNavigator_LocationState1(@ptrCast(self.ptr), @bitCast(_historyIndex)) };
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KCoreUrlNavigator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreUrlNavigator.objectName: Memory allocation failed");
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KCoreUrlNavigator, name: []const u8) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn isWidgetType(self: KCoreUrlNavigator) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn isWindowType(self: KCoreUrlNavigator) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn isQuickItemType(self: KCoreUrlNavigator) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn signalsBlocked(self: KCoreUrlNavigator) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KCoreUrlNavigator, b: bool) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn thread(self: KCoreUrlNavigator) QThread {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KCoreUrlNavigator, _thread: anytype) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KCoreUrlNavigator, interval: i32) i32 {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KCoreUrlNavigator, time: i64) i32 {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KCoreUrlNavigator, id: i32) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KCoreUrlNavigator, id: i32) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KCoreUrlNavigator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KCoreUrlNavigator.children: Memory allocation failed");
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KCoreUrlNavigator, _parent: anytype) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KCoreUrlNavigator, filterObj: anytype) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KCoreUrlNavigator, obj: anytype) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KCoreUrlNavigator, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn disconnect3(self: KCoreUrlNavigator) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KCoreUrlNavigator, receiver: anytype) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn dumpObjectTree(self: KCoreUrlNavigator) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn dumpObjectInfo(self: KCoreUrlNavigator) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KCoreUrlNavigator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KCoreUrlNavigator, name: [:0]const u8) QVariant {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KCoreUrlNavigator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KCoreUrlNavigator.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCoreUrlNavigator.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn bindingStorage(self: KCoreUrlNavigator) QBindingStorage {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn bindingStorage2(self: KCoreUrlNavigator) QBindingStorage {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn destroyed(self: KCoreUrlNavigator) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator) callconv(.c) void) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn parent(self: KCoreUrlNavigator) QObject {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KCoreUrlNavigator, classname: [:0]const u8) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn deleteLater(self: KCoreUrlNavigator) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KCoreUrlNavigator, interval: i32, timerType: i32) i32 {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KCoreUrlNavigator, time: i64, timerType: i32) i32 {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KCoreUrlNavigator, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KCoreUrlNavigator, signal: [:0]const u8) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KCoreUrlNavigator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KCoreUrlNavigator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KCoreUrlNavigator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KCoreUrlNavigator, param1: anytype) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QObject) callconv(.c) void) void {
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KCoreUrlNavigator, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreUrlNavigator_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KCoreUrlNavigator, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreUrlNavigator_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QEvent) callconv(.c) bool) void {
        qtc.KCoreUrlNavigator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KCoreUrlNavigator, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreUrlNavigator_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KCoreUrlNavigator, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreUrlNavigator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCoreUrlNavigator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KCoreUrlNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCoreUrlNavigator_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KCoreUrlNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCoreUrlNavigator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QTimerEvent) callconv(.c) void) void {
        qtc.KCoreUrlNavigator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KCoreUrlNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCoreUrlNavigator_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KCoreUrlNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCoreUrlNavigator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QChildEvent) callconv(.c) void) void {
        qtc.KCoreUrlNavigator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KCoreUrlNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCoreUrlNavigator_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KCoreUrlNavigator, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCoreUrlNavigator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QEvent) callconv(.c) void) void {
        qtc.KCoreUrlNavigator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KCoreUrlNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreUrlNavigator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KCoreUrlNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreUrlNavigator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreUrlNavigator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KCoreUrlNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreUrlNavigator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KCoreUrlNavigator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreUrlNavigator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreUrlNavigator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn sender(self: KCoreUrlNavigator) QObject {
        return .{ .ptr = qtc.KCoreUrlNavigator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn superSender(self: KCoreUrlNavigator) QObject {
        return .{ .ptr = qtc.KCoreUrlNavigator_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KCoreUrlNavigator, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCoreUrlNavigator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn senderSignalIndex(self: KCoreUrlNavigator) i32 {
        return qtc.KCoreUrlNavigator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn superSenderSignalIndex(self: KCoreUrlNavigator) i32 {
        return qtc.KCoreUrlNavigator_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KCoreUrlNavigator, callback: *const fn () callconv(.c) i32) void {
        qtc.KCoreUrlNavigator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KCoreUrlNavigator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreUrlNavigator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KCoreUrlNavigator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreUrlNavigator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCoreUrlNavigator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KCoreUrlNavigator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreUrlNavigator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KCoreUrlNavigator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreUrlNavigator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreUrlNavigator`
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, QMetaMethod) callconv(.c) bool) void {
        qtc.KCoreUrlNavigator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreUrlNavigator `
    ///
    /// ` callback: *const fn (self: KCoreUrlNavigator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KCoreUrlNavigator, callback: *const fn (KCoreUrlNavigator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcoreurlnavigator.html#dtor.KCoreUrlNavigator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreUrlNavigator `
    ///
    pub fn delete(self: KCoreUrlNavigator) void {
        qtc.KCoreUrlNavigator_Delete(@ptrCast(self.ptr));
    }
};
