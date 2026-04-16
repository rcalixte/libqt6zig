const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QApplication = @import("libqt6").QApplication;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QStyle = @import("libqt6").QStyle;
const QStyleHintReturn = @import("libqt6").QStyleHintReturn;
const QStyleOption = @import("libqt6").QStyleOption;
const QStyleOptionComplex = @import("libqt6").QStyleOptionComplex;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qicon_enums = @import("libqicon.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qstyle_enums = @import("libqstyle.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html)
pub const QCommonStyle = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCommonStyle,

    pub const _is_QCommonStyle = {};
    pub const _is_QStyle = {};
    pub const _is_QObject = {};

    /// New constructs a new QCommonStyle object.
    ///
    pub fn New() QCommonStyle {
        return .{ .ptr = qtc.QCommonStyle_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn MetaObject(self: QCommonStyle) QMetaObject {
        return .{ .ptr = qtc.QCommonStyle_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QCommonStyle, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCommonStyle_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    pub fn SuperMetaObject(self: QCommonStyle) QMetaObject {
        return .{ .ptr = qtc.QCommonStyle_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QCommonStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCommonStyle_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QCommonStyle, callback: *const fn (QCommonStyle, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCommonStyle_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QCommonStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCommonStyle_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QCommonStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCommonStyle_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QCommonStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCommonStyle_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` pe: qstyle_enums.PrimitiveElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn DrawPrimitive(self: QCommonStyle, pe: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_DrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, pe: qstyle_enums.PrimitiveElement, opt: QStyleOption, p: QPainter, w: QWidget) callconv(.c) void `
    ///
    pub fn OnDrawPrimitive(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawPrimitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPrimitive` instead
    ///
    pub const QBaseDrawPrimitive = SuperDrawPrimitive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` pe: qstyle_enums.PrimitiveElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperDrawPrimitive(self: QCommonStyle, pe: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_SuperDrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn DrawControl(self: QCommonStyle, element: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_DrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, element: qstyle_enums.ControlElement, opt: QStyleOption, p: QPainter, w: QWidget) callconv(.c) void `
    ///
    pub fn OnDrawControl(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawControl` instead
    ///
    pub const QBaseDrawControl = SuperDrawControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` element: qstyle_enums.ControlElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperDrawControl(self: QCommonStyle, element: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_SuperDrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` r: qstyle_enums.SubElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SubElementRect(self: QCommonStyle, r: i32, opt: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SubElementRect(@ptrCast(self.ptr), @bitCast(r), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, r: qstyle_enums.SubElement, opt: QStyleOption, widget: QWidget) callconv(.c) QRect `
    ///
    pub fn OnSubElementRect(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnSubElementRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubElementRect` instead
    ///
    pub const QBaseSubElementRect = SuperSubElementRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` r: qstyle_enums.SubElement `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSubElementRect(self: QCommonStyle, r: i32, opt: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperSubElementRect(@ptrCast(self.ptr), @bitCast(r), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn DrawComplexControl(self: QCommonStyle, cc: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_DrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QStyleOptionComplex, p: QPainter, w: QWidget) callconv(.c) void `
    ///
    pub fn OnDrawComplexControl(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOptionComplex, QPainter, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawComplexControl` instead
    ///
    pub const QBaseDrawComplexControl = SuperDrawComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` p: QPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperDrawComplexControl(self: QCommonStyle, cc: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_SuperDrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` pt: QPoint `
    ///
    /// ` w: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn HitTestComplexControl(self: QCommonStyle, cc: i32, opt: anytype, pt: anytype, w: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QCommonStyle_HitTestComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(pt.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QStyleOptionComplex, pt: QPoint, w: QWidget) callconv(.c) i32 `
    ///
    pub fn OnHitTestComplexControl(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOptionComplex, QPoint, QWidget) callconv(.c) i32) void {
        qtc.QCommonStyle_OnHitTestComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHitTestComplexControl` instead
    ///
    pub const QBaseHitTestComplexControl = SuperHitTestComplexControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` pt: QPoint `
    ///
    /// ` w: QWidget `
    ///
    /// ## Returns:
    ///
    /// ` qstyle_enums.SubControl `
    ///
    pub fn SuperHitTestComplexControl(self: QCommonStyle, cc: i32, opt: anytype, pt: anytype, w: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QCommonStyle_SuperHitTestComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(pt.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` w: QWidget `
    ///
    pub fn SubControlRect(self: QCommonStyle, cc: i32, opt: anytype, sc: i32, w: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(w.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, cc: qstyle_enums.ComplexControl, opt: QStyleOptionComplex, sc: qstyle_enums.SubControl, w: QWidget) callconv(.c) QRect `
    ///
    pub fn OnSubControlRect(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOptionComplex, i32, QWidget) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnSubControlRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubControlRect` instead
    ///
    pub const QBaseSubControlRect = SuperSubControlRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` cc: qstyle_enums.ComplexControl `
    ///
    /// ` opt: QStyleOptionComplex `
    ///
    /// ` sc: qstyle_enums.SubControl `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperSubControlRect(self: QCommonStyle, cc: i32, opt: anytype, sc: i32, w: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperSubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(w.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` ct: qstyle_enums.ContentsType `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` contentsSize: QSize `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SizeFromContents(self: QCommonStyle, ct: i32, opt: anytype, contentsSize: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(contentsSize)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SizeFromContents(@ptrCast(self.ptr), @bitCast(ct), @ptrCast(opt.ptr), @ptrCast(contentsSize.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, ct: qstyle_enums.ContentsType, opt: QStyleOption, contentsSize: QSize, widget: QWidget) callconv(.c) QSize `
    ///
    pub fn OnSizeFromContents(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QSize, QWidget) callconv(.c) QSize) void {
        qtc.QCommonStyle_OnSizeFromContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeFromContents` instead
    ///
    pub const QBaseSizeFromContents = SuperSizeFromContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` ct: qstyle_enums.ContentsType `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` contentsSize: QSize `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSizeFromContents(self: QCommonStyle, ct: i32, opt: anytype, contentsSize: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(contentsSize)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperSizeFromContents(@ptrCast(self.ptr), @bitCast(ct), @ptrCast(opt.ptr), @ptrCast(contentsSize.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` m: qstyle_enums.PixelMetric `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn PixelMetric(self: QCommonStyle, m: i32, opt: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_PixelMetric(@ptrCast(self.ptr), @bitCast(m), @ptrCast(opt.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, m: qstyle_enums.PixelMetric, opt: QStyleOption, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn OnPixelMetric(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QCommonStyle_OnPixelMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPixelMetric` instead
    ///
    pub const QBasePixelMetric = SuperPixelMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` m: qstyle_enums.PixelMetric `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPixelMetric(self: QCommonStyle, m: i32, opt: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_SuperPixelMetric(@ptrCast(self.ptr), @bitCast(m), @ptrCast(opt.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` sh: qstyle_enums.StyleHint `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` w: QWidget `
    ///
    /// ` shret: QStyleHintReturn `
    ///
    pub fn StyleHint(self: QCommonStyle, sh: i32, opt: anytype, w: anytype, shret: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(shret)._is_QStyleHintReturn;
        return qtc.QCommonStyle_StyleHint(@ptrCast(self.ptr), @bitCast(sh), @ptrCast(opt.ptr), @ptrCast(w.ptr), @ptrCast(shret.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, sh: qstyle_enums.StyleHint, opt: QStyleOption, w: QWidget, shret: QStyleHintReturn) callconv(.c) i32 `
    ///
    pub fn OnStyleHint(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget, QStyleHintReturn) callconv(.c) i32) void {
        qtc.QCommonStyle_OnStyleHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStyleHint` instead
    ///
    pub const QBaseStyleHint = SuperStyleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` sh: qstyle_enums.StyleHint `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` w: QWidget `
    ///
    /// ` shret: QStyleHintReturn `
    ///
    pub fn SuperStyleHint(self: QCommonStyle, sh: i32, opt: anytype, w: anytype, shret: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(shret)._is_QStyleHintReturn;
        return qtc.QCommonStyle_SuperStyleHint(@ptrCast(self.ptr), @bitCast(sh), @ptrCast(opt.ptr), @ptrCast(w.ptr), @ptrCast(shret.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn StandardIcon(self: QCommonStyle, standardIcon: i32, opt: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_StandardIcon(@ptrCast(self.ptr), @bitCast(standardIcon), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, standardIcon: qstyle_enums.StandardPixmap, opt: QStyleOption, widget: QWidget) callconv(.c) QIcon `
    ///
    pub fn OnStandardIcon(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) QIcon) void {
        qtc.QCommonStyle_OnStandardIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStandardIcon` instead
    ///
    pub const QBaseStandardIcon = SuperStandardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperStandardIcon(self: QCommonStyle, standardIcon: i32, opt: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperStandardIcon(@ptrCast(self.ptr), @bitCast(standardIcon), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` sp: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn StandardPixmap(self: QCommonStyle, sp: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_StandardPixmap(@ptrCast(self.ptr), @bitCast(sp), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, sp: qstyle_enums.StandardPixmap, opt: QStyleOption, widget: QWidget) callconv(.c) QPixmap `
    ///
    pub fn OnStandardPixmap(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) QPixmap) void {
        qtc.QCommonStyle_OnStandardPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStandardPixmap` instead
    ///
    pub const QBaseStandardPixmap = SuperStandardPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` sp: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperStandardPixmap(self: QCommonStyle, sp: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperStandardPixmap(@ptrCast(self.ptr), @bitCast(sp), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn GeneratedIconPixmap(self: QCommonStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QCommonStyle_GeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, iconMode: qicon_enums.Mode, pixmap: QPixmap, opt: QStyleOption) callconv(.c) QPixmap `
    ///
    pub fn OnGeneratedIconPixmap(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QPixmap, QStyleOption) callconv(.c) QPixmap) void {
        qtc.QCommonStyle_OnGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeneratedIconPixmap` instead
    ///
    pub const QBaseGeneratedIconPixmap = SuperGeneratedIconPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` iconMode: qicon_enums.Mode `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    pub fn SuperGeneratedIconPixmap(self: QCommonStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QCommonStyle_SuperGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` control1: qsizepolicy_enums.ControlType `
    ///
    /// ` control2: qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn LayoutSpacing(self: QCommonStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_LayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, control1: qsizepolicy_enums.ControlType, control2: qsizepolicy_enums.ControlType, orientation: qnamespace_enums.Orientation, option: QStyleOption, widget: QWidget) callconv(.c) i32 `
    ///
    pub fn OnLayoutSpacing(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, i32, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QCommonStyle_OnLayoutSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLayoutSpacing` instead
    ///
    pub const QBaseLayoutSpacing = SuperLayoutSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` control1: qsizepolicy_enums.ControlType `
    ///
    /// ` control2: qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperLayoutSpacing(self: QCommonStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_SuperLayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: QPalette `
    ///
    pub fn Polish(self: QCommonStyle, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.QCommonStyle_Polish(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, param1: QPalette) callconv(.c) void `
    ///
    pub fn OnPolish(self: QCommonStyle, callback: *const fn (QCommonStyle, QPalette) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPolish` instead
    ///
    pub const QBasePolish = SuperPolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: QPalette `
    ///
    pub fn SuperPolish(self: QCommonStyle, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.QCommonStyle_SuperPolish(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn Polish2(self: QCommonStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QCommonStyle_Polish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, app: QApplication) callconv(.c) void `
    ///
    pub fn OnPolish2(self: QCommonStyle, callback: *const fn (QCommonStyle, QApplication) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPolish2` instead
    ///
    pub const QBasePolish2 = SuperPolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn SuperPolish2(self: QCommonStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QCommonStyle_SuperPolish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Polish3(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_Polish3(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnPolish3(self: QCommonStyle, callback: *const fn (QCommonStyle, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPolish3` instead
    ///
    pub const QBasePolish3 = SuperPolish3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPolish3(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_SuperPolish3(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Unpolish(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_Unpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnUnpolish(self: QCommonStyle, callback: *const fn (QCommonStyle, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnpolish` instead
    ///
    pub const QBaseUnpolish = SuperUnpolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperUnpolish(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_SuperUnpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` application: QApplication `
    ///
    pub fn Unpolish2(self: QCommonStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QCommonStyle_Unpolish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, application: QApplication) callconv(.c) void `
    ///
    pub fn OnUnpolish2(self: QCommonStyle, callback: *const fn (QCommonStyle, QApplication) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnpolish2` instead
    ///
    pub const QBaseUnpolish2 = SuperUnpolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` application: QApplication `
    ///
    pub fn SuperUnpolish2(self: QCommonStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QCommonStyle_SuperUnpolish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QCommonStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStyle_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` boundingRect: QRect `
    ///
    /// ` logicalRect: QRect `
    ///
    pub fn VisualRect(direction: i32, boundingRect: anytype, logicalRect: anytype) QRect {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalRect)._is_QRect;
        return .{ .ptr = qtc.QStyle_VisualRect(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalRect.ptr)) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` boundingRect: QRect `
    ///
    /// ` logicalPos: QPoint `
    ///
    pub fn VisualPos(direction: i32, boundingRect: anytype, logicalPos: anytype) QPoint {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalPos)._is_QPoint;
        return .{ .ptr = qtc.QStyle_VisualPos(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalPos.ptr)) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` val: i32 `
    ///
    /// ` space: i32 `
    ///
    pub fn SliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` pos: i32 `
    ///
    /// ` space: i32 `
    ///
    pub fn SliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn VisualAlignment(direction: i32, alignment: i32) i32 {
        return qtc.QStyle_VisualAlignment(@bitCast(direction), @bitCast(alignment));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` size: QSize `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn AlignedRect(direction: i32, alignment: i32, size: anytype, rectangle: anytype) QRect {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QStyle_AlignedRect(@bitCast(direction), @bitCast(alignment), @ptrCast(size.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn CombinedLayoutSpacing(self: QCommonStyle, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn Proxy(self: QCommonStyle) QStyle {
        return .{ .ptr = qtc.QStyle_Proxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` val: i32 `
    ///
    /// ` space: i32 `
    ///
    /// ` upsideDown: bool `
    ///
    pub fn SliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    /// ` pos: i32 `
    ///
    /// ` space: i32 `
    ///
    /// ` upsideDown: bool `
    ///
    pub fn SliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space), upsideDown);
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn CombinedLayoutSpacing4(self: QCommonStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` controls1: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` controls2: flag of qsizepolicy_enums.ControlType `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` option: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn CombinedLayoutSpacing5(self: QCommonStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QCommonStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommonstyle.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QCommonStyle, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn IsWidgetType(self: QCommonStyle) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn IsWindowType(self: QCommonStyle) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn IsQuickItemType(self: QCommonStyle) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn SignalsBlocked(self: QCommonStyle) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QCommonStyle, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn Thread(self: QCommonStyle) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QCommonStyle, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QCommonStyle, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QCommonStyle, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QCommonStyle, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QCommonStyle, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QCommonStyle, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qcommonstyle.Children: Memory allocation failed");
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
    /// ` self: QCommonStyle `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QCommonStyle, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QCommonStyle, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QCommonStyle, obj: anytype) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QCommonStyle, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCommonStyle `
    ///
    pub fn Disconnect3(self: QCommonStyle) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QCommonStyle, receiver: anytype) bool {
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
    /// ` self: QCommonStyle `
    ///
    pub fn DumpObjectTree(self: QCommonStyle) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn DumpObjectInfo(self: QCommonStyle) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QCommonStyle, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QCommonStyle, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QCommonStyle, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcommonstyle.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommonstyle.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCommonStyle `
    ///
    pub fn BindingStorage(self: QCommonStyle) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn BindingStorage2(self: QCommonStyle) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn Destroyed(self: QCommonStyle) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QCommonStyle, callback: *const fn (QCommonStyle) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn Parent(self: QCommonStyle) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QCommonStyle, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn DeleteLater(self: QCommonStyle) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QCommonStyle, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QCommonStyle, time: i64, timerType: i32) i32 {
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
    /// ` self: QCommonStyle `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QCommonStyle, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QCommonStyle, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QCommonStyle, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QCommonStyle, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QCommonStyle, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QCommonStyle, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QCommonStyle, callback: *const fn (QCommonStyle, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` fm: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ItemTextRect(self: QCommonStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QCommonStyle_ItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### DEPRECATED: Use `SuperItemTextRect` instead
    ///
    pub const QBaseItemTextRect = SuperItemTextRect;

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` fm: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperItemTextRect(self: QCommonStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QCommonStyle_SuperItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, fm: QFontMetrics, r: QRect, flags: i32, enabled: bool, text: [*:0]const u8) callconv(.c) QRect `
    ///
    pub fn OnItemTextRect(self: QCommonStyle, callback: *const fn (QCommonStyle, QFontMetrics, QRect, i32, bool, [*:0]const u8) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnItemTextRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn ItemPixmapRect(self: QCommonStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCommonStyle_ItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperItemPixmapRect` instead
    ///
    pub const QBaseItemPixmapRect = SuperItemPixmapRect;

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SuperItemPixmapRect(self: QCommonStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCommonStyle_SuperItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, r: QRect, flags: i32, pixmap: QPixmap) callconv(.c) QRect `
    ///
    pub fn OnItemPixmapRect(self: QCommonStyle, callback: *const fn (QCommonStyle, QRect, i32, QPixmap) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnItemPixmapRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textRole: qpalette_enums.ColorRole `
    ///
    pub fn DrawItemText(self: QCommonStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCommonStyle_DrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `SuperDrawItemText` instead
    ///
    pub const QBaseDrawItemText = SuperDrawItemText;

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` enabled: bool `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textRole: qpalette_enums.ColorRole `
    ///
    pub fn SuperDrawItemText(self: QCommonStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCommonStyle_SuperDrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, painter: QPainter, rect: QRect, flags: i32, pal: QPalette, enabled: bool, text: [*:0]const u8, textRole: qpalette_enums.ColorRole) callconv(.c) void `
    ///
    pub fn OnDrawItemText(self: QCommonStyle, callback: *const fn (QCommonStyle, QPainter, QRect, i32, QPalette, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawItemText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn DrawItemPixmap(self: QCommonStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QCommonStyle_DrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawItemPixmap` instead
    ///
    pub const QBaseDrawItemPixmap = SuperDrawItemPixmap;

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: i32 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SuperDrawItemPixmap(self: QCommonStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QCommonStyle_SuperDrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, painter: QPainter, rect: QRect, alignment: i32, pixmap: QPixmap) callconv(.c) void `
    ///
    pub fn OnDrawItemPixmap(self: QCommonStyle, callback: *const fn (QCommonStyle, QPainter, QRect, i32, QPixmap) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawItemPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn StandardPalette(self: QCommonStyle) QPalette {
        return .{ .ptr = qtc.QCommonStyle_StandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperStandardPalette` instead
    ///
    pub const QBaseStandardPalette = SuperStandardPalette;

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn SuperStandardPalette(self: QCommonStyle) QPalette {
        return .{ .ptr = qtc.QCommonStyle_SuperStandardPalette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn () callconv(.c) QPalette `
    ///
    pub fn OnStandardPalette(self: QCommonStyle, callback: *const fn () callconv(.c) QPalette) void {
        qtc.QCommonStyle_OnStandardPalette(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QCommonStyle, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCommonStyle_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QCommonStyle, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCommonStyle_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QEvent) callconv(.c) bool) void {
        qtc.QCommonStyle_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QCommonStyle, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCommonStyle_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QCommonStyle, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCommonStyle_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QCommonStyle, callback: *const fn (QCommonStyle, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCommonStyle_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QCommonStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCommonStyle_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QCommonStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCommonStyle_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QTimerEvent) callconv(.c) void) void {
        qtc.QCommonStyle_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QCommonStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCommonStyle_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QCommonStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCommonStyle_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QChildEvent) callconv(.c) void) void {
        qtc.QCommonStyle_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QCommonStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCommonStyle_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QCommonStyle, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCommonStyle_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QEvent) callconv(.c) void) void {
        qtc.QCommonStyle_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QCommonStyle, callback: *const fn (QCommonStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QCommonStyle_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QCommonStyle, callback: *const fn (QCommonStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QCommonStyle_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn Sender(self: QCommonStyle) QObject {
        return .{ .ptr = qtc.QCommonStyle_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCommonStyle `
    ///
    pub fn SuperSender(self: QCommonStyle) QObject {
        return .{ .ptr = qtc.QCommonStyle_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QCommonStyle, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCommonStyle_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn SenderSignalIndex(self: QCommonStyle) i32 {
        return qtc.QCommonStyle_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCommonStyle `
    ///
    pub fn SuperSenderSignalIndex(self: QCommonStyle) i32 {
        return qtc.QCommonStyle_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QCommonStyle, callback: *const fn () callconv(.c) i32) void {
        qtc.QCommonStyle_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QCommonStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCommonStyle_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QCommonStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCommonStyle_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QCommonStyle, callback: *const fn (QCommonStyle, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCommonStyle_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QCommonStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCommonStyle_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QCommonStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCommonStyle_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QCommonStyle, callback: *const fn (QCommonStyle, QMetaMethod) callconv(.c) bool) void {
        qtc.QCommonStyle_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QCommonStyle, callback: *const fn (QCommonStyle, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#dtor.QCommonStyle)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn Delete(self: QCommonStyle) void {
        qtc.QCommonStyle_Delete(@ptrCast(self.ptr));
    }
};
