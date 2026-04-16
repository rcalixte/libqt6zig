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

    /// New constructs a new QHashSeed object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHashSeed `
    ///
    pub fn New(other: anytype) QHashSeed {
        comptime _ = @TypeOf(other)._is_QHashSeed;
        return .{ .ptr = qtc.QHashSeed_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QHashSeed object and invalidates the source QHashSeed object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHashSeed `
    ///
    pub fn New2(other: anytype) QHashSeed {
        comptime _ = @TypeOf(other)._is_QHashSeed;
        return .{ .ptr = qtc.QHashSeed_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QHashSeed object.
    ///
    pub fn New3() QHashSeed {
        return .{ .ptr = qtc.QHashSeed_new3() };
    }

    /// New4 constructs a new QHashSeed object.
    ///
    /// ## Parameter(s):
    ///
    /// ` d: usize `
    ///
    pub fn New4(d: usize) QHashSeed {
        return .{ .ptr = qtc.QHashSeed_new4(@bitCast(d)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QHashSeed `
    ///
    /// ` other: QHashSeed `
    ///
    pub fn CopyAssign(self: QHashSeed, other: QHashSeed) void {
        qtc.QHashSeed_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QHashSeed `
    ///
    /// ` other: QHashSeed `
    ///
    pub fn MoveAssign(self: QHashSeed, other: QHashSeed) void {
        qtc.QHashSeed_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHashSeed `
    ///
    pub fn ToUnsignedLong(self: QHashSeed) usize {
        return qtc.QHashSeed_ToUnsignedLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
    ///
    pub fn GlobalSeed() QHashSeed {
        return .{ .ptr = qtc.QHashSeed_GlobalSeed() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
    ///
    pub fn SetDeterministicGlobalSeed() void {
        qtc.QHashSeed_SetDeterministicGlobalSeed();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
    ///
    pub fn ResetRandomGlobalSeed() void {
        qtc.QHashSeed_ResetRandomGlobalSeed();
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#dtor.QHashSeed)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHashSeed `
    ///
    pub fn Delete(self: QHashSeed) void {
        qtc.QHashSeed_Delete(@ptrCast(self.ptr));
    }
};
