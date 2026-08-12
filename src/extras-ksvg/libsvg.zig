const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSvg__ImageSet = @import("libqt6").KSvg__ImageSet;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const svg_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ksvg-svg.html)
pub const KSvg__Svg = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSvg__Svg,

    pub const _is_KSvg__Svg = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSvg::Svg object in C++ memory
    ///
    pub fn new() KSvg__Svg {
        return .{ .ptr = qtc.KSvg__Svg_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSvg::Svg object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KSvg__Svg {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__Svg_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn metaObject(self: KSvg__Svg) QMetaObject {
        return .{ .ptr = qtc.KSvg__Svg_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KSvg__Svg, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSvg__Svg_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    pub fn superMetaObject(self: KSvg__Svg) QMetaObject {
        return .{ .ptr = qtc.KSvg__Svg_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KSvg__Svg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__Svg_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSvg__Svg_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KSvg__Svg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__Svg_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KSvg__Svg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__Svg_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KSvg__Svg, callback: *const fn (KSvg__Svg, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__Svg_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KSvg__Svg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__Svg_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__Svg.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` factor: f64 `
    ///
    pub fn setDevicePixelRatio(self: KSvg__Svg, factor: f64) void {
        qtc.KSvg__Svg_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn devicePixelRatio(self: KSvg__Svg) f64 {
        return qtc.KSvg__Svg_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn pixmap(self: KSvg__Svg) QPixmap {
        return .{ .ptr = qtc.KSvg__Svg_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `image` instead
    ///
    pub const Image = image;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _size: QSize `
    ///
    pub fn image(self: KSvg__Svg, _size: anytype) QImage {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.KSvg__Svg_Image(@ptrCast(self.ptr), @ptrCast(_size.ptr)) };
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` point: QPointF `
    ///
    pub fn paint(self: KSvg__Svg, painter: anytype, point: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.KSvg__Svg_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `paint2` instead
    ///
    pub const Paint2 = paint2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn paint2(self: KSvg__Svg, painter: anytype, x: i32, y: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `paint3` instead
    ///
    pub const Paint3 = paint3;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn paint3(self: KSvg__Svg, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.KSvg__Svg_Paint3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `paint4` instead
    ///
    pub const Paint4 = paint4;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn paint4(self: KSvg__Svg, painter: anytype, x: i32, y: i32, width: i32, height: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn size(self: KSvg__Svg) QSizeF {
        return .{ .ptr = qtc.KSvg__Svg_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn resize(self: KSvg__Svg, width: f64, height: f64) void {
        qtc.KSvg__Svg_Resize(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn resize2(self: KSvg__Svg, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.KSvg__Svg_Resize2(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `resize3` instead
    ///
    pub const Resize3 = resize3;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn resize3(self: KSvg__Svg) void {
        qtc.KSvg__Svg_Resize3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elementSize` instead
    ///
    pub const ElementSize = elementSize;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementSize(self: KSvg__Svg, elementId: []const u8) QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementSize(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `elementSize2` instead
    ///
    pub const ElementSize2 = elementSize2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementSize2(self: KSvg__Svg, elementId: []const u8) QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementSize2(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `elementRect` instead
    ///
    pub const ElementRect = elementRect;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementRect(self: KSvg__Svg, elementId: []const u8) QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementRect(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `elementRect2` instead
    ///
    pub const ElementRect2 = elementRect2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementRect2(self: KSvg__Svg, elementId: []const u8) QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementRect2(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `hasElement` instead
    ///
    pub const HasElement = hasElement;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn hasElement(self: KSvg__Svg, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement(@ptrCast(self.ptr), elementId_str);
    }

    /// ### DEPRECATED: Use `hasElement2` instead
    ///
    pub const HasElement2 = hasElement2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn hasElement2(self: KSvg__Svg, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement2(@ptrCast(self.ptr), elementId_str);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn isValid(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContainsMultipleImages` instead
    ///
    pub const SetContainsMultipleImages = setContainsMultipleImages;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` multiple: bool `
    ///
    pub fn setContainsMultipleImages(self: KSvg__Svg, multiple: bool) void {
        qtc.KSvg__Svg_SetContainsMultipleImages(@ptrCast(self.ptr), multiple);
    }

    /// ### DEPRECATED: Use `containsMultipleImages` instead
    ///
    pub const ContainsMultipleImages = containsMultipleImages;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn containsMultipleImages(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_ContainsMultipleImages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImagePath` instead
    ///
    pub const SetImagePath = setImagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` svgFilePath: []const u8 `
    ///
    pub fn setImagePath(self: KSvg__Svg, svgFilePath: []const u8) void {
        const svgFilePath_str = qtc.libqt_string{
            .len = svgFilePath.len,
            .data = svgFilePath.ptr,
        };
        qtc.KSvg__Svg_SetImagePath(@ptrCast(self.ptr), svgFilePath_str);
    }

    /// ### DEPRECATED: Use `onSetImagePath` instead
    ///
    pub const OnSetImagePath = onSetImagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImagePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, svgFilePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetImagePath(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__Svg_OnSetImagePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetImagePath` instead
    ///
    pub const SuperSetImagePath = superSetImagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImagePath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` svgFilePath: []const u8 `
    ///
    pub fn superSetImagePath(self: KSvg__Svg, svgFilePath: []const u8) void {
        const svgFilePath_str = qtc.libqt_string{
            .len = svgFilePath.len,
            .data = svgFilePath.ptr,
        };
        qtc.KSvg__Svg_SuperSetImagePath(@ptrCast(self.ptr), svgFilePath_str);
    }

    /// ### DEPRECATED: Use `imagePath` instead
    ///
    pub const ImagePath = imagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn imagePath(self: KSvg__Svg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__Svg_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__Svg.imagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUsingRenderingCache` instead
    ///
    pub const SetUsingRenderingCache = setUsingRenderingCache;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` useCache: bool `
    ///
    pub fn setUsingRenderingCache(self: KSvg__Svg, useCache: bool) void {
        qtc.KSvg__Svg_SetUsingRenderingCache(@ptrCast(self.ptr), useCache);
    }

    /// ### DEPRECATED: Use `isUsingRenderingCache` instead
    ///
    pub const IsUsingRenderingCache = isUsingRenderingCache;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn isUsingRenderingCache(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_IsUsingRenderingCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromCurrentImageSet` instead
    ///
    pub const FromCurrentImageSet = fromCurrentImageSet;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn fromCurrentImageSet(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_FromCurrentImageSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImageSet` instead
    ///
    pub const SetImageSet = setImageSet;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` theme: KSvg__ImageSet `
    ///
    pub fn setImageSet(self: KSvg__Svg, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_SetImageSet(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `imageSet` instead
    ///
    pub const ImageSet = imageSet;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn imageSet(self: KSvg__Svg) KSvg__ImageSet {
        return .{ .ptr = qtc.KSvg__Svg_ImageSet(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _status: svg_enums.Status `
    ///
    pub fn setStatus(self: KSvg__Svg, _status: i32) void {
        qtc.KSvg__Svg_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ## Returns:
    ///
    /// ` svg_enums.Status `
    ///
    pub fn status(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorSet` instead
    ///
    pub const SetColorSet = setColorSet;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _colorSet: svg_enums.ColorSet `
    ///
    pub fn setColorSet(self: KSvg__Svg, _colorSet: i32) void {
        qtc.KSvg__Svg_SetColorSet(@ptrCast(self.ptr), @bitCast(_colorSet));
    }

    /// ### DEPRECATED: Use `colorSet` instead
    ///
    pub const ColorSet = colorSet;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ## Returns:
    ///
    /// ` svg_enums.ColorSet `
    ///
    pub fn colorSet(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_ColorSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    pub fn color(self: KSvg__Svg, colorName: i32) QColor {
        return .{ .ptr = qtc.KSvg__Svg_Color(@ptrCast(self.ptr), @bitCast(colorName)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: KSvg__Svg, colorName: i32, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.KSvg__Svg_SetColor(@ptrCast(self.ptr), @bitCast(colorName), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `clearColorOverrides` instead
    ///
    pub const ClearColorOverrides = clearColorOverrides;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn clearColorOverrides(self: KSvg__Svg) void {
        qtc.KSvg__Svg_ClearColorOverrides(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `repaintNeeded` instead
    ///
    pub const RepaintNeeded = repaintNeeded;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn repaintNeeded(self: KSvg__Svg) void {
        qtc.KSvg__Svg_RepaintNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRepaintNeeded` instead
    ///
    pub const OnRepaintNeeded = onRepaintNeeded;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn onRepaintNeeded(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_RepaintNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeChanged` instead
    ///
    pub const SizeChanged = sizeChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn sizeChanged(self: KSvg__Svg) void {
        qtc.KSvg__Svg_SizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSizeChanged` instead
    ///
    pub const OnSizeChanged = onSizeChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn onSizeChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_SizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imagePathChanged` instead
    ///
    pub const ImagePathChanged = imagePathChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn imagePathChanged(self: KSvg__Svg) void {
        qtc.KSvg__Svg_ImagePathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImagePathChanged` instead
    ///
    pub const OnImagePathChanged = onImagePathChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn onImagePathChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImagePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorHintChanged` instead
    ///
    pub const ColorHintChanged = colorHintChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn colorHintChanged(self: KSvg__Svg) void {
        qtc.KSvg__Svg_ColorHintChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColorHintChanged` instead
    ///
    pub const OnColorHintChanged = onColorHintChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn onColorHintChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fromCurrentImageSetChanged` instead
    ///
    pub const FromCurrentImageSetChanged = fromCurrentImageSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _fromCurrentImageSet: bool `
    ///
    pub fn fromCurrentImageSetChanged(self: KSvg__Svg, _fromCurrentImageSet: bool) void {
        qtc.KSvg__Svg_FromCurrentImageSetChanged(@ptrCast(self.ptr), _fromCurrentImageSet);
    }

    /// ### DEPRECATED: Use `onFromCurrentImageSetChanged` instead
    ///
    pub const OnFromCurrentImageSetChanged = onFromCurrentImageSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, fromCurrentImageSet: bool) callconv(.c) void `
    ///
    pub fn onFromCurrentImageSetChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, bool) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_FromCurrentImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `statusChanged` instead
    ///
    pub const StatusChanged = statusChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _status: svg_enums.Status `
    ///
    pub fn statusChanged(self: KSvg__Svg, _status: i32) void {
        qtc.KSvg__Svg_StatusChanged(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `onStatusChanged` instead
    ///
    pub const OnStatusChanged = onStatusChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, status: svg_enums.Status) callconv(.c) void `
    ///
    pub fn onStatusChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorSetChanged` instead
    ///
    pub const ColorSetChanged = colorSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _colorSet: svg_enums.ColorSet `
    ///
    pub fn colorSetChanged(self: KSvg__Svg, _colorSet: i32) void {
        qtc.KSvg__Svg_ColorSetChanged(@ptrCast(self.ptr), @bitCast(_colorSet));
    }

    /// ### DEPRECATED: Use `onColorSetChanged` instead
    ///
    pub const OnColorSetChanged = onColorSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, colorSet: svg_enums.ColorSet) callconv(.c) void `
    ///
    pub fn onColorSetChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageSetChanged` instead
    ///
    pub const ImageSetChanged = imageSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _imageSet: KSvg__ImageSet `
    ///
    pub fn imageSetChanged(self: KSvg__Svg, _imageSet: anytype) void {
        comptime _ = @TypeOf(_imageSet)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_ImageSetChanged(@ptrCast(self.ptr), @ptrCast(_imageSet.ptr));
    }

    /// ### DEPRECATED: Use `onImageSetChanged` instead
    ///
    pub const OnImageSetChanged = onImageSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, imageSet: KSvg__ImageSet) callconv(.c) void `
    ///
    pub fn onImageSetChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, KSvg__ImageSet) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__Svg.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__Svg.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pixmap1` instead
    ///
    pub const Pixmap1 = pixmap1;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn pixmap1(self: KSvg__Svg, elementID: []const u8) QPixmap {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_Pixmap1(@ptrCast(self.ptr), elementID_str) };
    }

    /// ### DEPRECATED: Use `image2` instead
    ///
    pub const Image2 = image2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` _size: QSize `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn image2(self: KSvg__Svg, _size: anytype, elementID: []const u8) QImage {
        comptime _ = @TypeOf(_size)._is_QSize;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_Image2(@ptrCast(self.ptr), @ptrCast(_size.ptr), elementID_str) };
    }

    /// ### DEPRECATED: Use `paint32` instead
    ///
    pub const Paint32 = paint32;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` point: QPointF `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn paint32(self: KSvg__Svg, painter: anytype, point: anytype, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(point)._is_QPointF;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(point.ptr), elementID_str);
    }

    /// ### DEPRECATED: Use `paint42` instead
    ///
    pub const Paint42 = paint42;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn paint42(self: KSvg__Svg, painter: anytype, x: i32, y: i32, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), elementID_str);
    }

    /// ### DEPRECATED: Use `paint33` instead
    ///
    pub const Paint33 = paint33;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn paint33(self: KSvg__Svg, painter: anytype, rect: anytype, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint33(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), elementID_str);
    }

    /// ### DEPRECATED: Use `paint6` instead
    ///
    pub const Paint6 = paint6;

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn paint6(self: KSvg__Svg, painter: anytype, x: i32, y: i32, width: i32, height: i32, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint6(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), elementID_str);
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KSvg__Svg, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QObject, QEvent) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KSvg__Svg, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KSvg__Svg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__Svg.objectName: Memory allocation failed");
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
    /// ` self: KSvg__Svg `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KSvg__Svg, name: []const u8) void {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn isWidgetType(self: KSvg__Svg) bool {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn isWindowType(self: KSvg__Svg) bool {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn isQuickItemType(self: KSvg__Svg) bool {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn signalsBlocked(self: KSvg__Svg) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KSvg__Svg, b: bool) bool {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn thread(self: KSvg__Svg) QThread {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KSvg__Svg, _thread: anytype) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KSvg__Svg, interval: i32) i32 {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KSvg__Svg, time: i64) i32 {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KSvg__Svg, id: i32) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KSvg__Svg, id: i32) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KSvg__Svg, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KSvg__Svg.children: Memory allocation failed");
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KSvg__Svg, _parent: anytype) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KSvg__Svg, filterObj: anytype) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KSvg__Svg, obj: anytype) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KSvg__Svg, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn disconnect3(self: KSvg__Svg) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KSvg__Svg, receiver: anytype) bool {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn dumpObjectTree(self: KSvg__Svg) void {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn dumpObjectInfo(self: KSvg__Svg) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KSvg__Svg, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KSvg__Svg, name: [:0]const u8) QVariant {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KSvg__Svg, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KSvg__Svg.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSvg__Svg.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSvg__Svg `
    ///
    pub fn bindingStorage(self: KSvg__Svg) QBindingStorage {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn bindingStorage2(self: KSvg__Svg) QBindingStorage {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn destroyed(self: KSvg__Svg) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn parent(self: KSvg__Svg) QObject {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KSvg__Svg, classname: [:0]const u8) bool {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn deleteLater(self: KSvg__Svg) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KSvg__Svg, interval: i32, timerType: i32) i32 {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KSvg__Svg, time: i64, timerType: i32) i32 {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KSvg__Svg, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KSvg__Svg, signal: [:0]const u8) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KSvg__Svg, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KSvg__Svg, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KSvg__Svg, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KSvg__Svg, param1: anytype) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QObject) callconv(.c) void) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KSvg__Svg, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__Svg_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KSvg__Svg, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__Svg_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QEvent) callconv(.c) bool) void {
        qtc.KSvg__Svg_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KSvg__Svg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSvg__Svg_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KSvg__Svg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSvg__Svg_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QTimerEvent) callconv(.c) void) void {
        qtc.KSvg__Svg_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KSvg__Svg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSvg__Svg_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KSvg__Svg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSvg__Svg_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QChildEvent) callconv(.c) void) void {
        qtc.KSvg__Svg_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KSvg__Svg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSvg__Svg_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KSvg__Svg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSvg__Svg_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QEvent) callconv(.c) void) void {
        qtc.KSvg__Svg_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__Svg_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__Svg_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    pub fn sender(self: KSvg__Svg) QObject {
        return .{ .ptr = qtc.KSvg__Svg_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__Svg `
    ///
    pub fn superSender(self: KSvg__Svg) QObject {
        return .{ .ptr = qtc.KSvg__Svg_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KSvg__Svg, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSvg__Svg_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    pub fn senderSignalIndex(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    pub fn superSenderSignalIndex(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KSvg__Svg, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__Svg_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KSvg__Svg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__Svg_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KSvg__Svg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__Svg_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__Svg_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KSvg__Svg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__Svg_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KSvg__Svg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__Svg_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg`
    ///
    /// ` callback: *const fn (self: KSvg__Svg, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QMetaMethod) callconv(.c) bool) void {
        qtc.KSvg__Svg_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn delete(self: KSvg__Svg) void {
        qtc.KSvg__Svg_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#public-types)
pub const enums = struct {
    pub const Status = enum(i32) {
        pub const Normal: i32 = 0;
        pub const Selected: i32 = 1;
        pub const Inactive: i32 = 2;
    };

    pub const ColorSet = enum(i32) {
        pub const View: i32 = 0;
        pub const Window: i32 = 1;
        pub const Button: i32 = 2;
        pub const Selection: i32 = 3;
        pub const Tooltip: i32 = 4;
        pub const Complementary: i32 = 5;
        pub const Header: i32 = 6;
    };

    pub const StyleSheetColor = enum(i32) {
        pub const Text: i32 = 0;
        pub const Background: i32 = 1;
        pub const Highlight: i32 = 2;
        pub const HighlightedText: i32 = 3;
        pub const PositiveText: i32 = 4;
        pub const NeutralText: i32 = 5;
        pub const NegativeText: i32 = 6;
        pub const ButtonText: i32 = 7;
        pub const ButtonBackground: i32 = 8;
        pub const ButtonHover: i32 = 9;
        pub const ButtonFocus: i32 = 10;
        pub const ButtonHighlightedText: i32 = 11;
        pub const ButtonPositiveText: i32 = 12;
        pub const ButtonNeutralText: i32 = 13;
        pub const ButtonNegativeText: i32 = 14;
        pub const ViewText: i32 = 15;
        pub const ViewBackground: i32 = 16;
        pub const ViewHover: i32 = 17;
        pub const ViewFocus: i32 = 18;
        pub const ViewHighlightedText: i32 = 19;
        pub const ViewPositiveText: i32 = 20;
        pub const ViewNeutralText: i32 = 21;
        pub const ViewNegativeText: i32 = 22;
        pub const TooltipText: i32 = 23;
        pub const TooltipBackground: i32 = 24;
        pub const TooltipHover: i32 = 25;
        pub const TooltipFocus: i32 = 26;
        pub const TooltipHighlightedText: i32 = 27;
        pub const TooltipPositiveText: i32 = 28;
        pub const TooltipNeutralText: i32 = 29;
        pub const TooltipNegativeText: i32 = 30;
        pub const ComplementaryText: i32 = 31;
        pub const ComplementaryBackground: i32 = 32;
        pub const ComplementaryHover: i32 = 33;
        pub const ComplementaryFocus: i32 = 34;
        pub const ComplementaryHighlightedText: i32 = 35;
        pub const ComplementaryPositiveText: i32 = 36;
        pub const ComplementaryNeutralText: i32 = 37;
        pub const ComplementaryNegativeText: i32 = 38;
        pub const HeaderText: i32 = 39;
        pub const HeaderBackground: i32 = 40;
        pub const HeaderHover: i32 = 41;
        pub const HeaderFocus: i32 = 42;
        pub const HeaderHighlightedText: i32 = 43;
        pub const HeaderPositiveText: i32 = 44;
        pub const HeaderNeutralText: i32 = 45;
        pub const HeaderNegativeText: i32 = 46;
    };
};
