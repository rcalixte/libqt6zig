const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QXmlStreamReader = @import("libqt6").QXmlStreamReader;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtsvgglobal_enums = @import("libqtsvgglobal.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)
pub const QSvgRenderer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSvgRenderer,

    pub const _is_QSvgRenderer = {};
    pub const _is_QObject = {};

    /// New constructs a new QSvgRenderer object.
    ///
    pub fn New() QSvgRenderer {
        return .{ .ptr = qtc.QSvgRenderer_new() };
    }

    /// New2 constructs a new QSvgRenderer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn New2(filename: []const u8) QSvgRenderer {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_new2(filename_str) };
    }

    /// New3 constructs a new QSvgRenderer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: []u8 `
    ///
    pub fn New3(contents: []u8) QSvgRenderer {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_new3(contents_str) };
    }

    /// New4 constructs a new QSvgRenderer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: QXmlStreamReader `
    ///
    pub fn New4(contents: anytype) QSvgRenderer {
        comptime _ = @TypeOf(contents)._is_QXmlStreamReader;
        return .{ .ptr = qtc.QSvgRenderer_new4(@ptrCast(contents.ptr)) };
    }

    /// New5 constructs a new QSvgRenderer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(parent: anytype) QSvgRenderer {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new5(@ptrCast(parent.ptr)) };
    }

    /// New6 constructs a new QSvgRenderer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(filename: []const u8, parent: anytype) QSvgRenderer {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new6(filename_str, @ptrCast(parent.ptr)) };
    }

    /// New7 constructs a new QSvgRenderer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: []u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New7(contents: []u8, parent: anytype) QSvgRenderer {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new7(contents_str, @ptrCast(parent.ptr)) };
    }

    /// New8 constructs a new QSvgRenderer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: QXmlStreamReader `
    ///
    /// ` parent: QObject `
    ///
    pub fn New8(contents: anytype, parent: anytype) QSvgRenderer {
        comptime _ = @TypeOf(contents)._is_QXmlStreamReader;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new8(@ptrCast(contents.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn MetaObject(self: QSvgRenderer) QMetaObject {
        return .{ .ptr = qtc.QSvgRenderer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSvgRenderer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSvgRenderer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    pub fn SuperMetaObject(self: QSvgRenderer) QMetaObject {
        return .{ .ptr = qtc.QSvgRenderer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSvgRenderer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSvgRenderer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSvgRenderer, callback: *const fn (QSvgRenderer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSvgRenderer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSvgRenderer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSvgRenderer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSvgRenderer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSvgRenderer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSvgRenderer, callback: *const fn (QSvgRenderer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSvgRenderer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSvgRenderer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSvgRenderer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgrenderer.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn IsValid(self: QSvgRenderer) bool {
        return qtc.QSvgRenderer_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#defaultSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn DefaultSize(self: QSvgRenderer) QSize {
        return .{ .ptr = qtc.QSvgRenderer_DefaultSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn ViewBox(self: QSvgRenderer) QRect {
        return .{ .ptr = qtc.QSvgRenderer_ViewBox(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBoxF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn ViewBoxF(self: QSvgRenderer) QRectF {
        return .{ .ptr = qtc.QSvgRenderer_ViewBoxF(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` viewbox: QRect `
    ///
    pub fn SetViewBox(self: QSvgRenderer, viewbox: anytype) void {
        comptime _ = @TypeOf(viewbox)._is_QRect;
        qtc.QSvgRenderer_SetViewBox(@ptrCast(self.ptr), @ptrCast(viewbox.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` viewbox: QRectF `
    ///
    pub fn SetViewBox2(self: QSvgRenderer, viewbox: anytype) void {
        comptime _ = @TypeOf(viewbox)._is_QRectF;
        qtc.QSvgRenderer_SetViewBox2(@ptrCast(self.ptr), @ptrCast(viewbox.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#aspectRatioMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.AspectRatioMode `
    ///
    pub fn AspectRatioMode(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_AspectRatioMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setAspectRatioMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn SetAspectRatioMode(self: QSvgRenderer, mode: i32) void {
        qtc.QSvgRenderer_SetAspectRatioMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtsvgglobal_enums.Option `
    ///
    pub fn Options(self: QSvgRenderer) u32 {
        return qtc.QSvgRenderer_Options(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` flags: flag of qtsvgglobal_enums.Option `
    ///
    pub fn SetOptions(self: QSvgRenderer, flags: u32) void {
        qtc.QSvgRenderer_SetOptions(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#animated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn Animated(self: QSvgRenderer) bool {
        return qtc.QSvgRenderer_Animated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#framesPerSecond)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn FramesPerSecond(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_FramesPerSecond(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setFramesPerSecond)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` num: i32 `
    ///
    pub fn SetFramesPerSecond(self: QSvgRenderer, num: i32) void {
        qtc.QSvgRenderer_SetFramesPerSecond(@ptrCast(self.ptr), @bitCast(num));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#currentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn CurrentFrame(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_CurrentFrame(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setCurrentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` currentFrame: i32 `
    ///
    pub fn SetCurrentFrame(self: QSvgRenderer, currentFrame: i32) void {
        qtc.QSvgRenderer_SetCurrentFrame(@ptrCast(self.ptr), @bitCast(currentFrame));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#animationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn AnimationDuration(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_AnimationDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#isAnimationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn IsAnimationEnabled(self: QSvgRenderer) bool {
        return qtc.QSvgRenderer_IsAnimationEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setAnimationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAnimationEnabled(self: QSvgRenderer, enable: bool) void {
        qtc.QSvgRenderer_SetAnimationEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#boundsOnElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: []const u8 `
    ///
    pub fn BoundsOnElement(self: QSvgRenderer, id: []const u8) QRectF {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_BoundsOnElement(@ptrCast(self.ptr), id_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#elementExists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: []const u8 `
    ///
    pub fn ElementExists(self: QSvgRenderer, id: []const u8) bool {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.QSvgRenderer_ElementExists(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#transformForElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: []const u8 `
    ///
    pub fn TransformForElement(self: QSvgRenderer, id: []const u8) QTransform {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_TransformForElement(@ptrCast(self.ptr), id_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setDefaultOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qtsvgglobal_enums.Option `
    ///
    pub fn SetDefaultOptions(flags: u32) void {
        qtc.QSvgRenderer_SetDefaultOptions(@bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn Load(self: QSvgRenderer, filename: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QSvgRenderer_Load(@ptrCast(self.ptr), filename_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` contents: []u8 `
    ///
    pub fn Load2(self: QSvgRenderer, contents: []u8) bool {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        return qtc.QSvgRenderer_Load2(@ptrCast(self.ptr), contents_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` contents: QXmlStreamReader `
    ///
    pub fn Load3(self: QSvgRenderer, contents: anytype) bool {
        comptime _ = @TypeOf(contents)._is_QXmlStreamReader;
        return qtc.QSvgRenderer_Load3(@ptrCast(self.ptr), @ptrCast(contents.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` p: QPainter `
    ///
    pub fn Render(self: QSvgRenderer, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        qtc.QSvgRenderer_Render(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` p: QPainter `
    ///
    /// ` bounds: QRectF `
    ///
    pub fn Render2(self: QSvgRenderer, p: anytype, bounds: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(bounds)._is_QRectF;
        qtc.QSvgRenderer_Render2(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(bounds.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` p: QPainter `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn Render3(self: QSvgRenderer, p: anytype, elementId: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        qtc.QSvgRenderer_Render3(@ptrCast(self.ptr), @ptrCast(p.ptr), elementId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn RepaintNeeded(self: QSvgRenderer) void {
        qtc.QSvgRenderer_RepaintNeeded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer) callconv(.c) void `
    ///
    pub fn OnRepaintNeeded(self: QSvgRenderer, callback: *const fn (QSvgRenderer) callconv(.c) void) void {
        qtc.QSvgRenderer_Connect_RepaintNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgrenderer.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgrenderer.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` p: QPainter `
    ///
    /// ` elementId: []const u8 `
    ///
    /// ` bounds: QRectF `
    ///
    pub fn Render32(self: QSvgRenderer, p: anytype, elementId: []const u8, bounds: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        comptime _ = @TypeOf(bounds)._is_QRectF;
        qtc.QSvgRenderer_Render32(@ptrCast(self.ptr), @ptrCast(p.ptr), elementId_str, @ptrCast(bounds.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSvgRenderer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgrenderer.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSvgRenderer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn IsWidgetType(self: QSvgRenderer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn IsWindowType(self: QSvgRenderer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn IsQuickItemType(self: QSvgRenderer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn SignalsBlocked(self: QSvgRenderer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSvgRenderer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn Thread(self: QSvgRenderer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSvgRenderer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSvgRenderer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSvgRenderer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSvgRenderer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSvgRenderer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSvgRenderer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsvgrenderer.Children: Memory allocation failed");
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
    /// ` self: QSvgRenderer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSvgRenderer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSvgRenderer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSvgRenderer, obj: anytype) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSvgRenderer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn Disconnect3(self: QSvgRenderer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSvgRenderer, receiver: anytype) bool {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn DumpObjectTree(self: QSvgRenderer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn DumpObjectInfo(self: QSvgRenderer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSvgRenderer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSvgRenderer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSvgRenderer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsvgrenderer.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsvgrenderer.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSvgRenderer `
    ///
    pub fn BindingStorage(self: QSvgRenderer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn BindingStorage2(self: QSvgRenderer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn Destroyed(self: QSvgRenderer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSvgRenderer, callback: *const fn (QSvgRenderer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn Parent(self: QSvgRenderer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSvgRenderer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn DeleteLater(self: QSvgRenderer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSvgRenderer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSvgRenderer, time: i64, timerType: i32) i32 {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSvgRenderer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSvgRenderer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSvgRenderer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSvgRenderer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSvgRenderer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSvgRenderer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QObject) callconv(.c) void) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSvgRenderer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSvgRenderer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSvgRenderer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSvgRenderer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QEvent) callconv(.c) bool) void {
        qtc.QSvgRenderer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSvgRenderer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSvgRenderer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSvgRenderer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSvgRenderer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSvgRenderer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSvgRenderer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSvgRenderer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSvgRenderer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSvgRenderer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QTimerEvent) callconv(.c) void) void {
        qtc.QSvgRenderer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSvgRenderer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSvgRenderer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSvgRenderer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSvgRenderer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QChildEvent) callconv(.c) void) void {
        qtc.QSvgRenderer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSvgRenderer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSvgRenderer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSvgRenderer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSvgRenderer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QEvent) callconv(.c) void) void {
        qtc.QSvgRenderer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QMetaMethod) callconv(.c) void) void {
        qtc.QSvgRenderer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QMetaMethod) callconv(.c) void) void {
        qtc.QSvgRenderer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn Sender(self: QSvgRenderer) QObject {
        return .{ .ptr = qtc.QSvgRenderer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSvgRenderer `
    ///
    pub fn SuperSender(self: QSvgRenderer) QObject {
        return .{ .ptr = qtc.QSvgRenderer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSvgRenderer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSvgRenderer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn SenderSignalIndex(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    pub fn SuperSenderSignalIndex(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSvgRenderer, callback: *const fn () callconv(.c) i32) void {
        qtc.QSvgRenderer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSvgRenderer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSvgRenderer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSvgRenderer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSvgRenderer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSvgRenderer, callback: *const fn (QSvgRenderer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSvgRenderer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSvgRenderer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSvgRenderer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSvgRenderer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSvgRenderer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QMetaMethod) callconv(.c) bool) void {
        qtc.QSvgRenderer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSvgRenderer, callback: *const fn (QSvgRenderer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#dtor.QSvgRenderer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn Delete(self: QSvgRenderer) void {
        qtc.QSvgRenderer_Delete(@ptrCast(self.ptr));
    }
};
