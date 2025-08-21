const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_f64_f64 = struct { first: f64, second: f64 };
pub const struct_f64_qtcqpointf = struct { first: f64, second: QtC.QPointF };

/// https://doc.qt.io/qt-6/qgraphicsitemanimation.html
pub const qgraphicsitemanimation = struct {
    /// New constructs a new QGraphicsItemAnimation object.
    ///
    ///
    pub fn New() QtC.QGraphicsItemAnimation {
        return qtc.QGraphicsItemAnimation_new();
    }

    /// New2 constructs a new QGraphicsItemAnimation object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsItemAnimation {
        return qtc.QGraphicsItemAnimation_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsItemAnimation_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsItemAnimation, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsItemAnimation_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsItemAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsItemAnimation_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsItemAnimation_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsItemAnimation_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsItemAnimation_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitemanimation.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#item)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn Item(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItemAnimation_Item(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setItem)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, item: QtC.QGraphicsItem ```
    pub fn SetItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_SetItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#timeLine)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn TimeLine(self: ?*anyopaque) QtC.QTimeLine {
        return qtc.QGraphicsItemAnimation_TimeLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTimeLine)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, timeLine: QtC.QTimeLine ```
    pub fn SetTimeLine(self: ?*anyopaque, timeLine: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_SetTimeLine(@ptrCast(self), @ptrCast(timeLine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn PosAt(self: ?*anyopaque, step: f64) QtC.QPointF {
        return qtc.QGraphicsItemAnimation_PosAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posList)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn PosList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_qtcqpointf {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_PosList(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_qtcqpointf, _arr.len) catch @panic("qgraphicsitemanimation.PosList: Memory allocation failed");
        const _data: [*]struct_f64_qtcqpointf = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setPosAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64, pos: QtC.QPointF ```
    pub fn SetPosAt(self: ?*anyopaque, step: f64, pos: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_SetPosAt(@ptrCast(self), @floatCast(step), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#transformAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn TransformAt(self: ?*anyopaque, step: f64) QtC.QTransform {
        return qtc.QGraphicsItemAnimation_TransformAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn RotationAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_RotationAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationList)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn RotationList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_f64 {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_RotationList(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_f64, _arr.len) catch @panic("qgraphicsitemanimation.RotationList: Memory allocation failed");
        const _data: [*]struct_f64_f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setRotationAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64, angle: f64 ```
    pub fn SetRotationAt(self: ?*anyopaque, step: f64, angle: f64) void {
        qtc.QGraphicsItemAnimation_SetRotationAt(@ptrCast(self), @floatCast(step), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#xTranslationAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn XTranslationAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_XTranslationAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#yTranslationAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn YTranslationAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_YTranslationAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#translationList)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn TranslationList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_qtcqpointf {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_TranslationList(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_qtcqpointf, _arr.len) catch @panic("qgraphicsitemanimation.TranslationList: Memory allocation failed");
        const _data: [*]struct_f64_qtcqpointf = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTranslationAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64, dx: f64, dy: f64 ```
    pub fn SetTranslationAt(self: ?*anyopaque, step: f64, dx: f64, dy: f64) void {
        qtc.QGraphicsItemAnimation_SetTranslationAt(@ptrCast(self), @floatCast(step), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalScaleAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn VerticalScaleAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_VerticalScaleAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalScaleAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn HorizontalScaleAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_HorizontalScaleAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#scaleList)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn ScaleList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_qtcqpointf {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_ScaleList(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_qtcqpointf, _arr.len) catch @panic("qgraphicsitemanimation.ScaleList: Memory allocation failed");
        const _data: [*]struct_f64_qtcqpointf = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setScaleAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64, sx: f64, sy: f64 ```
    pub fn SetScaleAt(self: ?*anyopaque, step: f64, sx: f64, sy: f64) void {
        qtc.QGraphicsItemAnimation_SetScaleAt(@ptrCast(self), @floatCast(step), @floatCast(sx), @floatCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalShearAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn VerticalShearAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_VerticalShearAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalShearAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn HorizontalShearAt(self: ?*anyopaque, step: f64) f64 {
        return qtc.QGraphicsItemAnimation_HorizontalShearAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#shearList)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn ShearList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_qtcqpointf {
        const _arr: qtc.libqt_list = qtc.QGraphicsItemAnimation_ShearList(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_qtcqpointf, _arr.len) catch @panic("qgraphicsitemanimation.ShearList: Memory allocation failed");
        const _data: [*]struct_f64_qtcqpointf = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setShearAt)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64, sh: f64, sv: f64 ```
    pub fn SetShearAt(self: ?*anyopaque, step: f64, sh: f64, sv: f64) void {
        qtc.QGraphicsItemAnimation_SetShearAt(@ptrCast(self), @floatCast(step), @floatCast(sh), @floatCast(sv));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#clear)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setStep)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, x: f64 ```
    pub fn SetStep(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItemAnimation_SetStep(@ptrCast(self), @floatCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn BeforeAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_BeforeAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, step: f64) callconv(.c) void ```
    pub fn OnBeforeAnimationStep(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnBeforeAnimationStep(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn QBaseBeforeAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_QBaseBeforeAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn AfterAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_AfterAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, step: f64) callconv(.c) void ```
    pub fn OnAfterAnimationStep(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnAfterAnimationStep(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, step: f64 ```
    pub fn QBaseAfterAnimationStep(self: ?*anyopaque, step: f64) void {
        qtc.QGraphicsItemAnimation_QBaseAfterAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsItemAnimation_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitemanimation.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsItemAnimation_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitemanimation.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsitemanimation.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, name: []const u8 ```
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
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicsitemanimation.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsItemAnimation, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsitemanimation.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsitemanimation.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QGraphicsItemAnimation, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItemAnimation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItemAnimation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItemAnimation_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItemAnimation_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsItemAnimation_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItemAnimation_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsItemAnimation_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsItemAnimation_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsItemAnimation_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsItemAnimation_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItemAnimation_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItemAnimation_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsItemAnimation_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsItemAnimation_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsItemAnimation_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsItemAnimation_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsItemAnimation_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsItemAnimation_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsItemAnimation_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsItemAnimation, slot: fn (self: QtC.QGraphicsItemAnimation, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#dtor.QGraphicsItemAnimation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsItemAnimation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsItemAnimation_Delete(@ptrCast(self));
    }
};
