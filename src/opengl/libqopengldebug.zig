const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qopengldebug_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qopengldebugmessage.html
pub const qopengldebugmessage = struct {
    /// New constructs a new QOpenGLDebugMessage object.
    ///
    ///
    pub fn New() QtC.QOpenGLDebugMessage {
        return qtc.QOpenGLDebugMessage_new();
    }

    /// New2 constructs a new QOpenGLDebugMessage object.
    ///
    /// ``` debugMessage: QtC.QOpenGLDebugMessage ```
    pub fn New2(debugMessage: ?*anyopaque) QtC.QOpenGLDebugMessage {
        return qtc.QOpenGLDebugMessage_new2(@ptrCast(debugMessage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage, debugMessage: QtC.QOpenGLDebugMessage ```
    pub fn OperatorAssign(self: ?*anyopaque, debugMessage: ?*anyopaque) void {
        qtc.QOpenGLDebugMessage_OperatorAssign(@ptrCast(self), @ptrCast(debugMessage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#swap)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage, other: QtC.QOpenGLDebugMessage ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLDebugMessage_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#source)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage ```
    ///
    /// Returns: ``` qopengldebug_enums.Source ```
    pub fn Source(self: ?*anyopaque) i64 {
        return qtc.QOpenGLDebugMessage_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#type)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage ```
    ///
    /// Returns: ``` qopengldebug_enums.Type ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QOpenGLDebugMessage_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#severity)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage ```
    ///
    /// Returns: ``` qopengldebug_enums.Severity ```
    pub fn Severity(self: ?*anyopaque) i64 {
        return qtc.QOpenGLDebugMessage_Severity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#id)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage ```
    pub fn Id(self: ?*anyopaque) u32 {
        return qtc.QOpenGLDebugMessage_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#message)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage, allocator: std.mem.Allocator ```
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLDebugMessage_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebugmessage.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ``` text: []const u8 ```
    pub fn CreateApplicationMessage(text: []const u8) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateApplicationMessage(text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ``` text: []const u8 ```
    pub fn CreateThirdPartyMessage(text: []const u8) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage(text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage, debugMessage: QtC.QOpenGLDebugMessage ```
    pub fn OperatorEqual(self: ?*anyopaque, debugMessage: ?*anyopaque) bool {
        return qtc.QOpenGLDebugMessage_OperatorEqual(@ptrCast(self), @ptrCast(debugMessage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-not-eq)
    ///
    /// ``` self: QtC.QOpenGLDebugMessage, debugMessage: QtC.QOpenGLDebugMessage ```
    pub fn OperatorNotEqual(self: ?*anyopaque, debugMessage: ?*anyopaque) bool {
        return qtc.QOpenGLDebugMessage_OperatorNotEqual(@ptrCast(self), @ptrCast(debugMessage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ``` text: []const u8, id: u32 ```
    pub fn CreateApplicationMessage2(text: []const u8, id: u32) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateApplicationMessage2(text_str, @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ``` text: []const u8, id: u32, severity: qopengldebug_enums.Severity ```
    pub fn CreateApplicationMessage3(text: []const u8, id: u32, severity: i64) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateApplicationMessage3(text_str, @intCast(id), @intCast(severity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
    ///
    /// ``` text: []const u8, id: u32, severity: qopengldebug_enums.Severity, typeVal: qopengldebug_enums.Type ```
    pub fn CreateApplicationMessage4(text: []const u8, id: u32, severity: i64, typeVal: i64) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateApplicationMessage4(text_str, @intCast(id), @intCast(severity), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ``` text: []const u8, id: u32 ```
    pub fn CreateThirdPartyMessage2(text: []const u8, id: u32) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage2(text_str, @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ``` text: []const u8, id: u32, severity: qopengldebug_enums.Severity ```
    pub fn CreateThirdPartyMessage3(text: []const u8, id: u32, severity: i64) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage3(text_str, @intCast(id), @intCast(severity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
    ///
    /// ``` text: []const u8, id: u32, severity: qopengldebug_enums.Severity, typeVal: qopengldebug_enums.Type ```
    pub fn CreateThirdPartyMessage4(text: []const u8, id: u32, severity: i64, typeVal: i64) QtC.QOpenGLDebugMessage {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QOpenGLDebugMessage_CreateThirdPartyMessage4(text_str, @intCast(id), @intCast(severity), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebugmessage.html#dtor.QOpenGLDebugMessage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLDebugMessage ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLDebugMessage_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopengldebuglogger.html
pub const qopengldebuglogger = struct {
    /// New constructs a new QOpenGLDebugLogger object.
    ///
    ///
    pub fn New() QtC.QOpenGLDebugLogger {
        return qtc.QOpenGLDebugLogger_new();
    }

    /// New2 constructs a new QOpenGLDebugLogger object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLDebugLogger {
        return qtc.QOpenGLDebugLogger_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QOpenGLDebugLogger_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QOpenGLDebugLogger, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLDebugLogger_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QOpenGLDebugLogger, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QOpenGLDebugLogger_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#initialize)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn Initialize(self: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_Initialize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#isLogging)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn IsLogging(self: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_IsLogging(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#loggingMode)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    ///
    /// Returns: ``` qopengldebug_enums.LoggingMode ```
    pub fn LoggingMode(self: ?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_LoggingMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#maximumMessageLength)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn MaximumMessageLength(self: ?*anyopaque) i64 {
        return qtc.QOpenGLDebugLogger_MaximumMessageLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, name: []const u8 ```
    pub fn PushGroup(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#popGroup)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn PopGroup(self: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_PopGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn EnableMessages(self: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_EnableMessages(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, ids: []u32 ```
    pub fn EnableMessages2(self: ?*anyopaque, ids: []u32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages2(@ptrCast(self), ids_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn DisableMessages(self: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_DisableMessages(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, ids: []u32 ```
    pub fn DisableMessages2(self: ?*anyopaque, ids: []u32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages2(@ptrCast(self), ids_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#loggedMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, allocator: std.mem.Allocator ```
    pub fn LoggedMessages(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QOpenGLDebugMessage {
        const _arr: qtc.libqt_list = qtc.QOpenGLDebugLogger_LoggedMessages(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QOpenGLDebugMessage, _arr.len) catch @panic("qopengldebuglogger.LoggedMessages: Memory allocation failed");
        const _data: [*]QtC.QOpenGLDebugMessage = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#logMessage)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, debugMessage: QtC.QOpenGLDebugMessage ```
    pub fn LogMessage(self: ?*anyopaque, debugMessage: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_LogMessage(@ptrCast(self), @ptrCast(debugMessage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn StartLogging(self: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_StartLogging(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#stopLogging)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn StopLogging(self: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_StopLogging(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, debugMessage: QtC.QOpenGLDebugMessage ```
    pub fn MessageLogged(self: ?*anyopaque, debugMessage: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_MessageLogged(@ptrCast(self), @ptrCast(debugMessage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, debugMessage: QtC.QOpenGLDebugMessage) callconv(.c) void ```
    pub fn OnMessageLogged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_Connect_MessageLogged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QOpenGLDebugLogger_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QOpenGLDebugLogger_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, name: []const u8, id: u32 ```
    pub fn PushGroup2(self: ?*anyopaque, name: []const u8, id: u32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup2(@ptrCast(self), name_str, @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, name: []const u8, id: u32, source: qopengldebug_enums.Source ```
    pub fn PushGroup3(self: ?*anyopaque, name: []const u8, id: u32, source: i64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLDebugLogger_PushGroup3(@ptrCast(self), name_str, @intCast(id), @intCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sources: flag of qopengldebug_enums.Source ```
    pub fn EnableMessages1(self: ?*anyopaque, sources: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages1(@ptrCast(self), @intCast(sources));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sources: flag of qopengldebug_enums.Source, types: flag of qopengldebug_enums.Type ```
    pub fn EnableMessages22(self: ?*anyopaque, sources: i64, types: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages22(@ptrCast(self), @intCast(sources), @intCast(types));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sources: flag of qopengldebug_enums.Source, types: flag of qopengldebug_enums.Type, severities: flag of qopengldebug_enums.Severity ```
    pub fn EnableMessages3(self: ?*anyopaque, sources: i64, types: i64, severities: i64) void {
        qtc.QOpenGLDebugLogger_EnableMessages3(@ptrCast(self), @intCast(sources), @intCast(types), @intCast(severities));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, ids: []u32, sources: flag of qopengldebug_enums.Source ```
    pub fn EnableMessages23(self: ?*anyopaque, ids: []u32, sources: i64) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages23(@ptrCast(self), ids_list, @intCast(sources));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, ids: []u32, sources: flag of qopengldebug_enums.Source, types: flag of qopengldebug_enums.Type ```
    pub fn EnableMessages32(self: ?*anyopaque, ids: []u32, sources: i64, types: i64) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_EnableMessages32(@ptrCast(self), ids_list, @intCast(sources), @intCast(types));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sources: flag of qopengldebug_enums.Source ```
    pub fn DisableMessages1(self: ?*anyopaque, sources: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages1(@ptrCast(self), @intCast(sources));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sources: flag of qopengldebug_enums.Source, types: flag of qopengldebug_enums.Type ```
    pub fn DisableMessages22(self: ?*anyopaque, sources: i64, types: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages22(@ptrCast(self), @intCast(sources), @intCast(types));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sources: flag of qopengldebug_enums.Source, types: flag of qopengldebug_enums.Type, severities: flag of qopengldebug_enums.Severity ```
    pub fn DisableMessages3(self: ?*anyopaque, sources: i64, types: i64, severities: i64) void {
        qtc.QOpenGLDebugLogger_DisableMessages3(@ptrCast(self), @intCast(sources), @intCast(types), @intCast(severities));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, ids: []u32, sources: flag of qopengldebug_enums.Source ```
    pub fn DisableMessages23(self: ?*anyopaque, ids: []u32, sources: i64) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages23(@ptrCast(self), ids_list, @intCast(sources));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, ids: []u32, sources: flag of qopengldebug_enums.Source, types: flag of qopengldebug_enums.Type ```
    pub fn DisableMessages32(self: ?*anyopaque, ids: []u32, sources: i64, types: i64) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QOpenGLDebugLogger_DisableMessages32(@ptrCast(self), ids_list, @intCast(sources), @intCast(types));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, loggingMode: qopengldebug_enums.LoggingMode ```
    pub fn StartLogging1(self: ?*anyopaque, loggingMode: i32) void {
        qtc.QOpenGLDebugLogger_StartLogging1(@ptrCast(self), @intCast(loggingMode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopengldebuglogger.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qopengldebuglogger.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLDebugLogger_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QOpenGLDebugLogger_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QOpenGLDebugLogger_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QOpenGLDebugLogger_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QOpenGLDebugLogger_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLDebugLogger_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLDebugLogger_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLDebugLogger_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QOpenGLDebugLogger_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLDebugLogger_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QOpenGLDebugLogger, callback: *const fn (self: QtC.QOpenGLDebugLogger, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengldebuglogger.html#dtor.QOpenGLDebugLogger)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLDebugLogger ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLDebugLogger_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopengldebug.html#types
pub const enums = struct {
    pub const Source = enum {
        pub const InvalidSource: i32 = 0;
        pub const APISource: i32 = 1;
        pub const WindowSystemSource: i32 = 2;
        pub const ShaderCompilerSource: i32 = 4;
        pub const ThirdPartySource: i32 = 8;
        pub const ApplicationSource: i32 = 16;
        pub const OtherSource: i32 = 32;
        pub const LastSource: i32 = 32;
        pub const AnySource: i64 = 4294967295;
    };

    pub const Type = enum {
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
        pub const AnyType: i64 = 4294967295;
    };

    pub const Severity = enum {
        pub const InvalidSeverity: i32 = 0;
        pub const HighSeverity: i32 = 1;
        pub const MediumSeverity: i32 = 2;
        pub const LowSeverity: i32 = 4;
        pub const NotificationSeverity: i32 = 8;
        pub const LastSeverity: i32 = 8;
        pub const AnySeverity: i64 = 4294967295;
    };

    pub const LoggingMode = enum {
        pub const AsynchronousLogging: i32 = 0;
        pub const SynchronousLogging: i32 = 1;
    };
};
