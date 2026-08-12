const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html)
pub const QTypeRevision = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTypeRevision,

    pub const _is_QTypeRevision = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTypeRevision object in C++ memory
    ///
    pub fn new() QTypeRevision {
        return .{ .ptr = qtc.QTypeRevision_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTypeRevision object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn new2(other: anytype) QTypeRevision {
        comptime _ = @TypeOf(other)._is_QTypeRevision;
        return .{ .ptr = qtc.QTypeRevision_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTypeRevision object and invalidate the source QTypeRevision object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn new3(other: anytype) QTypeRevision {
        comptime _ = @TypeOf(other)._is_QTypeRevision;
        return .{ .ptr = qtc.QTypeRevision_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTypeRevision object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTypeRevision `
    ///
    pub fn new4(param1: anytype) QTypeRevision {
        comptime _ = @TypeOf(param1)._is_QTypeRevision;
        return .{ .ptr = qtc.QTypeRevision_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTypeRevision `
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn copyAssign(self: QTypeRevision, other: QTypeRevision) void {
        qtc.QTypeRevision_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTypeRevision `
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn moveAssign(self: QTypeRevision, other: QTypeRevision) void {
        qtc.QTypeRevision_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `zero` instead
    ///
    pub const Zero = zero;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#zero)
    ///
    pub fn zero() QTypeRevision {
        return .{ .ptr = qtc.QTypeRevision_Zero() };
    }

    /// ### DEPRECATED: Use `hasMajorVersion` instead
    ///
    pub const HasMajorVersion = hasMajorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn hasMajorVersion(self: QTypeRevision) bool {
        return qtc.QTypeRevision_HasMajorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `majorVersion` instead
    ///
    pub const MajorVersion = majorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn majorVersion(self: QTypeRevision) u8 {
        return qtc.QTypeRevision_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasMinorVersion` instead
    ///
    pub const HasMinorVersion = hasMinorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn hasMinorVersion(self: QTypeRevision) bool {
        return qtc.QTypeRevision_HasMinorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minorVersion` instead
    ///
    pub const MinorVersion = minorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn minorVersion(self: QTypeRevision) u8 {
        return qtc.QTypeRevision_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn isValid(self: QTypeRevision) bool {
        return qtc.QTypeRevision_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#dtor.QTypeRevision)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn delete(self: QTypeRevision) void {
        qtc.QTypeRevision_Delete(@ptrCast(self.ptr));
    }
};
