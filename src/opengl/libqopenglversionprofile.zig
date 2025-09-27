const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsurfaceformat_enums = @import("../libqsurfaceformat.zig").enums;
pub const struct_i32_i32 = extern struct { first: i32, second: i32 };

/// https://doc.qt.io/qt-6/qopenglversionprofile.html
pub const qopenglversionprofile = struct {
    /// New constructs a new QOpenGLVersionProfile object.
    ///
    ///
    pub fn New() QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new();
    }

    /// New2 constructs a new QOpenGLVersionProfile object.
    ///
    /// ``` format: QtC.QSurfaceFormat ```
    pub fn New2(format: ?*anyopaque) QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new2(@ptrCast(format));
    }

    /// New3 constructs a new QOpenGLVersionProfile object.
    ///
    /// ``` other: QtC.QOpenGLVersionProfile ```
    pub fn New3(other: ?*anyopaque) QtC.QOpenGLVersionProfile {
        return qtc.QOpenGLVersionProfile_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#operator-eq)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile, rhs: QtC.QOpenGLVersionProfile ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QOpenGLVersionProfile_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#version)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile ```
    pub fn Version(self: ?*anyopaque) struct_i32_i32 {
        const _pair: qtc.libqt_pair = qtc.QOpenGLVersionProfile_Version(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#setVersion)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile, majorVersion: i32, minorVersion: i32 ```
    pub fn SetVersion(self: ?*anyopaque, majorVersion: i32, minorVersion: i32) void {
        qtc.QOpenGLVersionProfile_SetVersion(@ptrCast(self), @intCast(majorVersion), @intCast(minorVersion));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#profile)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile ```
    ///
    /// Returns: ``` qsurfaceformat_enums.OpenGLContextProfile ```
    pub fn Profile(self: ?*anyopaque) i32 {
        return qtc.QOpenGLVersionProfile_Profile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#setProfile)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile, profile: qsurfaceformat_enums.OpenGLContextProfile ```
    pub fn SetProfile(self: ?*anyopaque, profile: i32) void {
        qtc.QOpenGLVersionProfile_SetProfile(@ptrCast(self), @intCast(profile));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#hasProfiles)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile ```
    pub fn HasProfiles(self: ?*anyopaque) bool {
        return qtc.QOpenGLVersionProfile_HasProfiles(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#isLegacyVersion)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile ```
    pub fn IsLegacyVersion(self: ?*anyopaque) bool {
        return qtc.QOpenGLVersionProfile_IsLegacyVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#isValid)
    ///
    /// ``` self: QtC.QOpenGLVersionProfile ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QOpenGLVersionProfile_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionprofile.html#dtor.QOpenGLVersionProfile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLVersionProfile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionProfile_Delete(@ptrCast(self));
    }
};
