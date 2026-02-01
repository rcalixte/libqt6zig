const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html)
pub const qsqlresult = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlResult `
    ///
    pub fn Handle(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlResult_Handle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#dtor.QSqlResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSqlResult `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlResult_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#public-types)
pub const enums = struct {
    pub const BindingSyntax = enum(i32) {
        pub const PositionalBinding: i32 = 0;
        pub const NamedBinding: i32 = 1;
    };
};
