const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;
const qsurfaceformat_enums = @import("../libqsurfaceformat.zig").enums;
const Struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)
pub const QOpenGLVersionProfile = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLVersionProfile,

    pub const _is_QOpenGLVersionProfile = {};

    /// New constructs a new QOpenGLVersionProfile object.
    ///
    pub fn New() QOpenGLVersionProfile {
        return .{ .ptr = qtc.QOpenGLVersionProfile_new() };
    }

    /// New2 constructs a new QOpenGLVersionProfile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QSurfaceFormat `
    ///
    pub fn New2(format: anytype) QOpenGLVersionProfile {
        comptime _ = @TypeOf(format)._is_QSurfaceFormat;
        return .{ .ptr = qtc.QOpenGLVersionProfile_new2(@ptrCast(format.ptr)) };
    }

    /// New3 constructs a new QOpenGLVersionProfile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionProfile `
    ///
    pub fn New3(other: anytype) QOpenGLVersionProfile {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionProfile;
        return .{ .ptr = qtc.QOpenGLVersionProfile_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    /// ` rhs: QOpenGLVersionProfile `
    ///
    pub fn OperatorAssign(self: QOpenGLVersionProfile, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QOpenGLVersionProfile;
        qtc.QOpenGLVersionProfile_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn Version(self: QOpenGLVersionProfile) Struct_i32_i32 {
        const _pair = qtc.QOpenGLVersionProfile_Version(@ptrCast(self.ptr));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    /// ` majorVersion: i32 `
    ///
    /// ` minorVersion: i32 `
    ///
    pub fn SetVersion(self: QOpenGLVersionProfile, majorVersion: i32, minorVersion: i32) void {
        qtc.QOpenGLVersionProfile_SetVersion(@ptrCast(self.ptr), @bitCast(majorVersion), @bitCast(minorVersion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#profile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn Profile(self: QOpenGLVersionProfile) i32 {
        return qtc.QOpenGLVersionProfile_Profile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    /// ` profile: qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn SetProfile(self: QOpenGLVersionProfile, profile: i32) void {
        qtc.QOpenGLVersionProfile_SetProfile(@ptrCast(self.ptr), @bitCast(profile));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#hasProfiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn HasProfiles(self: QOpenGLVersionProfile) bool {
        return qtc.QOpenGLVersionProfile_HasProfiles(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isLegacyVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn IsLegacyVersion(self: QOpenGLVersionProfile) bool {
        return qtc.QOpenGLVersionProfile_IsLegacyVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn IsValid(self: QOpenGLVersionProfile) bool {
        return qtc.QOpenGLVersionProfile_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#dtor.QOpenGLVersionProfile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn Delete(self: QOpenGLVersionProfile) void {
        qtc.QOpenGLVersionProfile_Delete(@ptrCast(self.ptr));
    }
};
