const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://invent.kde.org/plasma/layer-shell-qt
pub const layershellqt__shell = struct {
    /// New constructs a new LayerShellQt::Shell object.
    ///
    /// ``` other: QtC.LayerShellQt__Shell ```
    pub fn New(other: ?*anyopaque) QtC.LayerShellQt__Shell {
        return qtc.LayerShellQt__Shell_new(@ptrCast(other));
    }

    /// New2 constructs a new LayerShellQt::Shell object and invalidates the source LayerShellQt::Shell object.
    ///
    /// ``` other: QtC.LayerShellQt__Shell ```
    pub fn New2(other: ?*anyopaque) QtC.LayerShellQt__Shell {
        return qtc.LayerShellQt__Shell_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.LayerShellQt__Shell, other: QtC.LayerShellQt__Shell ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.LayerShellQt__Shell_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.LayerShellQt__Shell, other: QtC.LayerShellQt__Shell ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.LayerShellQt__Shell_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    ///
    pub fn UseLayerShell() void {
        qtc.LayerShellQt__Shell_UseLayerShell();
    }

    /// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.LayerShellQt__Shell ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.LayerShellQt__Shell_Delete(@ptrCast(self));
    }
};
