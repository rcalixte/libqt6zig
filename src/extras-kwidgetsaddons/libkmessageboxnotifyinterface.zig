const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmessagebox_enums = @import("../libqmessagebox.zig").enums;

/// https://api.kde.org/kmessageboxnotifyinterface.html
pub const kmessageboxnotifyinterface = struct {
    /// New constructs a new KMessageBoxNotifyInterface object.
    ///
    ///
    pub fn New() QtC.KMessageBoxNotifyInterface {
        return qtc.KMessageBoxNotifyInterface_new();
    }

    /// [Qt documentation](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
    ///
    /// ``` self: QtC.KMessageBoxNotifyInterface, notificationType: qmessagebox_enums.Icon, message: []const u8, parent: QtC.QWidget ```
    pub fn SendNotification(self: ?*anyopaque, notificationType: i32, message: []const u8, parent: ?*anyopaque) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KMessageBoxNotifyInterface_SendNotification(@ptrCast(self), @intCast(notificationType), message_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KMessageBoxNotifyInterface, callback: *const fn (self: QtC.KMessageBoxNotifyInterface, notificationType: qmessagebox_enums.Icon, message: [*:0]const u8, parent: QtC.QWidget) callconv(.c) void ```
    pub fn OnSendNotification(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.KMessageBoxNotifyInterface_OnSendNotification(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KMessageBoxNotifyInterface, notificationType: qmessagebox_enums.Icon, message: []const u8, parent: QtC.QWidget ```
    pub fn QBaseSendNotification(self: ?*anyopaque, notificationType: i32, message: []const u8, parent: ?*anyopaque) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KMessageBoxNotifyInterface_QBaseSendNotification(@ptrCast(self), @intCast(notificationType), message_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kmessageboxnotifyinterface.html#operator-eq)
    ///
    /// ``` self: QtC.KMessageBoxNotifyInterface, param1: QtC.KMessageBoxNotifyInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KMessageBoxNotifyInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kmessageboxnotifyinterface.html#dtor.KMessageBoxNotifyInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KMessageBoxNotifyInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KMessageBoxNotifyInterface_Delete(@ptrCast(self));
    }
};
