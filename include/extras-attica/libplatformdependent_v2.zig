const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;

/// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html)
pub const Attica__PlatformDependentV2 = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__PlatformDependentV2,

    pub const _is_Attica__PlatformDependentV2 = {};
    pub const _is_Attica__PlatformDependent = {};

    /// ### DEPRECATED: Use `setNam` instead
    ///
    pub const SetNam = setNam;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` _nam: QNetworkAccessManager `
    ///
    pub fn setNam(self: Attica__PlatformDependentV2, _nam: anytype) void {
        comptime _ = @TypeOf(_nam)._is_QNetworkAccessManager;
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self.ptr), @ptrCast(_nam.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    pub fn delete(self: Attica__PlatformDependentV2) void {
        qtc.Attica__PlatformDependentV2_Delete(@ptrCast(self.ptr));
    }
};
