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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLShader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    pub fn new(typeVal: i32) QOpenGLShader {
        return .{ .ptr = qtc.QOpenGLShader_new(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLShader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(typeVal: i32, _parent: anytype) QOpenGLShader {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QOpenGLShader_new2(@bitCast(typeVal), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn metaObject(self: QOpenGLShader) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShader_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QOpenGLShader, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLShader_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    pub fn superMetaObject(self: QOpenGLShader) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShader_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QOpenGLShader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShader_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QOpenGLShader, callback: *const fn (QOpenGLShader, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLShader_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QOpenGLShader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShader_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QOpenGLShader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShader_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QOpenGLShader, callback: *const fn (QOpenGLShader, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLShader_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QOpenGLShader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShader_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShader.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `shaderType` instead
    ///
    pub const ShaderType = shaderType;

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
    pub fn shaderType(self: QOpenGLShader) i32 {
        return qtc.QOpenGLShader_ShaderType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `compileSourceCode` instead
    ///
    pub const CompileSourceCode = compileSourceCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` source: [:0]const u8 `
    ///
    pub fn compileSourceCode(self: QOpenGLShader, source: [:0]const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShader_CompileSourceCode(@ptrCast(self.ptr), source_Cstring);
    }

    /// ### DEPRECATED: Use `compileSourceCode2` instead
    ///
    pub const CompileSourceCode2 = compileSourceCode2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` source: []u8 `
    ///
    pub fn compileSourceCode2(self: QOpenGLShader, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceCode2(@ptrCast(self.ptr), source_str);
    }

    /// ### DEPRECATED: Use `compileSourceCode3` instead
    ///
    pub const CompileSourceCode3 = compileSourceCode3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` source: []const u8 `
    ///
    pub fn compileSourceCode3(self: QOpenGLShader, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceCode3(@ptrCast(self.ptr), source_str);
    }

    /// ### DEPRECATED: Use `compileSourceFile` instead
    ///
    pub const CompileSourceFile = compileSourceFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn compileSourceFile(self: QOpenGLShader, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `sourceCode` instead
    ///
    pub const SourceCode = sourceCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#sourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sourceCode(self: QOpenGLShader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QOpenGLShader_SourceCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QOpenGLShader.sourceCode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isCompiled` instead
    ///
    pub const IsCompiled = isCompiled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#isCompiled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn isCompiled(self: QOpenGLShader) bool {
        return qtc.QOpenGLShader_IsCompiled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `log` instead
    ///
    pub const Log = log;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#log)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn log(self: QOpenGLShader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOpenGLShader_Log(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShader.log: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `shaderId` instead
    ///
    pub const ShaderId = shaderId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#shaderId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn shaderId(self: QOpenGLShader) u32 {
        return qtc.QOpenGLShader_ShaderId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasOpenGLShaders` instead
    ///
    pub const HasOpenGLShaders = hasOpenGLShaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    pub fn hasOpenGLShaders(typeVal: i32) bool {
        return qtc.QOpenGLShader_HasOpenGLShaders(@bitCast(typeVal));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShader.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShader.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasOpenGLShaders2` instead
    ///
    pub const HasOpenGLShaders2 = hasOpenGLShaders2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn hasOpenGLShaders2(typeVal: i32, context: anytype) bool {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return qtc.QOpenGLShader_HasOpenGLShaders2(@bitCast(typeVal), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QOpenGLShader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShader.objectName: Memory allocation failed");
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
    /// ` self: QOpenGLShader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QOpenGLShader, name: []const u8) void {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn isWidgetType(self: QOpenGLShader) bool {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn isWindowType(self: QOpenGLShader) bool {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn isQuickItemType(self: QOpenGLShader) bool {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn signalsBlocked(self: QOpenGLShader) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QOpenGLShader, b: bool) bool {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn thread(self: QOpenGLShader) QThread {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QOpenGLShader, _thread: anytype) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QOpenGLShader, interval: i32) i32 {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QOpenGLShader, time: i64) i32 {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QOpenGLShader, id: i32) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QOpenGLShader, id: i32) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QOpenGLShader, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QOpenGLShader.children: Memory allocation failed");
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QOpenGLShader, _parent: anytype) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QOpenGLShader, filterObj: anytype) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QOpenGLShader, obj: anytype) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QOpenGLShader, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn disconnect3(self: QOpenGLShader) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QOpenGLShader, receiver: anytype) bool {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn dumpObjectTree(self: QOpenGLShader) void {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn dumpObjectInfo(self: QOpenGLShader) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QOpenGLShader, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QOpenGLShader, name: [:0]const u8) QVariant {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QOpenGLShader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QOpenGLShader.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QOpenGLShader.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLShader `
    ///
    pub fn bindingStorage(self: QOpenGLShader) QBindingStorage {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn bindingStorage2(self: QOpenGLShader) QBindingStorage {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn destroyed(self: QOpenGLShader) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QOpenGLShader, callback: *const fn (QOpenGLShader) callconv(.c) void) void {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn parent(self: QOpenGLShader) QObject {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QOpenGLShader, classname: [:0]const u8) bool {
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
    /// ` self: QOpenGLShader `
    ///
    pub fn deleteLater(self: QOpenGLShader) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QOpenGLShader, interval: i32, timerType: i32) i32 {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QOpenGLShader, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QOpenGLShader, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QOpenGLShader, signal: [:0]const u8) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QOpenGLShader, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QOpenGLShader, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QOpenGLShader, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QOpenGLShader, param1: anytype) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QObject) callconv(.c) void) void {
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QOpenGLShader, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShader_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QOpenGLShader, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShader_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QOpenGLShader, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShader_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QOpenGLShader, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShader_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QOpenGLShader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLShader_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QOpenGLShader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLShader_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLShader_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QOpenGLShader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLShader_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QOpenGLShader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLShader_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLShader_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QOpenGLShader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLShader_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QOpenGLShader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLShader_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QEvent) callconv(.c) void) void {
        qtc.QOpenGLShader_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShader_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QOpenGLShader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShader_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShader_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    pub fn sender(self: QOpenGLShader) QObject {
        return .{ .ptr = qtc.QOpenGLShader_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShader `
    ///
    pub fn superSender(self: QOpenGLShader) QObject {
        return .{ .ptr = qtc.QOpenGLShader_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QOpenGLShader, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLShader_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    pub fn senderSignalIndex(self: QOpenGLShader) i32 {
        return qtc.QOpenGLShader_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    pub fn superSenderSignalIndex(self: QOpenGLShader) i32 {
        return qtc.QOpenGLShader_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QOpenGLShader, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLShader_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QOpenGLShader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShader_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QOpenGLShader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShader_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QOpenGLShader, callback: *const fn (QOpenGLShader, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLShader_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QOpenGLShader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShader_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QOpenGLShader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShader_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShader`
    ///
    /// ` callback: *const fn (self: QOpenGLShader, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QOpenGLShader, callback: *const fn (QOpenGLShader, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShader `
    ///
    /// ` callback: *const fn (self: QOpenGLShader, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QOpenGLShader, callback: *const fn (QOpenGLShader, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshader.html#dtor.QOpenGLShader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLShader `
    ///
    pub fn delete(self: QOpenGLShader) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLShaderProgram object in C++ memory
    ///
    pub fn new() QOpenGLShaderProgram {
        return .{ .ptr = qtc.QOpenGLShaderProgram_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLShaderProgram object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QOpenGLShaderProgram {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QOpenGLShaderProgram_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn metaObject(self: QOpenGLShaderProgram) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QOpenGLShaderProgram_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn superMetaObject(self: QOpenGLShaderProgram) QMetaObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QOpenGLShaderProgram, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShaderProgram_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QOpenGLShaderProgram, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShaderProgram_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QOpenGLShaderProgram, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QOpenGLShaderProgram, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShaderProgram.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addShader` instead
    ///
    pub const AddShader = addShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` shader: QOpenGLShader `
    ///
    pub fn addShader(self: QOpenGLShaderProgram, shader: anytype) bool {
        comptime _ = @TypeOf(shader)._is_QOpenGLShader;
        return qtc.QOpenGLShaderProgram_AddShader(@ptrCast(self.ptr), @ptrCast(shader.ptr));
    }

    /// ### DEPRECATED: Use `removeShader` instead
    ///
    pub const RemoveShader = removeShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` shader: QOpenGLShader `
    ///
    pub fn removeShader(self: QOpenGLShaderProgram, shader: anytype) void {
        comptime _ = @TypeOf(shader)._is_QOpenGLShader;
        qtc.QOpenGLShaderProgram_RemoveShader(@ptrCast(self.ptr), @ptrCast(shader.ptr));
    }

    /// ### DEPRECATED: Use `shaders` instead
    ///
    pub const Shaders = shaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#shaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shaders(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []QOpenGLShader {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_Shaders(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QOpenGLShader, _arr.len) catch @panic("QOpenGLShaderProgram.shaders: Memory allocation failed");
        const _data_val: [*]QtC.QOpenGLShader = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addShaderFromSourceCode` instead
    ///
    pub const AddShaderFromSourceCode = addShaderFromSourceCode;

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
    pub fn addShaderFromSourceCode(self: QOpenGLShaderProgram, typeVal: i32, source: [:0]const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode(@ptrCast(self.ptr), @bitCast(typeVal), source_Cstring);
    }

    /// ### DEPRECATED: Use `addShaderFromSourceCode2` instead
    ///
    pub const AddShaderFromSourceCode2 = addShaderFromSourceCode2;

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
    pub fn addShaderFromSourceCode2(self: QOpenGLShaderProgram, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode2(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### DEPRECATED: Use `addShaderFromSourceCode3` instead
    ///
    pub const AddShaderFromSourceCode3 = addShaderFromSourceCode3;

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
    pub fn addShaderFromSourceCode3(self: QOpenGLShaderProgram, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode3(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### DEPRECATED: Use `addShaderFromSourceFile` instead
    ///
    pub const AddShaderFromSourceFile = addShaderFromSourceFile;

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
    pub fn addShaderFromSourceFile(self: QOpenGLShaderProgram, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceFile(@ptrCast(self.ptr), @bitCast(typeVal), fileName_str);
    }

    /// ### DEPRECATED: Use `addCacheableShaderFromSourceCode` instead
    ///
    pub const AddCacheableShaderFromSourceCode = addCacheableShaderFromSourceCode;

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
    pub fn addCacheableShaderFromSourceCode(self: QOpenGLShaderProgram, typeVal: i32, source: [:0]const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode(@ptrCast(self.ptr), @bitCast(typeVal), source_Cstring);
    }

    /// ### DEPRECATED: Use `addCacheableShaderFromSourceCode2` instead
    ///
    pub const AddCacheableShaderFromSourceCode2 = addCacheableShaderFromSourceCode2;

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
    pub fn addCacheableShaderFromSourceCode2(self: QOpenGLShaderProgram, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### DEPRECATED: Use `addCacheableShaderFromSourceCode3` instead
    ///
    pub const AddCacheableShaderFromSourceCode3 = addCacheableShaderFromSourceCode3;

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
    pub fn addCacheableShaderFromSourceCode3(self: QOpenGLShaderProgram, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3(@ptrCast(self.ptr), @bitCast(typeVal), source_str);
    }

    /// ### DEPRECATED: Use `addCacheableShaderFromSourceFile` instead
    ///
    pub const AddCacheableShaderFromSourceFile = addCacheableShaderFromSourceFile;

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
    pub fn addCacheableShaderFromSourceFile(self: QOpenGLShaderProgram, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceFile(@ptrCast(self.ptr), @bitCast(typeVal), fileName_str);
    }

    /// ### DEPRECATED: Use `removeAllShaders` instead
    ///
    pub const RemoveAllShaders = removeAllShaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeAllShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn removeAllShaders(self: QOpenGLShaderProgram) void {
        qtc.QOpenGLShaderProgram_RemoveAllShaders(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `link` instead
    ///
    pub const Link = link;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn link(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_Link(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLink` instead
    ///
    pub const OnLink = onLink;

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
    pub fn onLink(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLink` instead
    ///
    pub const SuperLink = superLink;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn superLink(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_SuperLink(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLinked` instead
    ///
    pub const IsLinked = isLinked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#isLinked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn isLinked(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_IsLinked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `log` instead
    ///
    pub const Log = log;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#log)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn log(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOpenGLShaderProgram_Log(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShaderProgram.log: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bind` instead
    ///
    pub const Bind = bind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn bind(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_Bind(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn release(self: QOpenGLShaderProgram) void {
        qtc.QOpenGLShaderProgram_Release(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn create(self: QOpenGLShaderProgram) bool {
        return qtc.QOpenGLShaderProgram_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `programId` instead
    ///
    pub const ProgramId = programId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#programId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn programId(self: QOpenGLShaderProgram) u32 {
        return qtc.QOpenGLShaderProgram_ProgramId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxGeometryOutputVertices` instead
    ///
    pub const MaxGeometryOutputVertices = maxGeometryOutputVertices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#maxGeometryOutputVertices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn maxGeometryOutputVertices(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_MaxGeometryOutputVertices(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPatchVertexCount` instead
    ///
    pub const SetPatchVertexCount = setPatchVertexCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setPatchVertexCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` count: i32 `
    ///
    pub fn setPatchVertexCount(self: QOpenGLShaderProgram, count: i32) void {
        qtc.QOpenGLShaderProgram_SetPatchVertexCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `patchVertexCount` instead
    ///
    pub const PatchVertexCount = patchVertexCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#patchVertexCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn patchVertexCount(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_PatchVertexCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultOuterTessellationLevels` instead
    ///
    pub const SetDefaultOuterTessellationLevels = setDefaultOuterTessellationLevels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultOuterTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` levels: []f32 `
    ///
    pub fn setDefaultOuterTessellationLevels(self: QOpenGLShaderProgram, levels: []f32) void {
        const levels_list = qtc.libqt_list{
            .len = levels.len,
            .data = levels.ptr,
        };
        qtc.QOpenGLShaderProgram_SetDefaultOuterTessellationLevels(@ptrCast(self.ptr), levels_list);
    }

    /// ### DEPRECATED: Use `defaultOuterTessellationLevels` instead
    ///
    pub const DefaultOuterTessellationLevels = defaultOuterTessellationLevels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultOuterTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultOuterTessellationLevels(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_DefaultOuterTessellationLevels(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("QOpenGLShaderProgram.defaultOuterTessellationLevels: Memory allocation failed");
        const _data_val: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultInnerTessellationLevels` instead
    ///
    pub const SetDefaultInnerTessellationLevels = setDefaultInnerTessellationLevels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultInnerTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` levels: []f32 `
    ///
    pub fn setDefaultInnerTessellationLevels(self: QOpenGLShaderProgram, levels: []f32) void {
        const levels_list = qtc.libqt_list{
            .len = levels.len,
            .data = levels.ptr,
        };
        qtc.QOpenGLShaderProgram_SetDefaultInnerTessellationLevels(@ptrCast(self.ptr), levels_list);
    }

    /// ### DEPRECATED: Use `defaultInnerTessellationLevels` instead
    ///
    pub const DefaultInnerTessellationLevels = defaultInnerTessellationLevels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultInnerTessellationLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultInnerTessellationLevels(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_DefaultInnerTessellationLevels(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("QOpenGLShaderProgram.defaultInnerTessellationLevels: Memory allocation failed");
        const _data_val: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bindAttributeLocation` instead
    ///
    pub const BindAttributeLocation = bindAttributeLocation;

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
    pub fn bindAttributeLocation(self: QOpenGLShaderProgram, name: [:0]const u8, location: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_BindAttributeLocation(@ptrCast(self.ptr), name_Cstring, @bitCast(location));
    }

    /// ### DEPRECATED: Use `bindAttributeLocation2` instead
    ///
    pub const BindAttributeLocation2 = bindAttributeLocation2;

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
    pub fn bindAttributeLocation2(self: QOpenGLShaderProgram, name: []u8, location: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLShaderProgram_BindAttributeLocation2(@ptrCast(self.ptr), name_str, @bitCast(location));
    }

    /// ### DEPRECATED: Use `bindAttributeLocation3` instead
    ///
    pub const BindAttributeLocation3 = bindAttributeLocation3;

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
    pub fn bindAttributeLocation3(self: QOpenGLShaderProgram, name: []const u8, location: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLShaderProgram_BindAttributeLocation3(@ptrCast(self.ptr), name_str, @bitCast(location));
    }

    /// ### DEPRECATED: Use `attributeLocation` instead
    ///
    pub const AttributeLocation = attributeLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn attributeLocation(self: QOpenGLShaderProgram, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLShaderProgram_AttributeLocation(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `attributeLocation2` instead
    ///
    pub const AttributeLocation2 = attributeLocation2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []u8 `
    ///
    pub fn attributeLocation2(self: QOpenGLShaderProgram, name: []u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_AttributeLocation2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `attributeLocation3` instead
    ///
    pub const AttributeLocation3 = attributeLocation3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []const u8 `
    ///
    pub fn attributeLocation3(self: QOpenGLShaderProgram, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_AttributeLocation3(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setAttributeValue` instead
    ///
    pub const SetAttributeValue = setAttributeValue;

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
    pub fn setAttributeValue(self: QOpenGLShaderProgram, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setAttributeValue2` instead
    ///
    pub const SetAttributeValue2 = setAttributeValue2;

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
    pub fn setAttributeValue2(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue2(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setAttributeValue3` instead
    ///
    pub const SetAttributeValue3 = setAttributeValue3;

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
    pub fn setAttributeValue3(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue3(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `setAttributeValue4` instead
    ///
    pub const SetAttributeValue4 = setAttributeValue4;

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
    pub fn setAttributeValue4(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue4(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setAttributeValue5` instead
    ///
    pub const SetAttributeValue5 = setAttributeValue5;

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
    pub fn setAttributeValue5(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeValue5(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue6` instead
    ///
    pub const SetAttributeValue6 = setAttributeValue6;

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
    pub fn setAttributeValue6(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeValue6(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue7` instead
    ///
    pub const SetAttributeValue7 = setAttributeValue7;

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
    pub fn setAttributeValue7(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeValue7(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue8` instead
    ///
    pub const SetAttributeValue8 = setAttributeValue8;

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
    pub fn setAttributeValue8(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QColor;
        qtc.QOpenGLShaderProgram_SetAttributeValue8(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue9` instead
    ///
    pub const SetAttributeValue9 = setAttributeValue9;

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
    pub fn setAttributeValue9(self: QOpenGLShaderProgram, location: i32, values: []const f32, columns: i32, rows: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue9(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(columns), @bitCast(rows));
    }

    /// ### DEPRECATED: Use `setAttributeValue10` instead
    ///
    pub const SetAttributeValue10 = setAttributeValue10;

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
    pub fn setAttributeValue10(self: QOpenGLShaderProgram, name: [:0]const u8, value: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue10(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### DEPRECATED: Use `setAttributeValue11` instead
    ///
    pub const SetAttributeValue11 = setAttributeValue11;

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
    pub fn setAttributeValue11(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue11(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setAttributeValue12` instead
    ///
    pub const SetAttributeValue12 = setAttributeValue12;

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
    pub fn setAttributeValue12(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue12(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `setAttributeValue13` instead
    ///
    pub const SetAttributeValue13 = setAttributeValue13;

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
    pub fn setAttributeValue13(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32, w: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue13(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setAttributeValue14` instead
    ///
    pub const SetAttributeValue14 = setAttributeValue14;

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
    pub fn setAttributeValue14(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeValue14(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue15` instead
    ///
    pub const SetAttributeValue15 = setAttributeValue15;

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
    pub fn setAttributeValue15(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeValue15(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue16` instead
    ///
    pub const SetAttributeValue16 = setAttributeValue16;

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
    pub fn setAttributeValue16(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeValue16(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue17` instead
    ///
    pub const SetAttributeValue17 = setAttributeValue17;

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
    pub fn setAttributeValue17(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QColor;
        qtc.QOpenGLShaderProgram_SetAttributeValue17(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeValue18` instead
    ///
    pub const SetAttributeValue18 = setAttributeValue18;

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
    pub fn setAttributeValue18(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, columns: i32, rows: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue18(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(columns), @bitCast(rows));
    }

    /// ### DEPRECATED: Use `setAttributeArray` instead
    ///
    pub const SetAttributeArray = setAttributeArray;

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
    pub fn setAttributeArray(self: QOpenGLShaderProgram, location: i32, values: []const f32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `setAttributeArray2` instead
    ///
    pub const SetAttributeArray2 = setAttributeArray2;

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
    pub fn setAttributeArray2(self: QOpenGLShaderProgram, location: i32, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray2(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeArray3` instead
    ///
    pub const SetAttributeArray3 = setAttributeArray3;

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
    pub fn setAttributeArray3(self: QOpenGLShaderProgram, location: i32, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray3(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeArray4` instead
    ///
    pub const SetAttributeArray4 = setAttributeArray4;

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
    pub fn setAttributeArray4(self: QOpenGLShaderProgram, location: i32, values: anytype) void {
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray4(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeArray5` instead
    ///
    pub const SetAttributeArray5 = setAttributeArray5;

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
    pub fn setAttributeArray5(self: QOpenGLShaderProgram, location: i32, typeVal: u32, values: ?*const anyopaque, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray5(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `setAttributeArray6` instead
    ///
    pub const SetAttributeArray6 = setAttributeArray6;

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
    pub fn setAttributeArray6(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray6(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `setAttributeArray7` instead
    ///
    pub const SetAttributeArray7 = setAttributeArray7;

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
    pub fn setAttributeArray7(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray7(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeArray8` instead
    ///
    pub const SetAttributeArray8 = setAttributeArray8;

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
    pub fn setAttributeArray8(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray8(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeArray9` instead
    ///
    pub const SetAttributeArray9 = setAttributeArray9;

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
    pub fn setAttributeArray9(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray9(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeArray10` instead
    ///
    pub const SetAttributeArray10 = setAttributeArray10;

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
    pub fn setAttributeArray10(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, values: ?*const anyopaque, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray10(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `setAttributeBuffer` instead
    ///
    pub const SetAttributeBuffer = setAttributeBuffer;

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
    pub fn setAttributeBuffer(self: QOpenGLShaderProgram, location: i32, typeVal: u32, offset: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `setAttributeBuffer2` instead
    ///
    pub const SetAttributeBuffer2 = setAttributeBuffer2;

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
    pub fn setAttributeBuffer2(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, offset: i32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeBuffer2(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `enableAttributeArray` instead
    ///
    pub const EnableAttributeArray = enableAttributeArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    pub fn enableAttributeArray(self: QOpenGLShaderProgram, location: i32) void {
        qtc.QOpenGLShaderProgram_EnableAttributeArray(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### DEPRECATED: Use `enableAttributeArray2` instead
    ///
    pub const EnableAttributeArray2 = enableAttributeArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn enableAttributeArray2(self: QOpenGLShaderProgram, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_EnableAttributeArray2(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `disableAttributeArray` instead
    ///
    pub const DisableAttributeArray = disableAttributeArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` location: i32 `
    ///
    pub fn disableAttributeArray(self: QOpenGLShaderProgram, location: i32) void {
        qtc.QOpenGLShaderProgram_DisableAttributeArray(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### DEPRECATED: Use `disableAttributeArray2` instead
    ///
    pub const DisableAttributeArray2 = disableAttributeArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn disableAttributeArray2(self: QOpenGLShaderProgram, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_DisableAttributeArray2(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `uniformLocation` instead
    ///
    pub const UniformLocation = uniformLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn uniformLocation(self: QOpenGLShaderProgram, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLShaderProgram_UniformLocation(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `uniformLocation2` instead
    ///
    pub const UniformLocation2 = uniformLocation2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []u8 `
    ///
    pub fn uniformLocation2(self: QOpenGLShaderProgram, name: []u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_UniformLocation2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `uniformLocation3` instead
    ///
    pub const UniformLocation3 = uniformLocation3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []const u8 `
    ///
    pub fn uniformLocation3(self: QOpenGLShaderProgram, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_UniformLocation3(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setUniformValue` instead
    ///
    pub const SetUniformValue = setUniformValue;

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
    pub fn setUniformValue(self: QOpenGLShaderProgram, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setUniformValue2` instead
    ///
    pub const SetUniformValue2 = setUniformValue2;

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
    pub fn setUniformValue2(self: QOpenGLShaderProgram, location: i32, value: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue2(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setUniformValue3` instead
    ///
    pub const SetUniformValue3 = setUniformValue3;

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
    pub fn setUniformValue3(self: QOpenGLShaderProgram, location: i32, value: u32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue3(@ptrCast(self.ptr), @bitCast(location), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setUniformValue4` instead
    ///
    pub const SetUniformValue4 = setUniformValue4;

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
    pub fn setUniformValue4(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue4(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setUniformValue5` instead
    ///
    pub const SetUniformValue5 = setUniformValue5;

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
    pub fn setUniformValue5(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue5(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `setUniformValue6` instead
    ///
    pub const SetUniformValue6 = setUniformValue6;

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
    pub fn setUniformValue6(self: QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue6(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setUniformValue7` instead
    ///
    pub const SetUniformValue7 = setUniformValue7;

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
    pub fn setUniformValue7(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValue7(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue8` instead
    ///
    pub const SetUniformValue8 = setUniformValue8;

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
    pub fn setUniformValue8(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValue8(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue9` instead
    ///
    pub const SetUniformValue9 = setUniformValue9;

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
    pub fn setUniformValue9(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValue9(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue10` instead
    ///
    pub const SetUniformValue10 = setUniformValue10;

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
    pub fn setUniformValue10(self: QOpenGLShaderProgram, location: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QOpenGLShaderProgram_SetUniformValue10(@ptrCast(self.ptr), @bitCast(location), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue11` instead
    ///
    pub const SetUniformValue11 = setUniformValue11;

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
    pub fn setUniformValue11(self: QOpenGLShaderProgram, location: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QOpenGLShaderProgram_SetUniformValue11(@ptrCast(self.ptr), @bitCast(location), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue12` instead
    ///
    pub const SetUniformValue12 = setUniformValue12;

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
    pub fn setUniformValue12(self: QOpenGLShaderProgram, location: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QOpenGLShaderProgram_SetUniformValue12(@ptrCast(self.ptr), @bitCast(location), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue13` instead
    ///
    pub const SetUniformValue13 = setUniformValue13;

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
    pub fn setUniformValue13(self: QOpenGLShaderProgram, location: i32, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QOpenGLShaderProgram_SetUniformValue13(@ptrCast(self.ptr), @bitCast(location), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue14` instead
    ///
    pub const SetUniformValue14 = setUniformValue14;

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
    pub fn setUniformValue14(self: QOpenGLShaderProgram, location: i32, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QOpenGLShaderProgram_SetUniformValue14(@ptrCast(self.ptr), @bitCast(location), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue23` instead
    ///
    pub const SetUniformValue23 = setUniformValue23;

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
    pub fn setUniformValue23(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValue23(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue27` instead
    ///
    pub const SetUniformValue27 = setUniformValue27;

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
    pub fn setUniformValue27(self: QOpenGLShaderProgram, location: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QTransform;
        qtc.QOpenGLShaderProgram_SetUniformValue27(@ptrCast(self.ptr), @bitCast(location), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue28` instead
    ///
    pub const SetUniformValue28 = setUniformValue28;

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
    pub fn setUniformValue28(self: QOpenGLShaderProgram, name: [:0]const u8, value: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue28(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### DEPRECATED: Use `setUniformValue29` instead
    ///
    pub const SetUniformValue29 = setUniformValue29;

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
    pub fn setUniformValue29(self: QOpenGLShaderProgram, name: [:0]const u8, value: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue29(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### DEPRECATED: Use `setUniformValue30` instead
    ///
    pub const SetUniformValue30 = setUniformValue30;

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
    pub fn setUniformValue30(self: QOpenGLShaderProgram, name: [:0]const u8, value: u32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue30(@ptrCast(self.ptr), name_Cstring, @bitCast(value));
    }

    /// ### DEPRECATED: Use `setUniformValue31` instead
    ///
    pub const SetUniformValue31 = setUniformValue31;

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
    pub fn setUniformValue31(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue31(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `setUniformValue32` instead
    ///
    pub const SetUniformValue32 = setUniformValue32;

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
    pub fn setUniformValue32(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue32(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `setUniformValue33` instead
    ///
    pub const SetUniformValue33 = setUniformValue33;

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
    pub fn setUniformValue33(self: QOpenGLShaderProgram, name: [:0]const u8, x: f32, y: f32, z: f32, w: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue33(@ptrCast(self.ptr), name_Cstring, @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setUniformValue34` instead
    ///
    pub const SetUniformValue34 = setUniformValue34;

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
    pub fn setUniformValue34(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValue34(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue35` instead
    ///
    pub const SetUniformValue35 = setUniformValue35;

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
    pub fn setUniformValue35(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValue35(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue36` instead
    ///
    pub const SetUniformValue36 = setUniformValue36;

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
    pub fn setUniformValue36(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValue36(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue37` instead
    ///
    pub const SetUniformValue37 = setUniformValue37;

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
    pub fn setUniformValue37(self: QOpenGLShaderProgram, name: [:0]const u8, color: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QOpenGLShaderProgram_SetUniformValue37(@ptrCast(self.ptr), name_Cstring, @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue38` instead
    ///
    pub const SetUniformValue38 = setUniformValue38;

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
    pub fn setUniformValue38(self: QOpenGLShaderProgram, name: [:0]const u8, point: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QOpenGLShaderProgram_SetUniformValue38(@ptrCast(self.ptr), name_Cstring, @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue39` instead
    ///
    pub const SetUniformValue39 = setUniformValue39;

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
    pub fn setUniformValue39(self: QOpenGLShaderProgram, name: [:0]const u8, point: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QOpenGLShaderProgram_SetUniformValue39(@ptrCast(self.ptr), name_Cstring, @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue40` instead
    ///
    pub const SetUniformValue40 = setUniformValue40;

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
    pub fn setUniformValue40(self: QOpenGLShaderProgram, name: [:0]const u8, size: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QOpenGLShaderProgram_SetUniformValue40(@ptrCast(self.ptr), name_Cstring, @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue41` instead
    ///
    pub const SetUniformValue41 = setUniformValue41;

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
    pub fn setUniformValue41(self: QOpenGLShaderProgram, name: [:0]const u8, size: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QOpenGLShaderProgram_SetUniformValue41(@ptrCast(self.ptr), name_Cstring, @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue50` instead
    ///
    pub const SetUniformValue50 = setUniformValue50;

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
    pub fn setUniformValue50(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValue50(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValue54` instead
    ///
    pub const SetUniformValue54 = setUniformValue54;

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
    pub fn setUniformValue54(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QTransform;
        qtc.QOpenGLShaderProgram_SetUniformValue54(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setUniformValueArray` instead
    ///
    pub const SetUniformValueArray = setUniformValueArray;

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
    pub fn setUniformValueArray(self: QOpenGLShaderProgram, location: i32, values: []const f32, count: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(count), @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `setUniformValueArray2` instead
    ///
    pub const SetUniformValueArray2 = setUniformValueArray2;

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
    pub fn setUniformValueArray2(self: QOpenGLShaderProgram, location: i32, values: []const i32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray2(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray3` instead
    ///
    pub const SetUniformValueArray3 = setUniformValueArray3;

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
    pub fn setUniformValueArray3(self: QOpenGLShaderProgram, location: i32, values: []const u32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray3(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray4` instead
    ///
    pub const SetUniformValueArray4 = setUniformValueArray4;

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
    pub fn setUniformValueArray4(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray4(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray5` instead
    ///
    pub const SetUniformValueArray5 = setUniformValueArray5;

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
    pub fn setUniformValueArray5(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray5(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray6` instead
    ///
    pub const SetUniformValueArray6 = setUniformValueArray6;

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
    pub fn setUniformValueArray6(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray6(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray15` instead
    ///
    pub const SetUniformValueArray15 = setUniformValueArray15;

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
    pub fn setUniformValueArray15(self: QOpenGLShaderProgram, location: i32, values: anytype, count: i32) void {
        comptime _ = @TypeOf(values)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValueArray15(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray16` instead
    ///
    pub const SetUniformValueArray16 = setUniformValueArray16;

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
    pub fn setUniformValueArray16(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, count: i32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray16(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(count), @bitCast(tupleSize));
    }

    /// ### DEPRECATED: Use `setUniformValueArray17` instead
    ///
    pub const SetUniformValueArray17 = setUniformValueArray17;

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
    pub fn setUniformValueArray17(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const i32, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray17(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray18` instead
    ///
    pub const SetUniformValueArray18 = setUniformValueArray18;

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
    pub fn setUniformValueArray18(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const u32, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray18(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray19` instead
    ///
    pub const SetUniformValueArray19 = setUniformValueArray19;

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
    pub fn setUniformValueArray19(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray19(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray20` instead
    ///
    pub const SetUniformValueArray20 = setUniformValueArray20;

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
    pub fn setUniformValueArray20(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray20(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray21` instead
    ///
    pub const SetUniformValueArray21 = setUniformValueArray21;

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
    pub fn setUniformValueArray21(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetUniformValueArray21(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `setUniformValueArray30` instead
    ///
    pub const SetUniformValueArray30 = setUniformValueArray30;

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
    pub fn setUniformValueArray30(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, count: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QMatrix4x4;
        qtc.QOpenGLShaderProgram_SetUniformValueArray30(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `hasOpenGLShaderPrograms` instead
    ///
    pub const HasOpenGLShaderPrograms = hasOpenGLShaderPrograms;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
    ///
    pub fn hasOpenGLShaderPrograms() bool {
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms();
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShaderProgram.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShaderProgram.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttributeArray42` instead
    ///
    pub const SetAttributeArray42 = setAttributeArray42;

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
    pub fn setAttributeArray42(self: QOpenGLShaderProgram, location: i32, values: []const f32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray42(@ptrCast(self.ptr), @bitCast(location), values.ptr, @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray32` instead
    ///
    pub const SetAttributeArray32 = setAttributeArray32;

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
    pub fn setAttributeArray32(self: QOpenGLShaderProgram, location: i32, values: anytype, stride: i32) void {
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray32(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray33` instead
    ///
    pub const SetAttributeArray33 = setAttributeArray33;

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
    pub fn setAttributeArray33(self: QOpenGLShaderProgram, location: i32, values: anytype, stride: i32) void {
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray33(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray34` instead
    ///
    pub const SetAttributeArray34 = setAttributeArray34;

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
    pub fn setAttributeArray34(self: QOpenGLShaderProgram, location: i32, values: anytype, stride: i32) void {
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray34(@ptrCast(self.ptr), @bitCast(location), @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray52` instead
    ///
    pub const SetAttributeArray52 = setAttributeArray52;

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
    pub fn setAttributeArray52(self: QOpenGLShaderProgram, location: i32, typeVal: u32, values: ?*const anyopaque, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray52(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray43` instead
    ///
    pub const SetAttributeArray43 = setAttributeArray43;

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
    pub fn setAttributeArray43(self: QOpenGLShaderProgram, name: [:0]const u8, values: []const f32, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray43(@ptrCast(self.ptr), name_Cstring, values.ptr, @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray35` instead
    ///
    pub const SetAttributeArray35 = setAttributeArray35;

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
    pub fn setAttributeArray35(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, stride: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector2D;
        qtc.QOpenGLShaderProgram_SetAttributeArray35(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray36` instead
    ///
    pub const SetAttributeArray36 = setAttributeArray36;

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
    pub fn setAttributeArray36(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, stride: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector3D;
        qtc.QOpenGLShaderProgram_SetAttributeArray36(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray37` instead
    ///
    pub const SetAttributeArray37 = setAttributeArray37;

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
    pub fn setAttributeArray37(self: QOpenGLShaderProgram, name: [:0]const u8, values: anytype, stride: i32) void {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(values)._is_QVector4D;
        qtc.QOpenGLShaderProgram_SetAttributeArray37(@ptrCast(self.ptr), name_Cstring, @ptrCast(values.ptr), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeArray53` instead
    ///
    pub const SetAttributeArray53 = setAttributeArray53;

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
    pub fn setAttributeArray53(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, values: ?*const anyopaque, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray53(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @ptrCast(values), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeBuffer5` instead
    ///
    pub const SetAttributeBuffer5 = setAttributeBuffer5;

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
    pub fn setAttributeBuffer5(self: QOpenGLShaderProgram, location: i32, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer5(@ptrCast(self.ptr), @bitCast(location), @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `setAttributeBuffer52` instead
    ///
    pub const SetAttributeBuffer52 = setAttributeBuffer52;

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
    pub fn setAttributeBuffer52(self: QOpenGLShaderProgram, name: [:0]const u8, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeBuffer52(@ptrCast(self.ptr), name_Cstring, @bitCast(typeVal), @bitCast(offset), @bitCast(tupleSize), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `hasOpenGLShaderPrograms1` instead
    ///
    pub const HasOpenGLShaderPrograms1 = hasOpenGLShaderPrograms1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn hasOpenGLShaderPrograms1(context: anytype) bool {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms1(@ptrCast(context.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOpenGLShaderProgram.objectName: Memory allocation failed");
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QOpenGLShaderProgram, name: []const u8) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn isWidgetType(self: QOpenGLShaderProgram) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn isWindowType(self: QOpenGLShaderProgram) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn isQuickItemType(self: QOpenGLShaderProgram) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn signalsBlocked(self: QOpenGLShaderProgram) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QOpenGLShaderProgram, b: bool) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn thread(self: QOpenGLShaderProgram) QThread {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QOpenGLShaderProgram, _thread: anytype) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QOpenGLShaderProgram, interval: i32) i32 {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QOpenGLShaderProgram, time: i64) i32 {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QOpenGLShaderProgram, id: i32) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QOpenGLShaderProgram, id: i32) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QOpenGLShaderProgram.children: Memory allocation failed");
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QOpenGLShaderProgram, _parent: anytype) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QOpenGLShaderProgram, filterObj: anytype) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QOpenGLShaderProgram, obj: anytype) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QOpenGLShaderProgram, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn disconnect3(self: QOpenGLShaderProgram) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QOpenGLShaderProgram, receiver: anytype) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn dumpObjectTree(self: QOpenGLShaderProgram) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn dumpObjectInfo(self: QOpenGLShaderProgram) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QOpenGLShaderProgram, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QOpenGLShaderProgram, name: [:0]const u8) QVariant {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QOpenGLShaderProgram, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QOpenGLShaderProgram.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QOpenGLShaderProgram.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn bindingStorage(self: QOpenGLShaderProgram) QBindingStorage {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn bindingStorage2(self: QOpenGLShaderProgram) QBindingStorage {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn destroyed(self: QOpenGLShaderProgram) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram) callconv(.c) void) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn parent(self: QOpenGLShaderProgram) QObject {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QOpenGLShaderProgram, classname: [:0]const u8) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn deleteLater(self: QOpenGLShaderProgram) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QOpenGLShaderProgram, interval: i32, timerType: i32) i32 {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QOpenGLShaderProgram, time: i64, timerType: i32) i32 {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QOpenGLShaderProgram, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QOpenGLShaderProgram, signal: [:0]const u8) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QOpenGLShaderProgram, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QOpenGLShaderProgram, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QOpenGLShaderProgram, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QOpenGLShaderProgram, param1: anytype) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QObject) callconv(.c) void) void {
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QOpenGLShaderProgram, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QOpenGLShaderProgram, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QOpenGLShaderProgram, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QOpenGLShaderProgram, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QOpenGLShaderProgram_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QObject, QEvent) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QOpenGLShaderProgram, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLShaderProgram_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QOpenGLShaderProgram, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QOpenGLShaderProgram_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QTimerEvent) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QOpenGLShaderProgram, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLShaderProgram_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QOpenGLShaderProgram, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QOpenGLShaderProgram_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QChildEvent) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QOpenGLShaderProgram, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLShaderProgram_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QOpenGLShaderProgram, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QOpenGLShaderProgram_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QEvent) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QOpenGLShaderProgram, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QOpenGLShaderProgram_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QMetaMethod) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn sender(self: QOpenGLShaderProgram) QObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn superSender(self: QOpenGLShaderProgram) QObject {
        return .{ .ptr = qtc.QOpenGLShaderProgram_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) QObject) void {
        qtc.QOpenGLShaderProgram_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn senderSignalIndex(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn superSenderSignalIndex(self: QOpenGLShaderProgram) i32 {
        return qtc.QOpenGLShaderProgram_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QOpenGLShaderProgram, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QOpenGLShaderProgram, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShaderProgram_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QOpenGLShaderProgram, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShaderProgram_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QOpenGLShaderProgram, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShaderProgram_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QOpenGLShaderProgram, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QOpenGLShaderProgram_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QOpenGLShaderProgram`
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, QMetaMethod) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLShaderProgram `
    ///
    /// ` callback: *const fn (self: QOpenGLShaderProgram, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QOpenGLShaderProgram, callback: *const fn (QOpenGLShaderProgram, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglshaderprogram.html#dtor.QOpenGLShaderProgram)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLShaderProgram `
    ///
    pub fn delete(self: QOpenGLShaderProgram) void {
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
