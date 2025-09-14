const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kserviceconversioncheck-supported.html
pub const kserviceconversioncheck__supported = struct {
    /// New constructs a new KServiceConversionCheck::supported object.
    ///
    /// ``` other: QtC.KServiceConversionCheck__supported ```
    pub fn New(other: ?*anyopaque) QtC.KServiceConversionCheck__supported {
        return qtc.KServiceConversionCheck__supported_new(@ptrCast(other));
    }

    /// New2 constructs a new KServiceConversionCheck::supported object and invalidates the source KServiceConversionCheck::supported object.
    ///
    /// ``` other: QtC.KServiceConversionCheck__supported ```
    pub fn New2(other: ?*anyopaque) QtC.KServiceConversionCheck__supported {
        return qtc.KServiceConversionCheck__supported_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KServiceConversionCheck__supported, other: QtC.KServiceConversionCheck__supported ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KServiceConversionCheck__supported_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KServiceConversionCheck__supported, other: QtC.KServiceConversionCheck__supported ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KServiceConversionCheck__supported_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KServiceConversionCheck__supported ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KServiceConversionCheck__supported_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kserviceconversioncheck-unsupported.html
pub const kserviceconversioncheck__unsupported = struct {
    /// New constructs a new KServiceConversionCheck::unsupported object.
    ///
    /// ``` other: QtC.KServiceConversionCheck__unsupported ```
    pub fn New(other: ?*anyopaque) QtC.KServiceConversionCheck__unsupported {
        return qtc.KServiceConversionCheck__unsupported_new(@ptrCast(other));
    }

    /// New2 constructs a new KServiceConversionCheck::unsupported object and invalidates the source KServiceConversionCheck::unsupported object.
    ///
    /// ``` other: QtC.KServiceConversionCheck__unsupported ```
    pub fn New2(other: ?*anyopaque) QtC.KServiceConversionCheck__unsupported {
        return qtc.KServiceConversionCheck__unsupported_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KServiceConversionCheck__unsupported, other: QtC.KServiceConversionCheck__unsupported ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KServiceConversionCheck__unsupported_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KServiceConversionCheck__unsupported, other: QtC.KServiceConversionCheck__unsupported ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KServiceConversionCheck__unsupported_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KServiceConversionCheck__unsupported ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KServiceConversionCheck__unsupported_Delete(@ptrCast(self));
    }
};
