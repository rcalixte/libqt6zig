const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html)
pub const KLineEditEventHandler = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KLineEditEventHandler,

    pub const _is_KLineEditEventHandler = {};

    /// ### DEPRECATED: Use `catchReturnKey` instead
    ///
    pub const CatchReturnKey = catchReturnKey;

    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html#catchReturnKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` lineEdit: QObject `
    ///
    pub fn catchReturnKey(lineEdit: anytype) void {
        comptime _ = @TypeOf(lineEdit)._is_QObject;
        qtc.KLineEditEventHandler_CatchReturnKey(@ptrCast(lineEdit.ptr));
    }

    /// ### DEPRECATED: Use `handleUrlDrops` instead
    ///
    pub const HandleUrlDrops = handleUrlDrops;

    /// ### [Upstream resources](https://api.kde.org/klineediteventhandler.html#handleUrlDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` lineEdit: QObject `
    ///
    pub fn handleUrlDrops(lineEdit: anytype) void {
        comptime _ = @TypeOf(lineEdit)._is_QObject;
        qtc.KLineEditEventHandler_HandleUrlDrops(@ptrCast(lineEdit.ptr));
    }
};
