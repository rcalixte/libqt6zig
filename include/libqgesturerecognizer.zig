const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QEvent = @import("libqt6").QEvent;
const QGesture = @import("libqt6").QGesture;
const QObject = @import("libqt6").QObject;
const qgesturerecognizer_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html)
pub const QGestureRecognizer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGestureRecognizer,

    pub const _is_QGestureRecognizer = {};

    /// New constructs a new QGestureRecognizer object.
    ///
    pub fn New() QGestureRecognizer {
        return .{ .ptr = qtc.QGestureRecognizer_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn Create(self: QGestureRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.QGestureRecognizer_Create(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` callback: *const fn (self: QGestureRecognizer, target: QObject) callconv(.c) QGesture `
    ///
    pub fn OnCreate(self: QGestureRecognizer, callback: *const fn (QGestureRecognizer, QObject) callconv(.c) QGesture) void {
        qtc.QGestureRecognizer_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn SuperCreate(self: QGestureRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.QGestureRecognizer_SuperCreate(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` state: QGesture `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn Recognize(self: QGestureRecognizer, state: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(state)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGestureRecognizer_Recognize(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` callback: *const fn (self: QGestureRecognizer, state: QGesture, watched: QObject, event: QEvent) callconv(.c) i32 `
    ///
    pub fn OnRecognize(self: QGestureRecognizer, callback: *const fn (QGestureRecognizer, QGesture, QObject, QEvent) callconv(.c) i32) void {
        qtc.QGestureRecognizer_OnRecognize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRecognize` instead
    ///
    pub const QBaseRecognize = SuperRecognize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` state: QGesture `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn SuperRecognize(self: QGestureRecognizer, state: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(state)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGestureRecognizer_SuperRecognize(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` state: QGesture `
    ///
    pub fn Reset(self: QGestureRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.QGestureRecognizer_Reset(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` callback: *const fn (self: QGestureRecognizer, state: QGesture) callconv(.c) void `
    ///
    pub fn OnReset(self: QGestureRecognizer, callback: *const fn (QGestureRecognizer, QGesture) callconv(.c) void) void {
        qtc.QGestureRecognizer_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` state: QGesture `
    ///
    pub fn SuperReset(self: QGestureRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.QGestureRecognizer_SuperReset(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
    ///
    /// ## Parameter(s):
    ///
    /// ` recognizer: QGestureRecognizer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn RegisterRecognizer(recognizer: anytype) i32 {
        comptime _ = @TypeOf(recognizer)._is_QGestureRecognizer;
        return qtc.QGestureRecognizer_RegisterRecognizer(@ptrCast(recognizer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UnregisterRecognizer(typeVal: i32) void {
        qtc.QGestureRecognizer_UnregisterRecognizer(@bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` param1: QGestureRecognizer `
    ///
    pub fn OperatorAssign(self: QGestureRecognizer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QGestureRecognizer;
        qtc.QGestureRecognizer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#dtor.QGestureRecognizer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGestureRecognizer `
    ///
    pub fn Delete(self: QGestureRecognizer) void {
        qtc.QGestureRecognizer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#public-types)
pub const enums = struct {
    pub const ResultFlag = enum(i32) {
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
