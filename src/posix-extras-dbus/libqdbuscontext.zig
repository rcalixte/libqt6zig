const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDBusConnection = @import("libqt6").QDBusConnection;
const QDBusMessage = @import("libqt6").QDBusMessage;
const qdbuserror_enums = @import("libqdbuserror.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html)
pub const QDBusContext = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusContext,

    pub const _is_QDBusContext = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusContext object in C++ memory
    ///
    pub fn new() QDBusContext {
        return .{ .ptr = qtc.QDBusContext_new() };
    }

    /// ### DEPRECATED: Use `calledFromDBus` instead
    ///
    pub const CalledFromDBus = calledFromDBus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#calledFromDBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn calledFromDBus(self: QDBusContext) bool {
        return qtc.QDBusContext_CalledFromDBus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connection` instead
    ///
    pub const Connection = connection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn connection(self: QDBusContext) QDBusConnection {
        return .{ .ptr = qtc.QDBusContext_Connection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn message(self: QDBusContext) QDBusMessage {
        return .{ .ptr = qtc.QDBusContext_Message(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isDelayedReply` instead
    ///
    pub const IsDelayedReply = isDelayedReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#isDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn isDelayedReply(self: QDBusContext) bool {
        return qtc.QDBusContext_IsDelayedReply(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDelayedReply` instead
    ///
    pub const SetDelayedReply = setDelayedReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#setDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` enable: bool `
    ///
    pub fn setDelayedReply(self: QDBusContext, enable: bool) void {
        qtc.QDBusContext_SetDelayedReply(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `sendErrorReply` instead
    ///
    pub const SendErrorReply = sendErrorReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` name: []const u8 `
    ///
    pub fn sendErrorReply(self: QDBusContext, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusContext_SendErrorReply(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `sendErrorReply2` instead
    ///
    pub const SendErrorReply2 = sendErrorReply2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    pub fn sendErrorReply2(self: QDBusContext, typeVal: i32) void {
        qtc.QDBusContext_SendErrorReply2(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `sendErrorReply22` instead
    ///
    pub const SendErrorReply22 = sendErrorReply22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` name: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn sendErrorReply22(self: QDBusContext, name: []const u8, msg: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QDBusContext_SendErrorReply22(@ptrCast(self.ptr), name_str, msg_str);
    }

    /// ### DEPRECATED: Use `sendErrorReply23` instead
    ///
    pub const SendErrorReply23 = sendErrorReply23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn sendErrorReply23(self: QDBusContext, typeVal: i32, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QDBusContext_SendErrorReply23(@ptrCast(self.ptr), @bitCast(typeVal), msg_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#dtor.QDBusContext)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusContext `
    ///
    pub fn delete(self: QDBusContext) void {
        qtc.QDBusContext_Delete(@ptrCast(self.ptr));
    }
};
