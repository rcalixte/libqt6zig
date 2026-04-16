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

    /// New constructs a new QStringTokenizerBaseBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStringTokenizerBaseBase `
    ///
    pub fn New(other: anytype) QStringTokenizerBaseBase {
        comptime _ = @TypeOf(other)._is_QStringTokenizerBaseBase;
        return .{ .ptr = qtc.QStringTokenizerBaseBase_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QStringTokenizerBaseBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStringTokenizerBaseBase `
    ///
    pub fn New2(param1: anytype) QStringTokenizerBaseBase {
        comptime _ = @TypeOf(param1)._is_QStringTokenizerBaseBase;
        return .{ .ptr = qtc.QStringTokenizerBaseBase_new2(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStringTokenizerBaseBase `
    ///
    /// ` other: QStringTokenizerBaseBase `
    ///
    pub fn CopyAssign(self: QStringTokenizerBaseBase, other: QStringTokenizerBaseBase) void {
        qtc.QStringTokenizerBaseBase_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }
};
