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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    pub fn new() QSvgRenderer {
        return .{ .ptr = qtc.QSvgRenderer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn new2(filename: []const u8) QSvgRenderer {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_new2(filename_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: []u8 `
    ///
    pub fn new3(contents: []u8) QSvgRenderer {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_new3(contents_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: QXmlStreamReader `
    ///
    pub fn new4(contents: anytype) QSvgRenderer {
        comptime _ = @TypeOf(contents)._is_QXmlStreamReader;
        return .{ .ptr = qtc.QSvgRenderer_new4(@ptrCast(contents.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_parent: anytype) QSvgRenderer {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new5(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(filename: []const u8, _parent: anytype) QSvgRenderer {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new6(filename_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: []u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new7(contents: []u8, _parent: anytype) QSvgRenderer {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new7(contents_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QSvgRenderer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` contents: QXmlStreamReader `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new8(contents: anytype, _parent: anytype) QSvgRenderer {
        comptime _ = @TypeOf(contents)._is_QXmlStreamReader;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSvgRenderer_new8(@ptrCast(contents.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn metaObject(self: QSvgRenderer) QMetaObject {
        return .{ .ptr = qtc.QSvgRenderer_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSvgRenderer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSvgRenderer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    pub fn superMetaObject(self: QSvgRenderer) QMetaObject {
        return .{ .ptr = qtc.QSvgRenderer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSvgRenderer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSvgRenderer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSvgRenderer, callback: *const fn (QSvgRenderer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSvgRenderer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSvgRenderer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSvgRenderer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QSvgRenderer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSvgRenderer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSvgRenderer, callback: *const fn (QSvgRenderer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSvgRenderer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QSvgRenderer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSvgRenderer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSvgRenderer.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn isValid(self: QSvgRenderer) bool {
        return qtc.QSvgRenderer_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultSize` instead
    ///
    pub const DefaultSize = defaultSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#defaultSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn defaultSize(self: QSvgRenderer) QSize {
        return .{ .ptr = qtc.QSvgRenderer_DefaultSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `viewBox` instead
    ///
    pub const ViewBox = viewBox;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn viewBox(self: QSvgRenderer) QRect {
        return .{ .ptr = qtc.QSvgRenderer_ViewBox(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `viewBoxF` instead
    ///
    pub const ViewBoxF = viewBoxF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBoxF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn viewBoxF(self: QSvgRenderer) QRectF {
        return .{ .ptr = qtc.QSvgRenderer_ViewBoxF(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewBox` instead
    ///
    pub const SetViewBox = setViewBox;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` viewbox: QRect `
    ///
    pub fn setViewBox(self: QSvgRenderer, viewbox: anytype) void {
        comptime _ = @TypeOf(viewbox)._is_QRect;
        qtc.QSvgRenderer_SetViewBox(@ptrCast(self.ptr), @ptrCast(viewbox.ptr));
    }

    /// ### DEPRECATED: Use `setViewBox2` instead
    ///
    pub const SetViewBox2 = setViewBox2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` viewbox: QRectF `
    ///
    pub fn setViewBox2(self: QSvgRenderer, viewbox: anytype) void {
        comptime _ = @TypeOf(viewbox)._is_QRectF;
        qtc.QSvgRenderer_SetViewBox2(@ptrCast(self.ptr), @ptrCast(viewbox.ptr));
    }

    /// ### DEPRECATED: Use `aspectRatioMode` instead
    ///
    pub const AspectRatioMode = aspectRatioMode;

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
    pub fn aspectRatioMode(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_AspectRatioMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAspectRatioMode` instead
    ///
    pub const SetAspectRatioMode = setAspectRatioMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setAspectRatioMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn setAspectRatioMode(self: QSvgRenderer, mode: i32) void {
        qtc.QSvgRenderer_SetAspectRatioMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

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
    pub fn options(self: QSvgRenderer) u32 {
        return qtc.QSvgRenderer_Options(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` flags: flag of qtsvgglobal_enums.Option `
    ///
    pub fn setOptions(self: QSvgRenderer, flags: u32) void {
        qtc.QSvgRenderer_SetOptions(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `animated` instead
    ///
    pub const Animated = animated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#animated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn animated(self: QSvgRenderer) bool {
        return qtc.QSvgRenderer_Animated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `framesPerSecond` instead
    ///
    pub const FramesPerSecond = framesPerSecond;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#framesPerSecond)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn framesPerSecond(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_FramesPerSecond(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFramesPerSecond` instead
    ///
    pub const SetFramesPerSecond = setFramesPerSecond;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setFramesPerSecond)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` num: i32 `
    ///
    pub fn setFramesPerSecond(self: QSvgRenderer, num: i32) void {
        qtc.QSvgRenderer_SetFramesPerSecond(@ptrCast(self.ptr), @bitCast(num));
    }

    /// ### DEPRECATED: Use `currentFrame` instead
    ///
    pub const CurrentFrame = currentFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#currentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn currentFrame(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_CurrentFrame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentFrame` instead
    ///
    pub const SetCurrentFrame = setCurrentFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setCurrentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` _currentFrame: i32 `
    ///
    pub fn setCurrentFrame(self: QSvgRenderer, _currentFrame: i32) void {
        qtc.QSvgRenderer_SetCurrentFrame(@ptrCast(self.ptr), @bitCast(_currentFrame));
    }

    /// ### DEPRECATED: Use `animationDuration` instead
    ///
    pub const AnimationDuration = animationDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#animationDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn animationDuration(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_AnimationDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAnimationEnabled` instead
    ///
    pub const IsAnimationEnabled = isAnimationEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#isAnimationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn isAnimationEnabled(self: QSvgRenderer) bool {
        return qtc.QSvgRenderer_IsAnimationEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimationEnabled` instead
    ///
    pub const SetAnimationEnabled = setAnimationEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setAnimationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` enable: bool `
    ///
    pub fn setAnimationEnabled(self: QSvgRenderer, enable: bool) void {
        qtc.QSvgRenderer_SetAnimationEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `boundsOnElement` instead
    ///
    pub const BoundsOnElement = boundsOnElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#boundsOnElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: []const u8 `
    ///
    pub fn boundsOnElement(self: QSvgRenderer, id: []const u8) QRectF {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_BoundsOnElement(@ptrCast(self.ptr), id_str) };
    }

    /// ### DEPRECATED: Use `elementExists` instead
    ///
    pub const ElementExists = elementExists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#elementExists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: []const u8 `
    ///
    pub fn elementExists(self: QSvgRenderer, id: []const u8) bool {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.QSvgRenderer_ElementExists(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `transformForElement` instead
    ///
    pub const TransformForElement = transformForElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#transformForElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` id: []const u8 `
    ///
    pub fn transformForElement(self: QSvgRenderer, id: []const u8) QTransform {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.QSvgRenderer_TransformForElement(@ptrCast(self.ptr), id_str) };
    }

    /// ### DEPRECATED: Use `setDefaultOptions` instead
    ///
    pub const SetDefaultOptions = setDefaultOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#setDefaultOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qtsvgglobal_enums.Option `
    ///
    pub fn setDefaultOptions(flags: u32) void {
        qtc.QSvgRenderer_SetDefaultOptions(@bitCast(flags));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn load(self: QSvgRenderer, filename: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QSvgRenderer_Load(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` contents: []u8 `
    ///
    pub fn load2(self: QSvgRenderer, contents: []u8) bool {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        return qtc.QSvgRenderer_Load2(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `load3` instead
    ///
    pub const Load3 = load3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` contents: QXmlStreamReader `
    ///
    pub fn load3(self: QSvgRenderer, contents: anytype) bool {
        comptime _ = @TypeOf(contents)._is_QXmlStreamReader;
        return qtc.QSvgRenderer_Load3(@ptrCast(self.ptr), @ptrCast(contents.ptr));
    }

    /// ### DEPRECATED: Use `render` instead
    ///
    pub const Render = render;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` p: QPainter `
    ///
    pub fn render(self: QSvgRenderer, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        qtc.QSvgRenderer_Render(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `render2` instead
    ///
    pub const Render2 = render2;

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
    pub fn render2(self: QSvgRenderer, p: anytype, bounds: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(bounds)._is_QRectF;
        qtc.QSvgRenderer_Render2(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(bounds.ptr));
    }

    /// ### DEPRECATED: Use `render3` instead
    ///
    pub const Render3 = render3;

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
    pub fn render3(self: QSvgRenderer, p: anytype, elementId: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        qtc.QSvgRenderer_Render3(@ptrCast(self.ptr), @ptrCast(p.ptr), elementId_str);
    }

    /// ### DEPRECATED: Use `repaintNeeded` instead
    ///
    pub const RepaintNeeded = repaintNeeded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn repaintNeeded(self: QSvgRenderer) void {
        qtc.QSvgRenderer_RepaintNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRepaintNeeded` instead
    ///
    pub const OnRepaintNeeded = onRepaintNeeded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer) callconv(.c) void `
    ///
    pub fn onRepaintNeeded(self: QSvgRenderer, callback: *const fn (QSvgRenderer) callconv(.c) void) void {
        qtc.QSvgRenderer_Connect_RepaintNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSvgRenderer.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSvgRenderer.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `render32` instead
    ///
    pub const Render32 = render32;

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
    pub fn render32(self: QSvgRenderer, p: anytype, elementId: []const u8, bounds: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        comptime _ = @TypeOf(bounds)._is_QRectF;
        qtc.QSvgRenderer_Render32(@ptrCast(self.ptr), @ptrCast(p.ptr), elementId_str, @ptrCast(bounds.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSvgRenderer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSvgRenderer.objectName: Memory allocation failed");
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
    /// ` self: QSvgRenderer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSvgRenderer, name: []const u8) void {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn isWidgetType(self: QSvgRenderer) bool {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn isWindowType(self: QSvgRenderer) bool {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn isQuickItemType(self: QSvgRenderer) bool {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn signalsBlocked(self: QSvgRenderer) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSvgRenderer, b: bool) bool {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn thread(self: QSvgRenderer) QThread {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSvgRenderer, _thread: anytype) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSvgRenderer, interval: i32) i32 {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSvgRenderer, time: i64) i32 {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSvgRenderer, id: i32) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSvgRenderer, id: i32) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSvgRenderer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSvgRenderer.children: Memory allocation failed");
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSvgRenderer, _parent: anytype) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSvgRenderer, filterObj: anytype) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSvgRenderer, obj: anytype) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSvgRenderer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn disconnect3(self: QSvgRenderer) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSvgRenderer, receiver: anytype) bool {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn dumpObjectTree(self: QSvgRenderer) void {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn dumpObjectInfo(self: QSvgRenderer) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSvgRenderer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSvgRenderer, name: [:0]const u8) QVariant {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSvgRenderer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSvgRenderer.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSvgRenderer.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSvgRenderer `
    ///
    pub fn bindingStorage(self: QSvgRenderer) QBindingStorage {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn bindingStorage2(self: QSvgRenderer) QBindingStorage {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn destroyed(self: QSvgRenderer) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSvgRenderer, callback: *const fn (QSvgRenderer) callconv(.c) void) void {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn parent(self: QSvgRenderer) QObject {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSvgRenderer, classname: [:0]const u8) bool {
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
    /// ` self: QSvgRenderer `
    ///
    pub fn deleteLater(self: QSvgRenderer) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSvgRenderer, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSvgRenderer, time: i64, timerType: i32) i32 {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSvgRenderer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSvgRenderer, signal: [:0]const u8) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSvgRenderer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSvgRenderer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSvgRenderer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSvgRenderer, param1: anytype) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QObject) callconv(.c) void) void {
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSvgRenderer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSvgRenderer_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSvgRenderer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSvgRenderer_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QEvent) callconv(.c) bool) void {
        qtc.QSvgRenderer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSvgRenderer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSvgRenderer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSvgRenderer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSvgRenderer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSvgRenderer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSvgRenderer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSvgRenderer_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSvgRenderer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSvgRenderer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QTimerEvent) callconv(.c) void) void {
        qtc.QSvgRenderer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSvgRenderer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSvgRenderer_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSvgRenderer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSvgRenderer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QChildEvent) callconv(.c) void) void {
        qtc.QSvgRenderer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSvgRenderer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSvgRenderer_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSvgRenderer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSvgRenderer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QEvent) callconv(.c) void) void {
        qtc.QSvgRenderer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QMetaMethod) callconv(.c) void) void {
        qtc.QSvgRenderer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSvgRenderer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSvgRenderer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QMetaMethod) callconv(.c) void) void {
        qtc.QSvgRenderer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    pub fn sender(self: QSvgRenderer) QObject {
        return .{ .ptr = qtc.QSvgRenderer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSvgRenderer `
    ///
    pub fn superSender(self: QSvgRenderer) QObject {
        return .{ .ptr = qtc.QSvgRenderer_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSvgRenderer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSvgRenderer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    pub fn senderSignalIndex(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    pub fn superSenderSignalIndex(self: QSvgRenderer) i32 {
        return qtc.QSvgRenderer_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSvgRenderer, callback: *const fn () callconv(.c) i32) void {
        qtc.QSvgRenderer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSvgRenderer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSvgRenderer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSvgRenderer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSvgRenderer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSvgRenderer, callback: *const fn (QSvgRenderer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSvgRenderer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSvgRenderer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSvgRenderer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSvgRenderer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSvgRenderer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSvgRenderer`
    ///
    /// ` callback: *const fn (self: QSvgRenderer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSvgRenderer, callback: *const fn (QSvgRenderer, QMetaMethod) callconv(.c) bool) void {
        qtc.QSvgRenderer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSvgRenderer `
    ///
    /// ` callback: *const fn (self: QSvgRenderer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSvgRenderer, callback: *const fn (QSvgRenderer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsvgrenderer.html#dtor.QSvgRenderer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSvgRenderer `
    ///
    pub fn delete(self: QSvgRenderer) void {
        qtc.QSvgRenderer_Delete(@ptrCast(self.ptr));
    }
};
