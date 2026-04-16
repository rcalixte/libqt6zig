const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const QAction = @import("libqt6").QAction;
const QUndoStack = @import("libqt6").QUndoStack;

/// ### [Upstream resources](https://api.kde.org/kundoactions.html)
pub const KUndoActions = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kundoactions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUndoActions,

    pub const _is_KUndoActions = {};

    /// ### [Upstream resources](https://api.kde.org/kundoactions.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUndoStack `
    ///
    /// ` param2: KActionCollection `
    ///
    /// ` param3: []const u8 `
    ///
    pub fn CreateRedoAction(param1: anytype, param2: anytype, param3: []const u8) QAction {
        comptime _ = @TypeOf(param1)._is_QUndoStack;
        comptime _ = @TypeOf(param2)._is_KActionCollection;
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        return .{ .ptr = qtc.KUndoActions_CreateRedoAction(@ptrCast(param1.ptr), @ptrCast(param2.ptr), param3_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kundoactions.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUndoStack `
    ///
    /// ` param2: KActionCollection `
    ///
    /// ` param3: []const u8 `
    ///
    pub fn CreateUndoAction(param1: anytype, param2: anytype, param3: []const u8) QAction {
        comptime _ = @TypeOf(param1)._is_QUndoStack;
        comptime _ = @TypeOf(param2)._is_KActionCollection;
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        return .{ .ptr = qtc.KUndoActions_CreateUndoAction(@ptrCast(param1.ptr), @ptrCast(param2.ptr), param3_str) };
    }
};
