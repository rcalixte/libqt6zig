const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kconfigconversioncheck-supported.html)
pub const KConfigConversionCheck__supported = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigconversioncheck-supported.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigConversionCheck__supported,

    pub const _is_KConfigConversionCheck__supported = {};

    /// New constructs a new KConfigConversionCheck::supported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KConfigConversionCheck__supported `
    ///
    pub fn New(other: anytype) KConfigConversionCheck__supported {
        comptime _ = @TypeOf(other)._is_KConfigConversionCheck__supported;
        return .{ .ptr = qtc.KConfigConversionCheck__supported_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KConfigConversionCheck::supported object and invalidates the source KConfigConversionCheck::supported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KConfigConversionCheck__supported `
    ///
    pub fn New2(other: anytype) KConfigConversionCheck__supported {
        comptime _ = @TypeOf(other)._is_KConfigConversionCheck__supported;
        return .{ .ptr = qtc.KConfigConversionCheck__supported_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigConversionCheck__supported `
    ///
    /// ` other: KConfigConversionCheck__supported `
    ///
    pub fn CopyAssign(self: KConfigConversionCheck__supported, other: KConfigConversionCheck__supported) void {
        qtc.KConfigConversionCheck__supported_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigConversionCheck__supported `
    ///
    /// ` other: KConfigConversionCheck__supported `
    ///
    pub fn MoveAssign(self: KConfigConversionCheck__supported, other: KConfigConversionCheck__supported) void {
        qtc.KConfigConversionCheck__supported_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigConversionCheck__supported `
    ///
    pub fn Delete(self: KConfigConversionCheck__supported) void {
        qtc.KConfigConversionCheck__supported_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kconfigconversioncheck-unsupported.html)
pub const KConfigConversionCheck__unsupported = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigconversioncheck-unsupported.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigConversionCheck__unsupported,

    pub const _is_KConfigConversionCheck__unsupported = {};

    /// New constructs a new KConfigConversionCheck::unsupported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KConfigConversionCheck__unsupported `
    ///
    pub fn New(other: anytype) KConfigConversionCheck__unsupported {
        comptime _ = @TypeOf(other)._is_KConfigConversionCheck__unsupported;
        return .{ .ptr = qtc.KConfigConversionCheck__unsupported_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KConfigConversionCheck::unsupported object and invalidates the source KConfigConversionCheck::unsupported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KConfigConversionCheck__unsupported `
    ///
    pub fn New2(other: anytype) KConfigConversionCheck__unsupported {
        comptime _ = @TypeOf(other)._is_KConfigConversionCheck__unsupported;
        return .{ .ptr = qtc.KConfigConversionCheck__unsupported_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigConversionCheck__unsupported `
    ///
    /// ` other: KConfigConversionCheck__unsupported `
    ///
    pub fn CopyAssign(self: KConfigConversionCheck__unsupported, other: KConfigConversionCheck__unsupported) void {
        qtc.KConfigConversionCheck__unsupported_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigConversionCheck__unsupported `
    ///
    /// ` other: KConfigConversionCheck__unsupported `
    ///
    pub fn MoveAssign(self: KConfigConversionCheck__unsupported, other: KConfigConversionCheck__unsupported) void {
        qtc.KConfigConversionCheck__unsupported_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigConversionCheck__unsupported `
    ///
    pub fn Delete(self: KConfigConversionCheck__unsupported) void {
        qtc.KConfigConversionCheck__unsupported_Delete(@ptrCast(self.ptr));
    }
};
