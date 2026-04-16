const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QVector2D = @import("libqt6").QVector2D;
const QVector3D = @import("libqt6").QVector3D;
const QVector4D = @import("libqt6").QVector4D;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qopenglshaderprogram_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html)
pub const QOpenGLShader = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLShader,

    pub const _is_QOpenGLShader = {};
    pub const _is_QObject = {};

    /// New constructs a new QOpenGLShader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    pub fn New(typeVal: i32) QOpenGLShader {
        return .{ .ptr = qtc.QOpenGLShader_new(@bitCast(typeVal)) };
    }

    /// New2 constructs a new QOpenGLShader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(typeVal: i32, parent: anytype) QOpenGLShader {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QOpenGLShader_new2(@bitCast(typeVal), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn MetaObject(self: QOpenGLShader) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShader_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QOpenGLShader, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLShader_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    pub fn SuperMetaObject(self: QOpenGLShader) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShader_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QOpenGLShader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShader_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QOpenGLShader, callback: *const fn (QOpenGLShader, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLShader_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QOpenGLShader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShader_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QOpenGLShader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShader_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QOpenGLShader, callback: *const fn (QOpenGLShader, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLShader_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QOpenGLShader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShader_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#shaderType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    pub fn ShaderType(self: QOpenGLShader) i32 {
        return qtc.QOpenGLShader_ShaderType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` source: [:0]const u8 `
    ///
    pub fn CompileSourceCode(self: QOpenGLShader, source: [:0]const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShader_CompileSourceCode(@ptrCast(self.ptr), source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` source: []u8 `
    ///
    pub fn CompileSourceCode2(self: QOpenGLShader, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceCode2(@ptrCast(self.ptr), source_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` source: []const u8 `
    ///
    pub fn CompileSourceCode3(self: QOpenGLShader, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceCode3(@ptrCast(self.ptr), source_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn CompileSourceFile(self: QOpenGLShader, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#sourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceCode(self: QOpenGLShader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QOpenGLShader_SourceCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qopenglshader.SourceCode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#isCompiled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn IsCompiled(self: QOpenGLShader) bool {
        return qtc.QOpenGLShader_IsCompiled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#log)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Log(self: QOpenGLShader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOpenGLShader_Log(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Log: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#shaderId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn ShaderId(self: QOpenGLShader) u32 {
        return qtc.QOpenGLShader_ShaderId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    pub fn HasOpenGLShaders(typeVal: i32) bool {
        return qtc.QOpenGLShader_HasOpenGLShaders(@bitCast(typeVal));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn HasOpenGLShaders2(typeVal: i32, context: anytype) bool {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return qtc.QOpenGLShader_HasOpenGLShaders2(@bitCast(typeVal), @ptrCast(context.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QOpenGLShader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QOpenGLShader, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn IsWidgetType(self: QOpenGLShader) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn IsWindowType(self: QOpenGLShader) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn IsQuickItemType(self: QOpenGLShader) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn SignalsBlocked(self: QOpenGLShader) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QOpenGLShader, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn Thread(self: QOpenGLShader) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QOpenGLShader, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QOpenGLShader, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QOpenGLShader, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QOpenGLShader, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QOpenGLShader, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QOpenGLShader, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qopenglshader.Children: Memory allocation failed");
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
    /// ` self: QOpenGLShader `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QOpenGLShader, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QOpenGLShader, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QOpenGLShader, obj: anytype) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QOpenGLShader, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn Disconnect3(self: QOpenGLShader) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QOpenGLShader, receiver: anytype) bool {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn DumpObjectTree(self: QOpenGLShader) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn DumpObjectInfo(self: QOpenGLShader) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QOpenGLShader, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QOpenGLShader, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QOpenGLShader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qopenglshader.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qopenglshader.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLShader `
    ///
    pub fn BindingStorage(self: QOpenGLShader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn BindingStorage2(self: QOpenGLShader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn Destroyed(self: QOpenGLShader) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QOpenGLShader, callback: *const fn (QOpenGLShader) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn Parent(self: QOpenGLShader) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QOpenGLShader, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn DeleteLater(self: QOpenGLShader) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QOpenGLShader, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QOpenGLShader, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QOpenGLShader, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QOpenGLShader, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QOpenGLShader, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QOpenGLShader, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QOpenGLShader, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QOpenGLShader, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QObject) callconv(.c) void) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QOpenGLShader, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShader_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QOpenGLShader, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShader_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QOpenGLShader, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShader_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QOpenGLShader, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShader_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QOpenGLShader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLShader_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QOpenGLShader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLShader_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLShader_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QOpenGLShader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLShader_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QOpenGLShader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLShader_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLShader_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QOpenGLShader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLShader_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QOpenGLShader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLShader_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QEvent) callconv(.c) void) void {
        qtc.QOpenGLShader_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShader_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShader_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn Sender(self: QOpenGLShader) QObject {
        return .{ .ptr = qtc.QOpenGLShader_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShader `
    ///
    pub fn SuperSender(self: QOpenGLShader) QObject {
        return .{ .ptr = qtc.QOpenGLShader_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QOpenGLShader, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLShader_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn SenderSignalIndex(self: QOpenGLShader) i32 {
        return qtc.QOpenGLShader_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    pub fn SuperSenderSignalIndex(self: QOpenGLShader) i32 {
        return qtc.QOpenGLShader_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QOpenGLShader, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLShader_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QOpenGLShader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShader_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QOpenGLShader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShader_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QOpenGLShader, callback: *const fn (QOpenGLShader, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLShader_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QOpenGLShader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShader_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QOpenGLShader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShader_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QOpenGLShader, callback: *const fn (QOpenGLShader, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#dtor.QOpenGLShader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn Delete(self: QOpenGLShader) void {
        qtc.QOpenGLShader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html)
pub const QOpenGLShaderProgram = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLShaderProgram,

    pub const _is_QOpenGLShaderProgram = {};
    pub const _is_QObject = {};

    /// New constructs a new QOpenGLShaderProgram object.
    ///
    pub fn New() QOpenGLShaderProgram {
        return .{ .ptr = qtc.QOpenGLShaderProgram_new() };
    }

    /// New2 constructs a new QOpenGLShaderProgram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QOpenGLShaderProgram {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QOpenGLShaderProgram_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn MetaObject(self: QOpenGLShaderProgram) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLShaderProgram_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn SuperMetaObject(self: QOpenGLShaderProgram) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QOpenGLShaderProgram, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShaderProgram_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QOpenGLShaderProgram, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShaderProgram_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QOpenGLShaderProgram, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QOpenGLShaderProgram, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` shader: QOpenGLShader `
    ///
    pub fn AddShader(self: QOpenGLShaderProgram, shader: anytype) bool {
        comptime _ = @TypeOf(shader)._is_QOpenGLShader;
        return qtc.QOpenGLShaderProgram_AddShader(@ptrCast(self.ptr), @ptrCast(shader.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` shader: QOpenGLShader `
    ///
    pub fn RemoveShader(self: QOpenGLShaderProgram, shader: anytype) void {
        comptime _ = @TypeOf(shader)._is_QOpenGLShader;
        qtc.QOpenGLShaderProgram_RemoveShader(@ptrCast(self.ptr), @ptrCast(shader.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#shaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Shaders(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []QOpenGLShader {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_Shaders(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QOpenGLShader, _arr.len) catch @panic("qopenglshaderprogram.Shaders: Memory allocation failed");
        const _data: [*]QtC.QOpenGLShader = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` source: [:0]const u8 `
    ///
    pub fn AddShaderFromSourceCode(self: QOpenGLShaderProgram, typeVal: i32, source: [:0]const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode(@ptrCast(self.ptr), @bitCast(typeVal), source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` source: []u8 `
    ///
    pub fn AddShaderFromSourceCode2(self: QOpenGLShaderProgram, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode2(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` source: []const u8 `
    ///
    pub fn AddShaderFromSourceCode3(self: QOpenGLShaderProgram, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode3(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn AddShaderFromSourceFile(self: QOpenGLShaderProgram, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceFile(@ptrCast(self.ptr), @bitCast(typeVal), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` source: [:0]const u8 `
    ///
    pub fn AddCacheableShaderFromSourceCode(self: QOpenGLShaderProgram, typeVal: i32, source: [:0]const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode(@ptrCast(self.ptr), @bitCast(typeVal), source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` source: []u8 `
    ///
    pub fn AddCacheableShaderFromSourceCode2(self: QOpenGLShaderProgram, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` source: []const u8 `
    ///
    pub fn AddCacheableShaderFromSourceCode3(self: QOpenGLShaderProgram, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn AddCacheableShaderFromSourceFile(self: QOpenGLShaderProgram, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceFile(@ptrCast(self.ptr), @bitCast(typeVal), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeAllShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn RemoveAllShaders(self: QOpenGLShaderProgram) void {
        qtc.QOpenGLShaderProgram_RemoveAllShaders(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Link(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_Link(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnLink(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLink` instead
    ///
    pub const QBaseLink = SuperLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn SuperLink(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_SuperLink(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#isLinked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn IsLinked(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_IsLinked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#log)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Log(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOpenGLShaderProgram_Log(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Log: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Bind(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_Bind(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Release(self: QOpenGLShaderProgram) void {
        qtc.QOpenGLShaderProgram_Release(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Create(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_Create(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#programId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn ProgramId(self: QOpenGLShaderProgram) u32 {
        return qtc.QOpenGLShaderProgram_ProgramId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#maxGeometryOutputVertices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn MaxGeometryOutputVertices(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_MaxGeometryOutputVertices(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setPatchVertexCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` count: i32 `
    ///
    pub fn SetPatchVertexCount(self: QOpenGLShaderProgram, count: i32) void {
        qtc.QOpenGLShaderProgram_SetPatchVertexCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#patchVertexCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn PatchVertexCount(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_PatchVertexCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultOuterTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` levels: []f32 `
    ///
    pub fn SetDefaultOuterTessellationLevels(self: QOpenGLShaderProgram, levels: []f32) void {
        const levels_list = qtc.libqt_list{
            .len = levels.len,
            .data = levels.ptr,
        };
        qtc.QOpenGLShaderProgram_SetDefaultOuterTessellationLevels(@ptrCast(self.ptr), levels_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultOuterTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultOuterTessellationLevels(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_DefaultOuterTessellationLevels(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("qopenglshaderprogram.DefaultOuterTessellationLevels: Memory allocation failed");
        const _data: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultInnerTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` levels: []f32 `
    ///
    pub fn SetDefaultInnerTessellationLevels(self: QOpenGLShaderProgram, levels: []f32) void {
        const levels_list = qtc.libqt_list{
            .len = levels.len,
            .data = levels.ptr,
        };
        qtc.QOpenGLShaderProgram_SetDefaultInnerTessellationLevels(@ptrCast(self.ptr), levels_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultInnerTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultInnerTessellationLevels(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_DefaultInnerTessellationLevels(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("qopenglshaderprogram.DefaultInnerTessellationLevels: Memory allocation failed");
        const _data: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` location: i32 `
    ///
    pub fn BindAttributeLocation(self: QOpenGLShaderProgram, name: [:0]const u8, location: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_BindAttributeLocation(@ptrCast(self.ptr), name_Cstring, @bitCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []u8 `
    ///
    /// ` location: i32 `
    ///
    pub fn BindAttributeLocation2(self: QOpenGLShaderProgram, name: []u8, location: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLShaderProgram_BindAttributeLocation2(@ptrCast(self.ptr), name_str, @bitCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []const u8 `
    ///
    /// ` location: i32 `
    ///
    pub fn BindAttributeLocation3(self: QOpenGLShaderProgram, name: []const u8, location: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLShaderProgram_BindAttributeLocation3(@ptrCast(self.ptr), name_str, @bitCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn AttributeLocation(self: QOpenGLShaderProgram, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLShaderProgram_AttributeLocation(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []u8 `
    ///
    pub fn AttributeLocation2(self: QOpenGLShaderProgram, name: []u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_AttributeLocation2(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AttributeLocation3(self: QOpenGLShaderProgram, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_AttributeLocation3(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: f32 `
    ///
    pub fn SetAttributeValue(self: QOpenGLShaderProgram, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn SetAttributeValue2(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue2(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn SetAttributeValue3(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue3(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn SetAttributeValue4(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue4(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QVector2D `
    ///
    pub fn SetAttributeValue5(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeValue5(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QVector3D `
    ///
    pub fn SetAttributeValue6(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeValue6(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QVector4D `
    ///
    pub fn SetAttributeValue7(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeValue7(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QColor `
    ///
    pub fn SetAttributeValue8(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QColor;
        qtc.QOpenGLShaderProgram_SetAttributeValue8(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` columns: i32 `
    ///
    /// ` rows: i32 `
    ///
    pub fn SetAttributeValue9(self: QOpenGLShaderProgram, location: i32, values: []const f32, columns: i32, rows: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue9(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(columns), @bitCast(rows));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: f32 `
    ///
    pub fn SetAttributeValue10(self: QOpenGLShaderProgram, name: [:0]const u8, value: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue10(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn SetAttributeValue11(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue11(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn SetAttributeValue12(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue12(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn SetAttributeValue13(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32, w: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue13(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVector2D `
    ///
    pub fn SetAttributeValue14(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeValue14(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVector3D `
    ///
    pub fn SetAttributeValue15(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeValue15(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVector4D `
    ///
    pub fn SetAttributeValue16(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeValue16(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QColor `
    ///
    pub fn SetAttributeValue17(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QColor;
        qtc.QOpenGLShaderProgram_SetAttributeValue17(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` columns: i32 `
    ///
    /// ` rows: i32 `
    ///
    pub fn SetAttributeValue18(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, columns: i32, rows: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue18(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(columns), @bitCast(rows));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetAttributeArray(self: QOpenGLShaderProgram, location: i32, values: []const f32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector2D `
    ///
    pub fn SetAttributeArray2(self: QOpenGLShaderProgram, location: i32, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray2(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector3D `
    ///
    pub fn SetAttributeArray3(self: QOpenGLShaderProgram, location: i32, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray3(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector4D `
    ///
    pub fn SetAttributeArray4(self: QOpenGLShaderProgram, location: i32, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray4(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` values: ?*const anyopaque `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetAttributeArray5(self: QOpenGLShaderProgram, location: i32, typeVal: u32, values: ?*const anyopaque, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray5(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetAttributeArray6(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray6(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector2D `
    ///
    pub fn SetAttributeArray7(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray7(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector3D `
    ///
    pub fn SetAttributeArray8(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray8(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector4D `
    ///
    pub fn SetAttributeArray9(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray9(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` values: ?*const anyopaque `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetAttributeArray10(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, values: ?*const anyopaque, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray10(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` offset: i32 `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetAttributeBuffer(self: QOpenGLShaderProgram, location: i32, typeVal: u32, offset: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` offset: i32 `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetAttributeBuffer2(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, offset: i32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeBuffer2(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    pub fn EnableAttributeArray(self: QOpenGLShaderProgram, location: i32) void {
        qtc.QOpenGLShaderProgram_EnableAttributeArray(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn EnableAttributeArray2(self: QOpenGLShaderProgram, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_EnableAttributeArray2(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    pub fn DisableAttributeArray(self: QOpenGLShaderProgram, location: i32) void {
        qtc.QOpenGLShaderProgram_DisableAttributeArray(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn DisableAttributeArray2(self: QOpenGLShaderProgram, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_DisableAttributeArray2(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn UniformLocation(self: QOpenGLShaderProgram, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLShaderProgram_UniformLocation(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []u8 `
    ///
    pub fn UniformLocation2(self: QOpenGLShaderProgram, name: []u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_UniformLocation2(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UniformLocation3(self: QOpenGLShaderProgram, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_UniformLocation3(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: f32 `
    ///
    pub fn SetUniformValue(self: QOpenGLShaderProgram, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: i32 `
    ///
    pub fn SetUniformValue2(self: QOpenGLShaderProgram, location: i32, value: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue2(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: u32 `
    ///
    pub fn SetUniformValue3(self: QOpenGLShaderProgram, location: i32, value: u32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue3(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn SetUniformValue4(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue4(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn SetUniformValue5(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue5(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn SetUniformValue6(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue6(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QVector2D `
    ///
    pub fn SetUniformValue7(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValue7(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QVector3D `
    ///
    pub fn SetUniformValue8(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValue8(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QVector4D `
    ///
    pub fn SetUniformValue9(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValue9(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` color: QColor `
    ///
    pub fn SetUniformValue10(self: QOpenGLShaderProgram, location: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QOpenGLShaderProgram_SetUniformValue10(@ptrCast(self.ptr), @bitCast(location), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` point: QPoint `
    ///
    pub fn SetUniformValue11(self: QOpenGLShaderProgram, location: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QOpenGLShaderProgram_SetUniformValue11(@ptrCast(self.ptr), @bitCast(location), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` point: QPointF `
    ///
    pub fn SetUniformValue12(self: QOpenGLShaderProgram, location: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QOpenGLShaderProgram_SetUniformValue12(@ptrCast(self.ptr), @bitCast(location), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` size: QSize `
    ///
    pub fn SetUniformValue13(self: QOpenGLShaderProgram, location: i32, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QOpenGLShaderProgram_SetUniformValue13(@ptrCast(self.ptr), @bitCast(location), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetUniformValue14(self: QOpenGLShaderProgram, location: i32, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QOpenGLShaderProgram_SetUniformValue14(@ptrCast(self.ptr), @bitCast(location), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QMatrix4x4 `
    ///
    pub fn SetUniformValue23(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValue23(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` value: QTransform `
    ///
    pub fn SetUniformValue27(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QTransform;
        qtc.QOpenGLShaderProgram_SetUniformValue27(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: f32 `
    ///
    pub fn SetUniformValue28(self: QOpenGLShaderProgram, name: [:0]const u8, value: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue28(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: i32 `
    ///
    pub fn SetUniformValue29(self: QOpenGLShaderProgram, name: [:0]const u8, value: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue29(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn SetUniformValue30(self: QOpenGLShaderProgram, name: [:0]const u8, value: u32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue30(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn SetUniformValue31(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue31(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn SetUniformValue32(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue32(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn SetUniformValue33(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32, w: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue33(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVector2D `
    ///
    pub fn SetUniformValue34(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValue34(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVector3D `
    ///
    pub fn SetUniformValue35(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValue35(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVector4D `
    ///
    pub fn SetUniformValue36(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValue36(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` color: QColor `
    ///
    pub fn SetUniformValue37(self: QOpenGLShaderProgram, name: [:0]const u8, color: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QOpenGLShaderProgram_SetUniformValue37(@ptrCast(self.ptr), name_Cstring, @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` point: QPoint `
    ///
    pub fn SetUniformValue38(self: QOpenGLShaderProgram, name: [:0]const u8, point: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QOpenGLShaderProgram_SetUniformValue38(@ptrCast(self.ptr), name_Cstring, @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` point: QPointF `
    ///
    pub fn SetUniformValue39(self: QOpenGLShaderProgram, name: [:0]const u8, point: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QOpenGLShaderProgram_SetUniformValue39(@ptrCast(self.ptr), name_Cstring, @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` size: QSize `
    ///
    pub fn SetUniformValue40(self: QOpenGLShaderProgram, name: [:0]const u8, size: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QOpenGLShaderProgram_SetUniformValue40(@ptrCast(self.ptr), name_Cstring, @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetUniformValue41(self: QOpenGLShaderProgram, name: [:0]const u8, size: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QOpenGLShaderProgram_SetUniformValue41(@ptrCast(self.ptr), name_Cstring, @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QMatrix4x4 `
    ///
    pub fn SetUniformValue50(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValue50(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QTransform `
    ///
    pub fn SetUniformValue54(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QTransform;
        qtc.QOpenGLShaderProgram_SetUniformValue54(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` count: i32 `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetUniformValueArray(self: QOpenGLShaderProgram, location: i32, values: []const f32, count: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(count), @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: []const i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray2(self: QOpenGLShaderProgram, location: i32, values: []const i32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray2(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: []const u32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray3(self: QOpenGLShaderProgram, location: i32, values: []const u32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray3(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector2D `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray4(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray4(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector3D `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray5(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray5(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector4D `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray6(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray6(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QMatrix4x4 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray15(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValueArray15(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` count: i32 `
    ///
    /// ` tupleSize: i32 `
    ///
    pub fn SetUniformValueArray16(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, count: i32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray16(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(count), @bitCast(tupleSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: []const i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray17(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const i32, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray17(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: []const u32 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray18(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const u32, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray18(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector2D `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray19(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray19(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector3D `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray20(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray20(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector4D `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray21(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray21(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QMatrix4x4 `
    ///
    /// ` count: i32 `
    ///
    pub fn SetUniformValueArray30(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValueArray30(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
    ///
    pub fn HasOpenGLShaderPrograms() bool {
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms();
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` tupleSize: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray42(self: QOpenGLShaderProgram, location: i32, values: []const f32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray42(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector2D `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray32(self: QOpenGLShaderProgram, location: i32, values: anytype, stride: i32) void {
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray32(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector3D `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray33(self: QOpenGLShaderProgram, location: i32, values: anytype, stride: i32) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray33(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` values: QVector4D `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray34(self: QOpenGLShaderProgram, location: i32, values: anytype, stride: i32) void {
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray34(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` values: ?*const anyopaque `
    ///
    /// ` tupleSize: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray52(self: QOpenGLShaderProgram, location: i32, typeVal: u32, values: ?*const anyopaque, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray52(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: []const f32 `
    ///
    /// ` tupleSize: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray43(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray43(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector2D `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray35(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, stride: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray35(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector3D `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray36(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, stride: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray36(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` values: QVector4D `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray37(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, stride: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray37(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` values: ?*const anyopaque `
    ///
    /// ` tupleSize: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeArray53(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, values: ?*const anyopaque, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray53(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` offset: i32 `
    ///
    /// ` tupleSize: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeBuffer5(self: QOpenGLShaderProgram, location: i32, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer5(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` offset: i32 `
    ///
    /// ` tupleSize: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn SetAttributeBuffer52(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeBuffer52(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn HasOpenGLShaderPrograms1(context: anytype) bool {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms1(@ptrCast(context.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QOpenGLShaderProgram, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn IsWidgetType(self: QOpenGLShaderProgram) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn IsWindowType(self: QOpenGLShaderProgram) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn IsQuickItemType(self: QOpenGLShaderProgram) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn SignalsBlocked(self: QOpenGLShaderProgram) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QOpenGLShaderProgram, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Thread(self: QOpenGLShaderProgram) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QOpenGLShaderProgram, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QOpenGLShaderProgram, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QOpenGLShaderProgram, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QOpenGLShaderProgram, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QOpenGLShaderProgram, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qopenglshaderprogram.Children: Memory allocation failed");
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QOpenGLShaderProgram, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QOpenGLShaderProgram, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QOpenGLShaderProgram, obj: anytype) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QOpenGLShaderProgram, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Disconnect3(self: QOpenGLShaderProgram) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QOpenGLShaderProgram, receiver: anytype) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn DumpObjectTree(self: QOpenGLShaderProgram) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn DumpObjectInfo(self: QOpenGLShaderProgram) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QOpenGLShaderProgram, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qopenglshaderprogram.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qopenglshaderprogram.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn BindingStorage(self: QOpenGLShaderProgram) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn BindingStorage2(self: QOpenGLShaderProgram) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Destroyed(self: QOpenGLShaderProgram) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Parent(self: QOpenGLShaderProgram) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QOpenGLShaderProgram, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn DeleteLater(self: QOpenGLShaderProgram) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QOpenGLShaderProgram, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QOpenGLShaderProgram, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QOpenGLShaderProgram, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QOpenGLShaderProgram, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QOpenGLShaderProgram, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QOpenGLShaderProgram, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QOpenGLShaderProgram, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QOpenGLShaderProgram, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QObject) callconv(.c) void) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QOpenGLShaderProgram, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QOpenGLShaderProgram, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QOpenGLShaderProgram, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QOpenGLShaderProgram, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QOpenGLShaderProgram, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLShaderProgram_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QOpenGLShaderProgram, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QOpenGLShaderProgram_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QOpenGLShaderProgram, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLShaderProgram_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QOpenGLShaderProgram, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QOpenGLShaderProgram_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QOpenGLShaderProgram, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLShaderProgram_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QOpenGLShaderProgram, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QOpenGLShaderProgram_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QEvent) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Sender(self: QOpenGLShaderProgram) QObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn SuperSender(self: QOpenGLShaderProgram) QObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLShaderProgram_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn SenderSignalIndex(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn SuperSenderSignalIndex(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QOpenGLShaderProgram, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShaderProgram_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QOpenGLShaderProgram, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShaderProgram_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QOpenGLShaderProgram, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShaderProgram_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QOpenGLShaderProgram, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShaderProgram_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#dtor.QOpenGLShaderProgram)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn Delete(self: QOpenGLShaderProgram) void {
        qtc.QOpenGLShaderProgram_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#public-types)
pub const enums = struct {
    pub const ShaderTypeBit = enum(i32) {
        pub const Vertex: i32 = 1;
        pub const Fragment: i32 = 2;
        pub const Geometry: i32 = 4;
        pub const TessellationControl: i32 = 8;
        pub const TessellationEvaluation: i32 = 16;
        pub const Compute: i32 = 32;
    };
};
