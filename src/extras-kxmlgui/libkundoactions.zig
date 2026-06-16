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
    /// ` undoStack: QUndoStack `
    ///
    /// ` actionCollection: KActionCollection `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn CreateRedoAction(undoStack: anytype, actionCollection: anytype, actionName: []const u8) QAction {
        comptime _ = @TypeOf(undoStack)._is_QUndoStack;
        comptime _ = @TypeOf(actionCollection)._is_KActionCollection;
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        return .{ .ptr = qtc.KUndoActions_CreateRedoAction(@ptrCast(undoStack.ptr), @ptrCast(actionCollection.ptr), actionName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kundoactions.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` undoStack: QUndoStack `
    ///
    /// ` actionCollection: KActionCollection `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn CreateUndoAction(undoStack: anytype, actionCollection: anytype, actionName: []const u8) QAction {
        comptime _ = @TypeOf(undoStack)._is_QUndoStack;
        comptime _ = @TypeOf(actionCollection)._is_KActionCollection;
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        return .{ .ptr = qtc.KUndoActions_CreateUndoAction(@ptrCast(undoStack.ptr), @ptrCast(actionCollection.ptr), actionName_str) };
    }
};
