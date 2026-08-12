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

    /// ### DEPRECATED: Use `press` instead
    ///
    pub const Press = press;

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
    pub fn press(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Press(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

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
    pub fn move(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Move(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

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
    pub fn release(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Release(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `stationary` instead
    ///
    pub const Stationary = stationary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#stationary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` touchId: i32 `
    ///
    pub fn stationary(self: QTest__QTouchEventSequence, touchId: i32) QTest__QTouchEventSequence {
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Stationary(@ptrCast(self.ptr), @bitCast(touchId)) };
    }

    /// ### DEPRECATED: Use `commit` instead
    ///
    pub const Commit = commit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#commit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    /// ` processEvents: bool `
    ///
    pub fn commit(self: QTest__QTouchEventSequence, processEvents: bool) bool {
        return qtc.QTest__QTouchEventSequence_Commit(@ptrCast(self.ptr), processEvents);
    }

    /// ### DEPRECATED: Use `press3` instead
    ///
    pub const Press3 = press3;

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
    pub fn press3(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype, window: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Press3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(window.ptr)) };
    }

    /// ### DEPRECATED: Use `move3` instead
    ///
    pub const Move3 = move3;

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
    pub fn move3(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype, window: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Move3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(window.ptr)) };
    }

    /// ### DEPRECATED: Use `release3` instead
    ///
    pub const Release3 = release3;

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
    pub fn release3(self: QTest__QTouchEventSequence, touchId: i32, pt: anytype, window: anytype) QTest__QTouchEventSequence {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QTest__QTouchEventSequence_Release3(@ptrCast(self.ptr), @bitCast(touchId), @ptrCast(pt.ptr), @ptrCast(window.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTest__QTouchEventSequence `
    ///
    pub fn delete(self: QTest__QTouchEventSequence) void {
        qtc.QTest__QTouchEventSequence_Delete(@ptrCast(self.ptr));
    }
};
