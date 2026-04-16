const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
pub const LayerShellQt__Shell = extern struct {
    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.LayerShellQt__Shell,

    pub const _is_LayerShellQt__Shell = {};

    /// New constructs a new LayerShellQt::Shell object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn New(other: anytype) LayerShellQt__Shell {
        comptime _ = @TypeOf(other)._is_LayerShellQt__Shell;
        return .{ .ptr = qtc.LayerShellQt__Shell_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new LayerShellQt::Shell object and invalidates the source LayerShellQt::Shell object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn New2(other: anytype) LayerShellQt__Shell {
        comptime _ = @TypeOf(other)._is_LayerShellQt__Shell;
        return .{ .ptr = qtc.LayerShellQt__Shell_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Shell `
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn CopyAssign(self: LayerShellQt__Shell, other: LayerShellQt__Shell) void {
        qtc.LayerShellQt__Shell_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Shell `
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn MoveAssign(self: LayerShellQt__Shell, other: LayerShellQt__Shell) void {
        qtc.LayerShellQt__Shell_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    pub fn UseLayerShell() void {
        qtc.LayerShellQt__Shell_UseLayerShell();
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: LayerShellQt__Shell `
    ///
    pub fn Delete(self: LayerShellQt__Shell) void {
        qtc.LayerShellQt__Shell_Delete(@ptrCast(self.ptr));
    }
};
