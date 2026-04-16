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

    /// New constructs a new QDBusContext object.
    ///
    pub fn New() QDBusContext {
        return .{ .ptr = qtc.QDBusContext_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#calledFromDBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn CalledFromDBus(self: QDBusContext) bool {
        return qtc.QDBusContext_CalledFromDBus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn Connection(self: QDBusContext) QDBusConnection {
        return .{ .ptr = qtc.QDBusContext_Connection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn Message(self: QDBusContext) QDBusMessage {
        return .{ .ptr = qtc.QDBusContext_Message(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#isDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    pub fn IsDelayedReply(self: QDBusContext) bool {
        return qtc.QDBusContext_IsDelayedReply(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#setDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDelayedReply(self: QDBusContext, enable: bool) void {
        qtc.QDBusContext_SetDelayedReply(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SendErrorReply(self: QDBusContext, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusContext_SendErrorReply(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusContext `
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    pub fn SendErrorReply2(self: QDBusContext, typeVal: i32) void {
        qtc.QDBusContext_SendErrorReply2(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn SendErrorReply22(self: QDBusContext, name: []const u8, msg: []const u8) void {
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
    pub fn SendErrorReply23(self: QDBusContext, typeVal: i32, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QDBusContext_SendErrorReply23(@ptrCast(self.ptr), @bitCast(typeVal), msg_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#dtor.QDBusContext)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusContext `
    ///
    pub fn Delete(self: QDBusContext) void {
        qtc.QDBusContext_Delete(@ptrCast(self.ptr));
    }
};
