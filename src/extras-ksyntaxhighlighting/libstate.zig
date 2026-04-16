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

    /// New constructs a new KSyntaxHighlighting::State object.
    ///
    pub fn New() KSyntaxHighlighting__State {
        return .{ .ptr = qtc.KSyntaxHighlighting__State_new() };
    }

    /// New2 constructs a new KSyntaxHighlighting::State object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSyntaxHighlighting__State `
    ///
    pub fn New2(other: anytype) KSyntaxHighlighting__State {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__State;
        return .{ .ptr = qtc.KSyntaxHighlighting__State_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    /// ` rhs: KSyntaxHighlighting__State `
    ///
    pub fn OperatorAssign(self: KSyntaxHighlighting__State, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KSyntaxHighlighting__State;
        qtc.KSyntaxHighlighting__State_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    /// ` other: KSyntaxHighlighting__State `
    ///
    pub fn OperatorEqual(self: KSyntaxHighlighting__State, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__State;
        return qtc.KSyntaxHighlighting__State_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    /// ` other: KSyntaxHighlighting__State `
    ///
    pub fn OperatorNotEqual(self: KSyntaxHighlighting__State, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KSyntaxHighlighting__State;
        return qtc.KSyntaxHighlighting__State_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-state.html#indentationBasedFoldingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    pub fn IndentationBasedFoldingEnabled(self: KSyntaxHighlighting__State) bool {
        return qtc.KSyntaxHighlighting__State_IndentationBasedFoldingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__State `
    ///
    pub fn Delete(self: KSyntaxHighlighting__State) void {
        qtc.KSyntaxHighlighting__State_Delete(@ptrCast(self.ptr));
    }
};
