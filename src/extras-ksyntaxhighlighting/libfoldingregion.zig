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

    /// New constructs a new KSyntaxHighlighting::FoldingRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn New(other: anytype) KSyntaxHighlighting__FoldingRegion {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__FoldingRegion;
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KSyntaxHighlighting::FoldingRegion object and invalidates the source KSyntaxHighlighting::FoldingRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn New2(other: anytype) KSyntaxHighlighting__FoldingRegion {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__FoldingRegion;
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KSyntaxHighlighting::FoldingRegion object.
    ///
    pub fn New3() KSyntaxHighlighting__FoldingRegion {
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new3() };
    }

    /// New4 constructs a new KSyntaxHighlighting::FoldingRegion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn New4(param1: anytype) KSyntaxHighlighting__FoldingRegion {
        comptime _ = @TypeOf(param1)._is_KSyntaxHighlighting__FoldingRegion;
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn CopyAssign(self: KSyntaxHighlighting__FoldingRegion, other: KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__FoldingRegion_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn MoveAssign(self: KSyntaxHighlighting__FoldingRegion, other: KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__FoldingRegion_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    /// ` other: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn OperatorEqual(self: KSyntaxHighlighting__FoldingRegion, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__FoldingRegion;
        return qtc.KSyntaxHighlighting__FoldingRegion_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn IsValid(self: KSyntaxHighlighting__FoldingRegion) bool {
        return qtc.KSyntaxHighlighting__FoldingRegion_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn Id(self: KSyntaxHighlighting__FoldingRegion) i32 {
        return qtc.KSyntaxHighlighting__FoldingRegion_Id(@ptrCast(self.ptr));
    }

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
    pub fn Type(self: KSyntaxHighlighting__FoldingRegion) i32 {
        return qtc.KSyntaxHighlighting__FoldingRegion_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#sibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn Sibling(self: KSyntaxHighlighting__FoldingRegion) KSyntaxHighlighting__FoldingRegion {
        return .{ .ptr = qtc.KSyntaxHighlighting__FoldingRegion_Sibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__FoldingRegion `
    ///
    pub fn Delete(self: KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__FoldingRegion_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const None: i32 = 0;
        pub const Begin: i32 = 1;
        pub const End: i32 = 2;
    };
};
