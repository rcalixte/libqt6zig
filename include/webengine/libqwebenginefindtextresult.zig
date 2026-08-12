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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineFindTextResult object in C++ memory
    ///
    pub fn new() QWebEngineFindTextResult {
        return .{ .ptr = qtc.QWebEngineFindTextResult_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineFindTextResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineFindTextResult `
    ///
    pub fn new2(other: anytype) QWebEngineFindTextResult {
        comptime _ = @TypeOf(other)._is_QWebEngineFindTextResult;
        return .{ .ptr = qtc.QWebEngineFindTextResult_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `numberOfMatches` instead
    ///
    pub const NumberOfMatches = numberOfMatches;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#numberOfMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    pub fn numberOfMatches(self: QWebEngineFindTextResult) i32 {
        return qtc.QWebEngineFindTextResult_NumberOfMatches(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activeMatch` instead
    ///
    pub const ActiveMatch = activeMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#activeMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    pub fn activeMatch(self: QWebEngineFindTextResult) i32 {
        return qtc.QWebEngineFindTextResult_ActiveMatch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    /// ` other: QWebEngineFindTextResult `
    ///
    pub fn operatorAssign(self: QWebEngineFindTextResult, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFindTextResult;
        qtc.QWebEngineFindTextResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#dtor.QWebEngineFindTextResult)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFindTextResult `
    ///
    pub fn delete(self: QWebEngineFindTextResult) void {
        qtc.QWebEngineFindTextResult_Delete(@ptrCast(self.ptr));
    }
};
