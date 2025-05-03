const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsvgrenderer.html
pub const qsvgrenderer = struct {
    /// New constructs a new QSvgRenderer object.
    ///
    ///
    pub fn New() ?*C.QSvgRenderer {
        return C.QSvgRenderer_new();
    }

    /// New2 constructs a new QSvgRenderer object.
    ///
    /// ``` filename: []const u8 ```
    pub fn New2(filename: []const u8) ?*C.QSvgRenderer {
        const filename_str = C.struct_libqt_string{
            .len = filename.len,
            .data = @constCast(filename.ptr),
        };

        return C.QSvgRenderer_new2(filename_str);
    }

    /// New3 constructs a new QSvgRenderer object.
    ///
    /// ``` contents: []u8 ```
    pub fn New3(contents: []u8) ?*C.QSvgRenderer {
        const contents_str = C.struct_libqt_string{
            .len = contents.len,
            .data = @constCast(contents.ptr),
        };

        return C.QSvgRenderer_new3(contents_str);
    }

    /// New4 constructs a new QSvgRenderer object.
    ///
    /// ``` contents: ?*C.QXmlStreamReader ```
    pub fn New4(contents: ?*anyopaque) ?*C.QSvgRenderer {
        return C.QSvgRenderer_new4(@ptrCast(contents));
    }

    /// New5 constructs a new QSvgRenderer object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New5(parent: ?*anyopaque) ?*C.QSvgRenderer {
        return C.QSvgRenderer_new5(@ptrCast(parent));
    }

    /// New6 constructs a new QSvgRenderer object.
    ///
    /// ``` filename: []const u8, parent: ?*C.QObject ```
    pub fn New6(filename: []const u8, parent: ?*anyopaque) ?*C.QSvgRenderer {
        const filename_str = C.struct_libqt_string{
            .len = filename.len,
            .data = @constCast(filename.ptr),
        };

        return C.QSvgRenderer_new6(filename_str, @ptrCast(parent));
    }

    /// New7 constructs a new QSvgRenderer object.
    ///
    /// ``` contents: []u8, parent: ?*C.QObject ```
    pub fn New7(contents: []u8, parent: ?*anyopaque) ?*C.QSvgRenderer {
        const contents_str = C.struct_libqt_string{
            .len = contents.len,
            .data = @constCast(contents.ptr),
        };

        return C.QSvgRenderer_new7(contents_str, @ptrCast(parent));
    }

    /// New8 constructs a new QSvgRenderer object.
    ///
    /// ``` contents: ?*C.QXmlStreamReader, parent: ?*C.QObject ```
    pub fn New8(contents: ?*anyopaque, parent: ?*anyopaque) ?*C.QSvgRenderer {
        return C.QSvgRenderer_new8(@ptrCast(contents), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QSvgRenderer_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QSvgRenderer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QSvgRenderer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QSvgRenderer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSvgRenderer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QSvgRenderer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSvgRenderer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSvgRenderer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QSvgRenderer_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#isValid)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QSvgRenderer_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#defaultSize)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn DefaultSize(self: ?*anyopaque) ?*C.QSize {
        return C.QSvgRenderer_DefaultSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBox)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn ViewBox(self: ?*anyopaque) ?*C.QRect {
        return C.QSvgRenderer_ViewBox(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBoxF)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn ViewBoxF(self: ?*anyopaque) ?*C.QRectF {
        return C.QSvgRenderer_ViewBoxF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
    ///
    /// ``` self: ?*C.QSvgRenderer, viewbox: ?*C.QRect ```
    pub fn SetViewBox(self: ?*anyopaque, viewbox: ?*anyopaque) void {
        C.QSvgRenderer_SetViewBox(@ptrCast(self), @ptrCast(viewbox));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
    ///
    /// ``` self: ?*C.QSvgRenderer, viewbox: ?*C.QRectF ```
    pub fn SetViewBoxWithViewbox(self: ?*anyopaque, viewbox: ?*anyopaque) void {
        C.QSvgRenderer_SetViewBoxWithViewbox(@ptrCast(self), @ptrCast(viewbox));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#aspectRatioMode)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn AspectRatioMode(self: ?*anyopaque) i64 {
        return C.QSvgRenderer_AspectRatioMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setAspectRatioMode)
    ///
    /// ``` self: ?*C.QSvgRenderer, mode: qnamespace_enums.AspectRatioMode ```
    pub fn SetAspectRatioMode(self: ?*anyopaque, mode: i64) void {
        C.QSvgRenderer_SetAspectRatioMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#animated)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn Animated(self: ?*anyopaque) bool {
        return C.QSvgRenderer_Animated(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#framesPerSecond)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn FramesPerSecond(self: ?*anyopaque) i32 {
        return C.QSvgRenderer_FramesPerSecond(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setFramesPerSecond)
    ///
    /// ``` self: ?*C.QSvgRenderer, num: i32 ```
    pub fn SetFramesPerSecond(self: ?*anyopaque, num: i32) void {
        C.QSvgRenderer_SetFramesPerSecond(@ptrCast(self), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#currentFrame)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn CurrentFrame(self: ?*anyopaque) i32 {
        return C.QSvgRenderer_CurrentFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setCurrentFrame)
    ///
    /// ``` self: ?*C.QSvgRenderer, currentFrame: i32 ```
    pub fn SetCurrentFrame(self: ?*anyopaque, currentFrame: i32) void {
        C.QSvgRenderer_SetCurrentFrame(@ptrCast(self), @intCast(currentFrame));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#animationDuration)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn AnimationDuration(self: ?*anyopaque) i32 {
        return C.QSvgRenderer_AnimationDuration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#boundsOnElement)
    ///
    /// ``` self: ?*C.QSvgRenderer, id: []const u8 ```
    pub fn BoundsOnElement(self: ?*anyopaque, id: []const u8) ?*C.QRectF {
        const id_str = C.struct_libqt_string{
            .len = id.len,
            .data = @constCast(id.ptr),
        };
        return C.QSvgRenderer_BoundsOnElement(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#elementExists)
    ///
    /// ``` self: ?*C.QSvgRenderer, id: []const u8 ```
    pub fn ElementExists(self: ?*anyopaque, id: []const u8) bool {
        const id_str = C.struct_libqt_string{
            .len = id.len,
            .data = @constCast(id.ptr),
        };
        return C.QSvgRenderer_ElementExists(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#transformForElement)
    ///
    /// ``` self: ?*C.QSvgRenderer, id: []const u8 ```
    pub fn TransformForElement(self: ?*anyopaque, id: []const u8) ?*C.QTransform {
        const id_str = C.struct_libqt_string{
            .len = id.len,
            .data = @constCast(id.ptr),
        };
        return C.QSvgRenderer_TransformForElement(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ``` self: ?*C.QSvgRenderer, filename: []const u8 ```
    pub fn Load(self: ?*anyopaque, filename: []const u8) bool {
        const filename_str = C.struct_libqt_string{
            .len = filename.len,
            .data = @constCast(filename.ptr),
        };
        return C.QSvgRenderer_Load(@ptrCast(self), filename_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ``` self: ?*C.QSvgRenderer, contents: []u8 ```
    pub fn LoadWithContents(self: ?*anyopaque, contents: []u8) bool {
        const contents_str = C.struct_libqt_string{
            .len = contents.len,
            .data = @constCast(contents.ptr),
        };
        return C.QSvgRenderer_LoadWithContents(@ptrCast(self), contents_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ``` self: ?*C.QSvgRenderer, contents: ?*C.QXmlStreamReader ```
    pub fn Load2(self: ?*anyopaque, contents: ?*anyopaque) bool {
        return C.QSvgRenderer_Load2(@ptrCast(self), @ptrCast(contents));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ``` self: ?*C.QSvgRenderer, p: ?*C.QPainter ```
    pub fn Render(self: ?*anyopaque, p: ?*anyopaque) void {
        C.QSvgRenderer_Render(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ``` self: ?*C.QSvgRenderer, p: ?*C.QPainter, bounds: ?*C.QRectF ```
    pub fn Render2(self: ?*anyopaque, p: ?*anyopaque, bounds: ?*anyopaque) void {
        C.QSvgRenderer_Render2(@ptrCast(self), @ptrCast(p), @ptrCast(bounds));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ``` self: ?*C.QSvgRenderer, p: ?*C.QPainter, elementId: []const u8 ```
    pub fn Render3(self: ?*anyopaque, p: ?*anyopaque, elementId: []const u8) void {
        const elementId_str = C.struct_libqt_string{
            .len = elementId.len,
            .data = @constCast(elementId.ptr),
        };
        C.QSvgRenderer_Render3(@ptrCast(self), @ptrCast(p), elementId_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn RepaintNeeded(self: ?*anyopaque) void {
        C.QSvgRenderer_RepaintNeeded(@ptrCast(self));
    }

    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer) callconv(.c) void ```
    pub fn OnRepaintNeeded(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSvgRenderer_Connect_RepaintNeeded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSvgRenderer_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSvgRenderer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ``` self: ?*C.QSvgRenderer, p: ?*C.QPainter, elementId: []const u8, bounds: ?*C.QRectF ```
    pub fn Render32(self: ?*anyopaque, p: ?*anyopaque, elementId: []const u8, bounds: ?*anyopaque) void {
        const elementId_str = C.struct_libqt_string{
            .len = elementId.len,
            .data = @constCast(elementId.ptr),
        };
        C.QSvgRenderer_Render32(@ptrCast(self), @ptrCast(p), elementId_str, @ptrCast(bounds));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QSvgRenderer, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QSvgRenderer, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QSvgRenderer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QSvgRenderer, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSvgRenderer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QSvgRenderer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QSvgRenderer, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QSvgRenderer, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QSvgRenderer, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QSvgRenderer, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSvgRenderer, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QSvgRenderer, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QSvgRenderer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QSvgRenderer, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QSvgRenderer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSvgRenderer, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSvgRenderer, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSvgRenderer, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSvgRenderer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSvgRenderer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSvgRenderer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSvgRenderer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSvgRenderer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSvgRenderer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSvgRenderer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSvgRenderer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSvgRenderer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSvgRenderer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSvgRenderer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSvgRenderer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSvgRenderer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSvgRenderer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSvgRenderer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSvgRenderer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSvgRenderer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSvgRenderer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSvgRenderer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSvgRenderer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSvgRenderer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QSvgRenderer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QSvgRenderer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QSvgRenderer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSvgRenderer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSvgRenderer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QSvgRenderer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSvgRenderer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSvgRenderer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QSvgRenderer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSvgRenderer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSvgRenderer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSvgRenderer, slot: fn (?*C.QSvgRenderer, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSvgRenderer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QSvgRenderer ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QSvgRenderer_Delete(@ptrCast(self));
    }
};
