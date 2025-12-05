const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html)
pub const qtyperevision = struct {
    /// New constructs a new QTypeRevision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTypeRevision `
    ///
    pub fn New(other: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new(@ptrCast(other));
    }

    /// New2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QTypeRevision `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTypeRevision object.
    ///
    pub fn New3() QtC.QTypeRevision {
        return qtc.QTypeRevision_new3();
    }

    /// New4 constructs a new QTypeRevision object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QTypeRevision `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QTypeRevision {
        return qtc.QTypeRevision_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    /// ` other: QtC.QTypeRevision `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTypeRevision_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    /// ` other: QtC.QTypeRevision `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTypeRevision_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#zero)
    ///
    pub fn Zero() QtC.QTypeRevision {
        return qtc.QTypeRevision_Zero();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    pub fn HasMajorVersion(self: ?*anyopaque) bool {
        return qtc.QTypeRevision_HasMajorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    pub fn MajorVersion(self: ?*anyopaque) u8 {
        return qtc.QTypeRevision_MajorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    pub fn HasMinorVersion(self: ?*anyopaque) bool {
        return qtc.QTypeRevision_HasMinorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    pub fn MinorVersion(self: ?*anyopaque) u8 {
        return qtc.QTypeRevision_MinorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTypeRevision_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#dtor.QTypeRevision)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QTypeRevision `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTypeRevision_Delete(@ptrCast(self));
    }
};
