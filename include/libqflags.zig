const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html)
pub const QFlag = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFlag,

    pub const _is_QFlag = {};

    /// New constructs a new QFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFlag `
    ///
    pub fn New(other: anytype) QFlag {
        comptime _ = @TypeOf(other)._is_QFlag;
        return .{ .ptr = qtc.QFlag_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QFlag object and invalidates the source QFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFlag `
    ///
    pub fn New2(other: anytype) QFlag {
        comptime _ = @TypeOf(other)._is_QFlag;
        return .{ .ptr = qtc.QFlag_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` value: i32 `
    ///
    pub fn New3(value: i32) QFlag {
        return .{ .ptr = qtc.QFlag_new3(@bitCast(value)) };
    }

    /// New4 constructs a new QFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` value: u32 `
    ///
    pub fn New4(value: u32) QFlag {
        return .{ .ptr = qtc.QFlag_new4(@bitCast(value)) };
    }

    /// New5 constructs a new QFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` value: i16 `
    ///
    pub fn New5(value: i16) QFlag {
        return .{ .ptr = qtc.QFlag_new5(@bitCast(value)) };
    }

    /// New6 constructs a new QFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` value: u16 `
    ///
    pub fn New6(value: u16) QFlag {
        return .{ .ptr = qtc.QFlag_new6(@bitCast(value)) };
    }

    /// New7 constructs a new QFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFlag `
    ///
    pub fn New7(param1: anytype) QFlag {
        comptime _ = @TypeOf(param1)._is_QFlag;
        return .{ .ptr = qtc.QFlag_new7(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QFlag `
    ///
    /// ` other: QFlag `
    ///
    pub fn CopyAssign(self: QFlag, other: QFlag) void {
        qtc.QFlag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QFlag `
    ///
    /// ` other: QFlag `
    ///
    pub fn MoveAssign(self: QFlag, other: QFlag) void {
        qtc.QFlag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFlag `
    ///
    pub fn ToInt(self: QFlag) i32 {
        return qtc.QFlag_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFlag `
    ///
    pub fn ToUnsignedInt(self: QFlag) u32 {
        return qtc.QFlag_ToUnsignedInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html#dtor.QFlag)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFlag `
    ///
    pub fn Delete(self: QFlag) void {
        qtc.QFlag_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qincompatibleflag.html)
pub const QIncompatibleFlag = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qincompatibleflag.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QIncompatibleFlag,

    pub const _is_QIncompatibleFlag = {};

    /// New constructs a new QIncompatibleFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn New(other: anytype) QIncompatibleFlag {
        comptime _ = @TypeOf(other)._is_QIncompatibleFlag;
        return .{ .ptr = qtc.QIncompatibleFlag_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QIncompatibleFlag object and invalidates the source QIncompatibleFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn New2(other: anytype) QIncompatibleFlag {
        comptime _ = @TypeOf(other)._is_QIncompatibleFlag;
        return .{ .ptr = qtc.QIncompatibleFlag_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QIncompatibleFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn New3(i: i32) QIncompatibleFlag {
        return .{ .ptr = qtc.QIncompatibleFlag_new3(@bitCast(i)) };
    }

    /// New4 constructs a new QIncompatibleFlag object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QIncompatibleFlag `
    ///
    pub fn New4(param1: anytype) QIncompatibleFlag {
        comptime _ = @TypeOf(param1)._is_QIncompatibleFlag;
        return .{ .ptr = qtc.QIncompatibleFlag_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QIncompatibleFlag `
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn CopyAssign(self: QIncompatibleFlag, other: QIncompatibleFlag) void {
        qtc.QIncompatibleFlag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QIncompatibleFlag `
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn MoveAssign(self: QIncompatibleFlag, other: QIncompatibleFlag) void {
        qtc.QIncompatibleFlag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qincompatibleflag.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIncompatibleFlag `
    ///
    pub fn ToInt(self: QIncompatibleFlag) i32 {
        return qtc.QIncompatibleFlag_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qincompatibleflag.html#dtor.QIncompatibleFlag)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QIncompatibleFlag `
    ///
    pub fn Delete(self: QIncompatibleFlag) void {
        qtc.QIncompatibleFlag_Delete(@ptrCast(self.ptr));
    }
};
