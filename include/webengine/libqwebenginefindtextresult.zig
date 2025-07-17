const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwebenginefindtextresult.html
pub const qwebenginefindtextresult = struct {
    /// New constructs a new QWebEngineFindTextResult object.
    ///
    ///
    pub fn New() QtC.QWebEngineFindTextResult {
        return qtc.QWebEngineFindTextResult_new();
    }

    /// New2 constructs a new QWebEngineFindTextResult object.
    ///
    /// ``` other: QtC.QWebEngineFindTextResult ```
    pub fn New2(other: ?*anyopaque) QtC.QWebEngineFindTextResult {
        return qtc.QWebEngineFindTextResult_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#numberOfMatches)
    ///
    /// ``` self: QtC.QWebEngineFindTextResult ```
    pub fn NumberOfMatches(self: ?*anyopaque) i32 {
        return qtc.QWebEngineFindTextResult_NumberOfMatches(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#activeMatch)
    ///
    /// ``` self: QtC.QWebEngineFindTextResult ```
    pub fn ActiveMatch(self: ?*anyopaque) i32 {
        return qtc.QWebEngineFindTextResult_ActiveMatch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#operator-eq)
    ///
    /// ``` self: QtC.QWebEngineFindTextResult, other: QtC.QWebEngineFindTextResult ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFindTextResult_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#dtor.QWebEngineFindTextResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineFindTextResult ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineFindTextResult_Delete(@ptrCast(self));
    }
};
