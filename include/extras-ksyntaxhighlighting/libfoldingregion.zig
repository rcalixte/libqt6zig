const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const foldingregion_enums = enums;

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html)
pub const KSyntaxHighlighting__FoldingRegion = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__FoldingRegion,

    pub const _is_KSyntaxHighlighting__FoldingRegion = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSyntaxHighlighting::FoldingRegion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn new(other: anytype) KSyntaxHighlighting__FoldingRegion {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__FoldingRegion;
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSyntaxHighlighting::FoldingRegion object and invalidate the source KSyntaxHighlighting::FoldingRegion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn new2(other: anytype) KSyntaxHighlighting__FoldingRegion {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__FoldingRegion;
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KSyntaxHighlighting::FoldingRegion object in C++ memory
    ///
    pub fn new3() KSyntaxHighlighting__FoldingRegion {
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KSyntaxHighlighting::FoldingRegion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn new4(param1: anytype) KSyntaxHighlighting__FoldingRegion {
        comptime _ = @TypeOf(param1)._is_KSyntaxHighlighting__FoldingRegion;
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn copyAssign(self: KSyntaxHighlighting__FoldingRegion, other: KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__FoldingRegion_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn moveAssign(self: KSyntaxHighlighting__FoldingRegion, other: KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__FoldingRegion_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn operatorEqual(self: KSyntaxHighlighting__FoldingRegion, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__FoldingRegion;
        return qtc.KSyntaxHighlighting__FoldingRegion_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn isValid(self: KSyntaxHighlighting__FoldingRegion) bool {
        return qtc.KSyntaxHighlighting__FoldingRegion_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn id(self: KSyntaxHighlighting__FoldingRegion) i32 {
        return qtc.KSyntaxHighlighting__FoldingRegion_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    /// ## Returns:
    ///
    /// ` foldingregion_enums.Type `
    ///
    pub fn type0(self: KSyntaxHighlighting__FoldingRegion) i32 {
        return qtc.KSyntaxHighlighting__FoldingRegion_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#sibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn sibling(self: KSyntaxHighlighting__FoldingRegion) KSyntaxHighlighting__FoldingRegion {
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_Sibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn delete(self: KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__FoldingRegion_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const None: i32 = 0;
        pub const Begin: i32 = 1;
        pub const End: i32 = 2;
    };
};
