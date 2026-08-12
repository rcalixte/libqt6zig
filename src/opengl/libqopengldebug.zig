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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLDebugMessage object in C++ memory
    ///
    pub fn new() QOpenGLDebugMessage {
        return .{ .ptr = qtc.QOpenGLDebugMessage_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLDebugMessage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn new2(debugMessage: anytype) QOpenGLDebugMessage {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        return .{ .ptr = qtc.QOpenGLDebugMessage_new2(@ptrCast(debugMessage.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn operatorAssign(self: QOpenGLDebugMessage, debugMessage: anytype) void {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugMessage_OperatorAssign(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` other: QOpenGLDebugMessage `
    ///
    pub fn swap(self: QOpenGLDebugMessage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugMessage_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

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
    pub fn source(self: QOpenGLDebugMessage) i32 {
        return qtc.QOpenGLDebugMessage_Source(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QOpenGLDebugMessage) i32 {
        return qtc.QOpenGLDebugMessage_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `severity` instead
    ///
    pub const Severity = severity;

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
    pub fn severity(self: QOpenGLDebugMessage) i32 {
        return qtc.QOpenGLDebugMessage_Severity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    pub fn id(self: QOpenGLDebugMessage) u32 {
        return qtc.QOpenGLDebugMessage_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: QOpenGLDebugMessage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOpenGLDebugMessage_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLDebugMessage.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createApplicationMessage` instead
    ///
    pub const CreateApplicationMessage = createApplicationMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn createApplicationMessage(text: []const u8) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage(text_str) };
    }

    /// ### DEPRECATED: Use `createThirdPartyMessage` instead
    ///
    pub const CreateThirdPartyMessage = createThirdPartyMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn createThirdPartyMessage(text: []const u8) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage(text_str) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn operatorEqual(self: QOpenGLDebugMessage, debugMessage: anytype) bool {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        return qtc.QOpenGLDebugMessage_OperatorEqual(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn operatorNotEqual(self: QOpenGLDebugMessage, debugMessage: anytype) bool {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        return qtc.QOpenGLDebugMessage_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### DEPRECATED: Use `createApplicationMessage2` instead
    ///
    pub const CreateApplicationMessage2 = createApplicationMessage2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    pub fn createApplicationMessage2(text: []const u8, _id: u32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage2(text_str, @bitCast(_id)) };
    }

    /// ### DEPRECATED: Use `createApplicationMessage3` instead
    ///
    pub const CreateApplicationMessage3 = createApplicationMessage3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    /// ` _severity: qopengldebug_enums.Severity `
    ///
    pub fn createApplicationMessage3(text: []const u8, _id: u32, _severity: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage3(text_str, @bitCast(_id), @bitCast(_severity)) };
    }

    /// ### DEPRECATED: Use `createApplicationMessage4` instead
    ///
    pub const CreateApplicationMessage4 = createApplicationMessage4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    /// ` _severity: qopengldebug_enums.Severity `
    ///
    /// ` typeVal: qopengldebug_enums.Type `
    ///
    pub fn createApplicationMessage4(text: []const u8, _id: u32, _severity: i32, typeVal: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateApplicationMessage4(text_str, @bitCast(_id), @bitCast(_severity), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `createThirdPartyMessage2` instead
    ///
    pub const CreateThirdPartyMessage2 = createThirdPartyMessage2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    pub fn createThirdPartyMessage2(text: []const u8, _id: u32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage2(text_str, @bitCast(_id)) };
    }

    /// ### DEPRECATED: Use `createThirdPartyMessage3` instead
    ///
    pub const CreateThirdPartyMessage3 = createThirdPartyMessage3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    /// ` _severity: qopengldebug_enums.Severity `
    ///
    pub fn createThirdPartyMessage3(text: []const u8, _id: u32, _severity: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage3(text_str, @bitCast(_id), @bitCast(_severity)) };
    }

    /// ### DEPRECATED: Use `createThirdPartyMessage4` instead
    ///
    pub const CreateThirdPartyMessage4 = createThirdPartyMessage4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    /// ` _severity: qopengldebug_enums.Severity `
    ///
    /// ` typeVal: qopengldebug_enums.Type `
    ///
    pub fn createThirdPartyMessage4(text: []const u8, _id: u32, _severity: i32, typeVal: i32) QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QOpenGLDebugMessage_CreateThirdPartyMessage4(text_str, @bitCast(_id), @bitCast(_severity), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#dtor.QOpenGLDebugMessage)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLDebugMessage `
    ///
    pub fn delete(self: QOpenGLDebugMessage) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLDebugLogger object in C++ memory
    ///
    pub fn new() QOpenGLDebugLogger {
        return .{ .ptr = qtc.QOpenGLDebugLogger_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLDebugLogger object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QOpenGLDebugLogger {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QOpenGLDebugLogger_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn metaObject(self: QOpenGLDebugLogger) QMetaObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QOpenGLDebugLogger, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLDebugLogger_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn superMetaObject(self: QOpenGLDebugLogger) QMetaObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QOpenGLDebugLogger, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLDebugLogger_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QOpenGLDebugLogger, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLDebugLogger_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QOpenGLDebugLogger, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QOpenGLDebugLogger, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLDebugLogger.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn initialize(self: QOpenGLDebugLogger) bool {
        return qtc.QOpenGLDebugLogger_Initialize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLogging` instead
    ///
    pub const IsLogging = isLogging;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#isLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn isLogging(self: QOpenGLDebugLogger) bool {
        return qtc.QOpenGLDebugLogger_IsLogging(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loggingMode` instead
    ///
    pub const LoggingMode = loggingMode;

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
    pub fn loggingMode(self: QOpenGLDebugLogger) i32 {
        return qtc.QOpenGLDebugLogger_LoggingMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumMessageLength` instead
    ///
    pub const MaximumMessageLength = maximumMessageLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#maximumMessageLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn maximumMessageLength(self: QOpenGLDebugLogger) i64 {
        return qtc.QOpenGLDebugLogger_MaximumMessageLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pushGroup` instead
    ///
    pub const PushGroup = pushGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    pub fn pushGroup(self: QOpenGLDebugLogger, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `popGroup` instead
    ///
    pub const PopGroup = popGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#popGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn popGroup(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_PopGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enableMessages` instead
    ///
    pub const EnableMessages = enableMessages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn enableMessages(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_EnableMessages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enableMessages2` instead
    ///
    pub const EnableMessages2 = enableMessages2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    pub fn enableMessages2(self: QOpenGLDebugLogger, ids: []u32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages2(@ptrCast(self.ptr), ids_list);
    }

    /// ### DEPRECATED: Use `disableMessages` instead
    ///
    pub const DisableMessages = disableMessages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn disableMessages(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_DisableMessages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disableMessages2` instead
    ///
    pub const DisableMessages2 = disableMessages2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` ids: []u32 `
    ///
    pub fn disableMessages2(self: QOpenGLDebugLogger, ids: []u32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages2(@ptrCast(self.ptr), ids_list);
    }

    /// ### DEPRECATED: Use `loggedMessages` instead
    ///
    pub const LoggedMessages = loggedMessages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#loggedMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn loggedMessages(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) []QOpenGLDebugMessage {
        const _arr: qtc.libqt_list = qtc.QOpenGLDebugLogger_LoggedMessages(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QOpenGLDebugMessage, _arr.len) catch @panic("QOpenGLDebugLogger.loggedMessages: Memory allocation failed");
        const _data_val: [*]QtC.QOpenGLDebugMessage = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `logMessage` instead
    ///
    pub const LogMessage = logMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#logMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn logMessage(self: QOpenGLDebugLogger, debugMessage: anytype) void {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugLogger_LogMessage(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### DEPRECATED: Use `startLogging` instead
    ///
    pub const StartLogging = startLogging;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn startLogging(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_StartLogging(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stopLogging` instead
    ///
    pub const StopLogging = stopLogging;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#stopLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn stopLogging(self: QOpenGLDebugLogger) void {
        qtc.QOpenGLDebugLogger_StopLogging(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `messageLogged` instead
    ///
    pub const MessageLogged = messageLogged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` debugMessage: QOpenGLDebugMessage `
    ///
    pub fn messageLogged(self: QOpenGLDebugLogger, debugMessage: anytype) void {
        comptime _ = @TypeOf(debugMessage)._is_QOpenGLDebugMessage;
        qtc.QOpenGLDebugLogger_MessageLogged(@ptrCast(self.ptr), @ptrCast(debugMessage.ptr));
    }

    /// ### DEPRECATED: Use `onMessageLogged` instead
    ///
    pub const OnMessageLogged = onMessageLogged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, debugMessage: QOpenGLDebugMessage) callconv(.c) void `
    ///
    pub fn onMessageLogged(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QOpenGLDebugMessage) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_Connect_MessageLogged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLDebugLogger.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLDebugLogger.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pushGroup2` instead
    ///
    pub const PushGroup2 = pushGroup2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    pub fn pushGroup2(self: QOpenGLDebugLogger, name: []const u8, _id: u32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup2(@ptrCast(self.ptr), name_str, @bitCast(_id));
    }

    /// ### DEPRECATED: Use `pushGroup3` instead
    ///
    pub const PushGroup3 = pushGroup3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _id: u32 `
    ///
    /// ` _source: qopengldebug_enums.Source `
    ///
    pub fn pushGroup3(self: QOpenGLDebugLogger, name: []const u8, _id: u32, _source: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup3(@ptrCast(self.ptr), name_str, @bitCast(_id), @bitCast(_source));
    }

    /// ### DEPRECATED: Use `enableMessages1` instead
    ///
    pub const EnableMessages1 = enableMessages1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    pub fn enableMessages1(self: QOpenGLDebugLogger, sources: i32) void {
        qtc.QOpenGLDebugLogger_EnableMessages1(@ptrCast(self.ptr), @bitCast(sources));
    }

    /// ### DEPRECATED: Use `enableMessages22` instead
    ///
    pub const EnableMessages22 = enableMessages22;

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
    pub fn enableMessages22(self: QOpenGLDebugLogger, sources: i32, types: i32) void {
        qtc.QOpenGLDebugLogger_EnableMessages22(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types));
    }

    /// ### DEPRECATED: Use `enableMessages3` instead
    ///
    pub const EnableMessages3 = enableMessages3;

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
    pub fn enableMessages3(self: QOpenGLDebugLogger, sources: i32, types: i32, severities: i32) void {
        qtc.QOpenGLDebugLogger_EnableMessages3(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types), @bitCast(severities));
    }

    /// ### DEPRECATED: Use `enableMessages23` instead
    ///
    pub const EnableMessages23 = enableMessages23;

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
    pub fn enableMessages23(self: QOpenGLDebugLogger, ids: []u32, sources: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages23(@ptrCast(self.ptr), ids_list, @bitCast(sources));
    }

    /// ### DEPRECATED: Use `enableMessages32` instead
    ///
    pub const EnableMessages32 = enableMessages32;

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
    pub fn enableMessages32(self: QOpenGLDebugLogger, ids: []u32, sources: i32, types: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages32(@ptrCast(self.ptr), ids_list, @bitCast(sources), @bitCast(types));
    }

    /// ### DEPRECATED: Use `disableMessages1` instead
    ///
    pub const DisableMessages1 = disableMessages1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` sources: flag of qopengldebug_enums.Source `
    ///
    pub fn disableMessages1(self: QOpenGLDebugLogger, sources: i32) void {
        qtc.QOpenGLDebugLogger_DisableMessages1(@ptrCast(self.ptr), @bitCast(sources));
    }

    /// ### DEPRECATED: Use `disableMessages22` instead
    ///
    pub const DisableMessages22 = disableMessages22;

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
    pub fn disableMessages22(self: QOpenGLDebugLogger, sources: i32, types: i32) void {
        qtc.QOpenGLDebugLogger_DisableMessages22(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types));
    }

    /// ### DEPRECATED: Use `disableMessages3` instead
    ///
    pub const DisableMessages3 = disableMessages3;

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
    pub fn disableMessages3(self: QOpenGLDebugLogger, sources: i32, types: i32, severities: i32) void {
        qtc.QOpenGLDebugLogger_DisableMessages3(@ptrCast(self.ptr), @bitCast(sources), @bitCast(types), @bitCast(severities));
    }

    /// ### DEPRECATED: Use `disableMessages23` instead
    ///
    pub const DisableMessages23 = disableMessages23;

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
    pub fn disableMessages23(self: QOpenGLDebugLogger, ids: []u32, sources: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages23(@ptrCast(self.ptr), ids_list, @bitCast(sources));
    }

    /// ### DEPRECATED: Use `disableMessages32` instead
    ///
    pub const DisableMessages32 = disableMessages32;

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
    pub fn disableMessages32(self: QOpenGLDebugLogger, ids: []u32, sources: i32, types: i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages32(@ptrCast(self.ptr), ids_list, @bitCast(sources), @bitCast(types));
    }

    /// ### DEPRECATED: Use `startLogging1` instead
    ///
    pub const StartLogging1 = startLogging1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _loggingMode: qopengldebug_enums.LoggingMode `
    ///
    pub fn startLogging1(self: QOpenGLDebugLogger, _loggingMode: i32) void {
        qtc.QOpenGLDebugLogger_StartLogging1(@ptrCast(self.ptr), @bitCast(_loggingMode));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLDebugLogger.objectName: Memory allocation failed");
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QOpenGLDebugLogger, name: []const u8) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn isWidgetType(self: QOpenGLDebugLogger) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn isWindowType(self: QOpenGLDebugLogger) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn isQuickItemType(self: QOpenGLDebugLogger) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn signalsBlocked(self: QOpenGLDebugLogger) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QOpenGLDebugLogger, b: bool) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn thread(self: QOpenGLDebugLogger) QThread {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QOpenGLDebugLogger, _thread: anytype) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QOpenGLDebugLogger, interval: i32) i32 {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QOpenGLDebugLogger, time: i64) i32 {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: QOpenGLDebugLogger, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QOpenGLDebugLogger, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QOpenGLDebugLogger.children: Memory allocation failed");
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QOpenGLDebugLogger, _parent: anytype) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QOpenGLDebugLogger, filterObj: anytype) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QOpenGLDebugLogger, obj: anytype) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QOpenGLDebugLogger, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn disconnect3(self: QOpenGLDebugLogger) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QOpenGLDebugLogger, receiver: anytype) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn dumpObjectTree(self: QOpenGLDebugLogger) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn dumpObjectInfo(self: QOpenGLDebugLogger) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QOpenGLDebugLogger, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QOpenGLDebugLogger, name: [:0]const u8) QVariant {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QOpenGLDebugLogger, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QOpenGLDebugLogger.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QOpenGLDebugLogger.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn bindingStorage(self: QOpenGLDebugLogger) QBindingStorage {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn bindingStorage2(self: QOpenGLDebugLogger) QBindingStorage {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn destroyed(self: QOpenGLDebugLogger) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger) callconv(.c) void) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn parent(self: QOpenGLDebugLogger) QObject {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QOpenGLDebugLogger, classname: [:0]const u8) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn deleteLater(self: QOpenGLDebugLogger) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QOpenGLDebugLogger, interval: i32, timerType: i32) i32 {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QOpenGLDebugLogger, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QOpenGLDebugLogger, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QOpenGLDebugLogger, signal: [:0]const u8) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QOpenGLDebugLogger, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QOpenGLDebugLogger, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QOpenGLDebugLogger, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QOpenGLDebugLogger, param1: anytype) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QObject) callconv(.c) void) void {
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QOpenGLDebugLogger, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QOpenGLDebugLogger, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QOpenGLDebugLogger, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QOpenGLDebugLogger, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLDebugLogger_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QOpenGLDebugLogger, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLDebugLogger_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QOpenGLDebugLogger, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLDebugLogger_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QOpenGLDebugLogger, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLDebugLogger_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QOpenGLDebugLogger, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLDebugLogger_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QOpenGLDebugLogger, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLDebugLogger_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QOpenGLDebugLogger, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLDebugLogger_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QEvent) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QOpenGLDebugLogger, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLDebugLogger_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn sender(self: QOpenGLDebugLogger) QObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn superSender(self: QOpenGLDebugLogger) QObject {
        return .{ .ptr = qtc.QOpenGLDebugLogger_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QOpenGLDebugLogger, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLDebugLogger_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn senderSignalIndex(self: QOpenGLDebugLogger) i32 {
        return qtc.QOpenGLDebugLogger_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn superSenderSignalIndex(self: QOpenGLDebugLogger) i32 {
        return qtc.QOpenGLDebugLogger_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QOpenGLDebugLogger, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QOpenGLDebugLogger, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLDebugLogger_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QOpenGLDebugLogger, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLDebugLogger_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QOpenGLDebugLogger, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLDebugLogger_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QOpenGLDebugLogger, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLDebugLogger_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLDebugLogger`
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLDebugLogger `
    ///
    /// ` callback: *const fn (self: QOpenGLDebugLogger, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QOpenGLDebugLogger, callback: *const fn (QOpenGLDebugLogger, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#dtor.QOpenGLDebugLogger)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLDebugLogger `
    ///
    pub fn delete(self: QOpenGLDebugLogger) void {
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
