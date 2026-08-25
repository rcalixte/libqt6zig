const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html)
pub const QSqlResult = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlResult,

    pub const _is_QSqlResult = {};

    /// ### DEPRECATED: Use `handle` instead
    ///
    pub const Handle = handle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlResult `
    ///
    pub fn handle(self: QSqlResult) QVariant {
        return .{ .ptr = qtc.QSqlResult_Handle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#dtor.QSqlResult)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlResult `
    ///
    pub fn delete(self: QSqlResult) void {
        qtc.QSqlResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#public-types)
pub const enums = struct {
    pub const BindingSyntax = enum {
        pub const PositionalBinding: i32 = 0;
        pub const NamedBinding: i32 = 1;
    };
};
