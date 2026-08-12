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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSslErrorUiData object in C++ memory
    ///
    pub fn new() KSslErrorUiData {
        return .{ .ptr = qtc.KSslErrorUiData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSslErrorUiData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` socket: QSslSocket `
    ///
    pub fn new2(socket: anytype) KSslErrorUiData {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        return .{ .ptr = qtc.KSslErrorUiData_new2(@ptrCast(socket.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KSslErrorUiData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` reply: QNetworkReply `
    ///
    /// ` sslErrors: []QSslError `
    ///
    pub fn new3(reply: anytype, sslErrors: []QSslError) KSslErrorUiData {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        const sslErrors_list = qtc.libqt_list{
            .len = sslErrors.len,
            .data = @ptrCast(sslErrors.ptr),
        };
        return .{ .ptr = qtc.KSslErrorUiData_new3(@ptrCast(reply.ptr), sslErrors_list) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KSslErrorUiData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KSslErrorUiData `
    ///
    pub fn new4(other: anytype) KSslErrorUiData {
        comptime _ = @TypeOf(other)._is_KSslErrorUiData;
        return .{ .ptr = qtc.KSslErrorUiData_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ksslerroruidata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSslErrorUiData `
    ///
    /// ` param1: KSslErrorUiData `
    ///
    pub fn operatorAssign(self: KSslErrorUiData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KSslErrorUiData;
        qtc.KSslErrorUiData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ksslerroruidata.html#dtor.KSslErrorUiData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSslErrorUiData `
    ///
    pub fn delete(self: KSslErrorUiData) void {
        qtc.KSslErrorUiData_Delete(@ptrCast(self.ptr));
    }
};
