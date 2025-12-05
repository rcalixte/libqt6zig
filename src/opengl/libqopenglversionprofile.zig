const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsurfaceformat_enums = @import("../libqsurfaceformat.zig").enums;
pub const struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)
pub const qopenglversionprofile = struct {
    /// New constructs a new QOpenGLVersionProfile object.
    ///
    pub fn New() QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new();
    }

    /// New2 constructs a new QOpenGLVersionProfile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QtC.QSurfaceFormat `
    ///
    pub fn New2(format: ?*anyopaque) QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new2(@ptrCast(format));
    }

    /// New3 constructs a new QOpenGLVersionProfile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QOpenGLVersionProfile `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new3(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    /// ` rhs: QtC.QOpenGLVersionProfile `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QOpenGLVersionProfile_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    pub fn Version(self: ?*anyopaque) struct_i32_i32 {
        const _pair: qtc.libqt_pair = qtc.QOpenGLVersionProfile_Version(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    /// ` majorVersion: i32 `
    ///
    /// ` minorVersion: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, majorVersion: i32, minorVersion: i32) void {
        qtc.QOpenGLVersionProfile_SetVersion(@ptrCast(self), @intCast(majorVersion), @intCast(minorVersion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#profile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn Profile(self: ?*anyopaque) i32 {
        return qtc.QOpenGLVersionProfile_Profile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    /// ` profile: qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn SetProfile(self: ?*anyopaque, profile: i32) void {
        qtc.QOpenGLVersionProfile_SetProfile(@ptrCast(self), @intCast(profile));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#hasProfiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    pub fn HasProfiles(self: ?*anyopaque) bool {
        return qtc.QOpenGLVersionProfile_HasProfiles(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isLegacyVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    pub fn IsLegacyVersion(self: ?*anyopaque) bool {
        return qtc.QOpenGLVersionProfile_IsLegacyVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QOpenGLVersionProfile_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#dtor.QOpenGLVersionProfile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLVersionProfile `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionProfile_Delete(@ptrCast(self));
    }
};
