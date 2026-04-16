const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html)
pub const QWebEngineFindTextResult = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineFindTextResult,

    pub const _is_QWebEngineFindTextResult = {};

    /// New constructs a new QWebEngineFindTextResult object.
    ///
    pub fn New() QWebEngineFindTextResult {
        return .{ .ptr = qtc.QWebEngineFindTextResult_new() };
    }

    /// New2 constructs a new QWebEngineFindTextResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineFindTextResult `
    ///
    pub fn New2(other: anytype) QWebEngineFindTextResult {
        comptime _ = @TypeOf(other)._is_QWebEngineFindTextResult;
        return .{ .ptr = qtc.QWebEngineFindTextResult_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#numberOfMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    pub fn NumberOfMatches(self: QWebEngineFindTextResult) i32 {
        return qtc.QWebEngineFindTextResult_NumberOfMatches(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#activeMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    pub fn ActiveMatch(self: QWebEngineFindTextResult) i32 {
        return qtc.QWebEngineFindTextResult_ActiveMatch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    /// ` other: QWebEngineFindTextResult `
    ///
    pub fn OperatorAssign(self: QWebEngineFindTextResult, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFindTextResult;
        qtc.QWebEngineFindTextResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#dtor.QWebEngineFindTextResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    pub fn Delete(self: QWebEngineFindTextResult) void {
        qtc.QWebEngineFindTextResult_Delete(@ptrCast(self.ptr));
    }
};
