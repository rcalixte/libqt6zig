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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCommonStyle object in C++ memory
    ///
    pub fn new() QCommonStyle {
        return .{ .ptr = qtc.QCommonStyle_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn metaObject(self: QCommonStyle) QMetaObject {
        return .{ .ptr = qtc.QCommonStyle_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCommonStyle, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCommonStyle_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    pub fn superMetaObject(self: QCommonStyle) QMetaObject {
        return .{ .ptr = qtc.QCommonStyle_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCommonStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCommonStyle_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCommonStyle, callback: *const fn (QCommonStyle, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCommonStyle_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCommonStyle, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCommonStyle_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QCommonStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCommonStyle_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCommonStyle_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QCommonStyle, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCommonStyle_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommonStyle.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `drawPrimitive` instead
    ///
    pub const DrawPrimitive = drawPrimitive;

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
    pub fn drawPrimitive(self: QCommonStyle, pe: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_DrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onDrawPrimitive` instead
    ///
    pub const OnDrawPrimitive = onDrawPrimitive;

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
    pub fn onDrawPrimitive(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawPrimitive(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPrimitive` instead
    ///
    pub const SuperDrawPrimitive = superDrawPrimitive;

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
    pub fn superDrawPrimitive(self: QCommonStyle, pe: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_SuperDrawPrimitive(@ptrCast(self.ptr), @bitCast(pe), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `drawControl` instead
    ///
    pub const DrawControl = drawControl;

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
    pub fn drawControl(self: QCommonStyle, element: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_DrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onDrawControl` instead
    ///
    pub const OnDrawControl = onDrawControl;

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
    pub fn onDrawControl(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QPainter, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawControl` instead
    ///
    pub const SuperDrawControl = superDrawControl;

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
    pub fn superDrawControl(self: QCommonStyle, element: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_SuperDrawControl(@ptrCast(self.ptr), @bitCast(element), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `subElementRect` instead
    ///
    pub const SubElementRect = subElementRect;

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
    pub fn subElementRect(self: QCommonStyle, r: i32, opt: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SubElementRect(@ptrCast(self.ptr), @bitCast(r), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onSubElementRect` instead
    ///
    pub const OnSubElementRect = onSubElementRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSubElementRect(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnSubElementRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubElementRect` instead
    ///
    pub const SuperSubElementRect = superSubElementRect;

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
    pub fn superSubElementRect(self: QCommonStyle, r: i32, opt: anytype, widget: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperSubElementRect(@ptrCast(self.ptr), @bitCast(r), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `drawComplexControl` instead
    ///
    pub const DrawComplexControl = drawComplexControl;

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
    pub fn drawComplexControl(self: QCommonStyle, cc: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_DrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onDrawComplexControl` instead
    ///
    pub const OnDrawComplexControl = onDrawComplexControl;

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
    pub fn onDrawComplexControl(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOptionComplex, QPainter, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawComplexControl` instead
    ///
    pub const SuperDrawComplexControl = superDrawComplexControl;

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
    pub fn superDrawComplexControl(self: QCommonStyle, cc: i32, opt: anytype, p: anytype, w: anytype) void {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QCommonStyle_SuperDrawComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(p.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `hitTestComplexControl` instead
    ///
    pub const HitTestComplexControl = hitTestComplexControl;

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
    pub fn hitTestComplexControl(self: QCommonStyle, cc: i32, opt: anytype, pt: anytype, w: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QCommonStyle_HitTestComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(pt.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onHitTestComplexControl` instead
    ///
    pub const OnHitTestComplexControl = onHitTestComplexControl;

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
    pub fn onHitTestComplexControl(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOptionComplex, QPoint, QWidget) callconv(.c) i32) void {
        qtc.QCommonStyle_OnHitTestComplexControl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHitTestComplexControl` instead
    ///
    pub const SuperHitTestComplexControl = superHitTestComplexControl;

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
    pub fn superHitTestComplexControl(self: QCommonStyle, cc: i32, opt: anytype, pt: anytype, w: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QCommonStyle_SuperHitTestComplexControl(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @ptrCast(pt.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `subControlRect` instead
    ///
    pub const SubControlRect = subControlRect;

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
    pub fn subControlRect(self: QCommonStyle, cc: i32, opt: anytype, sc: i32, w: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `onSubControlRect` instead
    ///
    pub const OnSubControlRect = onSubControlRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSubControlRect(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOptionComplex, i32, QWidget) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnSubControlRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubControlRect` instead
    ///
    pub const SuperSubControlRect = superSubControlRect;

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
    pub fn superSubControlRect(self: QCommonStyle, cc: i32, opt: anytype, sc: i32, w: anytype) QRect {
        comptime _ = @TypeOf(opt)._is_QStyleOptionComplex;
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperSubControlRect(@ptrCast(self.ptr), @bitCast(cc), @ptrCast(opt.ptr), @bitCast(sc), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeFromContents` instead
    ///
    pub const SizeFromContents = sizeFromContents;

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
    pub fn sizeFromContents(self: QCommonStyle, ct: i32, opt: anytype, contentsSize: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(contentsSize)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SizeFromContents(@ptrCast(self.ptr), @bitCast(ct), @ptrCast(opt.ptr), @ptrCast(contentsSize.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeFromContents` instead
    ///
    pub const OnSizeFromContents = onSizeFromContents;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeFromContents(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QSize, QWidget) callconv(.c) QSize) void {
        qtc.QCommonStyle_OnSizeFromContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeFromContents` instead
    ///
    pub const SuperSizeFromContents = superSizeFromContents;

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
    pub fn superSizeFromContents(self: QCommonStyle, ct: i32, opt: anytype, contentsSize: anytype, widget: anytype) QSize {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(contentsSize)._is_QSize;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperSizeFromContents(@ptrCast(self.ptr), @bitCast(ct), @ptrCast(opt.ptr), @ptrCast(contentsSize.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `pixelMetric` instead
    ///
    pub const PixelMetric = pixelMetric;

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
    pub fn pixelMetric(self: QCommonStyle, m: i32, opt: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_PixelMetric(@ptrCast(self.ptr), @bitCast(m), @ptrCast(opt.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPixelMetric` instead
    ///
    pub const OnPixelMetric = onPixelMetric;

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
    pub fn onPixelMetric(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QCommonStyle_OnPixelMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPixelMetric` instead
    ///
    pub const SuperPixelMetric = superPixelMetric;

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
    pub fn superPixelMetric(self: QCommonStyle, m: i32, opt: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_SuperPixelMetric(@ptrCast(self.ptr), @bitCast(m), @ptrCast(opt.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `styleHint` instead
    ///
    pub const StyleHint = styleHint;

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
    pub fn styleHint(self: QCommonStyle, sh: i32, opt: anytype, w: anytype, shret: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(shret)._is_QStyleHintReturn;
        return qtc.QCommonStyle_StyleHint(@ptrCast(self.ptr), @bitCast(sh), @ptrCast(opt.ptr), @ptrCast(w.ptr), @ptrCast(shret.ptr));
    }

    /// ### DEPRECATED: Use `onStyleHint` instead
    ///
    pub const OnStyleHint = onStyleHint;

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
    pub fn onStyleHint(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget, QStyleHintReturn) callconv(.c) i32) void {
        qtc.QCommonStyle_OnStyleHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStyleHint` instead
    ///
    pub const SuperStyleHint = superStyleHint;

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
    pub fn superStyleHint(self: QCommonStyle, sh: i32, opt: anytype, w: anytype, shret: anytype) i32 {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(shret)._is_QStyleHintReturn;
        return qtc.QCommonStyle_SuperStyleHint(@ptrCast(self.ptr), @bitCast(sh), @ptrCast(opt.ptr), @ptrCast(w.ptr), @ptrCast(shret.ptr));
    }

    /// ### DEPRECATED: Use `standardIcon` instead
    ///
    pub const StandardIcon = standardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` _standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn standardIcon(self: QCommonStyle, _standardIcon: i32, opt: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_StandardIcon(@ptrCast(self.ptr), @bitCast(_standardIcon), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardIcon` instead
    ///
    pub const OnStandardIcon = onStandardIcon;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardIcon(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) QIcon) void {
        qtc.QCommonStyle_OnStandardIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardIcon` instead
    ///
    pub const SuperStandardIcon = superStandardIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` _standardIcon: qstyle_enums.StandardPixmap `
    ///
    /// ` opt: QStyleOption `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superStandardIcon(self: QCommonStyle, _standardIcon: i32, opt: anytype, widget: anytype) QIcon {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperStandardIcon(@ptrCast(self.ptr), @bitCast(_standardIcon), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `standardPixmap` instead
    ///
    pub const StandardPixmap = standardPixmap;

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
    pub fn standardPixmap(self: QCommonStyle, sp: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_StandardPixmap(@ptrCast(self.ptr), @bitCast(sp), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardPixmap` instead
    ///
    pub const OnStandardPixmap = onStandardPixmap;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardPixmap(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QStyleOption, QWidget) callconv(.c) QPixmap) void {
        qtc.QCommonStyle_OnStandardPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardPixmap` instead
    ///
    pub const SuperStandardPixmap = superStandardPixmap;

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
    pub fn superStandardPixmap(self: QCommonStyle, sp: i32, opt: anytype, widget: anytype) QPixmap {
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QCommonStyle_SuperStandardPixmap(@ptrCast(self.ptr), @bitCast(sp), @ptrCast(opt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `generatedIconPixmap` instead
    ///
    pub const GeneratedIconPixmap = generatedIconPixmap;

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
    pub fn generatedIconPixmap(self: QCommonStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QCommonStyle_GeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeneratedIconPixmap` instead
    ///
    pub const OnGeneratedIconPixmap = onGeneratedIconPixmap;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeneratedIconPixmap(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, QPixmap, QStyleOption) callconv(.c) QPixmap) void {
        qtc.QCommonStyle_OnGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeneratedIconPixmap` instead
    ///
    pub const SuperGeneratedIconPixmap = superGeneratedIconPixmap;

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
    pub fn superGeneratedIconPixmap(self: QCommonStyle, iconMode: i32, pixmap: anytype, opt: anytype) QPixmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(opt)._is_QStyleOption;
        return .{ .ptr = qtc.QCommonStyle_SuperGeneratedIconPixmap(@ptrCast(self.ptr), @bitCast(iconMode), @ptrCast(pixmap.ptr), @ptrCast(opt.ptr)) };
    }

    /// ### DEPRECATED: Use `layoutSpacing` instead
    ///
    pub const LayoutSpacing = layoutSpacing;

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
    pub fn layoutSpacing(self: QCommonStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_LayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutSpacing` instead
    ///
    pub const OnLayoutSpacing = onLayoutSpacing;

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
    pub fn onLayoutSpacing(self: QCommonStyle, callback: *const fn (QCommonStyle, i32, i32, i32, QStyleOption, QWidget) callconv(.c) i32) void {
        qtc.QCommonStyle_OnLayoutSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLayoutSpacing` instead
    ///
    pub const SuperLayoutSpacing = superLayoutSpacing;

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
    pub fn superLayoutSpacing(self: QCommonStyle, control1: i32, control2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QCommonStyle_SuperLayoutSpacing(@ptrCast(self.ptr), @bitCast(control1), @bitCast(control2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `polish` instead
    ///
    pub const Polish = polish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` param1: QPalette `
    ///
    pub fn polish(self: QCommonStyle, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.QCommonStyle_Polish(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onPolish` instead
    ///
    pub const OnPolish = onPolish;

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
    pub fn onPolish(self: QCommonStyle, callback: *const fn (QCommonStyle, QPalette) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish` instead
    ///
    pub const SuperPolish = superPolish;

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
    pub fn superPolish(self: QCommonStyle, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.QCommonStyle_SuperPolish(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `polish2` instead
    ///
    pub const Polish2 = polish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` app: QApplication `
    ///
    pub fn polish2(self: QCommonStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QCommonStyle_Polish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### DEPRECATED: Use `onPolish2` instead
    ///
    pub const OnPolish2 = onPolish2;

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
    pub fn onPolish2(self: QCommonStyle, callback: *const fn (QCommonStyle, QApplication) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish2` instead
    ///
    pub const SuperPolish2 = superPolish2;

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
    pub fn superPolish2(self: QCommonStyle, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QApplication;
        qtc.QCommonStyle_SuperPolish2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### DEPRECATED: Use `polish3` instead
    ///
    pub const Polish3 = polish3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn polish3(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_Polish3(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPolish3` instead
    ///
    pub const OnPolish3 = onPolish3;

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
    pub fn onPolish3(self: QCommonStyle, callback: *const fn (QCommonStyle, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnPolish3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPolish3` instead
    ///
    pub const SuperPolish3 = superPolish3;

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
    pub fn superPolish3(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_SuperPolish3(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `unpolish` instead
    ///
    pub const Unpolish = unpolish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` widget: QWidget `
    ///
    pub fn unpolish(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_Unpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onUnpolish` instead
    ///
    pub const OnUnpolish = onUnpolish;

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
    pub fn onUnpolish(self: QCommonStyle, callback: *const fn (QCommonStyle, QWidget) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnpolish` instead
    ///
    pub const SuperUnpolish = superUnpolish;

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
    pub fn superUnpolish(self: QCommonStyle, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QCommonStyle_SuperUnpolish(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `unpolish2` instead
    ///
    pub const Unpolish2 = unpolish2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    /// ` application: QApplication `
    ///
    pub fn unpolish2(self: QCommonStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QCommonStyle_Unpolish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
    }

    /// ### DEPRECATED: Use `onUnpolish2` instead
    ///
    pub const OnUnpolish2 = onUnpolish2;

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
    pub fn onUnpolish2(self: QCommonStyle, callback: *const fn (QCommonStyle, QApplication) callconv(.c) void) void {
        qtc.QCommonStyle_OnUnpolish2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnpolish2` instead
    ///
    pub const SuperUnpolish2 = superUnpolish2;

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
    pub fn superUnpolish2(self: QCommonStyle, application: anytype) void {
        comptime _ = @TypeOf(application)._is_QApplication;
        qtc.QCommonStyle_SuperUnpolish2(@ptrCast(self.ptr), @ptrCast(application.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommonStyle.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommonStyle.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(self: QCommonStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStyle_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommonStyle.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `visualRect` instead
    ///
    pub const VisualRect = visualRect;

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
    pub fn visualRect(direction: i32, boundingRect: anytype, logicalRect: anytype) QRect {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalRect)._is_QRect;
        return .{ .ptr = qtc.QStyle_VisualRect(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalRect.ptr)) };
    }

    /// ### DEPRECATED: Use `visualPos` instead
    ///
    pub const VisualPos = visualPos;

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
    pub fn visualPos(direction: i32, boundingRect: anytype, logicalPos: anytype) QPoint {
        comptime _ = @TypeOf(boundingRect)._is_QRect;
        comptime _ = @TypeOf(logicalPos)._is_QPoint;
        return .{ .ptr = qtc.QStyle_VisualPos(@bitCast(direction), @ptrCast(boundingRect.ptr), @ptrCast(logicalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `sliderPositionFromValue` instead
    ///
    pub const SliderPositionFromValue = sliderPositionFromValue;

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
    pub fn sliderPositionFromValue(min: i32, max: i32, val: i32, space: i32) i32 {
        return qtc.QStyle_SliderPositionFromValue(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space));
    }

    /// ### DEPRECATED: Use `sliderValueFromPosition` instead
    ///
    pub const SliderValueFromPosition = sliderValueFromPosition;

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
    pub fn sliderValueFromPosition(min: i32, max: i32, pos: i32, space: i32) i32 {
        return qtc.QStyle_SliderValueFromPosition(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space));
    }

    /// ### DEPRECATED: Use `visualAlignment` instead
    ///
    pub const VisualAlignment = visualAlignment;

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
    pub fn visualAlignment(direction: i32, alignment: i32) i32 {
        return qtc.QStyle_VisualAlignment(@bitCast(direction), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `alignedRect` instead
    ///
    pub const AlignedRect = alignedRect;

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
    pub fn alignedRect(direction: i32, alignment: i32, size: anytype, rectangle: anytype) QRect {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QStyle_AlignedRect(@bitCast(direction), @bitCast(alignment), @ptrCast(size.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing` instead
    ///
    pub const CombinedLayoutSpacing = combinedLayoutSpacing;

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
    pub fn combinedLayoutSpacing(self: QCommonStyle, controls1: i32, controls2: i32, orientation: i32) i32 {
        return qtc.QStyle_CombinedLayoutSpacing(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// Inherited from QStyle
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn proxy(self: QCommonStyle) QStyle {
        return .{ .ptr = qtc.QStyle_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sliderPositionFromValue5` instead
    ///
    pub const SliderPositionFromValue5 = sliderPositionFromValue5;

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
    pub fn sliderPositionFromValue5(min: i32, max: i32, val: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderPositionFromValue5(@bitCast(min), @bitCast(max), @bitCast(val), @bitCast(space), upsideDown);
    }

    /// ### DEPRECATED: Use `sliderValueFromPosition5` instead
    ///
    pub const SliderValueFromPosition5 = sliderValueFromPosition5;

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
    pub fn sliderValueFromPosition5(min: i32, max: i32, pos: i32, space: i32, upsideDown: bool) i32 {
        return qtc.QStyle_SliderValueFromPosition5(@bitCast(min), @bitCast(max), @bitCast(pos), @bitCast(space), upsideDown);
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing4` instead
    ///
    pub const CombinedLayoutSpacing4 = combinedLayoutSpacing4;

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
    pub fn combinedLayoutSpacing4(self: QCommonStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        return qtc.QStyle_CombinedLayoutSpacing4(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `combinedLayoutSpacing5` instead
    ///
    pub const CombinedLayoutSpacing5 = combinedLayoutSpacing5;

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
    pub fn combinedLayoutSpacing5(self: QCommonStyle, controls1: i32, controls2: i32, orientation: i32, option: anytype, widget: anytype) i32 {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QStyle_CombinedLayoutSpacing5(@ptrCast(self.ptr), @bitCast(controls1), @bitCast(controls2), @bitCast(orientation), @ptrCast(option.ptr), @ptrCast(widget.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCommonStyle, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommonStyle.objectName: Memory allocation failed");
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
    /// ` self: QCommonStyle `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QCommonStyle, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: QCommonStyle `
    ///
    pub fn isWidgetType(self: QCommonStyle) bool {
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
    /// ` self: QCommonStyle `
    ///
    pub fn isWindowType(self: QCommonStyle) bool {
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
    /// ` self: QCommonStyle `
    ///
    pub fn isQuickItemType(self: QCommonStyle) bool {
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
    /// ` self: QCommonStyle `
    ///
    pub fn signalsBlocked(self: QCommonStyle) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCommonStyle, b: bool) bool {
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
    /// ` self: QCommonStyle `
    ///
    pub fn thread(self: QCommonStyle) QThread {
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
    /// ` self: QCommonStyle `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCommonStyle, _thread: anytype) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCommonStyle, interval: i32) i32 {
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
    /// ` self: QCommonStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCommonStyle, time: i64) i32 {
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
    /// ` self: QCommonStyle `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCommonStyle, id: i32) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCommonStyle, id: i32) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCommonStyle, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCommonStyle.children: Memory allocation failed");
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
    /// ` self: QCommonStyle `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCommonStyle, _parent: anytype) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCommonStyle, filterObj: anytype) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCommonStyle, obj: anytype) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCommonStyle, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCommonStyle `
    ///
    pub fn disconnect3(self: QCommonStyle) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCommonStyle, receiver: anytype) bool {
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
    /// ` self: QCommonStyle `
    ///
    pub fn dumpObjectTree(self: QCommonStyle) void {
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
    /// ` self: QCommonStyle `
    ///
    pub fn dumpObjectInfo(self: QCommonStyle) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCommonStyle, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: QCommonStyle `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QCommonStyle, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: QCommonStyle `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCommonStyle, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QCommonStyle.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommonStyle.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCommonStyle `
    ///
    pub fn bindingStorage(self: QCommonStyle) QBindingStorage {
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
    /// ` self: QCommonStyle `
    ///
    pub fn bindingStorage2(self: QCommonStyle) QBindingStorage {
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
    /// ` self: QCommonStyle `
    ///
    pub fn destroyed(self: QCommonStyle) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCommonStyle, callback: *const fn (QCommonStyle) callconv(.c) void) void {
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
    /// ` self: QCommonStyle `
    ///
    pub fn parent(self: QCommonStyle) QObject {
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
    /// ` self: QCommonStyle `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCommonStyle, classname: [:0]const u8) bool {
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
    /// ` self: QCommonStyle `
    ///
    pub fn deleteLater(self: QCommonStyle) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCommonStyle, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCommonStyle `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCommonStyle, time: i64, timerType: i32) i32 {
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
    /// ` self: QCommonStyle `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCommonStyle, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCommonStyle, signal: [:0]const u8) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCommonStyle, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCommonStyle, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCommonStyle, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCommonStyle `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCommonStyle, param1: anytype) void {
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
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCommonStyle, callback: *const fn (QCommonStyle, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemTextRect` instead
    ///
    pub const ItemTextRect = itemTextRect;

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
    pub fn itemTextRect(self: QCommonStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QCommonStyle_ItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### DEPRECATED: Use `superItemTextRect` instead
    ///
    pub const SuperItemTextRect = superItemTextRect;

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
    pub fn superItemTextRect(self: QCommonStyle, fm: anytype, r: anytype, flags: i32, enabled: bool, text: []const u8) QRect {
        comptime _ = @TypeOf(fm)._is_QFontMetrics;
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QCommonStyle_SuperItemTextRect(@ptrCast(self.ptr), @ptrCast(fm.ptr), @ptrCast(r.ptr), @bitCast(flags), enabled, text_str) };
    }

    /// ### DEPRECATED: Use `onItemTextRect` instead
    ///
    pub const OnItemTextRect = onItemTextRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemTextRect(self: QCommonStyle, callback: *const fn (QCommonStyle, QFontMetrics, QRect, i32, bool, [*:0]const u8) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnItemTextRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemPixmapRect` instead
    ///
    pub const ItemPixmapRect = itemPixmapRect;

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
    pub fn itemPixmapRect(self: QCommonStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCommonStyle_ItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `superItemPixmapRect` instead
    ///
    pub const SuperItemPixmapRect = superItemPixmapRect;

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
    pub fn superItemPixmapRect(self: QCommonStyle, r: anytype, flags: i32, pixmap: anytype) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QCommonStyle_SuperItemPixmapRect(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemPixmapRect` instead
    ///
    pub const OnItemPixmapRect = onItemPixmapRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemPixmapRect(self: QCommonStyle, callback: *const fn (QCommonStyle, QRect, i32, QPixmap) callconv(.c) QRect) void {
        qtc.QCommonStyle_OnItemPixmapRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawItemText` instead
    ///
    pub const DrawItemText = drawItemText;

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
    pub fn drawItemText(self: QCommonStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCommonStyle_DrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `superDrawItemText` instead
    ///
    pub const SuperDrawItemText = superDrawItemText;

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
    pub fn superDrawItemText(self: QCommonStyle, painter: anytype, rect: anytype, flags: i32, pal: anytype, enabled: bool, text: []const u8, textRole: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QCommonStyle_SuperDrawItemText(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(flags), @ptrCast(pal.ptr), enabled, text_str, @bitCast(textRole));
    }

    /// ### DEPRECATED: Use `onDrawItemText` instead
    ///
    pub const OnDrawItemText = onDrawItemText;

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
    pub fn onDrawItemText(self: QCommonStyle, callback: *const fn (QCommonStyle, QPainter, QRect, i32, QPalette, bool, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawItemText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawItemPixmap` instead
    ///
    pub const DrawItemPixmap = drawItemPixmap;

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
    pub fn drawItemPixmap(self: QCommonStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QCommonStyle_DrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `superDrawItemPixmap` instead
    ///
    pub const SuperDrawItemPixmap = superDrawItemPixmap;

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
    pub fn superDrawItemPixmap(self: QCommonStyle, painter: anytype, rect: anytype, alignment: i32, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QCommonStyle_SuperDrawItemPixmap(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `onDrawItemPixmap` instead
    ///
    pub const OnDrawItemPixmap = onDrawItemPixmap;

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
    pub fn onDrawItemPixmap(self: QCommonStyle, callback: *const fn (QCommonStyle, QPainter, QRect, i32, QPixmap) callconv(.c) void) void {
        qtc.QCommonStyle_OnDrawItemPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `standardPalette` instead
    ///
    pub const StandardPalette = standardPalette;

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
    pub fn standardPalette(self: QCommonStyle) QPalette {
        return .{ .ptr = qtc.QCommonStyle_StandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superStandardPalette` instead
    ///
    pub const SuperStandardPalette = superStandardPalette;

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
    pub fn superStandardPalette(self: QCommonStyle) QPalette {
        return .{ .ptr = qtc.QCommonStyle_SuperStandardPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onStandardPalette` instead
    ///
    pub const OnStandardPalette = onStandardPalette;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStandardPalette(self: QCommonStyle, callback: *const fn () callconv(.c) QPalette) void {
        qtc.QCommonStyle_OnStandardPalette(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCommonStyle, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCommonStyle_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCommonStyle, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCommonStyle_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QEvent) callconv(.c) bool) void {
        qtc.QCommonStyle_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCommonStyle, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCommonStyle_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCommonStyle, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCommonStyle_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCommonStyle, callback: *const fn (QCommonStyle, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCommonStyle_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCommonStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCommonStyle_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCommonStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCommonStyle_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QTimerEvent) callconv(.c) void) void {
        qtc.QCommonStyle_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCommonStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCommonStyle_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCommonStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCommonStyle_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QChildEvent) callconv(.c) void) void {
        qtc.QCommonStyle_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCommonStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCommonStyle_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCommonStyle, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCommonStyle_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCommonStyle, callback: *const fn (QCommonStyle, QEvent) callconv(.c) void) void {
        qtc.QCommonStyle_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCommonStyle, callback: *const fn (QCommonStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QCommonStyle_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCommonStyle, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCommonStyle_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCommonStyle, callback: *const fn (QCommonStyle, QMetaMethod) callconv(.c) void) void {
        qtc.QCommonStyle_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    pub fn sender(self: QCommonStyle) QObject {
        return .{ .ptr = qtc.QCommonStyle_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCommonStyle `
    ///
    pub fn superSender(self: QCommonStyle) QObject {
        return .{ .ptr = qtc.QCommonStyle_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QCommonStyle, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCommonStyle_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    pub fn senderSignalIndex(self: QCommonStyle) i32 {
        return qtc.QCommonStyle_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCommonStyle `
    ///
    pub fn superSenderSignalIndex(self: QCommonStyle) i32 {
        return qtc.QCommonStyle_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QCommonStyle, callback: *const fn () callconv(.c) i32) void {
        qtc.QCommonStyle_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCommonStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCommonStyle_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QCommonStyle, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCommonStyle_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QCommonStyle, callback: *const fn (QCommonStyle, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCommonStyle_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCommonStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCommonStyle_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QCommonStyle, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCommonStyle_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCommonStyle`
    ///
    /// ` callback: *const fn (self: QCommonStyle, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QCommonStyle, callback: *const fn (QCommonStyle, QMetaMethod) callconv(.c) bool) void {
        qtc.QCommonStyle_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCommonStyle `
    ///
    /// ` callback: *const fn (self: QCommonStyle, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCommonStyle, callback: *const fn (QCommonStyle, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#dtor.QCommonStyle)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCommonStyle `
    ///
    pub fn delete(self: QCommonStyle) void {
        qtc.QCommonStyle_Delete(@ptrCast(self.ptr));
    }
};
