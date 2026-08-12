const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)
pub const QHashSeed = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHashSeed,

    pub const _is_QHashSeed = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHashSeed object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHashSeed `
    ///
    pub fn new(other: anytype) QHashSeed {
        comptime _ = @TypeOf(other)._is_QHashSeed;
        return .{ .ptr = qtc.QHashSeed_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHashSeed object and invalidate the source QHashSeed object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHashSeed `
    ///
    pub fn new2(other: anytype) QHashSeed {
        comptime _ = @TypeOf(other)._is_QHashSeed;
        return .{ .ptr = qtc.QHashSeed_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QHashSeed object in C++ memory
    ///
    pub fn new3() QHashSeed {
        return .{ .ptr = qtc.QHashSeed_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QHashSeed object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` d: usize `
    ///
    pub fn new4(d: usize) QHashSeed {
        return .{ .ptr = qtc.QHashSeed_new4(@bitCast(d)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QHashSeed `
    ///
    /// ` other: QHashSeed `
    ///
    pub fn copyAssign(self: QHashSeed, other: QHashSeed) void {
        qtc.QHashSeed_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QHashSeed `
    ///
    /// ` other: QHashSeed `
    ///
    pub fn moveAssign(self: QHashSeed, other: QHashSeed) void {
        qtc.QHashSeed_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toUnsignedLong` instead
    ///
    pub const ToUnsignedLong = toUnsignedLong;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHashSeed `
    ///
    pub fn toUnsignedLong(self: QHashSeed) usize {
        return qtc.QHashSeed_ToUnsignedLong(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `globalSeed` instead
    ///
    pub const GlobalSeed = globalSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
    ///
    pub fn globalSeed() QHashSeed {
        return .{ .ptr = qtc.QHashSeed_GlobalSeed() };
    }

    /// ### DEPRECATED: Use `setDeterministicGlobalSeed` instead
    ///
    pub const SetDeterministicGlobalSeed = setDeterministicGlobalSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
    ///
    pub fn setDeterministicGlobalSeed() void {
        qtc.QHashSeed_SetDeterministicGlobalSeed();
    }

    /// ### DEPRECATED: Use `resetRandomGlobalSeed` instead
    ///
    pub const ResetRandomGlobalSeed = resetRandomGlobalSeed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
    ///
    pub fn resetRandomGlobalSeed() void {
        qtc.QHashSeed_ResetRandomGlobalSeed();
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#dtor.QHashSeed)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHashSeed `
    ///
    pub fn delete(self: QHashSeed) void {
        qtc.QHashSeed_Delete(@ptrCast(self.ptr));
    }
};
