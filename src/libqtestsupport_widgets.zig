const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html)
pub const qtest__qtoucheventwidgetsequence = struct {
    /// New constructs a new QTest::QTouchEventWidgetSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QTest__QTouchEventWidgetSequence `
    ///
    pub fn New(param1: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn Press(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Press(@ptrCast(self), @bitCast(touchId), @ptrCast(pt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn Move(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Move(@ptrCast(self), @bitCast(touchId), @ptrCast(pt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn Release(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Release(@ptrCast(self), @bitCast(touchId), @ptrCast(pt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn Stationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Stationary(@ptrCast(self), @bitCast(touchId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` callback: *const fn (self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QtC.QTest__QTouchEventWidgetSequence `
    ///
    pub fn OnStationary(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QTest__QTouchEventWidgetSequence) void {
        qtc.QTest__QTouchEventWidgetSequence_OnStationary(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn SuperStationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_SuperStationary(@ptrCast(self), @bitCast(touchId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn Commit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_Commit(@ptrCast(self), processEvents);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` callback: *const fn (self: QtC.QTest__QTouchEventWidgetSequence, processEvents: bool) callconv(.c) bool `
    ///
    pub fn OnCommit(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QTest__QTouchEventWidgetSequence_OnCommit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn SuperCommit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_SuperCommit(@ptrCast(self), processEvents);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Press3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Press3(@ptrCast(self), @bitCast(touchId), @ptrCast(pt), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Move3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Move3(@ptrCast(self), @bitCast(touchId), @ptrCast(pt), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Release3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Release3(@ptrCast(self), @bitCast(touchId), @ptrCast(pt), @ptrCast(widget));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn Point(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_Point(@ptrCast(self), @bitCast(touchId));
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
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn SuperPoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_SuperPoint(@ptrCast(self), @bitCast(touchId));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence`
    ///
    /// ` callback: *const fn (self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QtC.QEventPoint `
    ///
    pub fn OnPoint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPoint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn PointOrPreviousPoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_PointOrPreviousPoint(@ptrCast(self), @bitCast(touchId));
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
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn SuperPointOrPreviousPoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_SuperPointOrPreviousPoint(@ptrCast(self), @bitCast(touchId));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence`
    ///
    /// ` callback: *const fn (self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QtC.QEventPoint `
    ///
    pub fn OnPointOrPreviousPoint(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPointOrPreviousPoint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTest__QTouchEventWidgetSequence `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QTest__QTouchEventWidgetSequence_Delete(@ptrCast(self));
    }
};
