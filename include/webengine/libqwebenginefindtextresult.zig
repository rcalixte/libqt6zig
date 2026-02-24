const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html)
pub const qwebenginefindtextresult = struct {
    /// New constructs a new QWebEngineFindTextResult object.
    ///
    pub fn New() QtC.QWebEngineFindTextResult {
        return qtc.QWebEngineFindTextResult_new();
    }

    /// New2 constructs a new QWebEngineFindTextResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineFindTextResult `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QWebEngineFindTextResult {
        return qtc.QWebEngineFindTextResult_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#numberOfMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFindTextResult `
    ///
    pub fn NumberOfMatches(self: ?*anyopaque) i32 {
        return qtc.QWebEngineFindTextResult_NumberOfMatches(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#activeMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFindTextResult `
    ///
    pub fn ActiveMatch(self: ?*anyopaque) i32 {
        return qtc.QWebEngineFindTextResult_ActiveMatch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFindTextResult `
    ///
    /// ` other: QtC.QWebEngineFindTextResult `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFindTextResult_OperatorAssign(@ptrCast(self), @ptrCast(other));
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
    /// ` self: QtC.QWebEngineFindTextResult `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QWebEngineFindTextResult_Delete(@ptrCast(self));
    }
};
