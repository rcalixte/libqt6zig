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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGestureRecognizer object in C++ memory
    ///
    pub fn new() QGestureRecognizer {
        return .{ .ptr = qtc.QGestureRecognizer_new() };
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn create(self: QGestureRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.QGestureRecognizer_Create(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

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
    pub fn onCreate(self: QGestureRecognizer, callback: *const fn (QGestureRecognizer, QObject) callconv(.c) QGesture) void {
        qtc.QGestureRecognizer_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

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
    pub fn superCreate(self: QGestureRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.QGestureRecognizer_SuperCreate(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `recognize` instead
    ///
    pub const Recognize = recognize;

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
    pub fn recognize(self: QGestureRecognizer, state: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(state)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGestureRecognizer_Recognize(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `onRecognize` instead
    ///
    pub const OnRecognize = onRecognize;

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
    pub fn onRecognize(self: QGestureRecognizer, callback: *const fn (QGestureRecognizer, QGesture, QObject, QEvent) callconv(.c) i32) void {
        qtc.QGestureRecognizer_OnRecognize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRecognize` instead
    ///
    pub const SuperRecognize = superRecognize;

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
    pub fn superRecognize(self: QGestureRecognizer, state: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(state)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGestureRecognizer_SuperRecognize(@ptrCast(self.ptr), @ptrCast(state.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` state: QGesture `
    ///
    pub fn reset(self: QGestureRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.QGestureRecognizer_Reset(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: QGestureRecognizer, callback: *const fn (QGestureRecognizer, QGesture) callconv(.c) void) void {
        qtc.QGestureRecognizer_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

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
    pub fn superReset(self: QGestureRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.QGestureRecognizer_SuperReset(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `registerRecognizer` instead
    ///
    pub const RegisterRecognizer = registerRecognizer;

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
    pub fn registerRecognizer(recognizer: anytype) i32 {
        comptime _ = @TypeOf(recognizer)._is_QGestureRecognizer;
        return qtc.QGestureRecognizer_RegisterRecognizer(@ptrCast(recognizer.ptr));
    }

    /// ### DEPRECATED: Use `unregisterRecognizer` instead
    ///
    pub const UnregisterRecognizer = unregisterRecognizer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn unregisterRecognizer(typeVal: i32) void {
        qtc.QGestureRecognizer_UnregisterRecognizer(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGestureRecognizer `
    ///
    /// ` param1: QGestureRecognizer `
    ///
    pub fn operatorAssign(self: QGestureRecognizer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QGestureRecognizer;
        qtc.QGestureRecognizer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#dtor.QGestureRecognizer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGestureRecognizer `
    ///
    pub fn delete(self: QGestureRecognizer) void {
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
