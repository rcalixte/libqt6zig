const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;
const qsurfaceformat_enums = @import("../libqsurfaceformat.zig").enums;
const Struct_i32_i32 = @import("libqt6").types.Struct_i32_i32; // extern struct { first: i32, second: i32 }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)
pub const QOpenGLVersionProfile = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLVersionProfile,

    pub const _is_QOpenGLVersionProfile = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLVersionProfile object in C++ memory
    ///
    pub fn new() QOpenGLVersionProfile {
        return .{ .ptr = qtc.QOpenGLVersionProfile_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLVersionProfile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QSurfaceFormat `
    ///
    pub fn new2(format: anytype) QOpenGLVersionProfile {
        comptime _ = @TypeOf(format)._is_QSurfaceFormat;
        return .{ .ptr = qtc.QOpenGLVersionProfile_new2(@ptrCast(format.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLVersionProfile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionProfile `
    ///
    pub fn new3(other: anytype) QOpenGLVersionProfile {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionProfile;
        return .{ .ptr = qtc.QOpenGLVersionProfile_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    /// ` rhs: QOpenGLVersionProfile `
    ///
    pub fn operatorAssign(self: QOpenGLVersionProfile, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QOpenGLVersionProfile;
        qtc.QOpenGLVersionProfile_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn version(self: QOpenGLVersionProfile) Struct_i32_i32 {
        const _pair = qtc.QOpenGLVersionProfile_Version(@ptrCast(self.ptr));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

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
    pub fn setVersion(self: QOpenGLVersionProfile, majorVersion: i32, minorVersion: i32) void {
        qtc.QOpenGLVersionProfile_SetVersion(@ptrCast(self.ptr), @bitCast(majorVersion), @bitCast(minorVersion));
    }

    /// ### DEPRECATED: Use `profile` instead
    ///
    pub const Profile = profile;

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
    pub fn profile(self: QOpenGLVersionProfile) i32 {
        return qtc.QOpenGLVersionProfile_Profile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProfile` instead
    ///
    pub const SetProfile = setProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    /// ` _profile: qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn setProfile(self: QOpenGLVersionProfile, _profile: i32) void {
        qtc.QOpenGLVersionProfile_SetProfile(@ptrCast(self.ptr), @bitCast(_profile));
    }

    /// ### DEPRECATED: Use `hasProfiles` instead
    ///
    pub const HasProfiles = hasProfiles;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#hasProfiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn hasProfiles(self: QOpenGLVersionProfile) bool {
        return qtc.QOpenGLVersionProfile_HasProfiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLegacyVersion` instead
    ///
    pub const IsLegacyVersion = isLegacyVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isLegacyVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn isLegacyVersion(self: QOpenGLVersionProfile) bool {
        return qtc.QOpenGLVersionProfile_IsLegacyVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn isValid(self: QOpenGLVersionProfile) bool {
        return qtc.QOpenGLVersionProfile_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#dtor.QOpenGLVersionProfile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionProfile `
    ///
    pub fn delete(self: QOpenGLVersionProfile) void {
        qtc.QOpenGLVersionProfile_Delete(@ptrCast(self.ptr));
    }
};
