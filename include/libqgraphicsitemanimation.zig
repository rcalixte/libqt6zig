const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QTimeLine = @import("libqt6").QTimeLine;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
const Struct_f64_QPointF = @import("libqt6").types.Struct_f64_QPointF; // extern struct { first: f64, second: QPointF }
const Struct_f64_f64 = @import("libqt6").types.Struct_f64_f64; // extern struct { first: f64, second: f64 }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html)
pub const QGraphicsItemAnimation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsItemAnimation,

    pub const _is_QGraphicsItemAnimation = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsItemAnimation object in C++ memory
    ///
    pub fn new() QGraphicsItemAnimation {
        return .{ .ptr = qtc.QGraphicsItemAnimation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsItemAnimation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QGraphicsItemAnimation {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsItemAnimation_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn metaObject(self: QGraphicsItemAnimation) QMetaObject {
        return .{ .ptr = qtc.QGraphicsItemAnimation_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsItemAnimation, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsItemAnimation_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn superMetaObject(self: QGraphicsItemAnimation) QMetaObject {
        return .{ .ptr = qtc.QGraphicsItemAnimation_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsItemAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsItemAnimation_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsItemAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsItemAnimation_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsItemAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsItemAnimation_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsItemAnimation_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsItemAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsItemAnimation_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsItemAnimation.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn item(self: QGraphicsItemAnimation) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItemAnimation_Item(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _item: QGraphicsItem `
    ///
    pub fn setItem(self: QGraphicsItemAnimation, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QGraphicsItem;
        const _item_ = if (@hasDecl(@TypeOf(_item), "asQGraphicsItem")) _item.asQGraphicsItem() else _item;
        qtc.QGraphicsItemAnimation_SetItem(@ptrCast(self.ptr), @ptrCast(_item_.ptr));
    }

    /// ### DEPRECATED: Use `timeLine` instead
    ///
    pub const TimeLine = timeLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#timeLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn timeLine(self: QGraphicsItemAnimation) QTimeLine {
        return .{ .ptr = qtc.QGraphicsItemAnimation_TimeLine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTimeLine` instead
    ///
    pub const SetTimeLine = setTimeLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTimeLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _timeLine: QTimeLine `
    ///
    pub fn setTimeLine(self: QGraphicsItemAnimation, _timeLine: anytype) void {
        comptime _ = @TypeOf(_timeLine)._is_QTimeLine;
        qtc.QGraphicsItemAnimation_SetTimeLine(@ptrCast(self.ptr), @ptrCast(_timeLine.ptr));
    }

    /// ### DEPRECATED: Use `posAt` instead
    ///
    pub const PosAt = posAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn posAt(self: QGraphicsItemAnimation, step: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItemAnimation_PosAt(@ptrCast(self.ptr), @bitCast(step)) };
    }

    /// ### DEPRECATED: Use `posList` instead
    ///
    pub const PosList = posList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn posList(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) []Struct_f64_QPointF {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_PosList(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QPointF = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QPointF, _arr.len) catch @panic("QGraphicsItemAnimation.posList: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPosAt` instead
    ///
    pub const SetPosAt = setPosAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setPosAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    /// ` pos: QPointF `
    ///
    pub fn setPosAt(self: QGraphicsItemAnimation, step: f64, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsItemAnimation_SetPosAt(@ptrCast(self.ptr), @bitCast(step), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `transformAt` instead
    ///
    pub const TransformAt = transformAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#transformAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn transformAt(self: QGraphicsItemAnimation, step: f64) QTransform {
        return .{ .ptr = qtc.QGraphicsItemAnimation_TransformAt(@ptrCast(self.ptr), @bitCast(step)) };
    }

    /// ### DEPRECATED: Use `rotationAt` instead
    ///
    pub const RotationAt = rotationAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn rotationAt(self: QGraphicsItemAnimation, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_RotationAt(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `rotationList` instead
    ///
    pub const RotationList = rotationList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rotationList(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) []Struct_f64_f64 {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_RotationList(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_f64 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_f64, _arr.len) catch @panic("QGraphicsItemAnimation.rotationList: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRotationAt` instead
    ///
    pub const SetRotationAt = setRotationAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setRotationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    /// ` angle: f64 `
    ///
    pub fn setRotationAt(self: QGraphicsItemAnimation, step: f64, angle: f64) void {
        qtc.QGraphicsItemAnimation_SetRotationAt(@ptrCast(self.ptr), @bitCast(step), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `xTranslationAt` instead
    ///
    pub const XTranslationAt = xTranslationAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#xTranslationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn xTranslationAt(self: QGraphicsItemAnimation, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_XTranslationAt(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `yTranslationAt` instead
    ///
    pub const YTranslationAt = yTranslationAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#yTranslationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn yTranslationAt(self: QGraphicsItemAnimation, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_YTranslationAt(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `translationList` instead
    ///
    pub const TranslationList = translationList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#translationList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn translationList(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) []Struct_f64_QPointF {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_TranslationList(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QPointF = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QPointF, _arr.len) catch @panic("QGraphicsItemAnimation.translationList: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTranslationAt` instead
    ///
    pub const SetTranslationAt = setTranslationAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTranslationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn setTranslationAt(self: QGraphicsItemAnimation, step: f64, dx: f64, dy: f64) void {
        qtc.QGraphicsItemAnimation_SetTranslationAt(@ptrCast(self.ptr), @bitCast(step), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `verticalScaleAt` instead
    ///
    pub const VerticalScaleAt = verticalScaleAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalScaleAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn verticalScaleAt(self: QGraphicsItemAnimation, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_VerticalScaleAt(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `horizontalScaleAt` instead
    ///
    pub const HorizontalScaleAt = horizontalScaleAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalScaleAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn horizontalScaleAt(self: QGraphicsItemAnimation, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_HorizontalScaleAt(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `scaleList` instead
    ///
    pub const ScaleList = scaleList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#scaleList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scaleList(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) []Struct_f64_QPointF {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_ScaleList(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QPointF = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QPointF, _arr.len) catch @panic("QGraphicsItemAnimation.scaleList: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setScaleAt` instead
    ///
    pub const SetScaleAt = setScaleAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setScaleAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    /// ` sx: f64 `
    ///
    /// ` sy: f64 `
    ///
    pub fn setScaleAt(self: QGraphicsItemAnimation, step: f64, sx: f64, sy: f64) void {
        qtc.QGraphicsItemAnimation_SetScaleAt(@ptrCast(self.ptr), @bitCast(step), @bitCast(sx), @bitCast(sy));
    }

    /// ### DEPRECATED: Use `verticalShearAt` instead
    ///
    pub const VerticalShearAt = verticalShearAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalShearAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn verticalShearAt(self: QGraphicsItemAnimation, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_VerticalShearAt(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `horizontalShearAt` instead
    ///
    pub const HorizontalShearAt = horizontalShearAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalShearAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn horizontalShearAt(self: QGraphicsItemAnimation, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_HorizontalShearAt(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `shearList` instead
    ///
    pub const ShearList = shearList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#shearList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shearList(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) []Struct_f64_QPointF {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_ShearList(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QPointF = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QPointF, _arr.len) catch @panic("QGraphicsItemAnimation.shearList: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setShearAt` instead
    ///
    pub const SetShearAt = setShearAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setShearAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    /// ` sh: f64 `
    ///
    /// ` sv: f64 `
    ///
    pub fn setShearAt(self: QGraphicsItemAnimation, step: f64, sh: f64, sv: f64) void {
        qtc.QGraphicsItemAnimation_SetShearAt(@ptrCast(self.ptr), @bitCast(step), @bitCast(sh), @bitCast(sv));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn clear(self: QGraphicsItemAnimation) void {
        qtc.QGraphicsItemAnimation_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStep` instead
    ///
    pub const SetStep = setStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` x: f64 `
    ///
    pub fn setStep(self: QGraphicsItemAnimation, x: f64) void {
        qtc.QGraphicsItemAnimation_SetStep(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### DEPRECATED: Use `beforeAnimationStep` instead
    ///
    pub const BeforeAnimationStep = beforeAnimationStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn beforeAnimationStep(self: QGraphicsItemAnimation, step: f64) void {
        qtc.QGraphicsItemAnimation_BeforeAnimationStep(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `onBeforeAnimationStep` instead
    ///
    pub const OnBeforeAnimationStep = onBeforeAnimationStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, step: f64) callconv(.c) void `
    ///
    pub fn onBeforeAnimationStep(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, f64) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnBeforeAnimationStep(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBeforeAnimationStep` instead
    ///
    pub const SuperBeforeAnimationStep = superBeforeAnimationStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn superBeforeAnimationStep(self: QGraphicsItemAnimation, step: f64) void {
        qtc.QGraphicsItemAnimation_SuperBeforeAnimationStep(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `afterAnimationStep` instead
    ///
    pub const AfterAnimationStep = afterAnimationStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn afterAnimationStep(self: QGraphicsItemAnimation, step: f64) void {
        qtc.QGraphicsItemAnimation_AfterAnimationStep(@ptrCast(self.ptr), @bitCast(step));
    }

    /// ### DEPRECATED: Use `onAfterAnimationStep` instead
    ///
    pub const OnAfterAnimationStep = onAfterAnimationStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, step: f64) callconv(.c) void `
    ///
    pub fn onAfterAnimationStep(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, f64) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnAfterAnimationStep(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAfterAnimationStep` instead
    ///
    pub const SuperAfterAnimationStep = superAfterAnimationStep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn superAfterAnimationStep(self: QGraphicsItemAnimation, step: f64) void {
        qtc.QGraphicsItemAnimation_SuperAfterAnimationStep(@ptrCast(self.ptr), @bitCast(step));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsItemAnimation.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsItemAnimation.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsItemAnimation.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsItemAnimation, name: []const u8) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn isWidgetType(self: QGraphicsItemAnimation) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn isWindowType(self: QGraphicsItemAnimation) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn isQuickItemType(self: QGraphicsItemAnimation) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn signalsBlocked(self: QGraphicsItemAnimation) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsItemAnimation, b: bool) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn thread(self: QGraphicsItemAnimation) QThread {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsItemAnimation, _thread: anytype) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsItemAnimation, interval: i32) i32 {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsItemAnimation, time: i64) i32 {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsItemAnimation, id: i32) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsItemAnimation, id: i32) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsItemAnimation.children: Memory allocation failed");
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsItemAnimation, _parent: anytype) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsItemAnimation, filterObj: anytype) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsItemAnimation, obj: anytype) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsItemAnimation, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn disconnect3(self: QGraphicsItemAnimation) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsItemAnimation, receiver: anytype) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn dumpObjectTree(self: QGraphicsItemAnimation) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn dumpObjectInfo(self: QGraphicsItemAnimation) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsItemAnimation, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsItemAnimation, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsItemAnimation, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsItemAnimation.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsItemAnimation.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn bindingStorage(self: QGraphicsItemAnimation) QBindingStorage {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn bindingStorage2(self: QGraphicsItemAnimation) QBindingStorage {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn destroyed(self: QGraphicsItemAnimation) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation) callconv(.c) void) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn parent(self: QGraphicsItemAnimation) QObject {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsItemAnimation, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn deleteLater(self: QGraphicsItemAnimation) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsItemAnimation, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsItemAnimation, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsItemAnimation, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsItemAnimation, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsItemAnimation, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsItemAnimation, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsItemAnimation, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsItemAnimation, param1: anytype) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QObject) callconv(.c) void) void {
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsItemAnimation, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsItemAnimation_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsItemAnimation, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsItemAnimation_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsItemAnimation_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsItemAnimation, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsItemAnimation_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsItemAnimation, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsItemAnimation_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsItemAnimation_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsItemAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsItemAnimation_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsItemAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsItemAnimation_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsItemAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsItemAnimation_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsItemAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsItemAnimation_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsItemAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsItemAnimation_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsItemAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsItemAnimation_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QEvent) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsItemAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsItemAnimation_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsItemAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsItemAnimation_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsItemAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsItemAnimation_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsItemAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsItemAnimation_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn sender(self: QGraphicsItemAnimation) QObject {
        return .{ .ptr = qtc.QGraphicsItemAnimation_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn superSender(self: QGraphicsItemAnimation) QObject {
        return .{ .ptr = qtc.QGraphicsItemAnimation_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsItemAnimation, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsItemAnimation_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn senderSignalIndex(self: QGraphicsItemAnimation) i32 {
        return qtc.QGraphicsItemAnimation_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsItemAnimation) i32 {
        return qtc.QGraphicsItemAnimation_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsItemAnimation, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsItemAnimation_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsItemAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsItemAnimation_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsItemAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsItemAnimation_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsItemAnimation_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsItemAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsItemAnimation_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsItemAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsItemAnimation_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsItemAnimation`
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsItemAnimation_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsItemAnimation `
    ///
    /// ` callback: *const fn (self: QGraphicsItemAnimation, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsItemAnimation, callback: *const fn (QGraphicsItemAnimation, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#dtor.QGraphicsItemAnimation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsItemAnimation `
    ///
    pub fn delete(self: QGraphicsItemAnimation) void {
        qtc.QGraphicsItemAnimation_Delete(@ptrCast(self.ptr));
    }
};
