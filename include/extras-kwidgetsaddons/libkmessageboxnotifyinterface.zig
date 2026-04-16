const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWidget = @import("libqt6").QWidget;
const qmessagebox_enums = @import("../libqmessagebox.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html)
pub const KMessageBoxNotifyInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMessageBoxNotifyInterface,

    pub const _is_KMessageBoxNotifyInterface = {};

    /// New constructs a new KMessageBoxNotifyInterface object.
    ///
    pub fn New() KMessageBoxNotifyInterface {
        return .{ .ptr = qtc.KMessageBoxNotifyInterface_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxNotifyInterface `
    ///
    /// ` notificationType: qmessagebox_enums.Icon `
    ///
    /// ` message: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SendNotification(self: KMessageBoxNotifyInterface, notificationType: i32, message: []const u8, parent: anytype) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KMessageBoxNotifyInterface_SendNotification(@ptrCast(self.ptr), @bitCast(notificationType), message_str, @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KMessageBoxNotifyInterface `
    ///
    /// ` callback: *const fn (self: KMessageBoxNotifyInterface, notificationType: qmessagebox_enums.Icon, message: [*:0]const u8, parent: QWidget) callconv(.c) void `
    ///
    pub fn OnSendNotification(self: KMessageBoxNotifyInterface, callback: *const fn (KMessageBoxNotifyInterface, i32, [*:0]const u8, QWidget) callconv(.c) void) void {
        qtc.KMessageBoxNotifyInterface_OnSendNotification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSendNotification` instead
    ///
    pub const QBaseSendNotification = SuperSendNotification;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#sendNotification)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxNotifyInterface `
    ///
    /// ` notificationType: qmessagebox_enums.Icon `
    ///
    /// ` message: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperSendNotification(self: KMessageBoxNotifyInterface, notificationType: i32, message: []const u8, parent: anytype) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KMessageBoxNotifyInterface_SuperSendNotification(@ptrCast(self.ptr), @bitCast(notificationType), message_str, @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMessageBoxNotifyInterface `
    ///
    /// ` param1: KMessageBoxNotifyInterface `
    ///
    pub fn OperatorAssign(self: KMessageBoxNotifyInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KMessageBoxNotifyInterface;
        qtc.KMessageBoxNotifyInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kmessageboxnotifyinterface.html#dtor.KMessageBoxNotifyInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KMessageBoxNotifyInterface `
    ///
    pub fn Delete(self: KMessageBoxNotifyInterface) void {
        qtc.KMessageBoxNotifyInterface_Delete(@ptrCast(self.ptr));
    }
};
