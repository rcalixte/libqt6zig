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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qopengldebug_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html)
pub const QOpenGLDebugMessage = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLDebugMessage,

    pub const _is_QOpenGLDebugMessage = {};

    /// New constructs a new QOpenGLDebugMessage object.
    ///
    pub fn New() QOpenGLDebugMessage {
        return .{ .ptr = qtc.QOpenGLDebugMessage_new() };
    }

    /// New2 constructs a new QOpenGLDebugMessage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn New2(debugMessage: anytype) QOpenGLDebugMessage {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        return .{ .ptr = qtc.QOpenGLDebugMessage_new2(@ptrCast(debugMessage.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn OperatorAssign(self: QOpenGLDebugMessage, debugMessage: anytype) void {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugMessage_OperatorAssign(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` other: QOpenGLDebugMessage `
    ///
    pub fn Swap(self: QOpenGLDebugMessage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugMessage_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ## Returns:
    ///
    /// ` qopengldebug_enums.Source `
    ///
    pub fn Source(self: QOpenGLDebugMessage) i32 {
        return qtc.QOpenGLDebugMessage_Source(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ## Returns:
    ///
    /// ` qopengldebug_enums.Type `
    ///
    pub fn Type(self: QOpenGLDebugMessage) i32 {
        return qtc.QOpenGLDebugMessage_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#severity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ## Returns:
    ///
    /// ` qopengldebug_enums.Severity `
    ///
    pub fn Severity(self: QOpenGLDebugMessage) i32 {
        return qtc.QOpenGLDebugMessage_Severity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    pub fn Id(self: QOpenGLDebugMessage) u32 {
        return qtc.QOpenGLDebugMessage_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: QOpenGLDebugMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOpenGLDebugMessage_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebugmessage.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn CreateApplicationMessage(text: []const u8) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage(text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn CreateThirdPartyMessage(text: []const u8) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage(text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn OperatorEqual(self: QOpenGLDebugMessage, debugMessage: anytype) bool {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        return qtc.QOpenGLDebugMessage_OperatorEqual(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn OperatorNotEqual(self: QOpenGLDebugMessage, debugMessage: anytype) bool {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        return qtc.QOpenGLDebugMessage_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` id: u32 `
    ///
    pub fn CreateApplicationMessage2(text: []const u8, id: u32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage2(text_str, @bitCast(id)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` id: u32 `
    ///
    /// ` severity: qopengldebug_enums.Severity `
    ///
    pub fn CreateApplicationMessage3(text: []const u8, id: u32, severity: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage3(text_str, @bitCast(id), @bitCast(severity)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` id: u32 `
    ///
    /// ` severity: qopengldebug_enums.Severity `
    ///
    /// ` typeVal: qopengldebug_enums.Type `
    ///
    pub fn CreateApplicationMessage4(text: []const u8, id: u32, severity: i32, typeVal: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage4(text_str, @bitCast(id), @bitCast(severity), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` id: u32 `
    ///
    pub fn CreateThirdPartyMessage2(text: []const u8, id: u32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage2(text_str, @bitCast(id)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` id: u32 `
    ///
    /// ` severity: qopengldebug_enums.Severity `
    ///
    pub fn CreateThirdPartyMessage3(text: []const u8, id: u32, severity: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage3(text_str, @bitCast(id), @bitCast(severity)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` id: u32 `
    ///
    /// ` severity: qopengldebug_enums.Severity `
    ///
    /// ` typeVal: qopengldebug_enums.Type `
    ///
    pub fn CreateThirdPartyMessage4(text: []const u8, id: u32, severity: i32, typeVal: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage4(text_str, @bitCast(id), @bitCast(severity), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#dtor.QOpenGLDebugMessage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    pub fn Delete(self: QOpenGLDebugMessage) void {
        qtc.QOpenGLDebugMessage_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html)
pub const QOpenGLDebugLogger = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLDebugLogger,

    pub const _is_QOpenGLDebugLogger = {};
    pub const _is_QObject = {};

    /// New constructs a new QOpenGLDebugLogger object.
    ///
    pub fn New() QOpenGLDebugLogger {
        return .{ .ptr = qtc.QOpenGLDebugLogger_new() };
    }

    /// New2 constructs a new QOpenGLDebugLogger object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QOpenGLDebugLogger {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QOpenGLDebugLogger_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn MetaObject(self: QOpenGLDebugLogger) QMetaObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QOpenGLDebugLogger, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLDebugLogger_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn SuperMetaObject(self: QOpenGLDebugLogger) QMetaObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QOpenGLDebugLogger, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLDebugLogger_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QOpenGLDebugLogger, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLDebugLogger_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QOpenGLDebugLogger, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QOpenGLDebugLogger, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn Initialize(self: QOpenGLDebugLogger) bool {
        return qtc.QOpenGLDebugLogger_Initialize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#isLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn IsLogging(self: QOpenGLDebugLogger) bool {
        return qtc.QOpenGLDebugLogger_IsLogging(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#loggingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ## Returns:
    ///
    /// ` qopengldebug_enums.LoggingMode `
    ///
    pub fn LoggingMode(self: QOpenGLDebugLogger) i32 {
        return qtc.QOpenGLDebugLogger_LoggingMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#maximumMessageLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn MaximumMessageLength(self: QOpenGLDebugLogger) i64 {
        return qtc.QOpenGLDebugLogger_MaximumMessageLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    pub fn PushGroup(self: QOpenGLDebugLogger, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#popGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn PopGroup(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_PopGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn EnableMessages(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_EnableMessages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    pub fn EnableMessages2(self: QOpenGLDebugLogger, ids: []u32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages2(@ptrCast(self.ptr), ids_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn DisableMessages(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_DisableMessages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    pub fn DisableMessages2(self: QOpenGLDebugLogger, ids: []u32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages2(@ptrCast(self.ptr), ids_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#loggedMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LoggedMessages(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) []QOpenGLDebugMessage {
        const _arr: qtc.libqt_list = qtc.QOpenGLDebugLogger_LoggedMessages(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QOpenGLDebugMessage, _arr.len) catch @panic("qopengldebuglogger.LoggedMessages: Memory allocation failed");
        const _data: [*]QtC.QOpenGLDebugMessage = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#logMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn LogMessage(self: QOpenGLDebugLogger, debugMessage: anytype) void {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugLogger_LogMessage(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn StartLogging(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_StartLogging(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#stopLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn StopLogging(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_StopLogging(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn MessageLogged(self: QOpenGLDebugLogger, debugMessage: anytype) void {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugLogger_MessageLogged(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, debugMessage: QOpenGLDebugMessage) callconv(.c) void `
    ///
    pub fn OnMessageLogged(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QOpenGLDebugMessage) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_Connect_MessageLogged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    /// ` id: u32 `
    ///
    pub fn PushGroup2(self: QOpenGLDebugLogger, name: []const u8, id: u32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup2(@ptrCast(self.ptr), name_str, @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    /// ` id: u32 `
    ///
    /// ` source: qopengldebug_enums.Source `
    ///
    pub fn PushGroup3(self: QOpenGLDebugLogger, name: []const u8, id: u32, source: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup3(@ptrCast(self.ptr), name_str, @bitCast(id), @bitCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    pub fn EnableMessages1(self: QOpenGLDebugLogger, sources: i32) void {
        qtc.QOpenGLDebugLogger_EnableMessages1(@ptrCast(self.ptr), @bitCast(sources));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    /// ` types: flag of qopengldebug_enums.Type `
    ///
    pub fn EnableMessages22(self: QOpenGLDebugLogger, sources: i32, types: i32) void {
        qtc.QOpenGLDebugLogger_EnableMessages22(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    /// ` types: flag of qopengldebug_enums.Type `
    ///
    /// ` severities: flag of qopengldebug_enums.Severity `
    ///
    pub fn EnableMessages3(self: QOpenGLDebugLogger, sources: i32, types: i32, severities: i32) void {
        qtc.QOpenGLDebugLogger_EnableMessages3(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types), @bitCast(severities));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    pub fn EnableMessages23(self: QOpenGLDebugLogger, ids: []u32, sources: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages23(@ptrCast(self.ptr), ids_list, @bitCast(sources));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    /// ` types: flag of qopengldebug_enums.Type `
    ///
    pub fn EnableMessages32(self: QOpenGLDebugLogger, ids: []u32, sources: i32, types: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages32(@ptrCast(self.ptr), ids_list, @bitCast(sources), @bitCast(types));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    pub fn DisableMessages1(self: QOpenGLDebugLogger, sources: i32) void {
        qtc.QOpenGLDebugLogger_DisableMessages1(@ptrCast(self.ptr), @bitCast(sources));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    /// ` types: flag of qopengldebug_enums.Type `
    ///
    pub fn DisableMessages22(self: QOpenGLDebugLogger, sources: i32, types: i32) void {
        qtc.QOpenGLDebugLogger_DisableMessages22(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    /// ` types: flag of qopengldebug_enums.Type `
    ///
    /// ` severities: flag of qopengldebug_enums.Severity `
    ///
    pub fn DisableMessages3(self: QOpenGLDebugLogger, sources: i32, types: i32, severities: i32) void {
        qtc.QOpenGLDebugLogger_DisableMessages3(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types), @bitCast(severities));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    pub fn DisableMessages23(self: QOpenGLDebugLogger, ids: []u32, sources: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages23(@ptrCast(self.ptr), ids_list, @bitCast(sources));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    /// ` types: flag of qopengldebug_enums.Type `
    ///
    pub fn DisableMessages32(self: QOpenGLDebugLogger, ids: []u32, sources: i32, types: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages32(@ptrCast(self.ptr), ids_list, @bitCast(sources), @bitCast(types));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` loggingMode: qopengldebug_enums.LoggingMode `
    ///
    pub fn StartLogging1(self: QOpenGLDebugLogger, loggingMode: i32) void {
        qtc.QOpenGLDebugLogger_StartLogging1(@ptrCast(self.ptr), @bitCast(loggingMode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QOpenGLDebugLogger, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn IsWidgetType(self: QOpenGLDebugLogger) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn IsWindowType(self: QOpenGLDebugLogger) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn IsQuickItemType(self: QOpenGLDebugLogger) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn SignalsBlocked(self: QOpenGLDebugLogger) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QOpenGLDebugLogger, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn Thread(self: QOpenGLDebugLogger) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QOpenGLDebugLogger, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QOpenGLDebugLogger, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QOpenGLDebugLogger, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QOpenGLDebugLogger, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QOpenGLDebugLogger, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qopengldebuglogger.Children: Memory allocation failed");
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QOpenGLDebugLogger, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QOpenGLDebugLogger, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QOpenGLDebugLogger, obj: anytype) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QOpenGLDebugLogger, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn Disconnect3(self: QOpenGLDebugLogger) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QOpenGLDebugLogger, receiver: anytype) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn DumpObjectTree(self: QOpenGLDebugLogger) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn DumpObjectInfo(self: QOpenGLDebugLogger) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QOpenGLDebugLogger, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QOpenGLDebugLogger, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qopengldebuglogger.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qopengldebuglogger.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn BindingStorage(self: QOpenGLDebugLogger) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn BindingStorage2(self: QOpenGLDebugLogger) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn Destroyed(self: QOpenGLDebugLogger) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn Parent(self: QOpenGLDebugLogger) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QOpenGLDebugLogger, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn DeleteLater(self: QOpenGLDebugLogger) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QOpenGLDebugLogger, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QOpenGLDebugLogger, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QOpenGLDebugLogger, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QOpenGLDebugLogger, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QOpenGLDebugLogger, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QOpenGLDebugLogger, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QOpenGLDebugLogger, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QOpenGLDebugLogger, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QObject) callconv(.c) void) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QOpenGLDebugLogger, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QOpenGLDebugLogger, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QOpenGLDebugLogger, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QOpenGLDebugLogger, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QOpenGLDebugLogger, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLDebugLogger_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QOpenGLDebugLogger, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLDebugLogger_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QOpenGLDebugLogger, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLDebugLogger_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QOpenGLDebugLogger, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLDebugLogger_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QOpenGLDebugLogger, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLDebugLogger_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QOpenGLDebugLogger, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLDebugLogger_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QEvent) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn Sender(self: QOpenGLDebugLogger) QObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn SuperSender(self: QOpenGLDebugLogger) QObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QOpenGLDebugLogger, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLDebugLogger_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn SenderSignalIndex(self: QOpenGLDebugLogger) i32 {
        return qtc.QOpenGLDebugLogger_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn SuperSenderSignalIndex(self: QOpenGLDebugLogger) i32 {
        return qtc.QOpenGLDebugLogger_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QOpenGLDebugLogger, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QOpenGLDebugLogger, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLDebugLogger_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QOpenGLDebugLogger, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLDebugLogger_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QOpenGLDebugLogger, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLDebugLogger_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QOpenGLDebugLogger, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLDebugLogger_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#dtor.QOpenGLDebugLogger)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn Delete(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebug.html#public-types)
pub const enums = struct {
    pub const Source = enum(i32) {
        pub const InvalidSource: i32 = 0;
        pub const APISource: i32 = 1;
        pub const WindowSystemSource: i32 = 2;
        pub const ShaderCompilerSource: i32 = 4;
        pub const ThirdPartySource: i32 = 8;
        pub const ApplicationSource: i32 = 16;
        pub const OtherSource: i32 = 32;
        pub const LastSource: i32 = 32;
        pub const AnySource: i32 = -1;
    };

    pub const Type = enum(i32) {
        pub const InvalidType: i32 = 0;
        pub const ErrorType: i32 = 1;
        pub const DeprecatedBehaviorType: i32 = 2;
        pub const UndefinedBehaviorType: i32 = 4;
        pub const PortabilityType: i32 = 8;
        pub const PerformanceType: i32 = 16;
        pub const OtherType: i32 = 32;
        pub const MarkerType: i32 = 64;
        pub const GroupPushType: i32 = 128;
        pub const GroupPopType: i32 = 256;
        pub const LastType: i32 = 256;
        pub const AnyType: i32 = -1;
    };

    pub const Severity = enum(i32) {
        pub const InvalidSeverity: i32 = 0;
        pub const HighSeverity: i32 = 1;
        pub const MediumSeverity: i32 = 2;
        pub const LowSeverity: i32 = 4;
        pub const NotificationSeverity: i32 = 8;
        pub const LastSeverity: i32 = 8;
        pub const AnySeverity: i32 = -1;
    };

    pub const LoggingMode = enum(i32) {
        pub const AsynchronousLogging: i32 = 0;
        pub const SynchronousLogging: i32 = 1;
    };
};
