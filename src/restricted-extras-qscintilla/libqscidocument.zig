const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
pub const QsciDocument = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciDocument,

    pub const _is_QsciDocument = {};

    /// New constructs a new QsciDocument object.
    ///
    pub fn New() QsciDocument {
        return .{ .ptr = qtc.QsciDocument_new() };
    }

    /// New2 constructs a new QsciDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QsciDocument `
    ///
    pub fn New2(param1: anytype) QsciDocument {
        comptime _ = @TypeOf(param1)._is_QsciDocument;
        return .{ .ptr = qtc.QsciDocument_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciDocument `
    ///
    /// ` param1: QsciDocument `
    ///
    pub fn OperatorAssign(self: QsciDocument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QsciDocument;
        qtc.QsciDocument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QsciDocument `
    ///
    pub fn Delete(self: QsciDocument) void {
        qtc.QsciDocument_Delete(@ptrCast(self.ptr));
    }
};
