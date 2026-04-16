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

    /// New constructs a new KSvg::Svg object.
    ///
    pub fn New() KSvg__Svg {
        return .{ .ptr = qtc.KSvg__Svg_new() };
    }

    /// New2 constructs a new KSvg::Svg object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KSvg__Svg {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__Svg_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn MetaObject(self: KSvg__Svg) QMetaObject {
        return .{ .ptr = qtc.KSvg__Svg_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KSvg__Svg, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSvg__Svg_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__Svg `
    ///
    pub fn SuperMetaObject(self: KSvg__Svg) QMetaObject {
        return .{ .ptr = qtc.KSvg__Svg_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSvg__Svg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__Svg_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSvg__Svg_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSvg__Svg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__Svg_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KSvg__Svg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__Svg_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSvg__Svg, callback: *const fn (KSvg__Svg, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__Svg_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KSvg__Svg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__Svg_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__svg.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` factor: f64 `
    ///
    pub fn SetDevicePixelRatio(self: KSvg__Svg, factor: f64) void {
        qtc.KSvg__Svg_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn DevicePixelRatio(self: KSvg__Svg) f64 {
        return qtc.KSvg__Svg_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn Pixmap(self: KSvg__Svg) QPixmap {
        return .{ .ptr = qtc.KSvg__Svg_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` size: QSize `
    ///
    pub fn Image(self: KSvg__Svg, size: anytype) QImage {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KSvg__Svg_Image(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

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
    pub fn Paint(self: KSvg__Svg, painter: anytype, point: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.KSvg__Svg_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(point.ptr));
    }

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
    pub fn Paint2(self: KSvg__Svg, painter: anytype, x: i32, y: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y));
    }

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
    pub fn Paint3(self: KSvg__Svg, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.KSvg__Svg_Paint3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

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
    pub fn Paint4(self: KSvg__Svg, painter: anytype, x: i32, y: i32, width: i32, height: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn Size(self: KSvg__Svg) QSizeF {
        return .{ .ptr = qtc.KSvg__Svg_Size(@ptrCast(self.ptr)) };
    }

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
    pub fn Resize(self: KSvg__Svg, width: f64, height: f64) void {
        qtc.KSvg__Svg_Resize(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` size: QSizeF `
    ///
    pub fn Resize2(self: KSvg__Svg, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.KSvg__Svg_Resize2(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn Resize3(self: KSvg__Svg) void {
        qtc.KSvg__Svg_Resize3(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn ElementSize(self: KSvg__Svg, elementId: []const u8) QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementSize(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn ElementRect(self: KSvg__Svg, elementId: []const u8) QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementRect(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn HasElement(self: KSvg__Svg, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement(@ptrCast(self.ptr), elementId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn IsValid(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` multiple: bool `
    ///
    pub fn SetContainsMultipleImages(self: KSvg__Svg, multiple: bool) void {
        qtc.KSvg__Svg_SetContainsMultipleImages(@ptrCast(self.ptr), multiple);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn ContainsMultipleImages(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_ContainsMultipleImages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` svgFilePath: []const u8 `
    ///
    pub fn SetImagePath(self: KSvg__Svg, svgFilePath: []const u8) void {
        const svgFilePath_str = qtc.libqt_string{
            .len = svgFilePath.len,
            .data = svgFilePath.ptr,
        };
        qtc.KSvg__Svg_SetImagePath(@ptrCast(self.ptr), svgFilePath_str);
    }

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
    pub fn OnSetImagePath(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__Svg_OnSetImagePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetImagePath` instead
    ///
    pub const QBaseSetImagePath = SuperSetImagePath;

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
    pub fn SuperSetImagePath(self: KSvg__Svg, svgFilePath: []const u8) void {
        const svgFilePath_str = qtc.libqt_string{
            .len = svgFilePath.len,
            .data = svgFilePath.ptr,
        };
        qtc.KSvg__Svg_SuperSetImagePath(@ptrCast(self.ptr), svgFilePath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImagePath(self: KSvg__Svg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__Svg_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__svg.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` useCache: bool `
    ///
    pub fn SetUsingRenderingCache(self: KSvg__Svg, useCache: bool) void {
        qtc.KSvg__Svg_SetUsingRenderingCache(@ptrCast(self.ptr), useCache);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn IsUsingRenderingCache(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_IsUsingRenderingCache(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn FromCurrentImageSet(self: KSvg__Svg) bool {
        return qtc.KSvg__Svg_FromCurrentImageSet(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` theme: KSvg__ImageSet `
    ///
    pub fn SetImageSet(self: KSvg__Svg, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_SetImageSet(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn ImageSet(self: KSvg__Svg) KSvg__ImageSet {
        return .{ .ptr = qtc.KSvg__Svg_ImageSet(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` status: svg_enums.Status `
    ///
    pub fn SetStatus(self: KSvg__Svg, status: i32) void {
        qtc.KSvg__Svg_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

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
    pub fn Status(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` colorSet: svg_enums.ColorSet `
    ///
    pub fn SetColorSet(self: KSvg__Svg, colorSet: i32) void {
        qtc.KSvg__Svg_SetColorSet(@ptrCast(self.ptr), @bitCast(colorSet));
    }

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
    pub fn ColorSet(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_ColorSet(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    pub fn Color(self: KSvg__Svg, colorName: i32) QColor {
        return .{ .ptr = qtc.KSvg__Svg_Color(@ptrCast(self.ptr), @bitCast(colorName)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: KSvg__Svg, colorName: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KSvg__Svg_SetColor(@ptrCast(self.ptr), @bitCast(colorName), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn ClearColorOverrides(self: KSvg__Svg) void {
        qtc.KSvg__Svg_ClearColorOverrides(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn RepaintNeeded(self: KSvg__Svg) void {
        qtc.KSvg__Svg_RepaintNeeded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn OnRepaintNeeded(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_RepaintNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn SizeChanged(self: KSvg__Svg) void {
        qtc.KSvg__Svg_SizeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn OnSizeChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_SizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn ImagePathChanged(self: KSvg__Svg) void {
        qtc.KSvg__Svg_ImagePathChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn OnImagePathChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImagePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn ColorHintChanged(self: KSvg__Svg) void {
        qtc.KSvg__Svg_ColorHintChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg) callconv(.c) void `
    ///
    pub fn OnColorHintChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` fromCurrentImageSet: bool `
    ///
    pub fn FromCurrentImageSetChanged(self: KSvg__Svg, fromCurrentImageSet: bool) void {
        qtc.KSvg__Svg_FromCurrentImageSetChanged(@ptrCast(self.ptr), fromCurrentImageSet);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, fromCurrentImageSet: bool) callconv(.c) void `
    ///
    pub fn OnFromCurrentImageSetChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, bool) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_FromCurrentImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` status: svg_enums.Status `
    ///
    pub fn StatusChanged(self: KSvg__Svg, status: i32) void {
        qtc.KSvg__Svg_StatusChanged(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, status: svg_enums.Status) callconv(.c) void `
    ///
    pub fn OnStatusChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` colorSet: svg_enums.ColorSet `
    ///
    pub fn ColorSetChanged(self: KSvg__Svg, colorSet: i32) void {
        qtc.KSvg__Svg_ColorSetChanged(@ptrCast(self.ptr), @bitCast(colorSet));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, colorSet: svg_enums.ColorSet) callconv(.c) void `
    ///
    pub fn OnColorSetChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` imageSet: KSvg__ImageSet `
    ///
    pub fn ImageSetChanged(self: KSvg__Svg, imageSet: anytype) void {
        comptime _ = @TypeOf(imageSet)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_ImageSetChanged(@ptrCast(self.ptr), @ptrCast(imageSet.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` callback: *const fn (self: KSvg__Svg, imageSet: KSvg__ImageSet) callconv(.c) void `
    ///
    pub fn OnImageSetChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, KSvg__ImageSet) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__svg.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__svg.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Pixmap1(self: KSvg__Svg, elementID: []const u8) QPixmap {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_Pixmap1(@ptrCast(self.ptr), elementID_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` size: QSize `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Image2(self: KSvg__Svg, size: anytype, elementID: []const u8) QImage {
        comptime _ = @TypeOf(size)._is_QSize;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_Image2(@ptrCast(self.ptr), @ptrCast(size.ptr), elementID_str) };
    }

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
    pub fn Paint32(self: KSvg__Svg, painter: anytype, point: anytype, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(point)._is_QPointF;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(point.ptr), elementID_str);
    }

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
    pub fn Paint42(self: KSvg__Svg, painter: anytype, x: i32, y: i32, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), elementID_str);
    }

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
    pub fn Paint33(self: KSvg__Svg, painter: anytype, rect: anytype, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint33(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), elementID_str);
    }

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
    pub fn Paint6(self: KSvg__Svg, painter: anytype, x: i32, y: i32, width: i32, height: i32, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint6(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), elementID_str);
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KSvg__Svg, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QObject, QEvent) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KSvg__Svg, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn ObjectName(self: KSvg__Svg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__svg.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KSvg__Svg, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn IsWidgetType(self: KSvg__Svg) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn IsWindowType(self: KSvg__Svg) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn IsQuickItemType(self: KSvg__Svg) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn SignalsBlocked(self: KSvg__Svg) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KSvg__Svg, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn Thread(self: KSvg__Svg) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSvg__Svg, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KSvg__Svg, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KSvg__Svg, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KSvg__Svg, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KSvg__Svg, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KSvg__Svg, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ksvg__svg.Children: Memory allocation failed");
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
    /// ` self: KSvg__Svg `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KSvg__Svg, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KSvg__Svg, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KSvg__Svg, obj: anytype) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSvg__Svg, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn Disconnect3(self: KSvg__Svg) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KSvg__Svg, receiver: anytype) bool {
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
    /// ` self: KSvg__Svg `
    ///
    pub fn DumpObjectTree(self: KSvg__Svg) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn DumpObjectInfo(self: KSvg__Svg) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KSvg__Svg, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSvg__Svg, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KSvg__Svg, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksvg__svg.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksvg__svg.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSvg__Svg `
    ///
    pub fn BindingStorage(self: KSvg__Svg) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn BindingStorage2(self: KSvg__Svg) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn Destroyed(self: KSvg__Svg) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KSvg__Svg, callback: *const fn (KSvg__Svg) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn Parent(self: KSvg__Svg) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KSvg__Svg, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn DeleteLater(self: KSvg__Svg) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KSvg__Svg, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KSvg__Svg, time: i64, timerType: i32) i32 {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSvg__Svg, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSvg__Svg, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KSvg__Svg, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSvg__Svg, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSvg__Svg, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSvg__Svg, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QObject) callconv(.c) void) void {
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
    /// ` self: KSvg__Svg `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KSvg__Svg, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__Svg_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KSvg__Svg, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__Svg_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QEvent) callconv(.c) bool) void {
        qtc.KSvg__Svg_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSvg__Svg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSvg__Svg_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSvg__Svg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSvg__Svg_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QTimerEvent) callconv(.c) void) void {
        qtc.KSvg__Svg_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSvg__Svg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSvg__Svg_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSvg__Svg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSvg__Svg_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QChildEvent) callconv(.c) void) void {
        qtc.KSvg__Svg_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSvg__Svg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSvg__Svg_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSvg__Svg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSvg__Svg_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QEvent) callconv(.c) void) void {
        qtc.KSvg__Svg_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__Svg_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSvg__Svg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__Svg_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__Svg_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KSvg__Svg) QObject {
        return .{ .ptr = qtc.KSvg__Svg_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__Svg `
    ///
    pub fn SuperSender(self: KSvg__Svg) QObject {
        return .{ .ptr = qtc.KSvg__Svg_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KSvg__Svg, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSvg__Svg_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    pub fn SuperSenderSignalIndex(self: KSvg__Svg) i32 {
        return qtc.KSvg__Svg_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KSvg__Svg, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__Svg_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KSvg__Svg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__Svg_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSvg__Svg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__Svg_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__Svg_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KSvg__Svg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__Svg_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__Svg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSvg__Svg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__Svg_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KSvg__Svg, callback: *const fn (KSvg__Svg, QMetaMethod) callconv(.c) bool) void {
        qtc.KSvg__Svg_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KSvg__Svg, callback: *const fn (KSvg__Svg, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSvg__Svg `
    ///
    pub fn Delete(self: KSvg__Svg) void {
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
