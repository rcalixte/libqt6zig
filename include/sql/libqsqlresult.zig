const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qsqlresult.html
pub const qsqlresult = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlresult.html#handle)
    ///
    /// ``` self: QtC.QSqlResult ```
    pub fn Handle(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlResult_Handle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlresult.html#dtor.QSqlResult)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlResult ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlResult_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsqlresult.html#types
pub const enums = struct {
    pub const BindingSyntax = enum {
        pub const PositionalBinding: i32 = 0;
        pub const NamedBinding: i32 = 1;
    };
};
