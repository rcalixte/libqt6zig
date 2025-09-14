const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/ksslerroruidata.html
pub const ksslerroruidata = struct {
    /// New constructs a new KSslErrorUiData object.
    ///
    ///
    pub fn New() QtC.KSslErrorUiData {
        return qtc.KSslErrorUiData_new();
    }

    /// New2 constructs a new KSslErrorUiData object.
    ///
    /// ``` socket: QtC.QSslSocket ```
    pub fn New2(socket: ?*anyopaque) QtC.KSslErrorUiData {
        return qtc.KSslErrorUiData_new2(@ptrCast(socket));
    }

    /// New3 constructs a new KSslErrorUiData object.
    ///
    /// ``` reply: QtC.QNetworkReply, sslErrors: []QtC.QSslError ```
    pub fn New3(reply: ?*anyopaque, sslErrors: []QtC.QSslError) QtC.KSslErrorUiData {
        const sslErrors_list = qtc.libqt_list{
            .len = sslErrors.len,
            .data = @ptrCast(sslErrors.ptr),
        };

        return qtc.KSslErrorUiData_new3(@ptrCast(reply), sslErrors_list);
    }

    /// New4 constructs a new KSslErrorUiData object.
    ///
    /// ``` other: QtC.KSslErrorUiData ```
    pub fn New4(other: ?*anyopaque) QtC.KSslErrorUiData {
        return qtc.KSslErrorUiData_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ksslerroruidata.html#operator-eq)
    ///
    /// ``` self: QtC.KSslErrorUiData, param1: QtC.KSslErrorUiData ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KSslErrorUiData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/ksslerroruidata.html#dtor.KSslErrorUiData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSslErrorUiData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSslErrorUiData_Delete(@ptrCast(self));
    }
};
