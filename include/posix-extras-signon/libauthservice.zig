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
const QVariant = @import("libqt6").QVariant;
const SignOn__Error = @import("libqt6").SignOn__Error;
const SignOn__IdentityInfo = @import("libqt6").SignOn__IdentityInfo;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
pub const SignOn__AuthService = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__AuthService,

    pub const _is_SignOn__AuthService = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new SignOn::AuthService object in C++ memory
    ///
    pub fn new() SignOn__AuthService {
        return .{ .ptr = qtc.SignOn__AuthService_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new SignOn::AuthService object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) SignOn__AuthService {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.SignOn__AuthService_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    pub fn metaObject(self: SignOn__AuthService) QMetaObject {
        return .{ .ptr = qtc.SignOn__AuthService_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: SignOn__AuthService, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.SignOn__AuthService_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn superMetaObject(self: SignOn__AuthService) QMetaObject {
        return .{ .ptr = qtc.SignOn__AuthService_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: SignOn__AuthService, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__AuthService_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.SignOn__AuthService_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: SignOn__AuthService, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__AuthService_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: SignOn__AuthService, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.SignOn__AuthService_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.SignOn__AuthService_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: SignOn__AuthService, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.SignOn__AuthService_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthService.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `queryMethods` instead
    ///
    pub const QueryMethods = queryMethods;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    pub fn queryMethods(self: SignOn__AuthService) void {
        qtc.SignOn__AuthService_QueryMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryMechanisms` instead
    ///
    pub const QueryMechanisms = queryMechanisms;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` method: []const u8 `
    ///
    pub fn queryMechanisms(self: SignOn__AuthService, method: []const u8) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        qtc.SignOn__AuthService_QueryMechanisms(@ptrCast(self.ptr), method_str);
    }

    /// ### DEPRECATED: Use `queryIdentities` instead
    ///
    pub const QueryIdentities = queryIdentities;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    pub fn queryIdentities(self: SignOn__AuthService) void {
        qtc.SignOn__AuthService_QueryIdentities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    pub fn clear(self: SignOn__AuthService) void {
        qtc.SignOn__AuthService_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` err: SignOn__Error `
    ///
    pub fn error0(self: SignOn__AuthService, err: anytype) void {
        comptime _ = @TypeOf(err)._is_SignOn__Error;
        qtc.SignOn__AuthService_Error(@ptrCast(self.ptr), @ptrCast(err.ptr));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, err: SignOn__Error) callconv(.c) void `
    ///
    pub fn onError(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, SignOn__Error) callconv(.c) void) void {
        qtc.SignOn__AuthService_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `methodsAvailable` instead
    ///
    pub const MethodsAvailable = methodsAvailable;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` methods: []const []const u8 `
    ///
    pub fn methodsAvailable(self: SignOn__AuthService, allocator: std.mem.Allocator, methods: []const []const u8) void {
        const methods_arr = allocator.alloc(qtc.libqt_string, methods.len) catch @panic("SignOn__AuthService.methodsAvailable: Memory allocation failed");
        defer allocator.free(methods_arr);
        for (methods, 0..methods.len) |str_item, i|
            methods_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const methods_list = qtc.libqt_list{
            .len = methods.len,
            .data = methods_arr.ptr,
        };
        qtc.SignOn__AuthService_MethodsAvailable(@ptrCast(self.ptr), methods_list);
    }

    /// ### DEPRECATED: Use `onMethodsAvailable` instead
    ///
    pub const OnMethodsAvailable = onMethodsAvailable;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, methods: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onMethodsAvailable(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthService_Connect_MethodsAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mechanismsAvailable` instead
    ///
    pub const MechanismsAvailable = mechanismsAvailable;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` method: []const u8 `
    ///
    /// ` mechanisms: []const []const u8 `
    ///
    pub fn mechanismsAvailable(self: SignOn__AuthService, allocator: std.mem.Allocator, method: []const u8, mechanisms: []const []const u8) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const mechanisms_arr = allocator.alloc(qtc.libqt_string, mechanisms.len) catch @panic("SignOn__AuthService.mechanismsAvailable: Memory allocation failed");
        defer allocator.free(mechanisms_arr);
        for (mechanisms, 0..mechanisms.len) |str_item, i|
            mechanisms_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mechanisms_list = qtc.libqt_list{
            .len = mechanisms.len,
            .data = mechanisms_arr.ptr,
        };
        qtc.SignOn__AuthService_MechanismsAvailable(@ptrCast(self.ptr), method_str, mechanisms_list);
    }

    /// ### DEPRECATED: Use `onMechanismsAvailable` instead
    ///
    pub const OnMechanismsAvailable = onMechanismsAvailable;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, method: [*:0]const u8, mechanisms: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onMechanismsAvailable(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, [*:0]const u8, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthService_Connect_MechanismsAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `identities` instead
    ///
    pub const Identities = identities;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` identityList: []SignOn__IdentityInfo `
    ///
    pub fn identities(self: SignOn__AuthService, identityList: []SignOn__IdentityInfo) void {
        const identityList_list = qtc.libqt_list{
            .len = identityList.len,
            .data = @ptrCast(identityList.ptr),
        };
        qtc.SignOn__AuthService_Identities(@ptrCast(self.ptr), identityList_list);
    }

    /// ### DEPRECATED: Use `onIdentities` instead
    ///
    pub const OnIdentities = onIdentities;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, identityList: qtc.libqt_list ([]SignOn__IdentityInfo)) callconv(.c) void `
    ///
    pub fn onIdentities(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, qtc.libqt_list) callconv(.c) void) void {
        qtc.SignOn__AuthService_Connect_Identities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cleared` instead
    ///
    pub const Cleared = cleared;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService `
    ///
    pub fn cleared(self: SignOn__AuthService) void {
        qtc.SignOn__AuthService_Cleared(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCleared` instead
    ///
    pub const OnCleared = onCleared;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService) callconv(.c) void `
    ///
    pub fn onCleared(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService) callconv(.c) void) void {
        qtc.SignOn__AuthService_Connect_Cleared(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthService.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthService.tr3: Memory allocation failed");
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: SignOn__AuthService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthService.objectName: Memory allocation failed");
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: SignOn__AuthService, name: []const u8) void {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn isWidgetType(self: SignOn__AuthService) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn isWindowType(self: SignOn__AuthService) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn isQuickItemType(self: SignOn__AuthService) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn signalsBlocked(self: SignOn__AuthService) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: SignOn__AuthService, b: bool) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn thread(self: SignOn__AuthService) QThread {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: SignOn__AuthService, _thread: anytype) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: SignOn__AuthService, interval: i32) i32 {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: SignOn__AuthService, time: i64) i32 {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: SignOn__AuthService, id: i32) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: SignOn__AuthService, id: i32) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: SignOn__AuthService, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("SignOn__AuthService.children: Memory allocation failed");
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: SignOn__AuthService, _parent: anytype) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: SignOn__AuthService, filterObj: anytype) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: SignOn__AuthService, obj: anytype) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: SignOn__AuthService, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn disconnect3(self: SignOn__AuthService) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: SignOn__AuthService, receiver: anytype) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn dumpObjectTree(self: SignOn__AuthService) void {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn dumpObjectInfo(self: SignOn__AuthService) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: SignOn__AuthService, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: SignOn__AuthService, name: [:0]const u8) QVariant {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: SignOn__AuthService, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("SignOn__AuthService.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__AuthService.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn bindingStorage(self: SignOn__AuthService) QBindingStorage {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn bindingStorage2(self: SignOn__AuthService) QBindingStorage {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn destroyed(self: SignOn__AuthService) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService) callconv(.c) void `
    ///
    pub fn onDestroyed(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService) callconv(.c) void) void {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn parent(self: SignOn__AuthService) QObject {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: SignOn__AuthService, classname: [:0]const u8) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn deleteLater(self: SignOn__AuthService) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: SignOn__AuthService, interval: i32, timerType: i32) i32 {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: SignOn__AuthService, time: i64, timerType: i32) i32 {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: SignOn__AuthService, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: SignOn__AuthService, signal: [:0]const u8) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: SignOn__AuthService, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: SignOn__AuthService, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: SignOn__AuthService, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: SignOn__AuthService, param1: anytype) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QObject) callconv(.c) void) void {
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: SignOn__AuthService, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.SignOn__AuthService_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: SignOn__AuthService, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.SignOn__AuthService_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QEvent) callconv(.c) bool) void {
        qtc.SignOn__AuthService_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: SignOn__AuthService, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.SignOn__AuthService_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: SignOn__AuthService, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.SignOn__AuthService_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QObject, QEvent) callconv(.c) bool) void {
        qtc.SignOn__AuthService_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: SignOn__AuthService, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.SignOn__AuthService_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: SignOn__AuthService, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.SignOn__AuthService_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QTimerEvent) callconv(.c) void) void {
        qtc.SignOn__AuthService_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: SignOn__AuthService, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.SignOn__AuthService_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: SignOn__AuthService, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.SignOn__AuthService_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QChildEvent) callconv(.c) void) void {
        qtc.SignOn__AuthService_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: SignOn__AuthService, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.SignOn__AuthService_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: SignOn__AuthService, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.SignOn__AuthService_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QEvent) callconv(.c) void) void {
        qtc.SignOn__AuthService_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: SignOn__AuthService, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.SignOn__AuthService_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: SignOn__AuthService, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.SignOn__AuthService_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QMetaMethod) callconv(.c) void) void {
        qtc.SignOn__AuthService_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: SignOn__AuthService, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.SignOn__AuthService_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: SignOn__AuthService, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.SignOn__AuthService_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QMetaMethod) callconv(.c) void) void {
        qtc.SignOn__AuthService_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn sender(self: SignOn__AuthService) QObject {
        return .{ .ptr = qtc.SignOn__AuthService_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn superSender(self: SignOn__AuthService) QObject {
        return .{ .ptr = qtc.SignOn__AuthService_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: SignOn__AuthService, callback: *const fn () callconv(.c) QObject) void {
        qtc.SignOn__AuthService_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn senderSignalIndex(self: SignOn__AuthService) i32 {
        return qtc.SignOn__AuthService_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    pub fn superSenderSignalIndex(self: SignOn__AuthService) i32 {
        return qtc.SignOn__AuthService_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: SignOn__AuthService, callback: *const fn () callconv(.c) i32) void {
        qtc.SignOn__AuthService_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: SignOn__AuthService, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.SignOn__AuthService_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: SignOn__AuthService, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.SignOn__AuthService_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, [*:0]const u8) callconv(.c) i32) void {
        qtc.SignOn__AuthService_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: SignOn__AuthService, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.SignOn__AuthService_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: SignOn__AuthService, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.SignOn__AuthService_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: SignOn__AuthService`
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, QMetaMethod) callconv(.c) bool) void {
        qtc.SignOn__AuthService_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__AuthService `
    ///
    /// ` callback: *const fn (self: SignOn__AuthService, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: SignOn__AuthService, callback: *const fn (SignOn__AuthService, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__AuthService `
    ///
    pub fn delete(self: SignOn__AuthService) void {
        qtc.SignOn__AuthService_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
pub const SignOn__AuthService__IdentityRegExp = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__AuthService__IdentityRegExp,

    pub const _is_SignOn__AuthService__IdentityRegExp = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new SignOn::AuthService::IdentityRegExp object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _pattern: []const u8 `
    ///
    pub fn new(_pattern: []const u8) SignOn__AuthService__IdentityRegExp {
        const pattern_str = qtc.libqt_string{
            .len = _pattern.len,
            .data = _pattern.ptr,
        };
        return .{ .ptr = qtc.SignOn__AuthService__IdentityRegExp_new(pattern_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new SignOn::AuthService::IdentityRegExp object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` src: SignOn__AuthService__IdentityRegExp `
    ///
    pub fn new2(src: anytype) SignOn__AuthService__IdentityRegExp {
        comptime _ = @TypeOf(src)._is_SignOn__AuthService__IdentityRegExp;
        return .{ .ptr = qtc.SignOn__AuthService__IdentityRegExp_new2(@ptrCast(src.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService__IdentityRegExp `
    ///
    pub fn isValid(self: SignOn__AuthService__IdentityRegExp) bool {
        return qtc.SignOn__AuthService__IdentityRegExp_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pattern` instead
    ///
    pub const Pattern = pattern;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthService__IdentityRegExp `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pattern(self: SignOn__AuthService__IdentityRegExp, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__AuthService__IdentityRegExp_Pattern(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthService__IdentityRegExp.pattern: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__AuthService__IdentityRegExp `
    ///
    pub fn delete(self: SignOn__AuthService__IdentityRegExp) void {
        qtc.SignOn__AuthService__IdentityRegExp_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Authservice.html)
pub const enums = struct {
    pub const ServiceError = enum {
        pub const UnknownError: i32 = 1;
        pub const InternalServerError: i32 = 2;
        pub const InternalCommunicationError: i32 = 3;
        pub const PermissionDeniedError: i32 = 4;
        pub const AuthServiceErr: i32 = 100;
        pub const MethodNotKnownError: i32 = 101;
        pub const NotAvailableError: i32 = 102;
        pub const InvalidQueryError: i32 = 103;
    };

    pub const SignOn__AuthService = enum {
        pub const AuthMethod: i32 = 0;
        pub const Username: i32 = 1;
        pub const Realm: i32 = 2;
        pub const Caption: i32 = 3;
    };
};
