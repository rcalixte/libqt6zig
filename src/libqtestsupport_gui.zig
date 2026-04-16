const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPoint = @import("libqt6").QPoint;
const QWindow = @import("libqt6").QWindow;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html)
pub const QTest__QTouchEventSequence = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTest__QTouchEventSequence,

    pub const _is_QTest__QTouchEventSequence = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    pub fn Press(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Press(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    pub fn Move(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Move(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    pub fn Release(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Release(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#stationary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn Stationary(self: QTest__QTouchEventSequence, touchId: i32) QTest__QTouchEventSequence {
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Stationary(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn Commit(self: QTest__QTouchEventSequence, processEvents: bool) bool {
        return qtc.QTest__QTouchEventSequence_Commit(@ptrCast(self.ptr), processEvents);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    /// ` window: QWindow `
    ///
    pub fn Press3(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype, window: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Press3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(window.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    /// ` window: QWindow `
    ///
    pub fn Move3(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype, window: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Move3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(window.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    /// ` pt: QPoint `
    ///
    /// ` window: QWindow `
    ///
    pub fn Release3(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype, window: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Release3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(window.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    pub fn Delete(self: QTest__QTouchEventSequence) void {
        qtc.QTest__QTouchEventSequence_Delete(@ptrCast(self.ptr));
    }
};
