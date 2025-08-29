const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgesturerecognizer_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qgesturerecognizer.html
pub const qgesturerecognizer = struct {
    /// New constructs a new QGestureRecognizer object.
    ///
    ///
    pub fn New() QtC.QGestureRecognizer {
        return qtc.QGestureRecognizer_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
    ///
    /// ``` self: QtC.QGestureRecognizer, target: QtC.QObject ```
    pub fn Create(self: ?*anyopaque, target: ?*anyopaque) QtC.QGesture {
        return qtc.QGestureRecognizer_Create(@ptrCast(self), @ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGestureRecognizer, slot: fn (self: QtC.QGestureRecognizer, target: QtC.QObject) callconv(.c) QtC.QGesture ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QGesture) void {
        qtc.QGestureRecognizer_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGestureRecognizer, target: QtC.QObject ```
    pub fn QBaseCreate(self: ?*anyopaque, target: ?*anyopaque) QtC.QGesture {
        return qtc.QGestureRecognizer_QBaseCreate(@ptrCast(self), @ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
    ///
    /// ``` self: QtC.QGestureRecognizer, state: QtC.QGesture, watched: QtC.QObject, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qgesturerecognizer_enums.ResultFlag ```
    pub fn Recognize(self: ?*anyopaque, state: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QGestureRecognizer_Recognize(@ptrCast(self), @ptrCast(state), @ptrCast(watched), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGestureRecognizer, slot: fn (self: QtC.QGestureRecognizer, state: QtC.QGesture, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) i32 ```
    pub fn OnRecognize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGestureRecognizer_OnRecognize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGestureRecognizer, state: QtC.QGesture, watched: QtC.QObject, event: QtC.QEvent ```
    ///
    /// Returns: ``` flag of qgesturerecognizer_enums.ResultFlag ```
    pub fn QBaseRecognize(self: ?*anyopaque, state: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.QGestureRecognizer_QBaseRecognize(@ptrCast(self), @ptrCast(state), @ptrCast(watched), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// ``` self: QtC.QGestureRecognizer, state: QtC.QGesture ```
    pub fn Reset(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QGestureRecognizer_Reset(@ptrCast(self), @ptrCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGestureRecognizer, slot: fn (self: QtC.QGestureRecognizer, state: QtC.QGesture) callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGestureRecognizer_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGestureRecognizer, state: QtC.QGesture ```
    pub fn QBaseReset(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QGestureRecognizer_QBaseReset(@ptrCast(self), @ptrCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
    ///
    /// ``` recognizer: QtC.QGestureRecognizer ```
    ///
    /// Returns: ``` qnamespace_enums.GestureType ```
    pub fn RegisterRecognizer(recognizer: ?*anyopaque) i64 {
        return qtc.QGestureRecognizer_RegisterRecognizer(@ptrCast(recognizer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
    ///
    /// ``` typeVal: qnamespace_enums.GestureType ```
    pub fn UnregisterRecognizer(typeVal: i64) void {
        qtc.QGestureRecognizer_UnregisterRecognizer(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
    ///
    /// ``` self: QtC.QGestureRecognizer, param1: QtC.QGestureRecognizer ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGestureRecognizer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#dtor.QGestureRecognizer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGestureRecognizer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGestureRecognizer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgesturerecognizer.html#types
pub const enums = struct {
    pub const ResultFlag = enum {
        pub const Ignore: i32 = 1;
        pub const MayBeGesture: i32 = 2;
        pub const TriggerGesture: i32 = 4;
        pub const FinishGesture: i32 = 8;
        pub const CancelGesture: i32 = 16;
        pub const ResultState_Mask: i32 = 255;
        pub const ConsumeEventHint: i32 = 256;
        pub const ResultHint_Mask: i32 = 65280;
    };
};
