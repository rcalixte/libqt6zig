const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbuserror_enums = @import("libqdbuserror.zig").enums;

/// https://doc.qt.io/qt-6/qdbuscontext.html
pub const qdbuscontext = struct {
    /// New constructs a new QDBusContext object.
    ///
    ///
    pub fn New() QtC.QDBusContext {
        return qtc.QDBusContext_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#calledFromDBus)
    ///
    /// ``` self: QtC.QDBusContext ```
    pub fn CalledFromDBus(self: ?*anyopaque) bool {
        return qtc.QDBusContext_CalledFromDBus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#connection)
    ///
    /// ``` self: QtC.QDBusContext ```
    pub fn Connection(self: ?*anyopaque) QtC.QDBusConnection {
        return qtc.QDBusContext_Connection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#message)
    ///
    /// ``` self: QtC.QDBusContext ```
    pub fn Message(self: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusContext_Message(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#isDelayedReply)
    ///
    /// ``` self: QtC.QDBusContext ```
    pub fn IsDelayedReply(self: ?*anyopaque) bool {
        return qtc.QDBusContext_IsDelayedReply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#setDelayedReply)
    ///
    /// ``` self: QtC.QDBusContext, enable: bool ```
    pub fn SetDelayedReply(self: ?*anyopaque, enable: bool) void {
        qtc.QDBusContext_SetDelayedReply(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ``` self: QtC.QDBusContext, name: []const u8 ```
    pub fn SendErrorReply(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusContext_SendErrorReply(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ``` self: QtC.QDBusContext, typeVal: qdbuserror_enums.ErrorType ```
    pub fn SendErrorReply2(self: ?*anyopaque, typeVal: i32) void {
        qtc.QDBusContext_SendErrorReply2(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ``` self: QtC.QDBusContext, name: []const u8, msg: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#sendErrorReply)
    ///
    /// ``` self: QtC.QDBusContext, typeVal: qdbuserror_enums.ErrorType, msg: []const u8 ```
    pub fn SendErrorReply23(self: ?*anyopaque, typeVal: i32, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QDBusContext_SendErrorReply23(@ptrCast(self), @intCast(typeVal), msg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbuscontext.html#dtor.QDBusContext)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusContext ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusContext_Delete(@ptrCast(self));
    }
};
