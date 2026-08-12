const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringtokenizerbasebase.html)
pub const QStringTokenizerBaseBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringtokenizerbasebase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStringTokenizerBaseBase,

    pub const _is_QStringTokenizerBaseBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStringTokenizerBaseBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStringTokenizerBaseBase `
    ///
    pub fn new(other: anytype) QStringTokenizerBaseBase {
        comptime _ = @TypeOf(other)._is_QStringTokenizerBaseBase;
        return .{ .ptr = qtc.QStringTokenizerBaseBase_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStringTokenizerBaseBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStringTokenizerBaseBase `
    ///
    pub fn new2(param1: anytype) QStringTokenizerBaseBase {
        comptime _ = @TypeOf(param1)._is_QStringTokenizerBaseBase;
        return .{ .ptr = qtc.QStringTokenizerBaseBase_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QStringTokenizerBaseBase `
    ///
    /// ` other: QStringTokenizerBaseBase `
    ///
    pub fn copyAssign(self: QStringTokenizerBaseBase, other: QStringTokenizerBaseBase) void {
        qtc.QStringTokenizerBaseBase_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }
};
