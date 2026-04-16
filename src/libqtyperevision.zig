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

    /// New constructs a new QTypeRevision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn New(other: anytype) QTypeRevision {
        comptime _ = @TypeOf(other)._is_QTypeRevision;
        return .{ .ptr = qtc.QTypeRevision_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn New2(other: anytype) QTypeRevision {
        comptime _ = @TypeOf(other)._is_QTypeRevision;
        return .{ .ptr = qtc.QTypeRevision_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTypeRevision object.
    ///
    pub fn New3() QTypeRevision {
        return .{ .ptr = qtc.QTypeRevision_new3() };
    }

    /// New4 constructs a new QTypeRevision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTypeRevision `
    ///
    pub fn New4(param1: anytype) QTypeRevision {
        comptime _ = @TypeOf(param1)._is_QTypeRevision;
        return .{ .ptr = qtc.QTypeRevision_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTypeRevision `
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn CopyAssign(self: QTypeRevision, other: QTypeRevision) void {
        qtc.QTypeRevision_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTypeRevision `
    ///
    /// ` other: QTypeRevision `
    ///
    pub fn MoveAssign(self: QTypeRevision, other: QTypeRevision) void {
        qtc.QTypeRevision_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#zero)
    ///
    pub fn Zero() QTypeRevision {
        return .{ .ptr = qtc.QTypeRevision_Zero() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn HasMajorVersion(self: QTypeRevision) bool {
        return qtc.QTypeRevision_HasMajorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn MajorVersion(self: QTypeRevision) u8 {
        return qtc.QTypeRevision_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn HasMinorVersion(self: QTypeRevision) bool {
        return qtc.QTypeRevision_HasMinorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn MinorVersion(self: QTypeRevision) u8 {
        return qtc.QTypeRevision_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn IsValid(self: QTypeRevision) bool {
        return qtc.QTypeRevision_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#dtor.QTypeRevision)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTypeRevision `
    ///
    pub fn Delete(self: QTypeRevision) void {
        qtc.QTypeRevision_Delete(@ptrCast(self.ptr));
    }
};
