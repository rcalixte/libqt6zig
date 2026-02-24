const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html)
pub const qtest__qtoucheventsequence = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn Press(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Press(@ptrCast(self), @bitCast(touchId), @ptrCast(pt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn Move(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Move(@ptrCast(self), @bitCast(touchId), @ptrCast(pt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn Release(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Release(@ptrCast(self), @bitCast(touchId), @ptrCast(pt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#stationary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn Stationary(self: ?*anyopaque, touchId: i32) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Stationary(@ptrCast(self), @bitCast(touchId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn Commit(self: ?*anyopaque, processEvents: bool) bool {
        return qtc.QTest__QTouchEventSequence_Commit(@ptrCast(self), processEvents);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    /// ` window: QtC.QWindow `
    ///
    pub fn Press3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Press3(@ptrCast(self), @bitCast(touchId), @ptrCast(pt), @ptrCast(window));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    /// ` window: QtC.QWindow `
    ///
    pub fn Move3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Move3(@ptrCast(self), @bitCast(touchId), @ptrCast(pt), @ptrCast(window));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QtC.QPoint `
    ///
    /// ` window: QtC.QWindow `
    ///
    pub fn Release3(self: ?*anyopaque, touchId: i32, pt: ?*anyopaque, window: ?*anyopaque) QtC.QTest__QTouchEventSequence {
        return qtc.QTest__QTouchEventSequence_Release3(@ptrCast(self), @bitCast(touchId), @ptrCast(pt), @ptrCast(window));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTest__QTouchEventSequence `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QTest__QTouchEventSequence_Delete(@ptrCast(self));
    }
};
