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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new LayerShellQt::Shell object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn new(other: anytype) LayerShellQt__Shell {
        comptime _ = @TypeOf(other)._is_LayerShellQt__Shell;
        return .{ .ptr = qtc.LayerShellQt__Shell_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new LayerShellQt::Shell object and invalidate the source LayerShellQt::Shell object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn new2(other: anytype) LayerShellQt__Shell {
        comptime _ = @TypeOf(other)._is_LayerShellQt__Shell;
        return .{ .ptr = qtc.LayerShellQt__Shell_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Shell `
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn copyAssign(self: LayerShellQt__Shell, other: LayerShellQt__Shell) void {
        qtc.LayerShellQt__Shell_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: LayerShellQt__Shell `
    ///
    /// ` other: LayerShellQt__Shell `
    ///
    pub fn moveAssign(self: LayerShellQt__Shell, other: LayerShellQt__Shell) void {
        qtc.LayerShellQt__Shell_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `useLayerShell` instead
    ///
    pub const UseLayerShell = useLayerShell;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    pub fn useLayerShell() void {
        qtc.LayerShellQt__Shell_UseLayerShell();
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: LayerShellQt__Shell `
    ///
    pub fn delete(self: LayerShellQt__Shell) void {
        qtc.LayerShellQt__Shell_Delete(@ptrCast(self.ptr));
    }
};
