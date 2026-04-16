const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QNetworkReply = @import("libqt6").QNetworkReply;
const QSslError = @import("libqt6").QSslError;
const QSslSocket = @import("libqt6").QSslSocket;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ksslerroruidata.html)
pub const KSslErrorUiData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksslerroruidata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSslErrorUiData,

    pub const _is_KSslErrorUiData = {};

    /// New constructs a new KSslErrorUiData object.
    ///
    pub fn New() KSslErrorUiData {
        return .{ .ptr = qtc.KSslErrorUiData_new() };
    }

    /// New2 constructs a new KSslErrorUiData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` socket: QSslSocket `
    ///
    pub fn New2(socket: anytype) KSslErrorUiData {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        return .{ .ptr = qtc.KSslErrorUiData_new2(@ptrCast(socket.ptr)) };
    }

    /// New3 constructs a new KSslErrorUiData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` reply: QNetworkReply `
    ///
    /// ` sslErrors: []QSslError `
    ///
    pub fn New3(reply: anytype, sslErrors: []QSslError) KSslErrorUiData {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        const sslErrors_list = qtc.libqt_list{
            .len = sslErrors.len,
            .data = @ptrCast(sslErrors.ptr),
        };
        return .{ .ptr = qtc.KSslErrorUiData_new3(@ptrCast(reply.ptr), sslErrors_list) };
    }

    /// New4 constructs a new KSslErrorUiData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSslErrorUiData `
    ///
    pub fn New4(other: anytype) KSslErrorUiData {
        comptime _ = @TypeOf(other)._is_KSslErrorUiData;
        return .{ .ptr = qtc.KSslErrorUiData_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksslerroruidata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSslErrorUiData `
    ///
    /// ` param1: KSslErrorUiData `
    ///
    pub fn OperatorAssign(self: KSslErrorUiData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KSslErrorUiData;
        qtc.KSslErrorUiData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ksslerroruidata.html#dtor.KSslErrorUiData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSslErrorUiData `
    ///
    pub fn Delete(self: KSslErrorUiData) void {
        qtc.KSslErrorUiData_Delete(@ptrCast(self.ptr));
    }
};
