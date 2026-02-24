const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbuserror_enums = @import("libqdbuserror.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html)
pub const qdbuscontext = struct {
    /// New constructs a new QDBusContext object.
    ///
    pub fn New() QtC.QDBusContext {
        return qtc.QDBusContext_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#calledFromDBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    pub fn CalledFromDBus(self: ?*anyopaque) bool {
        return qtc.QDBusContext_CalledFromDBus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    pub fn Connection(self: ?*anyopaque) QtC.QDBusConnection {
        return qtc.QDBusContext_Connection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    pub fn Message(self: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusContext_Message(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#isDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    pub fn IsDelayedReply(self: ?*anyopaque) bool {
        return qtc.QDBusContext_IsDelayedReply(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#setDelayedReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDelayedReply(self: ?*anyopaque, enable: bool) void {
        qtc.QDBusContext_SetDelayedReply(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SendErrorReply(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusContext_SendErrorReply(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    pub fn SendErrorReply2(self: ?*anyopaque, typeVal: i32) void {
        qtc.QDBusContext_SendErrorReply2(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    /// ` name: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn SendErrorReply22(self: ?*anyopaque, name: []const u8, msg: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QDBusContext_SendErrorReply22(@ptrCast(self), name_str, msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDBusContext `
    ///
    /// ` typeVal: qdbuserror_enums.ErrorType `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn SendErrorReply23(self: ?*anyopaque, typeVal: i32, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QDBusContext_SendErrorReply23(@ptrCast(self), @bitCast(typeVal), msg_str);
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
    /// ` self: QtC.QDBusContext `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDBusContext_Delete(@ptrCast(self));
    }
};
