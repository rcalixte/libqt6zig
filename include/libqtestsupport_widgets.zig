const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QEventPoint = @import("libqt6").QEventPoint;
const QPoint = @import("libqt6").QPoint;
const QWidget = @import("libqt6").QWidget;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html)
pub const QTest__QTouchEventWidgetSequence = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTest__QTouchEventWidgetSequence,

    pub const _is_QTest__QTouchEventWidgetSequence = {};
    pub const _is_QTest__QTouchEventSequence = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTest::QTouchEventWidgetSequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTest__QTouchEventWidgetSequence `
    ///
    pub fn new(param1: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(param1)._is_QTest__QTouchEventWidgetSequence;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `press` instead
    ///
    pub const Press = press;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    pub fn press(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Press(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    pub fn move(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Move(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    pub fn release(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Release(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `stationary` instead
    ///
    pub const Stationary = stationary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn stationary(self: QTest__QTouchEventWidgetSequence, touchId: i32) QTest__QTouchEventWidgetSequence {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Stationary(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `onStationary` instead
    ///
    pub const OnStationary = onStationary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` callback: *const fn (self: QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QTest__QTouchEventWidgetSequence `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStationary(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, i32) callconv(.c) QTest__QTouchEventWidgetSequence) void {
        qtc.QTest__QTouchEventWidgetSequence_OnStationary(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStationary` instead
    ///
    pub const SuperStationary = superStationary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn superStationary(self: QTest__QTouchEventWidgetSequence, touchId: i32) QTest__QTouchEventWidgetSequence {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_SuperStationary(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `commit` instead
    ///
    pub const Commit = commit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn commit(self: QTest__QTouchEventWidgetSequence, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_Commit(@ptrCast(self.ptr), processEvents);
    }

    /// ### DEPRECATED: Use `onCommit` instead
    ///
    pub const OnCommit = onCommit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` callback: *const fn (self: QTest__QTouchEventWidgetSequence, processEvents: bool) callconv(.c) bool `
    ///
    pub fn onCommit(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, bool) callconv(.c) bool) void {
        qtc.QTest__QTouchEventWidgetSequence_OnCommit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCommit` instead
    ///
    pub const SuperCommit = superCommit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn superCommit(self: QTest__QTouchEventWidgetSequence, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_SuperCommit(@ptrCast(self.ptr), processEvents);
    }

    /// ### DEPRECATED: Use `press3` instead
    ///
    pub const Press3 = press3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    /// ` widget: QWidget `
    ///
    pub fn press3(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype, widget: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Press3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `move3` instead
    ///
    pub const Move3 = move3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    /// ` widget: QWidget `
    ///
    pub fn move3(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype, widget: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Move3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `release3` instead
    ///
    pub const Release3 = release3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    /// ` widget: QWidget `
    ///
    pub fn release3(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype, widget: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Release3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `point` instead
    ///
    pub const Point = point;

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn point(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Point(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `superPoint` instead
    ///
    pub const SuperPoint = superPoint;

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn superPoint(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_SuperPoint(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `onPoint` instead
    ///
    pub const OnPoint = onPoint;

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTest__QTouchEventWidgetSequence`
    ///
    /// ` callback: *const fn (self: QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QEventPoint `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPoint(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, i32) callconv(.c) QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPoint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointOrPreviousPoint` instead
    ///
    pub const PointOrPreviousPoint = pointOrPreviousPoint;

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn pointOrPreviousPoint(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_PointOrPreviousPoint(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `superPointOrPreviousPoint` instead
    ///
    pub const SuperPointOrPreviousPoint = superPointOrPreviousPoint;

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn superPointOrPreviousPoint(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_SuperPointOrPreviousPoint(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `onPointOrPreviousPoint` instead
    ///
    pub const OnPointOrPreviousPoint = onPointOrPreviousPoint;

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTest__QTouchEventWidgetSequence`
    ///
    /// ` callback: *const fn (self: QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QEventPoint `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPointOrPreviousPoint(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, i32) callconv(.c) QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPointOrPreviousPoint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    pub fn delete(self: QTest__QTouchEventWidgetSequence) void {
        qtc.QTest__QTouchEventWidgetSequence_Delete(@ptrCast(self.ptr));
    }
};
