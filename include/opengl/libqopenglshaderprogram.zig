const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qopenglshaderprogram_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qopenglshader.html
pub const qopenglshader = struct {
    /// New constructs a new QOpenGLShader object.
    ///
    /// ``` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit ```
    pub fn New(typeVal: i32) QtC.QOpenGLShader {
        return qtc.QOpenGLShader_new(@intCast(typeVal));
    }

    /// New2 constructs a new QOpenGLShader object.
    ///
    /// ``` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, parent: QtC.QObject ```
    pub fn New2(typeVal: i32, parent: ?*anyopaque) QtC.QOpenGLShader {
        return qtc.QOpenGLShader_new2(@intCast(typeVal), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QOpenGLShader_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QOpenGLShader, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShader_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QOpenGLShader, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QOpenGLShader_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLShader_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLShader, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QOpenGLShader_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QOpenGLShader_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#shaderType)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    ///
    /// Returns: ``` flag of qopenglshaderprogram_enums.ShaderTypeBit ```
    pub fn ShaderType(self: ?*anyopaque) i32 {
        return qtc.QOpenGLShader_ShaderType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShader, source: []const u8 ```
    pub fn CompileSourceCode(self: ?*anyopaque, source: []const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShader_CompileSourceCode(@ptrCast(self), source_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShader, source: []u8 ```
    pub fn CompileSourceCode2(self: ?*anyopaque, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceCode2(@ptrCast(self), source_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShader, source: []const u8 ```
    pub fn CompileSourceCode3(self: ?*anyopaque, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceCode3(@ptrCast(self), source_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#compileSourceFile)
    ///
    /// ``` self: QtC.QOpenGLShader, fileName: []const u8 ```
    pub fn CompileSourceFile(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShader_CompileSourceFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#sourceCode)
    ///
    /// ``` self: QtC.QOpenGLShader, allocator: std.mem.Allocator ```
    pub fn SourceCode(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QOpenGLShader_SourceCode(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qopenglshader.SourceCode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#isCompiled)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn IsCompiled(self: ?*anyopaque) bool {
        return qtc.QOpenGLShader_IsCompiled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#log)
    ///
    /// ``` self: QtC.QOpenGLShader, allocator: std.mem.Allocator ```
    pub fn Log(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShader_Log(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Log: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#shaderId)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn ShaderId(self: ?*anyopaque) u32 {
        return qtc.QOpenGLShader_ShaderId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
    ///
    /// ``` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit ```
    pub fn HasOpenGLShaders(typeVal: i32) bool {
        return qtc.QOpenGLShader_HasOpenGLShaders(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QOpenGLShader_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QOpenGLShader_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#hasOpenGLShaders)
    ///
    /// ``` typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, context: QtC.QOpenGLContext ```
    pub fn HasOpenGLShaders2(typeVal: i32, context: ?*anyopaque) bool {
        return qtc.QOpenGLShader_HasOpenGLShaders2(@intCast(typeVal), @ptrCast(context));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QOpenGLShader, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshader.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QOpenGLShader, name: []const u8 ```
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
    /// ``` self: QtC.QOpenGLShader ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QOpenGLShader, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QOpenGLShader, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QOpenGLShader, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QOpenGLShader, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QOpenGLShader, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QOpenGLShader, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qopenglshader.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QOpenGLShader, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QOpenGLShader, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QOpenGLShader, obj: QtC.QObject ```
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
    /// ``` self: QtC.QOpenGLShader, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QOpenGLShader ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QOpenGLShader, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QOpenGLShader, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QOpenGLShader, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QOpenGLShader, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QOpenGLShader, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QOpenGLShader, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QOpenGLShader, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShader, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShader_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShader_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShader_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShader_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShader_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShader_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShader_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShader_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShader_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShader_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShader_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShader_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShader_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShader_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShader_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShader_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShader_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShader_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShader_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QOpenGLShader_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QOpenGLShader_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QOpenGLShader_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QOpenGLShader_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QOpenGLShader_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLShader_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShader_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShader_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLShader_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QOpenGLShader_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QOpenGLShader_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLShader_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QOpenGLShader, callback: *const fn (self: QtC.QOpenGLShader, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshader.html#dtor.QOpenGLShader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLShader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLShader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglshaderprogram.html
pub const qopenglshaderprogram = struct {
    /// New constructs a new QOpenGLShaderProgram object.
    ///
    ///
    pub fn New() QtC.QOpenGLShaderProgram {
        return qtc.QOpenGLShaderProgram_new();
    }

    /// New2 constructs a new QOpenGLShaderProgram object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QOpenGLShaderProgram {
        return qtc.QOpenGLShaderProgram_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QOpenGLShaderProgram_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QOpenGLShaderProgram, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QOpenGLShaderProgram_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QOpenGLShaderProgram, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QOpenGLShaderProgram_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShader)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, shader: QtC.QOpenGLShader ```
    pub fn AddShader(self: ?*anyopaque, shader: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_AddShader(@ptrCast(self), @ptrCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeShader)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, shader: QtC.QOpenGLShader ```
    pub fn RemoveShader(self: ?*anyopaque, shader: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_RemoveShader(@ptrCast(self), @ptrCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#shaders)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, allocator: std.mem.Allocator ```
    pub fn Shaders(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QOpenGLShader {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_Shaders(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QOpenGLShader, _arr.len) catch @panic("qopenglshaderprogram.Shaders: Memory allocation failed");
        const _data: [*]QtC.QOpenGLShader = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, source: []const u8 ```
    pub fn AddShaderFromSourceCode(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode(@ptrCast(self), @intCast(typeVal), source_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, source: []u8 ```
    pub fn AddShaderFromSourceCode2(self: ?*anyopaque, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode2(@ptrCast(self), @intCast(typeVal), source_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, source: []const u8 ```
    pub fn AddShaderFromSourceCode3(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceCode3(@ptrCast(self), @intCast(typeVal), source_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addShaderFromSourceFile)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, fileName: []const u8 ```
    pub fn AddShaderFromSourceFile(self: ?*anyopaque, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddShaderFromSourceFile(@ptrCast(self), @intCast(typeVal), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, source: []const u8 ```
    pub fn AddCacheableShaderFromSourceCode(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        const source_Cstring = source.ptr;
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode(@ptrCast(self), @intCast(typeVal), source_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, source: []u8 ```
    pub fn AddCacheableShaderFromSourceCode2(self: ?*anyopaque, typeVal: i32, source: []u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2(@ptrCast(self), @intCast(typeVal), source_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceCode)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, source: []const u8 ```
    pub fn AddCacheableShaderFromSourceCode3(self: ?*anyopaque, typeVal: i32, source: []const u8) bool {
        const source_str = qtc.libqt_string{
            .len = source.len,
            .data = source.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3(@ptrCast(self), @intCast(typeVal), source_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#addCacheableShaderFromSourceFile)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, typeVal: flag of qopenglshaderprogram_enums.ShaderTypeBit, fileName: []const u8 ```
    pub fn AddCacheableShaderFromSourceFile(self: ?*anyopaque, typeVal: i32, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QOpenGLShaderProgram_AddCacheableShaderFromSourceFile(@ptrCast(self), @intCast(typeVal), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#removeAllShaders)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn RemoveAllShaders(self: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_RemoveAllShaders(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Link(self: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_Link(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn () callconv(.c) bool ```
    pub fn OnLink(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnLink(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#link)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn QBaseLink(self: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_QBaseLink(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#isLinked)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn IsLinked(self: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_IsLinked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#log)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, allocator: std.mem.Allocator ```
    pub fn Log(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOpenGLShaderProgram_Log(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Log: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bind)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Bind(self: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_Bind(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#release)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Release(self: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_Release(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#create)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Create(self: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_Create(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#programId)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn ProgramId(self: ?*anyopaque) u32 {
        return qtc.QOpenGLShaderProgram_ProgramId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#maxGeometryOutputVertices)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn MaxGeometryOutputVertices(self: ?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_MaxGeometryOutputVertices(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setPatchVertexCount)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, count: i32 ```
    pub fn SetPatchVertexCount(self: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetPatchVertexCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#patchVertexCount)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn PatchVertexCount(self: ?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_PatchVertexCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultOuterTessellationLevels)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, levels: []f32 ```
    pub fn SetDefaultOuterTessellationLevels(self: ?*anyopaque, levels: []f32) void {
        const levels_list = qtc.libqt_list{
            .len = levels.len,
            .data = levels.ptr,
        };
        qtc.QOpenGLShaderProgram_SetDefaultOuterTessellationLevels(@ptrCast(self), levels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultOuterTessellationLevels)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, allocator: std.mem.Allocator ```
    pub fn DefaultOuterTessellationLevels(self: ?*anyopaque, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_DefaultOuterTessellationLevels(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("qopenglshaderprogram.DefaultOuterTessellationLevels: Memory allocation failed");
        const _data: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setDefaultInnerTessellationLevels)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, levels: []f32 ```
    pub fn SetDefaultInnerTessellationLevels(self: ?*anyopaque, levels: []f32) void {
        const levels_list = qtc.libqt_list{
            .len = levels.len,
            .data = levels.ptr,
        };
        qtc.QOpenGLShaderProgram_SetDefaultInnerTessellationLevels(@ptrCast(self), levels_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#defaultInnerTessellationLevels)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, allocator: std.mem.Allocator ```
    pub fn DefaultInnerTessellationLevels(self: ?*anyopaque, allocator: std.mem.Allocator) []f32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLShaderProgram_DefaultInnerTessellationLevels(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f32, _arr.len) catch @panic("qopenglshaderprogram.DefaultInnerTessellationLevels: Memory allocation failed");
        const _data: [*]f32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, location: i32 ```
    pub fn BindAttributeLocation(self: ?*anyopaque, name: []const u8, location: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_BindAttributeLocation(@ptrCast(self), name_Cstring, @intCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []u8, location: i32 ```
    pub fn BindAttributeLocation2(self: ?*anyopaque, name: []u8, location: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLShaderProgram_BindAttributeLocation2(@ptrCast(self), name_str, @intCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#bindAttributeLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, location: i32 ```
    pub fn BindAttributeLocation3(self: ?*anyopaque, name: []const u8, location: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QOpenGLShaderProgram_BindAttributeLocation3(@ptrCast(self), name_str, @intCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
    pub fn AttributeLocation(self: ?*anyopaque, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLShaderProgram_AttributeLocation(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []u8 ```
    pub fn AttributeLocation2(self: ?*anyopaque, name: []u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_AttributeLocation2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#attributeLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
    pub fn AttributeLocation3(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_AttributeLocation3(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: f32 ```
    pub fn SetAttributeValue(self: ?*anyopaque, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue(@ptrCast(self), @intCast(location), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, x: f32, y: f32 ```
    pub fn SetAttributeValue2(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue2(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32 ```
    pub fn SetAttributeValue3(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue3(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn SetAttributeValue4(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue4(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QVector2D ```
    pub fn SetAttributeValue5(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue5(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QVector3D ```
    pub fn SetAttributeValue6(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue6(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QVector4D ```
    pub fn SetAttributeValue7(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue7(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QColor ```
    pub fn SetAttributeValue8(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue8(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: *const f32, columns: i32, rows: i32 ```
    pub fn SetAttributeValue9(self: ?*anyopaque, location: i32, values: *const f32, columns: i32, rows: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeValue9(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(columns), @intCast(rows));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: f32 ```
    pub fn SetAttributeValue10(self: ?*anyopaque, name: []const u8, value: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue10(@ptrCast(self), name_Cstring, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, x: f32, y: f32 ```
    pub fn SetAttributeValue11(self: ?*anyopaque, name: []const u8, x: f32, y: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue11(@ptrCast(self), name_Cstring, @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, x: f32, y: f32, z: f32 ```
    pub fn SetAttributeValue12(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue12(@ptrCast(self), name_Cstring, @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, x: f32, y: f32, z: f32, w: f32 ```
    pub fn SetAttributeValue13(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32, w: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue13(@ptrCast(self), name_Cstring, @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QVector2D ```
    pub fn SetAttributeValue14(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue14(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QVector3D ```
    pub fn SetAttributeValue15(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue15(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QVector4D ```
    pub fn SetAttributeValue16(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue16(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QColor ```
    pub fn SetAttributeValue17(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue17(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: *const f32, columns: i32, rows: i32 ```
    pub fn SetAttributeValue18(self: ?*anyopaque, name: []const u8, values: *const f32, columns: i32, rows: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeValue18(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(columns), @intCast(rows));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: *const f32, tupleSize: i32 ```
    pub fn SetAttributeArray(self: ?*anyopaque, location: i32, values: *const f32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector2D ```
    pub fn SetAttributeArray2(self: ?*anyopaque, location: i32, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray2(@ptrCast(self), @intCast(location), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector3D ```
    pub fn SetAttributeArray3(self: ?*anyopaque, location: i32, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray3(@ptrCast(self), @intCast(location), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector4D ```
    pub fn SetAttributeArray4(self: ?*anyopaque, location: i32, values: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray4(@ptrCast(self), @intCast(location), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, typeVal: u32, values: ?*anyopaque, tupleSize: i32 ```
    pub fn SetAttributeArray5(self: ?*anyopaque, location: i32, typeVal: u32, values: ?*anyopaque, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray5(@ptrCast(self), @intCast(location), @intCast(typeVal), values, @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: *const f32, tupleSize: i32 ```
    pub fn SetAttributeArray6(self: ?*anyopaque, name: []const u8, values: *const f32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray6(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector2D ```
    pub fn SetAttributeArray7(self: ?*anyopaque, name: []const u8, values: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray7(@ptrCast(self), name_Cstring, @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector3D ```
    pub fn SetAttributeArray8(self: ?*anyopaque, name: []const u8, values: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray8(@ptrCast(self), name_Cstring, @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector4D ```
    pub fn SetAttributeArray9(self: ?*anyopaque, name: []const u8, values: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray9(@ptrCast(self), name_Cstring, @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, typeVal: u32, values: ?*anyopaque, tupleSize: i32 ```
    pub fn SetAttributeArray10(self: ?*anyopaque, name: []const u8, typeVal: u32, values: ?*anyopaque, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray10(@ptrCast(self), name_Cstring, @intCast(typeVal), values, @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, typeVal: u32, offset: i32, tupleSize: i32 ```
    pub fn SetAttributeBuffer(self: ?*anyopaque, location: i32, typeVal: u32, offset: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer(@ptrCast(self), @intCast(location), @intCast(typeVal), @intCast(offset), @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, typeVal: u32, offset: i32, tupleSize: i32 ```
    pub fn SetAttributeBuffer2(self: ?*anyopaque, name: []const u8, typeVal: u32, offset: i32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeBuffer2(@ptrCast(self), name_Cstring, @intCast(typeVal), @intCast(offset), @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32 ```
    pub fn EnableAttributeArray(self: ?*anyopaque, location: i32) void {
        qtc.QOpenGLShaderProgram_EnableAttributeArray(@ptrCast(self), @intCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#enableAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
    pub fn EnableAttributeArray2(self: ?*anyopaque, name: []const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_EnableAttributeArray2(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32 ```
    pub fn DisableAttributeArray(self: ?*anyopaque, location: i32) void {
        qtc.QOpenGLShaderProgram_DisableAttributeArray(@ptrCast(self), @intCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#disableAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
    pub fn DisableAttributeArray2(self: ?*anyopaque, name: []const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_DisableAttributeArray2(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
    pub fn UniformLocation(self: ?*anyopaque, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLShaderProgram_UniformLocation(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []u8 ```
    pub fn UniformLocation2(self: ?*anyopaque, name: []u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_UniformLocation2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#uniformLocation)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
    pub fn UniformLocation3(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QOpenGLShaderProgram_UniformLocation3(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: f32 ```
    pub fn SetUniformValue(self: ?*anyopaque, location: i32, value: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue(@ptrCast(self), @intCast(location), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: i32 ```
    pub fn SetUniformValue2(self: ?*anyopaque, location: i32, value: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue2(@ptrCast(self), @intCast(location), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: u32 ```
    pub fn SetUniformValue3(self: ?*anyopaque, location: i32, value: u32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue3(@ptrCast(self), @intCast(location), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, x: f32, y: f32 ```
    pub fn SetUniformValue4(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue4(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32 ```
    pub fn SetUniformValue5(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue5(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn SetUniformValue6(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLShaderProgram_SetUniformValue6(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QVector2D ```
    pub fn SetUniformValue7(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue7(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QVector3D ```
    pub fn SetUniformValue8(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue8(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QVector4D ```
    pub fn SetUniformValue9(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue9(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, color: QtC.QColor ```
    pub fn SetUniformValue10(self: ?*anyopaque, location: i32, color: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue10(@ptrCast(self), @intCast(location), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, point: QtC.QPoint ```
    pub fn SetUniformValue11(self: ?*anyopaque, location: i32, point: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue11(@ptrCast(self), @intCast(location), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, point: QtC.QPointF ```
    pub fn SetUniformValue12(self: ?*anyopaque, location: i32, point: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue12(@ptrCast(self), @intCast(location), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, size: QtC.QSize ```
    pub fn SetUniformValue13(self: ?*anyopaque, location: i32, size: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue13(@ptrCast(self), @intCast(location), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, size: QtC.QSizeF ```
    pub fn SetUniformValue14(self: ?*anyopaque, location: i32, size: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue14(@ptrCast(self), @intCast(location), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QMatrix4x4 ```
    pub fn SetUniformValue23(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue23(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, value: QtC.QTransform ```
    pub fn SetUniformValue24(self: ?*anyopaque, location: i32, value: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_SetUniformValue24(@ptrCast(self), @intCast(location), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: f32 ```
    pub fn SetUniformValue25(self: ?*anyopaque, name: []const u8, value: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue25(@ptrCast(self), name_Cstring, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: i32 ```
    pub fn SetUniformValue26(self: ?*anyopaque, name: []const u8, value: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue26(@ptrCast(self), name_Cstring, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: u32 ```
    pub fn SetUniformValue27(self: ?*anyopaque, name: []const u8, value: u32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue27(@ptrCast(self), name_Cstring, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, x: f32, y: f32 ```
    pub fn SetUniformValue28(self: ?*anyopaque, name: []const u8, x: f32, y: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue28(@ptrCast(self), name_Cstring, @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, x: f32, y: f32, z: f32 ```
    pub fn SetUniformValue29(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue29(@ptrCast(self), name_Cstring, @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, x: f32, y: f32, z: f32, w: f32 ```
    pub fn SetUniformValue30(self: ?*anyopaque, name: []const u8, x: f32, y: f32, z: f32, w: f32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue30(@ptrCast(self), name_Cstring, @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QVector2D ```
    pub fn SetUniformValue31(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue31(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QVector3D ```
    pub fn SetUniformValue32(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue32(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QVector4D ```
    pub fn SetUniformValue33(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue33(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, color: QtC.QColor ```
    pub fn SetUniformValue34(self: ?*anyopaque, name: []const u8, color: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue34(@ptrCast(self), name_Cstring, @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, point: QtC.QPoint ```
    pub fn SetUniformValue35(self: ?*anyopaque, name: []const u8, point: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue35(@ptrCast(self), name_Cstring, @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, point: QtC.QPointF ```
    pub fn SetUniformValue36(self: ?*anyopaque, name: []const u8, point: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue36(@ptrCast(self), name_Cstring, @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, size: QtC.QSize ```
    pub fn SetUniformValue37(self: ?*anyopaque, name: []const u8, size: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue37(@ptrCast(self), name_Cstring, @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, size: QtC.QSizeF ```
    pub fn SetUniformValue38(self: ?*anyopaque, name: []const u8, size: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue38(@ptrCast(self), name_Cstring, @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QMatrix4x4 ```
    pub fn SetUniformValue47(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue47(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValue)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QTransform ```
    pub fn SetUniformValue48(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValue48(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: *const f32, count: i32, tupleSize: i32 ```
    pub fn SetUniformValueArray(self: ?*anyopaque, location: i32, values: *const f32, count: i32, tupleSize: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(count), @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: *const i32, count: i32 ```
    pub fn SetUniformValueArray2(self: ?*anyopaque, location: i32, values: *const i32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray2(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: *const u32, count: i32 ```
    pub fn SetUniformValueArray3(self: ?*anyopaque, location: i32, values: *const u32, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray3(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector2D, count: i32 ```
    pub fn SetUniformValueArray4(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray4(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector3D, count: i32 ```
    pub fn SetUniformValueArray5(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray5(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector4D, count: i32 ```
    pub fn SetUniformValueArray6(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray6(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QMatrix4x4, count: i32 ```
    pub fn SetUniformValueArray15(self: ?*anyopaque, location: i32, values: ?*anyopaque, count: i32) void {
        qtc.QOpenGLShaderProgram_SetUniformValueArray15(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: *const f32, count: i32, tupleSize: i32 ```
    pub fn SetUniformValueArray16(self: ?*anyopaque, name: []const u8, values: *const f32, count: i32, tupleSize: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray16(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(count), @intCast(tupleSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: *const i32, count: i32 ```
    pub fn SetUniformValueArray17(self: ?*anyopaque, name: []const u8, values: *const i32, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray17(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: *const u32, count: i32 ```
    pub fn SetUniformValueArray18(self: ?*anyopaque, name: []const u8, values: *const u32, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray18(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector2D, count: i32 ```
    pub fn SetUniformValueArray19(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray19(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector3D, count: i32 ```
    pub fn SetUniformValueArray20(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray20(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector4D, count: i32 ```
    pub fn SetUniformValueArray21(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray21(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setUniformValueArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QMatrix4x4, count: i32 ```
    pub fn SetUniformValueArray30(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, count: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetUniformValueArray30(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
    ///
    ///
    pub fn HasOpenGLShaderPrograms() bool {
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QOpenGLShaderProgram_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QOpenGLShaderProgram_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: *const f32, tupleSize: i32, stride: i32 ```
    pub fn SetAttributeArray42(self: ?*anyopaque, location: i32, values: *const f32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray42(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(tupleSize), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector2D, stride: i32 ```
    pub fn SetAttributeArray32(self: ?*anyopaque, location: i32, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray32(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector3D, stride: i32 ```
    pub fn SetAttributeArray33(self: ?*anyopaque, location: i32, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray33(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, values: QtC.QVector4D, stride: i32 ```
    pub fn SetAttributeArray34(self: ?*anyopaque, location: i32, values: ?*anyopaque, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray34(@ptrCast(self), @intCast(location), @ptrCast(values), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, typeVal: u32, values: ?*anyopaque, tupleSize: i32, stride: i32 ```
    pub fn SetAttributeArray52(self: ?*anyopaque, location: i32, typeVal: u32, values: ?*anyopaque, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeArray52(@ptrCast(self), @intCast(location), @intCast(typeVal), values, @intCast(tupleSize), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: *const f32, tupleSize: i32, stride: i32 ```
    pub fn SetAttributeArray43(self: ?*anyopaque, name: []const u8, values: *const f32, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray43(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(tupleSize), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector2D, stride: i32 ```
    pub fn SetAttributeArray35(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray35(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector3D, stride: i32 ```
    pub fn SetAttributeArray36(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray36(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, values: QtC.QVector4D, stride: i32 ```
    pub fn SetAttributeArray37(self: ?*anyopaque, name: []const u8, values: ?*anyopaque, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray37(@ptrCast(self), name_Cstring, @ptrCast(values), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeArray)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, typeVal: u32, values: ?*anyopaque, tupleSize: i32, stride: i32 ```
    pub fn SetAttributeArray53(self: ?*anyopaque, name: []const u8, typeVal: u32, values: ?*anyopaque, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeArray53(@ptrCast(self), name_Cstring, @intCast(typeVal), values, @intCast(tupleSize), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, location: i32, typeVal: u32, offset: i32, tupleSize: i32, stride: i32 ```
    pub fn SetAttributeBuffer5(self: ?*anyopaque, location: i32, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        qtc.QOpenGLShaderProgram_SetAttributeBuffer5(@ptrCast(self), @intCast(location), @intCast(typeVal), @intCast(offset), @intCast(tupleSize), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#setAttributeBuffer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, typeVal: u32, offset: i32, tupleSize: i32, stride: i32 ```
    pub fn SetAttributeBuffer52(self: ?*anyopaque, name: []const u8, typeVal: u32, offset: i32, tupleSize: i32, stride: i32) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLShaderProgram_SetAttributeBuffer52(@ptrCast(self), name_Cstring, @intCast(typeVal), @intCast(offset), @intCast(tupleSize), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#hasOpenGLShaderPrograms)
    ///
    /// ``` context: QtC.QOpenGLContext ```
    pub fn HasOpenGLShaderPrograms1(context: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_HasOpenGLShaderPrograms1(@ptrCast(context));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qopenglshaderprogram.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
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
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qopenglshaderprogram.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, obj: QtC.QObject ```
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
    /// ``` self: QtC.QOpenGLShaderProgram, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QOpenGLShaderProgram, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLShaderProgram_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QOpenGLShaderProgram_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QOpenGLShaderProgram_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QOpenGLShaderProgram_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QOpenGLShaderProgram_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShaderProgram_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QOpenGLShaderProgram_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QOpenGLShaderProgram_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QOpenGLShaderProgram_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QOpenGLShaderProgram_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QOpenGLShaderProgram, callback: *const fn (self: QtC.QOpenGLShaderProgram, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglshaderprogram.html#dtor.QOpenGLShaderProgram)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLShaderProgram ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLShaderProgram_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglshaderprogram.html#types
pub const enums = struct {
    pub const ShaderTypeBit = enum {
        pub const Vertex: i32 = 1;
        pub const Fragment: i32 = 2;
        pub const Geometry: i32 = 4;
        pub const TessellationControl: i32 = 8;
        pub const TessellationEvaluation: i32 = 16;
        pub const Compute: i32 = 32;
    };
};
