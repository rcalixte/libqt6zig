const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kconfigconversioncheck-supported.html
pub const kconfigconversioncheck__supported = struct {
    /// New constructs a new KConfigConversionCheck::supported object.
    ///
    /// ``` other: QtC.KConfigConversionCheck__supported ```
    pub fn New(other: ?*anyopaque) QtC.KConfigConversionCheck__supported {
        return qtc.KConfigConversionCheck__supported_new(@ptrCast(other));
    }

    /// New2 constructs a new KConfigConversionCheck::supported object and invalidates the source KConfigConversionCheck::supported object.
    ///
    /// ``` other: QtC.KConfigConversionCheck__supported ```
    pub fn New2(other: ?*anyopaque) QtC.KConfigConversionCheck__supported {
        return qtc.KConfigConversionCheck__supported_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KConfigConversionCheck__supported, other: QtC.KConfigConversionCheck__supported ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KConfigConversionCheck__supported_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KConfigConversionCheck__supported, other: QtC.KConfigConversionCheck__supported ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KConfigConversionCheck__supported_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigConversionCheck__supported ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigConversionCheck__supported_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kconfigconversioncheck-unsupported.html
pub const kconfigconversioncheck__unsupported = struct {
    /// New constructs a new KConfigConversionCheck::unsupported object.
    ///
    /// ``` other: QtC.KConfigConversionCheck__unsupported ```
    pub fn New(other: ?*anyopaque) QtC.KConfigConversionCheck__unsupported {
        return qtc.KConfigConversionCheck__unsupported_new(@ptrCast(other));
    }

    /// New2 constructs a new KConfigConversionCheck::unsupported object and invalidates the source KConfigConversionCheck::unsupported object.
    ///
    /// ``` other: QtC.KConfigConversionCheck__unsupported ```
    pub fn New2(other: ?*anyopaque) QtC.KConfigConversionCheck__unsupported {
        return qtc.KConfigConversionCheck__unsupported_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KConfigConversionCheck__unsupported, other: QtC.KConfigConversionCheck__unsupported ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KConfigConversionCheck__unsupported_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KConfigConversionCheck__unsupported, other: QtC.KConfigConversionCheck__unsupported ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KConfigConversionCheck__unsupported_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigConversionCheck__unsupported ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigConversionCheck__unsupported_Delete(@ptrCast(self));
    }
};
