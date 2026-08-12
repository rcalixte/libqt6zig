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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciDocument object in C++ memory
    ///
    pub fn new() QsciDocument {
        return .{ .ptr = qtc.QsciDocument_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QsciDocument `
    ///
    pub fn new2(param1: anytype) QsciDocument {
        comptime _ = @TypeOf(param1)._is_QsciDocument;
        return .{ .ptr = qtc.QsciDocument_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciDocument `
    ///
    /// ` param1: QsciDocument `
    ///
    pub fn operatorAssign(self: QsciDocument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QsciDocument;
        qtc.QsciDocument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciDocument `
    ///
    pub fn delete(self: QsciDocument) void {
        qtc.QsciDocument_Delete(@ptrCast(self.ptr));
    }
};
