const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html
pub const qtest__qtoucheventsequence = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#press)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, touchId: i32, pt: QtC.QPoint ```
    pub fn Press(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Press(@ptrCast(self), @intCast(touchId), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#move)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, touchId: i32, pt: QtC.QPoint ```
    pub fn Move(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Move(@ptrCast(self), @intCast(touchId), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#release)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, touchId: i32, pt: QtC.QPoint ```
    pub fn Release(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Release(@ptrCast(self), @intCast(touchId), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#stationary)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, touchId: i32 ```
    pub fn Stationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Stationary(@ptrCast(self), @intCast(touchId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#commit)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, processEvents: bool ```
    pub fn Commit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventSequence_Commit(@ptrCast(self), processEvents);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#press)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, touchId: i32, pt: QtC.QPoint, window: QtC.QWindow ```
    pub fn Press3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Press3(@ptrCast(self), @intCast(touchId), @ptrCast(pt), @ptrCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#move)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, touchId: i32, pt: QtC.QPoint, window: QtC.QWindow ```
    pub fn Move3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Move3(@ptrCast(self), @intCast(touchId), @ptrCast(pt), @ptrCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#release)
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence, touchId: i32, pt: QtC.QPoint, window: QtC.QWindow ```
    pub fn Release3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Release3(@ptrCast(self), @intCast(touchId), @ptrCast(pt), @ptrCast(window));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTest__QTouchEventSequence ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTest__QTouchEventSequence_Delete(@ptrCast(self));
    }
};
