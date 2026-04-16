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

    /// New constructs a new QDtlsClientVerifier object.
    ///
    pub fn New() QDtlsClientVerifier {
        return .{ .ptr = qtc.QDtlsClientVerifier_new() };
    }

    /// New2 constructs a new QDtlsClientVerifier object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QDtlsClientVerifier {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDtlsClientVerifier_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn MetaObject(self: QDtlsClientVerifier) QMetaObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QDtlsClientVerifier, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDtlsClientVerifier_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn SuperMetaObject(self: QDtlsClientVerifier) QMetaObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDtlsClientVerifier, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtlsClientVerifier_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDtlsClientVerifier_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDtlsClientVerifier, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtlsClientVerifier_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QDtlsClientVerifier, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtlsClientVerifier_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` callback: *const fn (self: QDtlsClientVerifier, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDtlsClientVerifier_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QDtlsClientVerifier, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtlsClientVerifier_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#setCookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` params: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn SetCookieGeneratorParameters(self: QDtlsClientVerifier, params: anytype) bool {
        comptime _ = @TypeOf(params)._is_QDtlsClientVerifier__GeneratorParameters;
        return qtc.QDtlsClientVerifier_SetCookieGeneratorParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#cookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn CookieGeneratorParameters(self: QDtlsClientVerifier) QDtlsClientVerifier__GeneratorParameters {
        return .{ .ptr = qtc.QDtlsClientVerifier_CookieGeneratorParameters(@ptrCast(self.ptr)) };
    }

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
    pub fn VerifyClient(self: QDtlsClientVerifier, socket: anytype, dgram: []u8, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QDtlsClientVerifier_VerifyClient(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str, @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifiedHello)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VerifiedHello(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDtlsClientVerifier_VerifiedHello(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdtlsclientverifier.VerifiedHello: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn DtlsError(self: QDtlsClientVerifier) u8 {
        return qtc.QDtlsClientVerifier_DtlsError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DtlsErrorString(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDtlsClientVerifier_DtlsErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.DtlsErrorString: Memory allocation failed");
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtlsclientverifier.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QDtlsClientVerifier, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn IsWidgetType(self: QDtlsClientVerifier) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn IsWindowType(self: QDtlsClientVerifier) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn IsQuickItemType(self: QDtlsClientVerifier) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn SignalsBlocked(self: QDtlsClientVerifier) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QDtlsClientVerifier, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn Thread(self: QDtlsClientVerifier) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDtlsClientVerifier, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QDtlsClientVerifier, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QDtlsClientVerifier, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QDtlsClientVerifier, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QDtlsClientVerifier, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QDtlsClientVerifier, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdtlsclientverifier.Children: Memory allocation failed");
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDtlsClientVerifier, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QDtlsClientVerifier, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QDtlsClientVerifier, obj: anytype) void {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDtlsClientVerifier, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn Disconnect3(self: QDtlsClientVerifier) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QDtlsClientVerifier, receiver: anytype) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn DumpObjectTree(self: QDtlsClientVerifier) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn DumpObjectInfo(self: QDtlsClientVerifier) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QDtlsClientVerifier, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDtlsClientVerifier, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QDtlsClientVerifier, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdtlsclientverifier.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdtlsclientverifier.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn BindingStorage(self: QDtlsClientVerifier) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn BindingStorage2(self: QDtlsClientVerifier) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn Destroyed(self: QDtlsClientVerifier) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn Parent(self: QDtlsClientVerifier) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QDtlsClientVerifier, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn DeleteLater(self: QDtlsClientVerifier) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QDtlsClientVerifier, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QDtlsClientVerifier, time: i64, timerType: i32) i32 {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDtlsClientVerifier, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDtlsClientVerifier, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QDtlsClientVerifier, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDtlsClientVerifier, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDtlsClientVerifier, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDtlsClientVerifier, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDtlsClientVerifier, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtlsClientVerifier_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDtlsClientVerifier, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtlsClientVerifier_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QEvent) callconv(.c) bool) void {
        qtc.QDtlsClientVerifier_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDtlsClientVerifier, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtlsClientVerifier_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDtlsClientVerifier, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtlsClientVerifier_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDtlsClientVerifier_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDtlsClientVerifier, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDtlsClientVerifier_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDtlsClientVerifier, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDtlsClientVerifier_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QTimerEvent) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDtlsClientVerifier, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDtlsClientVerifier_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDtlsClientVerifier, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDtlsClientVerifier_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QChildEvent) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDtlsClientVerifier, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDtlsClientVerifier_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDtlsClientVerifier, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDtlsClientVerifier_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QEvent) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QMetaMethod) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDtlsClientVerifier, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtlsClientVerifier_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QMetaMethod) callconv(.c) void) void {
        qtc.QDtlsClientVerifier_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QDtlsClientVerifier) QObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn SuperSender(self: QDtlsClientVerifier) QObject {
        return .{ .ptr = qtc.QDtlsClientVerifier_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QDtlsClientVerifier, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDtlsClientVerifier_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QDtlsClientVerifier) i32 {
        return qtc.QDtlsClientVerifier_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn SuperSenderSignalIndex(self: QDtlsClientVerifier) i32 {
        return qtc.QDtlsClientVerifier_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QDtlsClientVerifier, callback: *const fn () callconv(.c) i32) void {
        qtc.QDtlsClientVerifier_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QDtlsClientVerifier, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtlsClientVerifier_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDtlsClientVerifier, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtlsClientVerifier_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDtlsClientVerifier_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QDtlsClientVerifier, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtlsClientVerifier_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtlsClientVerifier `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDtlsClientVerifier, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtlsClientVerifier_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, QMetaMethod) callconv(.c) bool) void {
        qtc.QDtlsClientVerifier_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QDtlsClientVerifier, callback: *const fn (QDtlsClientVerifier, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtor.QDtlsClientVerifier)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDtlsClientVerifier `
    ///
    pub fn Delete(self: QDtlsClientVerifier) void {
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

    /// New constructs a new QDtls object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qsslsocket_enums.SslMode `
    ///
    pub fn New(mode: i32) QDtls {
        return .{ .ptr = qtc.QDtls_new(@bitCast(mode)) };
    }

    /// New2 constructs a new QDtls object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mode: qsslsocket_enums.SslMode `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(mode: i32, parent: anytype) QDtls {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDtls_new2(@bitCast(mode), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn MetaObject(self: QDtls) QMetaObject {
        return .{ .ptr = qtc.QDtls_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QDtls, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDtls_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDtls `
    ///
    pub fn SuperMetaObject(self: QDtls) QMetaObject {
        return .{ .ptr = qtc.QDtls_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDtls, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtls_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDtls, callback: *const fn (QDtls, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDtls_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDtls, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDtls_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QDtls, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtls_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDtls, callback: *const fn (QDtls, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDtls_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QDtls, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDtls_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetPeer(self: QDtls, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QDtls_SetPeer(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setPeerVerificationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetPeerVerificationName(self: QDtls, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDtls_SetPeerVerificationName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn PeerAddress(self: QDtls) QHostAddress {
        return .{ .ptr = qtc.QDtls_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn PeerPort(self: QDtls) u16 {
        return qtc.QDtls_PeerPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerVerificationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerVerificationName(self: QDtls, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDtls_PeerVerificationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.PeerVerificationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SslMode(self: QDtls) i32 {
        return qtc.QDtls_SslMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setMtuHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` mtuHint: u16 `
    ///
    pub fn SetMtuHint(self: QDtls, mtuHint: u16) void {
        qtc.QDtls_SetMtuHint(@ptrCast(self.ptr), @bitCast(mtuHint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#mtuHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn MtuHint(self: QDtls) u16 {
        return qtc.QDtls_MtuHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setCookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` params: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn SetCookieGeneratorParameters(self: QDtls, params: anytype) bool {
        comptime _ = @TypeOf(params)._is_QDtlsClientVerifier__GeneratorParameters;
        return qtc.QDtls_SetCookieGeneratorParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#cookieGeneratorParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn CookieGeneratorParameters(self: QDtls) QDtlsClientVerifier__GeneratorParameters {
        return .{ .ptr = qtc.QDtls_CookieGeneratorParameters(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setDtlsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn SetDtlsConfiguration(self: QDtls, configuration: anytype) bool {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        return qtc.QDtls_SetDtlsConfiguration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn DtlsConfiguration(self: QDtls) QSslConfiguration {
        return .{ .ptr = qtc.QDtls_DtlsConfiguration(@ptrCast(self.ptr)) };
    }

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
    pub fn HandshakeState(self: QDtls) i32 {
        return qtc.QDtls_HandshakeState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn DoHandshake(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_DoHandshake(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handleTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn HandleTimeout(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_HandleTimeout(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#resumeHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn ResumeHandshake(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_ResumeHandshake(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#abortHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn AbortHandshake(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_AbortHandshake(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#shutdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` socket: QUdpSocket `
    ///
    pub fn Shutdown(self: QDtls, socket: anytype) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        return qtc.QDtls_Shutdown(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#isConnectionEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn IsConnectionEncrypted(self: QDtls) bool {
        return qtc.QDtls_IsConnectionEncrypted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#sessionCipher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn SessionCipher(self: QDtls) QSslCipher {
        return .{ .ptr = qtc.QDtls_SessionCipher(@ptrCast(self.ptr)) };
    }

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
    pub fn SessionProtocol(self: QDtls) i32 {
        return qtc.QDtls_SessionProtocol(@ptrCast(self.ptr));
    }

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
    pub fn WriteDatagramEncrypted(self: QDtls, socket: anytype, dgram: []u8) i64 {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        return qtc.QDtls_WriteDatagramEncrypted(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str);
    }

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
    pub fn DecryptDatagram(self: QDtls, allocator: std.mem.Allocator, socket: anytype, dgram: []u8) []u8 {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QDtls_DecryptDatagram(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdtls.DecryptDatagram: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn DtlsError(self: QDtls) u8 {
        return qtc.QDtls_DtlsError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsErrorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DtlsErrorString(self: QDtls, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDtls_DtlsErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.DtlsErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerVerificationErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerVerificationErrors(self: QDtls, allocator: std.mem.Allocator) []QSslError {
        const _arr: qtc.libqt_list = qtc.QDtls_PeerVerificationErrors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("qdtls.PeerVerificationErrors: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#ignoreVerificationErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` errorsToIgnore: []QSslError `
    ///
    pub fn IgnoreVerificationErrors(self: QDtls, errorsToIgnore: []QSslError) void {
        const errorsToIgnore_list = qtc.libqt_list{
            .len = errorsToIgnore.len,
            .data = @ptrCast(errorsToIgnore.ptr),
        };
        qtc.QDtls_IgnoreVerificationErrors(@ptrCast(self.ptr), errorsToIgnore_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn PskRequired(self: QDtls, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QDtls_PskRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPskRequired(self: QDtls, callback: *const fn (QDtls, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QDtls_Connect_PskRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn HandshakeTimeout(self: QDtls) void {
        qtc.QDtls_HandshakeTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDtls `
    ///
    /// ` callback: *const fn (self: QDtls) callconv(.c) void `
    ///
    pub fn OnHandshakeTimeout(self: QDtls, callback: *const fn (QDtls) callconv(.c) void) void {
        qtc.QDtls_Connect_HandshakeTimeout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetPeer3(self: QDtls, address: anytype, port: u16, verificationName: []const u8) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        const verificationName_str = qtc.libqt_string{
            .len = verificationName.len,
            .data = verificationName.ptr,
        };
        return qtc.QDtls_SetPeer3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), verificationName_str);
    }

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
    pub fn DoHandshake2(self: QDtls, socket: anytype, dgram: []u8) bool {
        comptime _ = @TypeOf(socket)._is_QUdpSocket;
        const dgram_str = qtc.libqt_string{
            .len = dgram.len,
            .data = dgram.ptr,
        };
        return qtc.QDtls_DoHandshake2(@ptrCast(self.ptr), @ptrCast(socket.ptr), dgram_str);
    }

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
    pub fn ObjectName(self: QDtls, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdtls.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QDtls, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn IsWidgetType(self: QDtls) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn IsWindowType(self: QDtls) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn IsQuickItemType(self: QDtls) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn SignalsBlocked(self: QDtls) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QDtls, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn Thread(self: QDtls) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDtls, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QDtls, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QDtls, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QDtls, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QDtls, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QDtls, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdtls.Children: Memory allocation failed");
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
    /// ` self: QDtls `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDtls, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QDtls, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QDtls, obj: anytype) void {
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
    /// ` self: QDtls `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDtls, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDtls `
    ///
    pub fn Disconnect3(self: QDtls) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QDtls, receiver: anytype) bool {
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
    /// ` self: QDtls `
    ///
    pub fn DumpObjectTree(self: QDtls) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn DumpObjectInfo(self: QDtls) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QDtls, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDtls `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDtls, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QDtls, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdtls.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdtls.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDtls `
    ///
    pub fn BindingStorage(self: QDtls) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn BindingStorage2(self: QDtls) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn Destroyed(self: QDtls) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QDtls, callback: *const fn (QDtls) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn Parent(self: QDtls) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QDtls, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtls `
    ///
    pub fn DeleteLater(self: QDtls) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QDtls, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QDtls, time: i64, timerType: i32) i32 {
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
    /// ` self: QDtls `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDtls, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDtls, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QDtls, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDtls, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtls `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDtls, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDtls `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDtls, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QDtls, callback: *const fn (QDtls, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDtls, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtls_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDtls, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtls_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QDtls, callback: *const fn (QDtls, QEvent) callconv(.c) bool) void {
        qtc.QDtls_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDtls, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtls_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDtls, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDtls_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QDtls, callback: *const fn (QDtls, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDtls_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDtls, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDtls_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDtls, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDtls_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QDtls, callback: *const fn (QDtls, QTimerEvent) callconv(.c) void) void {
        qtc.QDtls_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDtls, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDtls_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDtls, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDtls_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QDtls, callback: *const fn (QDtls, QChildEvent) callconv(.c) void) void {
        qtc.QDtls_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDtls, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDtls_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDtls, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDtls_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QDtls, callback: *const fn (QDtls, QEvent) callconv(.c) void) void {
        qtc.QDtls_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QDtls, callback: *const fn (QDtls, QMetaMethod) callconv(.c) void) void {
        qtc.QDtls_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDtls, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDtls_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QDtls, callback: *const fn (QDtls, QMetaMethod) callconv(.c) void) void {
        qtc.QDtls_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QDtls) QObject {
        return .{ .ptr = qtc.QDtls_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDtls `
    ///
    pub fn SuperSender(self: QDtls) QObject {
        return .{ .ptr = qtc.QDtls_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QDtls, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDtls_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QDtls) i32 {
        return qtc.QDtls_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDtls `
    ///
    pub fn SuperSenderSignalIndex(self: QDtls) i32 {
        return qtc.QDtls_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QDtls, callback: *const fn () callconv(.c) i32) void {
        qtc.QDtls_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QDtls, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtls_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDtls `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDtls, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDtls_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QDtls, callback: *const fn (QDtls, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDtls_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QDtls, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtls_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDtls `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDtls, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDtls_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QDtls, callback: *const fn (QDtls, QMetaMethod) callconv(.c) bool) void {
        qtc.QDtls_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QDtls, callback: *const fn (QDtls, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtor.QDtls)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDtls `
    ///
    pub fn Delete(self: QDtls) void {
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

    /// New constructs a new QDtlsClientVerifier::GeneratorParameters object.
    ///
    pub fn New() QDtlsClientVerifier__GeneratorParameters {
        return .{ .ptr = qtc.QDtlsClientVerifier__GeneratorParameters_new() };
    }

    /// New2 constructs a new QDtlsClientVerifier::GeneratorParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` a: qcryptographichash_enums.Algorithm `
    ///
    /// ` s: []u8 `
    ///
    pub fn New2(a: i32, s: []u8) QDtlsClientVerifier__GeneratorParameters {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QDtlsClientVerifier__GeneratorParameters_new2(@bitCast(a), s_str) };
    }

    /// New3 constructs a new QDtlsClientVerifier::GeneratorParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn New3(param1: anytype) QDtlsClientVerifier__GeneratorParameters {
        comptime _ = @TypeOf(param1)._is_QDtlsClientVerifier__GeneratorParameters;
        return .{ .ptr = qtc.QDtlsClientVerifier__GeneratorParameters_new3(@ptrCast(param1.ptr)) };
    }

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
    pub fn Hash(self: QDtlsClientVerifier__GeneratorParameters) i32 {
        return qtc.QDtlsClientVerifier__GeneratorParameters_Hash(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#hash-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` hash: qcryptographichash_enums.Algorithm `
    ///
    pub fn SetHash(self: QDtlsClientVerifier__GeneratorParameters, hash: i32) void {
        qtc.QDtlsClientVerifier__GeneratorParameters_SetHash(@ptrCast(self.ptr), @bitCast(hash));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#secret-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Secret(self: QDtlsClientVerifier__GeneratorParameters, allocator: std.mem.Allocator) []u8 {
        var secret_bytearray: qtc.libqt_string = qtc.QDtlsClientVerifier__GeneratorParameters_Secret(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&secret_bytearray);
        const secret_ret = allocator.alloc(u8, secret_bytearray.len) catch @panic("qdtlsclientverifier__generatorparameters.Secret: Memory allocation failed");
        @memcpy(secret_ret, secret_bytearray.data[0..secret_bytearray.len]);
        return secret_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#secret-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` secret: []u8 `
    ///
    pub fn SetSecret(self: QDtlsClientVerifier__GeneratorParameters, secret: []u8) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.QDtlsClientVerifier__GeneratorParameters_SetSecret(@ptrCast(self.ptr), secret_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    /// ` param1: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn OperatorAssign(self: QDtlsClientVerifier__GeneratorParameters, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDtlsClientVerifier__GeneratorParameters;
        qtc.QDtlsClientVerifier__GeneratorParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDtlsClientVerifier__GeneratorParameters `
    ///
    pub fn Delete(self: QDtlsClientVerifier__GeneratorParameters) void {
        qtc.QDtlsClientVerifier__GeneratorParameters_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#public-types)
pub const enums = struct {
    pub const QDtlsError = enum(u8) {
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

    pub const HandshakeState = enum(i32) {
        pub const HandshakeNotStarted: i32 = 0;
        pub const HandshakeInProgress: i32 = 1;
        pub const PeerVerificationFailed: i32 = 2;
        pub const HandshakeComplete: i32 = 3;
    };
};
