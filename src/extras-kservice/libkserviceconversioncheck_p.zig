const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kserviceconversioncheck-supported.html)
pub const KServiceConversionCheck__supported = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kserviceconversioncheck-supported.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KServiceConversionCheck__supported,

    pub const _is_KServiceConversionCheck__supported = {};

    /// New constructs a new KServiceConversionCheck::supported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn New(other: anytype) KServiceConversionCheck__supported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__supported;
        return .{ .ptr = qtc.KServiceConversionCheck__supported_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KServiceConversionCheck::supported object and invalidates the source KServiceConversionCheck::supported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn New2(other: anytype) KServiceConversionCheck__supported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__supported;
        return .{ .ptr = qtc.KServiceConversionCheck__supported_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__supported `
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn CopyAssign(self: KServiceConversionCheck__supported, other: KServiceConversionCheck__supported) void {
        qtc.KServiceConversionCheck__supported_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__supported `
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn MoveAssign(self: KServiceConversionCheck__supported, other: KServiceConversionCheck__supported) void {
        qtc.KServiceConversionCheck__supported_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KServiceConversionCheck__supported `
    ///
    pub fn Delete(self: KServiceConversionCheck__supported) void {
        qtc.KServiceConversionCheck__supported_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kserviceconversioncheck-unsupported.html)
pub const KServiceConversionCheck__unsupported = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kserviceconversioncheck-unsupported.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KServiceConversionCheck__unsupported,

    pub const _is_KServiceConversionCheck__unsupported = {};

    /// New constructs a new KServiceConversionCheck::unsupported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn New(other: anytype) KServiceConversionCheck__unsupported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__unsupported;
        return .{ .ptr = qtc.KServiceConversionCheck__unsupported_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KServiceConversionCheck::unsupported object and invalidates the source KServiceConversionCheck::unsupported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn New2(other: anytype) KServiceConversionCheck__unsupported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__unsupported;
        return .{ .ptr = qtc.KServiceConversionCheck__unsupported_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__unsupported `
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn CopyAssign(self: KServiceConversionCheck__unsupported, other: KServiceConversionCheck__unsupported) void {
        qtc.KServiceConversionCheck__unsupported_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__unsupported `
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn MoveAssign(self: KServiceConversionCheck__unsupported, other: KServiceConversionCheck__unsupported) void {
        qtc.KServiceConversionCheck__unsupported_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KServiceConversionCheck__unsupported `
    ///
    pub fn Delete(self: KServiceConversionCheck__unsupported) void {
        qtc.KServiceConversionCheck__unsupported_Delete(@ptrCast(self.ptr));
    }
};
