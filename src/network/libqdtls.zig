const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSslCipher = @import("libqt6").QSslCipher;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QSslError = @import("libqt6").QSslError;
const QSslPreSharedKeyAuthenticator = @import("libqt6").QSslPreSharedKeyAuthenticator;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUdpSocket = @import("libqt6").QUdpSocket;
const QVariant = @import("libqt6").QVariant;
const qcryptographichash_enums = @import("../libqcryptographichash.zig").enums;
const qdtls_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const qsslsocket_enums = @import("libqsslsocket.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html)
pub const QDtlsClientVerifier = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDtlsClientVerifier,

    pub const _is_QDtlsClientVerifier = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDtlsClientVerifier object in C++ memory
    ///
    pub fn new() QDtlsClientVerifier {
        return .{ .ptr = qtc.QDtlsClientVerifier_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDtlsClientVerifier object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDtlsClientVerifier {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDtlsClientVerifier_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn metaObject(self: QDtlsClientVerifier) QMetaObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDtlsClientVerifier, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDtlsClientVerifier_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn superMetaObject(self: QDtlsClientVerifier) QMetaObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDtlsClientVerifier, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtlsClientVerifier_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDtlsClientVerifier_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDtlsClientVerifier, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtlsClientVerifier_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDtlsClientVerifier, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtlsClientVerifier_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDtlsClientVerifier_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDtlsClientVerifier, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtlsClientVerifier_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtlsClientVerifier.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCookieGeneratorParameters` instead
    ///
    pub const SetCookieGeneratorParameters = setCookieGeneratorParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#setCookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` params: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn setCookieGeneratorParameters(self: QDtlsClientVerifier, params: anytype) bool {
        comptime _ = @TypeOf(params)._is_QDtlsClientVerifier__GeneratorParameters;
        return qtc.QDtlsClientVerifier_SetCookieGeneratorParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### DEPRECATED: Use `cookieGeneratorParameters` instead
    ///
    pub const CookieGeneratorParameters = cookieGeneratorParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#cookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn cookieGeneratorParameters(self: QDtlsClientVerifier) QDtlsClientVerifier__GeneratorParameters {
        return .{ .ptr = qtc.QDtlsClientVerifier_CookieGeneratorParameters(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `verifyClient` instead
    ///
    pub const VerifyClient = verifyClient;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifyClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` socket: QUdpSocket `
    ///
    /// ` dgram: []u8 `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn verifyClient(self: QDtlsClientVerifier, socket: anytype, dgram: []u8, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QDtlsClientVerifier_VerifyClient(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str, @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `verifiedHello` instead
    ///
    pub const VerifiedHello = verifiedHello;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifiedHello)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn verifiedHello(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDtlsClientVerifier_VerifiedHello(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QDtlsClientVerifier.verifiedHello: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dtlsError` instead
    ///
    pub const DtlsError = dtlsError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ## Returns:
    ///
    /// ` qdtls_enums.QDtlsError `
    ///
    pub fn dtlsError(self: QDtlsClientVerifier) u8 {
        return qtc.QDtlsClientVerifier_DtlsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dtlsErrorString` instead
    ///
    pub const DtlsErrorString = dtlsErrorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dtlsErrorString(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDtlsClientVerifier_DtlsErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtlsClientVerifier.dtlsErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtlsClientVerifier.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtlsClientVerifier.tr3: Memory allocation failed");
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtlsClientVerifier.objectName: Memory allocation failed");
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDtlsClientVerifier, name: []const u8) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn isWidgetType(self: QDtlsClientVerifier) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn isWindowType(self: QDtlsClientVerifier) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn isQuickItemType(self: QDtlsClientVerifier) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn signalsBlocked(self: QDtlsClientVerifier) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDtlsClientVerifier, b: bool) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn thread(self: QDtlsClientVerifier) QThread {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDtlsClientVerifier, _thread: anytype) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDtlsClientVerifier, interval: i32) i32 {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDtlsClientVerifier, time: i64) i32 {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDtlsClientVerifier, id: i32) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDtlsClientVerifier, id: i32) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDtlsClientVerifier.children: Memory allocation failed");
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDtlsClientVerifier, _parent: anytype) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDtlsClientVerifier, filterObj: anytype) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDtlsClientVerifier, obj: anytype) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDtlsClientVerifier, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn disconnect3(self: QDtlsClientVerifier) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDtlsClientVerifier, receiver: anytype) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn dumpObjectTree(self: QDtlsClientVerifier) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn dumpObjectInfo(self: QDtlsClientVerifier) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDtlsClientVerifier, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDtlsClientVerifier, name: [:0]const u8) QVariant {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDtlsClientVerifier, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDtlsClientVerifier.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDtlsClientVerifier.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn bindingStorage(self: QDtlsClientVerifier) QBindingStorage {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn bindingStorage2(self: QDtlsClientVerifier) QBindingStorage {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn destroyed(self: QDtlsClientVerifier) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier) callconv(.c) void) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn parent(self: QDtlsClientVerifier) QObject {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDtlsClientVerifier, classname: [:0]const u8) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn deleteLater(self: QDtlsClientVerifier) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDtlsClientVerifier, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDtlsClientVerifier, time: i64, timerType: i32) i32 {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDtlsClientVerifier, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDtlsClientVerifier, signal: [:0]const u8) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDtlsClientVerifier, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDtlsClientVerifier, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDtlsClientVerifier, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDtlsClientVerifier, param1: anytype) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QObject) callconv(.c) void) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDtlsClientVerifier, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtlsClientVerifier_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDtlsClientVerifier, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtlsClientVerifier_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QEvent) callconv(.c) bool) void {
        qtc.QDtlsClientVerifier_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDtlsClientVerifier, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtlsClientVerifier_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDtlsClientVerifier, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtlsClientVerifier_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDtlsClientVerifier_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDtlsClientVerifier, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDtlsClientVerifier_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDtlsClientVerifier, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDtlsClientVerifier_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QTimerEvent) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDtlsClientVerifier, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDtlsClientVerifier_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDtlsClientVerifier, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDtlsClientVerifier_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QChildEvent) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDtlsClientVerifier, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDtlsClientVerifier_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDtlsClientVerifier, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDtlsClientVerifier_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QEvent) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QMetaMethod) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QMetaMethod) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn sender(self: QDtlsClientVerifier) QObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn superSender(self: QDtlsClientVerifier) QObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDtlsClientVerifier, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDtlsClientVerifier_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn senderSignalIndex(self: QDtlsClientVerifier) i32 {
        return qtc.QDtlsClientVerifier_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn superSenderSignalIndex(self: QDtlsClientVerifier) i32 {
        return qtc.QDtlsClientVerifier_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDtlsClientVerifier, callback: *const fn () callconv(.c) i32) void {
        qtc.QDtlsClientVerifier_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDtlsClientVerifier, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtlsClientVerifier_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDtlsClientVerifier, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtlsClientVerifier_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDtlsClientVerifier_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDtlsClientVerifier, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtlsClientVerifier_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDtlsClientVerifier, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtlsClientVerifier_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier`
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QMetaMethod) callconv(.c) bool) void {
        qtc.QDtlsClientVerifier_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtor.QDtlsClientVerifier)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn delete(self: QDtlsClientVerifier) void {
        qtc.QDtlsClientVerifier_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html)
pub const QDtls = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDtls,

    pub const _is_QDtls = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDtls object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qsslsocket_enums.SslMode `
    ///
    pub fn new(mode: i32) QDtls {
        return .{ .ptr = qtc.QDtls_new(@bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDtls object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qsslsocket_enums.SslMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(mode: i32, _parent: anytype) QDtls {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDtls_new2(@bitCast(mode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn metaObject(self: QDtls) QMetaObject {
        return .{ .ptr = qtc.QDtls_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDtls, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDtls_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    pub fn superMetaObject(self: QDtls) QMetaObject {
        return .{ .ptr = qtc.QDtls_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDtls, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtls_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDtls, callback: *const fn (QDtls, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDtls_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDtls, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtls_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDtls, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtls_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDtls, callback: *const fn (QDtls, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDtls_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDtls, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtls_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtls.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPeer` instead
    ///
    pub const SetPeer = setPeer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setPeer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn setPeer(self: QDtls, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QDtls_SetPeer(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `setPeerVerificationName` instead
    ///
    pub const SetPeerVerificationName = setPeerVerificationName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setPeerVerificationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setPeerVerificationName(self: QDtls, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDtls_SetPeerVerificationName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `peerAddress` instead
    ///
    pub const PeerAddress = peerAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn peerAddress(self: QDtls) QHostAddress {
        return .{ .ptr = qtc.QDtls_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerPort` instead
    ///
    pub const PeerPort = peerPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn peerPort(self: QDtls) u16 {
        return qtc.QDtls_PeerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `peerVerificationName` instead
    ///
    pub const PeerVerificationName = peerVerificationName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerVerificationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerVerificationName(self: QDtls, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDtls_PeerVerificationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtls.peerVerificationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sslMode` instead
    ///
    pub const SslMode = sslMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#sslMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ## Returns:
    ///
    /// ` qsslsocket_enums.SslMode `
    ///
    pub fn sslMode(self: QDtls) i32 {
        return qtc.QDtls_SslMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMtuHint` instead
    ///
    pub const SetMtuHint = setMtuHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setMtuHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` _mtuHint: u16 `
    ///
    pub fn setMtuHint(self: QDtls, _mtuHint: u16) void {
        qtc.QDtls_SetMtuHint(@ptrCast(self.ptr), @bitCast(_mtuHint));
    }

    /// ### DEPRECATED: Use `mtuHint` instead
    ///
    pub const MtuHint = mtuHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#mtuHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn mtuHint(self: QDtls) u16 {
        return qtc.QDtls_MtuHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCookieGeneratorParameters` instead
    ///
    pub const SetCookieGeneratorParameters = setCookieGeneratorParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setCookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` params: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn setCookieGeneratorParameters(self: QDtls, params: anytype) bool {
        comptime _ = @TypeOf(params)._is_QDtlsClientVerifier__GeneratorParameters;
        return qtc.QDtls_SetCookieGeneratorParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### DEPRECATED: Use `cookieGeneratorParameters` instead
    ///
    pub const CookieGeneratorParameters = cookieGeneratorParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#cookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn cookieGeneratorParameters(self: QDtls) QDtlsClientVerifier__GeneratorParameters {
        return .{ .ptr = qtc.QDtls_CookieGeneratorParameters(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDtlsConfiguration` instead
    ///
    pub const SetDtlsConfiguration = setDtlsConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setDtlsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn setDtlsConfiguration(self: QDtls, configuration: anytype) bool {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        return qtc.QDtls_SetDtlsConfiguration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `dtlsConfiguration` instead
    ///
    pub const DtlsConfiguration = dtlsConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn dtlsConfiguration(self: QDtls) QSslConfiguration {
        return .{ .ptr = qtc.QDtls_DtlsConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `handshakeState` instead
    ///
    pub const HandshakeState = handshakeState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ## Returns:
    ///
    /// ` qdtls_enums.HandshakeState `
    ///
    pub fn handshakeState(self: QDtls) i32 {
        return qtc.QDtls_HandshakeState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `doHandshake` instead
    ///
    pub const DoHandshake = doHandshake;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn doHandshake(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_DoHandshake(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `handleTimeout` instead
    ///
    pub const HandleTimeout = handleTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handleTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn handleTimeout(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_HandleTimeout(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `resumeHandshake` instead
    ///
    pub const ResumeHandshake = resumeHandshake;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#resumeHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn resumeHandshake(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_ResumeHandshake(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `abortHandshake` instead
    ///
    pub const AbortHandshake = abortHandshake;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#abortHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn abortHandshake(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_AbortHandshake(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `shutdown` instead
    ///
    pub const Shutdown = shutdown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#shutdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn shutdown(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_Shutdown(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `isConnectionEncrypted` instead
    ///
    pub const IsConnectionEncrypted = isConnectionEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#isConnectionEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn isConnectionEncrypted(self: QDtls) bool {
        return qtc.QDtls_IsConnectionEncrypted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sessionCipher` instead
    ///
    pub const SessionCipher = sessionCipher;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#sessionCipher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn sessionCipher(self: QDtls) QSslCipher {
        return .{ .ptr = qtc.QDtls_SessionCipher(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sessionProtocol` instead
    ///
    pub const SessionProtocol = sessionProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#sessionProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn sessionProtocol(self: QDtls) i32 {
        return qtc.QDtls_SessionProtocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeDatagramEncrypted` instead
    ///
    pub const WriteDatagramEncrypted = writeDatagramEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#writeDatagramEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    /// ` dgram: []u8 `
    ///
    pub fn writeDatagramEncrypted(self: QDtls, socket: anytype, dgram: []u8) i64 {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        return qtc.QDtls_WriteDatagramEncrypted(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str);
    }

    /// ### DEPRECATED: Use `decryptDatagram` instead
    ///
    pub const DecryptDatagram = decryptDatagram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#decryptDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` socket: QUdpSocket `
    ///
    /// ` dgram: []u8 `
    ///
    pub fn decryptDatagram(self: QDtls, allocator: std.mem.Allocator, socket: anytype, dgram: []u8) []u8 {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QDtls_DecryptDatagram(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QDtls.decryptDatagram: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dtlsError` instead
    ///
    pub const DtlsError = dtlsError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ## Returns:
    ///
    /// ` qdtls_enums.QDtlsError `
    ///
    pub fn dtlsError(self: QDtls) u8 {
        return qtc.QDtls_DtlsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dtlsErrorString` instead
    ///
    pub const DtlsErrorString = dtlsErrorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dtlsErrorString(self: QDtls, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDtls_DtlsErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtls.dtlsErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `peerVerificationErrors` instead
    ///
    pub const PeerVerificationErrors = peerVerificationErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerVerificationErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerVerificationErrors(self: QDtls, allocator: std.mem.Allocator) []QSslError {
        const _arr: qtc.libqt_list = qtc.QDtls_PeerVerificationErrors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("QDtls.peerVerificationErrors: Memory allocation failed");
        const _data_val: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `ignoreVerificationErrors` instead
    ///
    pub const IgnoreVerificationErrors = ignoreVerificationErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#ignoreVerificationErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` errorsToIgnore: []QSslError `
    ///
    pub fn ignoreVerificationErrors(self: QDtls, errorsToIgnore: []QSslError) void {
        const errorsToIgnore_list = qtc.libqt_list{
            .len = errorsToIgnore.len,
            .data = @ptrCast(errorsToIgnore.ptr),
        };
        qtc.QDtls_IgnoreVerificationErrors(@ptrCast(self.ptr), errorsToIgnore_list);
    }

    /// ### DEPRECATED: Use `pskRequired` instead
    ///
    pub const PskRequired = pskRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn pskRequired(self: QDtls, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QDtls_PskRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onPskRequired` instead
    ///
    pub const OnPskRequired = onPskRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn onPskRequired(self: QDtls, callback: *const fn (QDtls, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QDtls_Connect_PskRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `handshakeTimeout` instead
    ///
    pub const HandshakeTimeout = handshakeTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn handshakeTimeout(self: QDtls) void {
        qtc.QDtls_HandshakeTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHandshakeTimeout` instead
    ///
    pub const OnHandshakeTimeout = onHandshakeTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls) callconv(.c) void `
    ///
    pub fn onHandshakeTimeout(self: QDtls, callback: *const fn (QDtls) callconv(.c) void) void {
        qtc.QDtls_Connect_HandshakeTimeout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtls.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtls.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPeer3` instead
    ///
    pub const SetPeer3 = setPeer3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setPeer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` verificationName: []const u8 `
    ///
    pub fn setPeer3(self: QDtls, address: anytype, port: u16, verificationName: []const u8) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        const verificationName_str = qtc.libqt_string{
            .len = verificationName.len,
            .data = verificationName.ptr,
        };
        return qtc.QDtls_SetPeer3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), verificationName_str);
    }

    /// ### DEPRECATED: Use `doHandshake2` instead
    ///
    pub const DoHandshake2 = doHandshake2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    /// ` dgram: []u8 `
    ///
    pub fn doHandshake2(self: QDtls, socket: anytype, dgram: []u8) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        return qtc.QDtls_DoHandshake2(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str);
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
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDtls, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDtls.objectName: Memory allocation failed");
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
    /// ` self: QDtls `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDtls, name: []const u8) void {
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
    /// ` self: QDtls `
    ///
    pub fn isWidgetType(self: QDtls) bool {
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
    /// ` self: QDtls `
    ///
    pub fn isWindowType(self: QDtls) bool {
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
    /// ` self: QDtls `
    ///
    pub fn isQuickItemType(self: QDtls) bool {
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
    /// ` self: QDtls `
    ///
    pub fn signalsBlocked(self: QDtls) bool {
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
    /// ` self: QDtls `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDtls, b: bool) bool {
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
    /// ` self: QDtls `
    ///
    pub fn thread(self: QDtls) QThread {
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
    /// ` self: QDtls `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDtls, _thread: anytype) bool {
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
    /// ` self: QDtls `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDtls, interval: i32) i32 {
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
    /// ` self: QDtls `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDtls, time: i64) i32 {
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
    /// ` self: QDtls `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDtls, id: i32) void {
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
    /// ` self: QDtls `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDtls, id: i32) void {
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
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDtls, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDtls.children: Memory allocation failed");
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
    /// ` self: QDtls `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDtls, _parent: anytype) void {
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
    /// ` self: QDtls `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDtls, filterObj: anytype) void {
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
    /// ` self: QDtls `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDtls, obj: anytype) void {
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
    /// ` self: QDtls `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDtls, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDtls `
    ///
    pub fn disconnect3(self: QDtls) bool {
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
    /// ` self: QDtls `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDtls, receiver: anytype) bool {
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
    /// ` self: QDtls `
    ///
    pub fn dumpObjectTree(self: QDtls) void {
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
    /// ` self: QDtls `
    ///
    pub fn dumpObjectInfo(self: QDtls) void {
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
    /// ` self: QDtls `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDtls, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDtls `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDtls, name: [:0]const u8) QVariant {
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
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDtls, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDtls.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDtls.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDtls `
    ///
    pub fn bindingStorage(self: QDtls) QBindingStorage {
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
    /// ` self: QDtls `
    ///
    pub fn bindingStorage2(self: QDtls) QBindingStorage {
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
    /// ` self: QDtls `
    ///
    pub fn destroyed(self: QDtls) void {
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
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDtls, callback: *const fn (QDtls) callconv(.c) void) void {
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
    /// ` self: QDtls `
    ///
    pub fn parent(self: QDtls) QObject {
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
    /// ` self: QDtls `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDtls, classname: [:0]const u8) bool {
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
    /// ` self: QDtls `
    ///
    pub fn deleteLater(self: QDtls) void {
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
    /// ` self: QDtls `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDtls, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDtls `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDtls, time: i64, timerType: i32) i32 {
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
    /// ` self: QDtls `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDtls, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDtls, signal: [:0]const u8) bool {
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDtls, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDtls, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtls `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDtls, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtls `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDtls, param1: anytype) void {
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
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDtls, callback: *const fn (QDtls, QObject) callconv(.c) void) void {
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
    /// ` self: QDtls `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDtls, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtls_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDtls, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtls_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDtls, callback: *const fn (QDtls, QEvent) callconv(.c) bool) void {
        qtc.QDtls_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDtls, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtls_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDtls, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDtls_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDtls, callback: *const fn (QDtls, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDtls_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDtls, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDtls_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDtls, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDtls_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDtls, callback: *const fn (QDtls, QTimerEvent) callconv(.c) void) void {
        qtc.QDtls_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDtls, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDtls_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDtls, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDtls_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDtls, callback: *const fn (QDtls, QChildEvent) callconv(.c) void) void {
        qtc.QDtls_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDtls, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDtls_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDtls, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDtls_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDtls, callback: *const fn (QDtls, QEvent) callconv(.c) void) void {
        qtc.QDtls_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDtls, callback: *const fn (QDtls, QMetaMethod) callconv(.c) void) void {
        qtc.QDtls_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDtls, callback: *const fn (QDtls, QMetaMethod) callconv(.c) void) void {
        qtc.QDtls_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    pub fn sender(self: QDtls) QObject {
        return .{ .ptr = qtc.QDtls_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDtls `
    ///
    pub fn superSender(self: QDtls) QObject {
        return .{ .ptr = qtc.QDtls_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDtls, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDtls_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    pub fn senderSignalIndex(self: QDtls) i32 {
        return qtc.QDtls_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDtls `
    ///
    pub fn superSenderSignalIndex(self: QDtls) i32 {
        return qtc.QDtls_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDtls, callback: *const fn () callconv(.c) i32) void {
        qtc.QDtls_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDtls, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtls_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDtls, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtls_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDtls, callback: *const fn (QDtls, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDtls_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDtls, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtls_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDtls, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtls_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls`
    ///
    /// ` callback: *const fn (self: QDtls, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDtls, callback: *const fn (QDtls, QMetaMethod) callconv(.c) bool) void {
        qtc.QDtls_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDtls, callback: *const fn (QDtls, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtor.QDtls)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDtls `
    ///
    pub fn delete(self: QDtls) void {
        qtc.QDtls_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html)
pub const QDtlsClientVerifier__GeneratorParameters = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDtlsClientVerifier__GeneratorParameters,

    pub const _is_QDtlsClientVerifier__GeneratorParameters = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDtlsClientVerifier::GeneratorParameters object in C++ memory
    ///
    pub fn new() QDtlsClientVerifier__GeneratorParameters {
        return .{ .ptr = qtc.QDtlsClientVerifier__GeneratorParameters_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDtlsClientVerifier::GeneratorParameters object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` a: qcryptographichash_enums.Algorithm `
    ///
    /// ` s: []u8 `
    ///
    pub fn new2(a: i32, s: []u8) QDtlsClientVerifier__GeneratorParameters {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QDtlsClientVerifier__GeneratorParameters_new2(@bitCast(a), s_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDtlsClientVerifier::GeneratorParameters object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn new3(param1: anytype) QDtlsClientVerifier__GeneratorParameters {
        comptime _ = @TypeOf(param1)._is_QDtlsClientVerifier__GeneratorParameters;
        return .{ .ptr = qtc.QDtlsClientVerifier__GeneratorParameters_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `hash` instead
    ///
    pub const Hash = hash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#hash-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ## Returns:
    ///
    /// ` qcryptographichash_enums.Algorithm `
    ///
    pub fn hash(self: QDtlsClientVerifier__GeneratorParameters) i32 {
        return qtc.QDtlsClientVerifier__GeneratorParameters_Hash(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHash` instead
    ///
    pub const SetHash = setHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#hash-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` _hash: qcryptographichash_enums.Algorithm `
    ///
    pub fn setHash(self: QDtlsClientVerifier__GeneratorParameters, _hash: i32) void {
        qtc.QDtlsClientVerifier__GeneratorParameters_SetHash(@ptrCast(self.ptr), @bitCast(_hash));
    }

    /// ### DEPRECATED: Use `secret` instead
    ///
    pub const Secret = secret;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#secret-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn secret(self: QDtlsClientVerifier__GeneratorParameters, allocator: std.mem.Allocator) []u8 {
        var secret_bytearray: qtc.libqt_string = qtc.QDtlsClientVerifier__GeneratorParameters_Secret(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&secret_bytearray);
        const secret_ret = allocator.alloc(u8, secret_bytearray.len) catch @panic("QDtlsClientVerifier__GeneratorParameters.secret: Memory allocation failed");
        @memcpy(secret_ret, secret_bytearray.data[0..secret_bytearray.len]);
        return secret_ret;
    }

    /// ### DEPRECATED: Use `setSecret` instead
    ///
    pub const SetSecret = setSecret;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#secret-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` _secret: []u8 `
    ///
    pub fn setSecret(self: QDtlsClientVerifier__GeneratorParameters, _secret: []u8) void {
        const secret_str = qtc.libqt_string{
            .len = _secret.len,
            .data = _secret.ptr,
        };
        qtc.QDtlsClientVerifier__GeneratorParameters_SetSecret(@ptrCast(self.ptr), secret_str);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` param1: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn operatorAssign(self: QDtlsClientVerifier__GeneratorParameters, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDtlsClientVerifier__GeneratorParameters;
        qtc.QDtlsClientVerifier__GeneratorParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn delete(self: QDtlsClientVerifier__GeneratorParameters) void {
        qtc.QDtlsClientVerifier__GeneratorParameters_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#public-types)
pub const enums = struct {
    pub const QDtlsError = enum {
        pub const NoError: u8 = 0;
        pub const InvalidInputParameters: u8 = 1;
        pub const InvalidOperation: u8 = 2;
        pub const UnderlyingSocketError: u8 = 3;
        pub const RemoteClosedConnectionError: u8 = 4;
        pub const PeerVerificationError: u8 = 5;
        pub const TlsInitializationError: u8 = 6;
        pub const TlsFatalError: u8 = 7;
        pub const TlsNonFatalError: u8 = 8;
    };

    pub const HandshakeState = enum {
        pub const HandshakeNotStarted: i32 = 0;
        pub const HandshakeInProgress: i32 = 1;
        pub const PeerVerificationFailed: i32 = 2;
        pub const HandshakeComplete: i32 = 3;
    };
};
