const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const foldingregion_enums = enums;

/// https://api.kde.org/ksyntaxhighlighting-foldingregion.html
pub const ksyntaxhighlighting__foldingregion = struct {
    /// New constructs a new KSyntaxHighlighting::FoldingRegion object.
    ///
    /// ``` other: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn New(other: ?*anyopaque) QtC.KSyntaxHighlighting__FoldingRegion {
        return qtc.KSyntaxHighlighting__FoldingRegion_new(@ptrCast(other));
    }

    /// New2 constructs a new KSyntaxHighlighting::FoldingRegion object and invalidates the source KSyntaxHighlighting::FoldingRegion object.
    ///
    /// ``` other: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn New2(other: ?*anyopaque) QtC.KSyntaxHighlighting__FoldingRegion {
        return qtc.KSyntaxHighlighting__FoldingRegion_new2(@ptrCast(other));
    }

    /// New3 constructs a new KSyntaxHighlighting::FoldingRegion object.
    ///
    ///
    pub fn New3() QtC.KSyntaxHighlighting__FoldingRegion {
        return qtc.KSyntaxHighlighting__FoldingRegion_new3();
    }

    /// New4 constructs a new KSyntaxHighlighting::FoldingRegion object.
    ///
    /// ``` param1: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn New4(param1: ?*anyopaque) QtC.KSyntaxHighlighting__FoldingRegion {
        return qtc.KSyntaxHighlighting__FoldingRegion_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion, other: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__FoldingRegion_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion, other: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__FoldingRegion_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion, other: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__FoldingRegion_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#isValid)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__FoldingRegion_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#id)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__FoldingRegion_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#type)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion ```
    ///
    /// Returns: ``` foldingregion_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__FoldingRegion_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#sibling)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn Sibling(self: ?*anyopaque) QtC.KSyntaxHighlighting__FoldingRegion {
        return qtc.KSyntaxHighlighting__FoldingRegion_Sibling(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__FoldingRegion_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ksyntaxhighlighting-foldingregion.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const None: i32 = 0;
        pub const Begin: i32 = 1;
        pub const End: i32 = 2;
    };
};
