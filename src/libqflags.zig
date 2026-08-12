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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFlag `
    ///
    pub fn new(other: anytype) QFlag {
        comptime _ = @TypeOf(other)._is_QFlag;
        return .{ .ptr = qtc.QFlag_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFlag object and invalidate the source QFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFlag `
    ///
    pub fn new2(other: anytype) QFlag {
        comptime _ = @TypeOf(other)._is_QFlag;
        return .{ .ptr = qtc.QFlag_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: i32 `
    ///
    pub fn new3(value: i32) QFlag {
        return .{ .ptr = qtc.QFlag_new3(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: u32 `
    ///
    pub fn new4(value: u32) QFlag {
        return .{ .ptr = qtc.QFlag_new4(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: i16 `
    ///
    pub fn new5(value: i16) QFlag {
        return .{ .ptr = qtc.QFlag_new5(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: u16 `
    ///
    pub fn new6(value: u16) QFlag {
        return .{ .ptr = qtc.QFlag_new6(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFlag `
    ///
    pub fn new7(param1: anytype) QFlag {
        comptime _ = @TypeOf(param1)._is_QFlag;
        return .{ .ptr = qtc.QFlag_new7(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QFlag `
    ///
    /// ` other: QFlag `
    ///
    pub fn copyAssign(self: QFlag, other: QFlag) void {
        qtc.QFlag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QFlag `
    ///
    /// ` other: QFlag `
    ///
    pub fn moveAssign(self: QFlag, other: QFlag) void {
        qtc.QFlag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toInt` instead
    ///
    pub const ToInt = toInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFlag `
    ///
    pub fn toInt(self: QFlag) i32 {
        return qtc.QFlag_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUnsignedInt` instead
    ///
    pub const ToUnsignedInt = toUnsignedInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFlag `
    ///
    pub fn toUnsignedInt(self: QFlag) u32 {
        return qtc.QFlag_ToUnsignedInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qflag.html#dtor.QFlag)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFlag `
    ///
    pub fn delete(self: QFlag) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QIncompatibleFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn new(other: anytype) QIncompatibleFlag {
        comptime _ = @TypeOf(other)._is_QIncompatibleFlag;
        return .{ .ptr = qtc.QIncompatibleFlag_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QIncompatibleFlag object and invalidate the source QIncompatibleFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn new2(other: anytype) QIncompatibleFlag {
        comptime _ = @TypeOf(other)._is_QIncompatibleFlag;
        return .{ .ptr = qtc.QIncompatibleFlag_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QIncompatibleFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i32 `
    ///
    pub fn new3(i: i32) QIncompatibleFlag {
        return .{ .ptr = qtc.QIncompatibleFlag_new3(@bitCast(i)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QIncompatibleFlag object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QIncompatibleFlag `
    ///
    pub fn new4(param1: anytype) QIncompatibleFlag {
        comptime _ = @TypeOf(param1)._is_QIncompatibleFlag;
        return .{ .ptr = qtc.QIncompatibleFlag_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QIncompatibleFlag `
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn copyAssign(self: QIncompatibleFlag, other: QIncompatibleFlag) void {
        qtc.QIncompatibleFlag_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QIncompatibleFlag `
    ///
    /// ` other: QIncompatibleFlag `
    ///
    pub fn moveAssign(self: QIncompatibleFlag, other: QIncompatibleFlag) void {
        qtc.QIncompatibleFlag_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toInt` instead
    ///
    pub const ToInt = toInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qincompatibleflag.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIncompatibleFlag `
    ///
    pub fn toInt(self: QIncompatibleFlag) i32 {
        return qtc.QIncompatibleFlag_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qincompatibleflag.html#dtor.QIncompatibleFlag)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QIncompatibleFlag `
    ///
    pub fn delete(self: QIncompatibleFlag) void {
        qtc.QIncompatibleFlag_Delete(@ptrCast(self.ptr));
    }
};
