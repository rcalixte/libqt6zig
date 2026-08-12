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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KServiceConversionCheck::supported object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn new(other: anytype) KServiceConversionCheck__supported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__supported;
        return .{ .ptr = qtc.KServiceConversionCheck__supported_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KServiceConversionCheck::supported object and invalidate the source KServiceConversionCheck::supported object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn new2(other: anytype) KServiceConversionCheck__supported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__supported;
        return .{ .ptr = qtc.KServiceConversionCheck__supported_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__supported `
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn copyAssign(self: KServiceConversionCheck__supported, other: KServiceConversionCheck__supported) void {
        qtc.KServiceConversionCheck__supported_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__supported `
    ///
    /// ` other: KServiceConversionCheck__supported `
    ///
    pub fn moveAssign(self: KServiceConversionCheck__supported, other: KServiceConversionCheck__supported) void {
        qtc.KServiceConversionCheck__supported_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KServiceConversionCheck__supported `
    ///
    pub fn delete(self: KServiceConversionCheck__supported) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KServiceConversionCheck::unsupported object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn new(other: anytype) KServiceConversionCheck__unsupported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__unsupported;
        return .{ .ptr = qtc.KServiceConversionCheck__unsupported_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KServiceConversionCheck::unsupported object and invalidate the source KServiceConversionCheck::unsupported object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn new2(other: anytype) KServiceConversionCheck__unsupported {
        comptime _ = @TypeOf(other)._is_KServiceConversionCheck__unsupported;
        return .{ .ptr = qtc.KServiceConversionCheck__unsupported_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__unsupported `
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn copyAssign(self: KServiceConversionCheck__unsupported, other: KServiceConversionCheck__unsupported) void {
        qtc.KServiceConversionCheck__unsupported_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KServiceConversionCheck__unsupported `
    ///
    /// ` other: KServiceConversionCheck__unsupported `
    ///
    pub fn moveAssign(self: KServiceConversionCheck__unsupported, other: KServiceConversionCheck__unsupported) void {
        qtc.KServiceConversionCheck__unsupported_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KServiceConversionCheck__unsupported `
    ///
    pub fn delete(self: KServiceConversionCheck__unsupported) void {
        qtc.KServiceConversionCheck__unsupported_Delete(@ptrCast(self.ptr));
    }
};
