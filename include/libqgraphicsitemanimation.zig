const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_f64_cqpointf = struct { first: f64, second: ?*C.QPointF };
pub const struct_f64_f64 = struct { first: f64, second: f64 };

/// https://doc.qt.io/qt-6/qgraphicsitemanimation.html
pub const qgraphicsitemanimation = struct {
    /// New constructs a new QGraphicsItemAnimation object.
    ///
    ///
    pub fn New() ?*C.QGraphicsItemAnimation {
        return C.QGraphicsItemAnimation_new();
    }

    /// New2 constructs a new QGraphicsItemAnimation object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QGraphicsItemAnimation {
        return C.QGraphicsItemAnimation_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QGraphicsItemAnimation_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QGraphicsItemAnimation, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QGraphicsItemAnimation_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QGraphicsItemAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGraphicsItemAnimation_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QGraphicsItemAnimation_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGraphicsItemAnimation_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QGraphicsItemAnimation_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#item)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn Item(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsItemAnimation_Item(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setItem)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, item: ?*C.QGraphicsItem ```
    pub fn SetItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsItemAnimation_SetItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#timeLine)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn TimeLine(self: ?*anyopaque) ?*C.QTimeLine {
        return C.QGraphicsItemAnimation_TimeLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTimeLine)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, timeLine: ?*C.QTimeLine ```
    pub fn SetTimeLine(self: ?*anyopaque, timeLine: ?*anyopaque) void {
        C.QGraphicsItemAnimation_SetTimeLine(@ptrCast(self), @ptrCast(timeLine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn PosAt(self: ?*anyopaque, step: f64) ?*C.QPointF {
        return C.QGraphicsItemAnimation_PosAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posList)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn PosList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_cqpointf {
        const _arr: C.struct_libqt_list = C.QGraphicsItemAnimation_PosList(@ptrCast(self));
        defer {
            const _pair: [*]C.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                C.libqt_free(_pair[_i].first);
                C.libqt_free(_pair[_i].second);
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_cqpointf, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]struct_f64_cqpointf = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setPosAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64, pos: ?*C.QPointF ```
    pub fn SetPosAt(self: ?*anyopaque, step: f64, pos: ?*anyopaque) void {
        C.QGraphicsItemAnimation_SetPosAt(@ptrCast(self), @floatCast(step), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#transformAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn TransformAt(self: ?*anyopaque, step: f64) ?*C.QTransform {
        return C.QGraphicsItemAnimation_TransformAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn RotationAt(self: ?*anyopaque, step: f64) f64 {
        return C.QGraphicsItemAnimation_RotationAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationList)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn RotationList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_f64 {
        const _arr: C.struct_libqt_list = C.QGraphicsItemAnimation_RotationList(@ptrCast(self));
        defer {
            const _pair: [*]C.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                C.libqt_free(_pair[_i].first);
                C.libqt_free(_pair[_i].second);
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_f64, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]struct_f64_f64 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setRotationAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64, angle: f64 ```
    pub fn SetRotationAt(self: ?*anyopaque, step: f64, angle: f64) void {
        C.QGraphicsItemAnimation_SetRotationAt(@ptrCast(self), @floatCast(step), @floatCast(angle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#xTranslationAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn XTranslationAt(self: ?*anyopaque, step: f64) f64 {
        return C.QGraphicsItemAnimation_XTranslationAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#yTranslationAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn YTranslationAt(self: ?*anyopaque, step: f64) f64 {
        return C.QGraphicsItemAnimation_YTranslationAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#translationList)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn TranslationList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_cqpointf {
        const _arr: C.struct_libqt_list = C.QGraphicsItemAnimation_TranslationList(@ptrCast(self));
        defer {
            const _pair: [*]C.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                C.libqt_free(_pair[_i].first);
                C.libqt_free(_pair[_i].second);
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_cqpointf, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]struct_f64_cqpointf = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTranslationAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64, dx: f64, dy: f64 ```
    pub fn SetTranslationAt(self: ?*anyopaque, step: f64, dx: f64, dy: f64) void {
        C.QGraphicsItemAnimation_SetTranslationAt(@ptrCast(self), @floatCast(step), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalScaleAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn VerticalScaleAt(self: ?*anyopaque, step: f64) f64 {
        return C.QGraphicsItemAnimation_VerticalScaleAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalScaleAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn HorizontalScaleAt(self: ?*anyopaque, step: f64) f64 {
        return C.QGraphicsItemAnimation_HorizontalScaleAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#scaleList)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn ScaleList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_cqpointf {
        const _arr: C.struct_libqt_list = C.QGraphicsItemAnimation_ScaleList(@ptrCast(self));
        defer {
            const _pair: [*]C.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                C.libqt_free(_pair[_i].first);
                C.libqt_free(_pair[_i].second);
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_cqpointf, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]struct_f64_cqpointf = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setScaleAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64, sx: f64, sy: f64 ```
    pub fn SetScaleAt(self: ?*anyopaque, step: f64, sx: f64, sy: f64) void {
        C.QGraphicsItemAnimation_SetScaleAt(@ptrCast(self), @floatCast(step), @floatCast(sx), @floatCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalShearAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn VerticalShearAt(self: ?*anyopaque, step: f64) f64 {
        return C.QGraphicsItemAnimation_VerticalShearAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalShearAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn HorizontalShearAt(self: ?*anyopaque, step: f64) f64 {
        return C.QGraphicsItemAnimation_HorizontalShearAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#shearList)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
    pub fn ShearList(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_cqpointf {
        const _arr: C.struct_libqt_list = C.QGraphicsItemAnimation_ShearList(@ptrCast(self));
        defer {
            const _pair: [*]C.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                C.libqt_free(_pair[_i].first);
                C.libqt_free(_pair[_i].second);
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_cqpointf, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]struct_f64_cqpointf = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setShearAt)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64, sh: f64, sv: f64 ```
    pub fn SetShearAt(self: ?*anyopaque, step: f64, sh: f64, sv: f64) void {
        C.QGraphicsItemAnimation_SetShearAt(@ptrCast(self), @floatCast(step), @floatCast(sh), @floatCast(sv));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#clear)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QGraphicsItemAnimation_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setStep)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, x: f64 ```
    pub fn SetStep(self: ?*anyopaque, x: f64) void {
        C.QGraphicsItemAnimation_SetStep(@ptrCast(self), @floatCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn BeforeAnimationStep(self: ?*anyopaque, step: f64) void {
        C.QGraphicsItemAnimation_BeforeAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, f64) callconv(.c) void ```
    pub fn OnBeforeAnimationStep(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QGraphicsItemAnimation_OnBeforeAnimationStep(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn QBaseBeforeAnimationStep(self: ?*anyopaque, step: f64) void {
        C.QGraphicsItemAnimation_QBaseBeforeAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn AfterAnimationStep(self: ?*anyopaque, step: f64) void {
        C.QGraphicsItemAnimation_AfterAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, f64) callconv(.c) void ```
    pub fn OnAfterAnimationStep(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QGraphicsItemAnimation_OnAfterAnimationStep(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, step: f64 ```
    pub fn QBaseAfterAnimationStep(self: ?*anyopaque, step: f64) void {
        C.QGraphicsItemAnimation_QBaseAfterAnimationStep(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGraphicsItemAnimation_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QGraphicsItemAnimation_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsItemAnimation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsItemAnimation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsItemAnimation_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsItemAnimation_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsItemAnimation_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsItemAnimation_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsItemAnimation_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsItemAnimation_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsItemAnimation_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsItemAnimation_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsItemAnimation_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsItemAnimation_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsItemAnimation_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsItemAnimation_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsItemAnimation_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsItemAnimation_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsItemAnimation_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsItemAnimation_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsItemAnimation_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsItemAnimation_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsItemAnimation_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QGraphicsItemAnimation_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QGraphicsItemAnimation_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QGraphicsItemAnimation_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGraphicsItemAnimation_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGraphicsItemAnimation_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGraphicsItemAnimation_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGraphicsItemAnimation_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGraphicsItemAnimation_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QGraphicsItemAnimation_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGraphicsItemAnimation_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGraphicsItemAnimation_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation, slot: fn (?*C.QGraphicsItemAnimation, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsItemAnimation_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGraphicsItemAnimation ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGraphicsItemAnimation_Delete(@ptrCast(self));
    }
};
