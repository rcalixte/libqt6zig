const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
pub const qscidocument = struct {
    /// New constructs a new QsciDocument object.
    ///
    pub fn New() QtC.QsciDocument {
        return qtc.QsciDocument_new();
    }

    /// New2 constructs a new QsciDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QsciDocument `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QsciDocument {
        return qtc.QsciDocument_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QsciDocument `
    ///
    /// ` param1: QtC.QsciDocument `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QsciDocument_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QsciDocument `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QsciDocument_Delete(@ptrCast(self));
    }
};
