const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kundoactions.html
pub const kundoactions = struct {
    /// [Qt documentation](https://api-staging.kde.org/kundoactions.html#createRedoAction)
    ///
    /// ``` param1: QtC.QUndoStack, param2: QtC.KActionCollection, param3: []const u8 ```
    pub fn CreateRedoAction(param1: ?*anyopaque, param2: ?*anyopaque, param3: []const u8) QtC.QAction {
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        return qtc.KUndoActions_CreateRedoAction(@ptrCast(param1), @ptrCast(param2), param3_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kundoactions.html#createUndoAction)
    ///
    /// ``` param1: QtC.QUndoStack, param2: QtC.KActionCollection, param3: []const u8 ```
    pub fn CreateUndoAction(param1: ?*anyopaque, param2: ?*anyopaque, param3: []const u8) QtC.QAction {
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        return qtc.KUndoActions_CreateUndoAction(@ptrCast(param1), @ptrCast(param2), param3_str);
    }
};
