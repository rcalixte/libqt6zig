const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDBusError = @import("libqt6").QDBusError;
const QDBusMessage = @import("libqt6").QDBusMessage;
const QVariant = @import("libqt6").QVariant;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusreply-h.html)
pub const qdbusreply_h = extern struct {
    /// ### DEPRECATED: Use `qDBusReplyFill` instead
    ///
    pub const QDBusReplyFill = qDBusReplyFill;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusreply-h.html#qDBusReplyFill)
    ///
    /// ## Parameter(s):
    ///
    /// ` reply: QDBusMessage `
    ///
    /// ` _error: QDBusError `
    ///
    /// ` data: QVariant `
    ///
    pub fn qDBusReplyFill(reply: anytype, _error: anytype, data: anytype) void {
        comptime _ = @TypeOf(reply)._is_QDBusMessage;
        comptime _ = @TypeOf(_error)._is_QDBusError;
        comptime _ = @TypeOf(data)._is_QVariant;
        qtc.qdbusreply_h_QDBusReplyFill(@ptrCast(reply.ptr), @ptrCast(_error.ptr), @ptrCast(data.ptr));
    }
};
