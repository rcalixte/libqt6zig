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
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const framesvg_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const svg_enums = @import("libsvg.zig").enums;

/// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html)
pub const KSvg__FrameSvg = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSvg__FrameSvg,

    pub const _is_KSvg__FrameSvg = {};
    pub const _is_KSvg__Svg = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSvg::FrameSvg object in C++ memory
    ///
    pub fn new() KSvg__FrameSvg {
        return .{ .ptr = qtc.KSvg__FrameSvg_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSvg::FrameSvg object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KSvg__FrameSvg {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__FrameSvg_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn metaObject(self: KSvg__FrameSvg) QMetaObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KSvg__FrameSvg, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSvg__FrameSvg_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn superMetaObject(self: KSvg__FrameSvg) QMetaObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KSvg__FrameSvg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__FrameSvg_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSvg__FrameSvg_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KSvg__FrameSvg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__FrameSvg_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KSvg__FrameSvg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KSvg__FrameSvg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__FrameSvg.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setImagePath` instead
    ///
    pub const SetImagePath = setImagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setImagePath(self: KSvg__FrameSvg, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSvg__FrameSvg_SetImagePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `onSetImagePath` instead
    ///
    pub const OnSetImagePath = onSetImagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetImagePath(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnSetImagePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetImagePath` instead
    ///
    pub const SuperSetImagePath = superSetImagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` path: []const u8 `
    ///
    pub fn superSetImagePath(self: KSvg__FrameSvg, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSvg__FrameSvg_SuperSetImagePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `setEnabledBorders` instead
    ///
    pub const SetEnabledBorders = setEnabledBorders;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setEnabledBorders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` borders: flag of framesvg_enums.EnabledBorder `
    ///
    pub fn setEnabledBorders(self: KSvg__FrameSvg, borders: i32) void {
        qtc.KSvg__FrameSvg_SetEnabledBorders(@ptrCast(self.ptr), @bitCast(borders));
    }

    /// ### DEPRECATED: Use `enabledBorders` instead
    ///
    pub const EnabledBorders = enabledBorders;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#enabledBorders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ## Returns:
    ///
    /// ` flag of framesvg_enums.EnabledBorder `
    ///
    pub fn enabledBorders(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_EnabledBorders(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resizeFrame` instead
    ///
    pub const ResizeFrame = resizeFrame;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#resizeFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn resizeFrame(self: KSvg__FrameSvg, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.KSvg__FrameSvg_ResizeFrame(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `frameSize` instead
    ///
    pub const FrameSize = frameSize;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn frameSize(self: KSvg__FrameSvg) QSizeF {
        return .{ .ptr = qtc.KSvg__FrameSvg_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `marginSize` instead
    ///
    pub const MarginSize = marginSize;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#marginSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` edge: framesvg_enums.MarginEdge `
    ///
    pub fn marginSize(self: KSvg__FrameSvg, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_MarginSize(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### DEPRECATED: Use `getMargins` instead
    ///
    pub const GetMargins = getMargins;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getMargins(self: KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `fixedMarginSize` instead
    ///
    pub const FixedMarginSize = fixedMarginSize;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#fixedMarginSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` edge: framesvg_enums.MarginEdge `
    ///
    pub fn fixedMarginSize(self: KSvg__FrameSvg, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_FixedMarginSize(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### DEPRECATED: Use `getFixedMargins` instead
    ///
    pub const GetFixedMargins = getFixedMargins;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getFixedMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getFixedMargins(self: KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetFixedMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `insetSize` instead
    ///
    pub const InsetSize = insetSize;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#insetSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` edge: framesvg_enums.MarginEdge `
    ///
    pub fn insetSize(self: KSvg__FrameSvg, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_InsetSize(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### DEPRECATED: Use `getInset` instead
    ///
    pub const GetInset = getInset;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getInset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getInset(self: KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetInset(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn contentsRect(self: KSvg__FrameSvg) QRectF {
        return .{ .ptr = qtc.KSvg__FrameSvg_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setElementPrefix` instead
    ///
    pub const SetElementPrefix = setElementPrefix;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` location: framesvg_enums.LocationPrefix `
    ///
    pub fn setElementPrefix(self: KSvg__FrameSvg, location: i32) void {
        qtc.KSvg__FrameSvg_SetElementPrefix(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### DEPRECATED: Use `setElementPrefix2` instead
    ///
    pub const SetElementPrefix2 = setElementPrefix2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _prefix: []const u8 `
    ///
    pub fn setElementPrefix2(self: KSvg__FrameSvg, _prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = _prefix.len,
            .data = _prefix.ptr,
        };
        qtc.KSvg__FrameSvg_SetElementPrefix2(@ptrCast(self.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `hasElementPrefix` instead
    ///
    pub const HasElementPrefix = hasElementPrefix;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _prefix: []const u8 `
    ///
    pub fn hasElementPrefix(self: KSvg__FrameSvg, _prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = _prefix.len,
            .data = _prefix.ptr,
        };
        return qtc.KSvg__FrameSvg_HasElementPrefix(@ptrCast(self.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `hasElementPrefix2` instead
    ///
    pub const HasElementPrefix2 = hasElementPrefix2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` location: framesvg_enums.LocationPrefix `
    ///
    pub fn hasElementPrefix2(self: KSvg__FrameSvg, location: i32) bool {
        return qtc.KSvg__FrameSvg_HasElementPrefix2(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prefix(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__FrameSvg_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__FrameSvg.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn mask(self: KSvg__FrameSvg) QRegion {
        return .{ .ptr = qtc.KSvg__FrameSvg_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `alphaMask` instead
    ///
    pub const AlphaMask = alphaMask;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#alphaMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn alphaMask(self: KSvg__FrameSvg) QPixmap {
        return .{ .ptr = qtc.KSvg__FrameSvg_AlphaMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCacheAllRenderedFrames` instead
    ///
    pub const SetCacheAllRenderedFrames = setCacheAllRenderedFrames;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setCacheAllRenderedFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` cache: bool `
    ///
    pub fn setCacheAllRenderedFrames(self: KSvg__FrameSvg, cache: bool) void {
        qtc.KSvg__FrameSvg_SetCacheAllRenderedFrames(@ptrCast(self.ptr), cache);
    }

    /// ### DEPRECATED: Use `cacheAllRenderedFrames` instead
    ///
    pub const CacheAllRenderedFrames = cacheAllRenderedFrames;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#cacheAllRenderedFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn cacheAllRenderedFrames(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__FrameSvg_CacheAllRenderedFrames(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearCache` instead
    ///
    pub const ClearCache = clearCache;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#clearCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn clearCache(self: KSvg__FrameSvg) void {
        qtc.KSvg__FrameSvg_ClearCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `framePixmap` instead
    ///
    pub const FramePixmap = framePixmap;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#framePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn framePixmap(self: KSvg__FrameSvg) QPixmap {
        return .{ .ptr = qtc.KSvg__FrameSvg_FramePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `paintFrame` instead
    ///
    pub const PaintFrame = paintFrame;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    pub fn paintFrame(self: KSvg__FrameSvg, painter: anytype, target: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        qtc.KSvg__FrameSvg_PaintFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `paintFrame2` instead
    ///
    pub const PaintFrame2 = paintFrame2;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    pub fn paintFrame2(self: KSvg__FrameSvg, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__FrameSvg_PaintFrame2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `actualPrefix` instead
    ///
    pub const ActualPrefix = actualPrefix;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#actualPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actualPrefix(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__FrameSvg_ActualPrefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__FrameSvg.actualPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isRepaintBlocked` instead
    ///
    pub const IsRepaintBlocked = isRepaintBlocked;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#isRepaintBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn isRepaintBlocked(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__FrameSvg_IsRepaintBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRepaintBlocked` instead
    ///
    pub const SetRepaintBlocked = setRepaintBlocked;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setRepaintBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` blocked: bool `
    ///
    pub fn setRepaintBlocked(self: KSvg__FrameSvg, blocked: bool) void {
        qtc.KSvg__FrameSvg_SetRepaintBlocked(@ptrCast(self.ptr), blocked);
    }

    /// ### DEPRECATED: Use `minimumDrawingHeight` instead
    ///
    pub const MinimumDrawingHeight = minimumDrawingHeight;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#minimumDrawingHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn minimumDrawingHeight(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_MinimumDrawingHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumDrawingWidth` instead
    ///
    pub const MinimumDrawingWidth = minimumDrawingWidth;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#minimumDrawingWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn minimumDrawingWidth(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_MinimumDrawingWidth(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__FrameSvg.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__FrameSvg.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `paintFrame3` instead
    ///
    pub const PaintFrame3 = paintFrame3;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRectF `
    ///
    pub fn paintFrame3(self: KSvg__FrameSvg, painter: anytype, target: anytype, source: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRectF;
        qtc.KSvg__FrameSvg_PaintFrame3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `paintFrame22` instead
    ///
    pub const PaintFrame22 = paintFrame22;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` pos: QPointF `
    ///
    pub fn paintFrame22(self: KSvg__FrameSvg, painter: anytype, pos: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.KSvg__FrameSvg_PaintFrame22(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` factor: f64 `
    ///
    pub fn setDevicePixelRatio(self: KSvg__FrameSvg, factor: f64) void {
        qtc.KSvg__Svg_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn devicePixelRatio(self: KSvg__FrameSvg) f64 {
        return qtc.KSvg__Svg_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn pixmap(self: KSvg__FrameSvg) QPixmap {
        return .{ .ptr = qtc.KSvg__Svg_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `image` instead
    ///
    pub const Image = image;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _size: QSize `
    ///
    pub fn image(self: KSvg__FrameSvg, _size: anytype) QImage {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.KSvg__Svg_Image(@ptrCast(self.ptr), @ptrCast(_size.ptr)) };
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` point: QPointF `
    ///
    pub fn paint(self: KSvg__FrameSvg, painter: anytype, point: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.KSvg__Svg_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `paint2` instead
    ///
    pub const Paint2 = paint2;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn paint2(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `paint3` instead
    ///
    pub const Paint3 = paint3;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn paint3(self: KSvg__FrameSvg, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.KSvg__Svg_Paint3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `paint4` instead
    ///
    pub const Paint4 = paint4;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
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
    pub fn paint4(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32, width: i32, height: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn size(self: KSvg__FrameSvg) QSizeF {
        return .{ .ptr = qtc.KSvg__Svg_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn resize(self: KSvg__FrameSvg, width: f64, height: f64) void {
        qtc.KSvg__Svg_Resize(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn resize2(self: KSvg__FrameSvg, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.KSvg__Svg_Resize2(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `resize3` instead
    ///
    pub const Resize3 = resize3;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn resize3(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_Resize3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elementSize` instead
    ///
    pub const ElementSize = elementSize;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementSize(self: KSvg__FrameSvg, elementId: []const u8) QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementSize(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `elementSize2` instead
    ///
    pub const ElementSize2 = elementSize2;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementSize2(self: KSvg__FrameSvg, elementId: []const u8) QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementSize2(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `elementRect` instead
    ///
    pub const ElementRect = elementRect;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementRect(self: KSvg__FrameSvg, elementId: []const u8) QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementRect(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `elementRect2` instead
    ///
    pub const ElementRect2 = elementRect2;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementRect2(self: KSvg__FrameSvg, elementId: []const u8) QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementRect2(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `hasElement` instead
    ///
    pub const HasElement = hasElement;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn hasElement(self: KSvg__FrameSvg, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement(@ptrCast(self.ptr), elementId_str);
    }

    /// ### DEPRECATED: Use `hasElement2` instead
    ///
    pub const HasElement2 = hasElement2;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn hasElement2(self: KSvg__FrameSvg, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement2(@ptrCast(self.ptr), elementId_str);
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn isValid(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContainsMultipleImages` instead
    ///
    pub const SetContainsMultipleImages = setContainsMultipleImages;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` multiple: bool `
    ///
    pub fn setContainsMultipleImages(self: KSvg__FrameSvg, multiple: bool) void {
        qtc.KSvg__Svg_SetContainsMultipleImages(@ptrCast(self.ptr), multiple);
    }

    /// ### DEPRECATED: Use `containsMultipleImages` instead
    ///
    pub const ContainsMultipleImages = containsMultipleImages;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn containsMultipleImages(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_ContainsMultipleImages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `imagePath` instead
    ///
    pub const ImagePath = imagePath;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn imagePath(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__Svg_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__FrameSvg.imagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUsingRenderingCache` instead
    ///
    pub const SetUsingRenderingCache = setUsingRenderingCache;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` useCache: bool `
    ///
    pub fn setUsingRenderingCache(self: KSvg__FrameSvg, useCache: bool) void {
        qtc.KSvg__Svg_SetUsingRenderingCache(@ptrCast(self.ptr), useCache);
    }

    /// ### DEPRECATED: Use `isUsingRenderingCache` instead
    ///
    pub const IsUsingRenderingCache = isUsingRenderingCache;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn isUsingRenderingCache(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_IsUsingRenderingCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromCurrentImageSet` instead
    ///
    pub const FromCurrentImageSet = fromCurrentImageSet;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn fromCurrentImageSet(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_FromCurrentImageSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImageSet` instead
    ///
    pub const SetImageSet = setImageSet;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` theme: KSvg__ImageSet `
    ///
    pub fn setImageSet(self: KSvg__FrameSvg, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_SetImageSet(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `imageSet` instead
    ///
    pub const ImageSet = imageSet;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn imageSet(self: KSvg__FrameSvg) KSvg__ImageSet {
        return .{ .ptr = qtc.KSvg__Svg_ImageSet(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _status: svg_enums.Status `
    ///
    pub fn setStatus(self: KSvg__FrameSvg, _status: i32) void {
        qtc.KSvg__Svg_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ## Returns:
    ///
    /// ` svg_enums.Status `
    ///
    pub fn status(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__Svg_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorSet` instead
    ///
    pub const SetColorSet = setColorSet;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _colorSet: svg_enums.ColorSet `
    ///
    pub fn setColorSet(self: KSvg__FrameSvg, _colorSet: i32) void {
        qtc.KSvg__Svg_SetColorSet(@ptrCast(self.ptr), @bitCast(_colorSet));
    }

    /// ### DEPRECATED: Use `colorSet` instead
    ///
    pub const ColorSet = colorSet;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ## Returns:
    ///
    /// ` svg_enums.ColorSet `
    ///
    pub fn colorSet(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__Svg_ColorSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    pub fn color(self: KSvg__FrameSvg, colorName: i32) QColor {
        return .{ .ptr = qtc.KSvg__Svg_Color(@ptrCast(self.ptr), @bitCast(colorName)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: KSvg__FrameSvg, colorName: i32, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.KSvg__Svg_SetColor(@ptrCast(self.ptr), @bitCast(colorName), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `clearColorOverrides` instead
    ///
    pub const ClearColorOverrides = clearColorOverrides;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn clearColorOverrides(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_ClearColorOverrides(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `repaintNeeded` instead
    ///
    pub const RepaintNeeded = repaintNeeded;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn repaintNeeded(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_RepaintNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRepaintNeeded` instead
    ///
    pub const OnRepaintNeeded = onRepaintNeeded;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn onRepaintNeeded(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_RepaintNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeChanged` instead
    ///
    pub const SizeChanged = sizeChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn sizeChanged(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_SizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSizeChanged` instead
    ///
    pub const OnSizeChanged = onSizeChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn onSizeChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_SizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imagePathChanged` instead
    ///
    pub const ImagePathChanged = imagePathChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn imagePathChanged(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_ImagePathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImagePathChanged` instead
    ///
    pub const OnImagePathChanged = onImagePathChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn onImagePathChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImagePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorHintChanged` instead
    ///
    pub const ColorHintChanged = colorHintChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn colorHintChanged(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_ColorHintChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColorHintChanged` instead
    ///
    pub const OnColorHintChanged = onColorHintChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn onColorHintChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fromCurrentImageSetChanged` instead
    ///
    pub const FromCurrentImageSetChanged = fromCurrentImageSetChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _fromCurrentImageSet: bool `
    ///
    pub fn fromCurrentImageSetChanged(self: KSvg__FrameSvg, _fromCurrentImageSet: bool) void {
        qtc.KSvg__Svg_FromCurrentImageSetChanged(@ptrCast(self.ptr), _fromCurrentImageSet);
    }

    /// ### DEPRECATED: Use `onFromCurrentImageSetChanged` instead
    ///
    pub const OnFromCurrentImageSetChanged = onFromCurrentImageSetChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, fromCurrentImageSet: bool) callconv(.c) void `
    ///
    pub fn onFromCurrentImageSetChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, bool) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_FromCurrentImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `statusChanged` instead
    ///
    pub const StatusChanged = statusChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _status: svg_enums.Status `
    ///
    pub fn statusChanged(self: KSvg__FrameSvg, _status: i32) void {
        qtc.KSvg__Svg_StatusChanged(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `onStatusChanged` instead
    ///
    pub const OnStatusChanged = onStatusChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, status: svg_enums.Status) callconv(.c) void `
    ///
    pub fn onStatusChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorSetChanged` instead
    ///
    pub const ColorSetChanged = colorSetChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _colorSet: svg_enums.ColorSet `
    ///
    pub fn colorSetChanged(self: KSvg__FrameSvg, _colorSet: i32) void {
        qtc.KSvg__Svg_ColorSetChanged(@ptrCast(self.ptr), @bitCast(_colorSet));
    }

    /// ### DEPRECATED: Use `onColorSetChanged` instead
    ///
    pub const OnColorSetChanged = onColorSetChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, colorSet: svg_enums.ColorSet) callconv(.c) void `
    ///
    pub fn onColorSetChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageSetChanged` instead
    ///
    pub const ImageSetChanged = imageSetChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _imageSet: KSvg__ImageSet `
    ///
    pub fn imageSetChanged(self: KSvg__FrameSvg, _imageSet: anytype) void {
        comptime _ = @TypeOf(_imageSet)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_ImageSetChanged(@ptrCast(self.ptr), @ptrCast(_imageSet.ptr));
    }

    /// ### DEPRECATED: Use `onImageSetChanged` instead
    ///
    pub const OnImageSetChanged = onImageSetChanged;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, imageSet: KSvg__ImageSet) callconv(.c) void `
    ///
    pub fn onImageSetChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, KSvg__ImageSet) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pixmap1` instead
    ///
    pub const Pixmap1 = pixmap1;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn pixmap1(self: KSvg__FrameSvg, elementID: []const u8) QPixmap {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_Pixmap1(@ptrCast(self.ptr), elementID_str) };
    }

    /// ### DEPRECATED: Use `image2` instead
    ///
    pub const Image2 = image2;

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _size: QSize `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn image2(self: KSvg__FrameSvg, _size: anytype, elementID: []const u8) QImage {
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

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` point: QPointF `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn paint32(self: KSvg__FrameSvg, painter: anytype, point: anytype, elementID: []const u8) void {
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

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn paint42(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32, elementID: []const u8) void {
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

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn paint33(self: KSvg__FrameSvg, painter: anytype, rect: anytype, elementID: []const u8) void {
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

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
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
    pub fn paint6(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32, width: i32, height: i32, elementID: []const u8) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KSvg__FrameSvg, watched: anytype, _event: anytype) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QObject, QEvent) callconv(.c) bool) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KSvg__FrameSvg, watched: anytype, _event: anytype) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__FrameSvg.objectName: Memory allocation failed");
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KSvg__FrameSvg, name: []const u8) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn isWidgetType(self: KSvg__FrameSvg) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn isWindowType(self: KSvg__FrameSvg) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn isQuickItemType(self: KSvg__FrameSvg) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn signalsBlocked(self: KSvg__FrameSvg) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KSvg__FrameSvg, b: bool) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn thread(self: KSvg__FrameSvg) QThread {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KSvg__FrameSvg, _thread: anytype) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KSvg__FrameSvg, interval: i32) i32 {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KSvg__FrameSvg, time: i64) i32 {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KSvg__FrameSvg, id: i32) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KSvg__FrameSvg, id: i32) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KSvg__FrameSvg.children: Memory allocation failed");
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KSvg__FrameSvg, _parent: anytype) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KSvg__FrameSvg, filterObj: anytype) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KSvg__FrameSvg, obj: anytype) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KSvg__FrameSvg, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn disconnect3(self: KSvg__FrameSvg) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KSvg__FrameSvg, receiver: anytype) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn dumpObjectTree(self: KSvg__FrameSvg) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn dumpObjectInfo(self: KSvg__FrameSvg) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KSvg__FrameSvg, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KSvg__FrameSvg, name: [:0]const u8) QVariant {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KSvg__FrameSvg, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KSvg__FrameSvg.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSvg__FrameSvg.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn bindingStorage(self: KSvg__FrameSvg) QBindingStorage {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn bindingStorage2(self: KSvg__FrameSvg) QBindingStorage {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn destroyed(self: KSvg__FrameSvg) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn parent(self: KSvg__FrameSvg) QObject {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KSvg__FrameSvg, classname: [:0]const u8) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn deleteLater(self: KSvg__FrameSvg) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KSvg__FrameSvg, interval: i32, timerType: i32) i32 {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KSvg__FrameSvg, time: i64, timerType: i32) i32 {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KSvg__FrameSvg, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KSvg__FrameSvg, signal: [:0]const u8) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KSvg__FrameSvg, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KSvg__FrameSvg, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KSvg__FrameSvg, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KSvg__FrameSvg, param1: anytype) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QObject) callconv(.c) void) void {
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KSvg__FrameSvg, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__FrameSvg_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KSvg__FrameSvg, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__FrameSvg_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QEvent) callconv(.c) bool) void {
        qtc.KSvg__FrameSvg_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KSvg__FrameSvg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSvg__FrameSvg_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KSvg__FrameSvg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSvg__FrameSvg_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QTimerEvent) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KSvg__FrameSvg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSvg__FrameSvg_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KSvg__FrameSvg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSvg__FrameSvg_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QChildEvent) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KSvg__FrameSvg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSvg__FrameSvg_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KSvg__FrameSvg, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSvg__FrameSvg_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QEvent) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn sender(self: KSvg__FrameSvg) QObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn superSender(self: KSvg__FrameSvg) QObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KSvg__FrameSvg, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSvg__FrameSvg_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn senderSignalIndex(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn superSenderSignalIndex(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KSvg__FrameSvg, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KSvg__FrameSvg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__FrameSvg_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KSvg__FrameSvg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__FrameSvg_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KSvg__FrameSvg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__FrameSvg_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KSvg__FrameSvg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__FrameSvg_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QMetaMethod) callconv(.c) bool) void {
        qtc.KSvg__FrameSvg_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn delete(self: KSvg__FrameSvg) void {
        qtc.KSvg__FrameSvg_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#public-types)
pub const enums = struct {
    pub const EnabledBorder = enum {
        pub const NoBorder: i32 = 0;
        pub const TopBorder: i32 = 1;
        pub const BottomBorder: i32 = 2;
        pub const LeftBorder: i32 = 4;
        pub const RightBorder: i32 = 8;
        pub const AllBorders: i32 = 15;
    };

    pub const LocationPrefix = enum {
        pub const Floating: i32 = 0;
        pub const TopEdge: i32 = 1;
        pub const BottomEdge: i32 = 2;
        pub const LeftEdge: i32 = 3;
        pub const RightEdge: i32 = 4;
    };

    pub const MarginEdge = enum {
        pub const TopMargin: i32 = 0;
        pub const BottomMargin: i32 = 1;
        pub const LeftMargin: i32 = 2;
        pub const RightMargin: i32 = 3;
    };
};
