const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html)
pub const KSyntaxHighlighting__State = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__State,

    pub const _is_KSyntaxHighlighting__State = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSyntaxHighlighting::State object in C++ memory
    ///
    pub fn new() KSyntaxHighlighting__State {
        return .{ .ptr = qtc.KSyntaxHighlighting__State_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSyntaxHighlighting::State object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__State `
    ///
    pub fn new2(other: anytype) KSyntaxHighlighting__State {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__State;
        return .{ .ptr = qtc.KSyntaxHighlighting__State_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    /// ` rhs: KSyntaxHighlighting__State `
    ///
    pub fn operatorAssign(self: KSyntaxHighlighting__State, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KSyntaxHighlighting__State;
        qtc.KSyntaxHighlighting__State_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    /// ` other: KSyntaxHighlighting__State `
    ///
    pub fn operatorEqual(self: KSyntaxHighlighting__State, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__State;
        return qtc.KSyntaxHighlighting__State_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    /// ` other: KSyntaxHighlighting__State `
    ///
    pub fn operatorNotEqual(self: KSyntaxHighlighting__State, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__State;
        return qtc.KSyntaxHighlighting__State_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `indentationBasedFoldingEnabled` instead
    ///
    pub const IndentationBasedFoldingEnabled = indentationBasedFoldingEnabled;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#indentationBasedFoldingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    pub fn indentationBasedFoldingEnabled(self: KSyntaxHighlighting__State) bool {
        return qtc.KSyntaxHighlighting__State_IndentationBasedFoldingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    pub fn delete(self: KSyntaxHighlighting__State) void {
        qtc.KSyntaxHighlighting__State_Delete(@ptrCast(self.ptr));
    }
};
