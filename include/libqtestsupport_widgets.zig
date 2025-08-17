const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html
pub const qtest__qtoucheventwidgetsequence = struct {
    /// New constructs a new QTest::QTouchEventWidgetSequence object.
    ///
    /// ``` param1: QtC.QTest__QTouchEventWidgetSequence ```
    pub fn New(param1: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32, pt: QtC.QPoint ```
    pub fn Press(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Press(@ptrCast(self), @intCast(touchId), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32, pt: QtC.QPoint ```
    pub fn Move(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Move(@ptrCast(self), @intCast(touchId), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32, pt: QtC.QPoint ```
    pub fn Release(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Release(@ptrCast(self), @intCast(touchId), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32 ```
    pub fn Stationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Stationary(@ptrCast(self), @intCast(touchId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, slot: fn (self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QtC.QTest__QTouchEventWidgetSequence ```
    pub fn OnStationary(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QTest__QTouchEventWidgetSequence) void {
        qtc.QTest__QTouchEventWidgetSequence_OnStationary(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32 ```
    pub fn QBaseStationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_QBaseStationary(@ptrCast(self), @intCast(touchId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, processEvents: bool ```
    pub fn Commit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_Commit(@ptrCast(self), processEvents);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, slot: fn (self: QtC.QTest__QTouchEventWidgetSequence, processEvents: bool) callconv(.c) bool ```
    pub fn OnCommit(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QTest__QTouchEventWidgetSequence_OnCommit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, processEvents: bool ```
    pub fn QBaseCommit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventWidgetSequence_QBaseCommit(@ptrCast(self), processEvents);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32, pt: QtC.QPoint, widget: QtC.QWidget ```
    pub fn Press3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Press3(@ptrCast(self), @intCast(touchId), @ptrCast(pt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32, pt: QtC.QPoint, widget: QtC.QWidget ```
    pub fn Move3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Move3(@ptrCast(self), @intCast(touchId), @ptrCast(pt), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32, pt: QtC.QPoint, widget: QtC.QWidget ```
    pub fn Release3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, widget: ?*anyopaque) QtC.QTest__QTouchEventWidgetSequence {
        return qtc.QTest__QTouchEventWidgetSequence_Release3(@ptrCast(self), @intCast(touchId), @ptrCast(pt), @ptrCast(widget));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32 ```
    pub fn Point(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_Point(@ptrCast(self), @intCast(touchId));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32 ```
    pub fn QBasePoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_QBasePoint(@ptrCast(self), @intCast(touchId));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, slot: fn (self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QtC.QEventPoint ```
    pub fn OnPoint(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPoint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32 ```
    pub fn PointOrPreviousPoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_PointOrPreviousPoint(@ptrCast(self), @intCast(touchId));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32 ```
    pub fn QBasePointOrPreviousPoint(self: ?*anyopaque, touchId: i32) QtC.QEventPoint {
        return qtc.QTest__QTouchEventWidgetSequence_QBasePointOrPreviousPoint(@ptrCast(self), @intCast(touchId));
    }

    /// Inherited from QTest::QTouchEventSequence
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence, slot: fn (self: QtC.QTest__QTouchEventWidgetSequence, touchId: i32) callconv(.c) QtC.QEventPoint ```
    pub fn OnPointOrPreviousPoint(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QEventPoint) void {
        qtc.QTest__QTouchEventWidgetSequence_OnPointOrPreviousPoint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTest__QTouchEventWidgetSequence ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTest__QTouchEventWidgetSequence_Delete(@ptrCast(self));
    }
};
