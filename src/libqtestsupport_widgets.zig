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

    /// New constructs a new QTest::QTouchEventWidgetSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTest__QTouchEventWidgetSequence `
    ///
    pub fn New(param1: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(param1)._is_QTest__QTouchEventWidgetSequence;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_new(@ptrCast(param1.ptr)) };
    }

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
    pub fn Press(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Press(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

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
    pub fn Move(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Move(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

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
    pub fn Release(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Release(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn Stationary(self: QTest__QTouchEventWidgetSequence, touchId: i32) QTest__QTouchEventWidgetSequence {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Stationary(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

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
    pub fn OnStationary(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, i32) callconv(.c) QTest__QTouchEventWidgetSequence) void {
        qtc.QTest__QTouchEventWidgetSequence_OnStationary(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStationary` instead
    ///
    pub const QBaseStationary = SuperStationary;

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
    pub fn SuperStationary(self: QTest__QTouchEventWidgetSequence, touchId: i32) QTest__QTouchEventWidgetSequence {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_SuperStationary(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn Commit(self: QTest__QTouchEventWidgetSequence, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_Commit(@ptrCast(self.ptr), processEvents);
    }

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
    pub fn OnCommit(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, bool) callconv(.c) bool) void {
        qtc.QTest__QTouchEventWidgetSequence_OnCommit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCommit` instead
    ///
    pub const QBaseCommit = SuperCommit;

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
    pub fn SuperCommit(self: QTest__QTouchEventWidgetSequence, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_SuperCommit(@ptrCast(self.ptr), processEvents);
    }

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
    pub fn Press3(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype, widget: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Press3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(widget.ptr)) };
    }

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
    pub fn Move3(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype, widget: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Move3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(widget.ptr)) };
    }

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
    pub fn Release3(self: QTest__QTouchEventWidgetSequence, touchId: i32, pt: anytype, widget: anytype) QTest__QTouchEventWidgetSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Release3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(widget.ptr)) };
    }

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
    pub fn Point(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_Point(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `SuperPoint` instead
    ///
    pub const QBasePoint = SuperPoint;

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
    pub fn SuperPoint(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_SuperPoint(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

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
    pub fn OnPoint(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, i32) callconv(.c) QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPoint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn PointOrPreviousPoint(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_PointOrPreviousPoint(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `SuperPointOrPreviousPoint` instead
    ///
    pub const QBasePointOrPreviousPoint = SuperPointOrPreviousPoint;

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
    pub fn SuperPointOrPreviousPoint(self: QTest__QTouchEventWidgetSequence, touchId: i32) QEventPoint {
        return .{ .ptr = qtc.QTest__QTouchEventWidgetSequence_SuperPointOrPreviousPoint(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

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
    pub fn OnPointOrPreviousPoint(self: QTest__QTouchEventWidgetSequence, callback: *const fn (QTest__QTouchEventWidgetSequence, i32) callconv(.c) QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPointOrPreviousPoint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTest__QTouchEventWidgetSequence `
    ///
    pub fn Delete(self: QTest__QTouchEventWidgetSequence) void {
        qtc.QTest__QTouchEventWidgetSequence_Delete(@ptrCast(self.ptr));
    }
};
