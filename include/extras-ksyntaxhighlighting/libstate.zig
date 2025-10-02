const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/ksyntaxhighlighting-state.html
pub const ksyntaxhighlighting__state = struct {
    /// New constructs a new KSyntaxHighlighting::State object.
    ///
    ///
    pub fn New() QtC.KSyntaxHighlighting__State {
        return qtc.KSyntaxHighlighting__State_new();
    }

    /// New2 constructs a new KSyntaxHighlighting::State object.
    ///
    /// ``` other: QtC.KSyntaxHighlighting__State ```
    pub fn New2(other: ?*anyopaque) QtC.KSyntaxHighlighting__State {
        return qtc.KSyntaxHighlighting__State_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__State, rhs: QtC.KSyntaxHighlighting__State ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__State_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__State, other: QtC.KSyntaxHighlighting__State ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__State_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#operator-not-eq)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__State, other: QtC.KSyntaxHighlighting__State ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__State_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#indentationBasedFoldingEnabled)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__State ```
    pub fn IndentationBasedFoldingEnabled(self: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__State_IndentationBasedFoldingEnabled(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__State ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__State_Delete(@ptrCast(self));
    }
};
