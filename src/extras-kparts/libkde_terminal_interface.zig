const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/terminalinterface.html)
pub const TerminalInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TerminalInterface,

    pub const _is_TerminalInterface = {};

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TerminalInterface `
    ///
    /// ` param1: TerminalInterface `
    ///
    pub fn operatorAssign(self: TerminalInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_TerminalInterface;
        qtc.TerminalInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/terminalinterface.html#dtor.TerminalInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TerminalInterface `
    ///
    pub fn delete(self: TerminalInterface) void {
        qtc.TerminalInterface_Delete(@ptrCast(self.ptr));
    }
};
