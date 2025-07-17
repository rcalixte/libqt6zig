const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineloadinginfo_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebengineloadinginfo.html
pub const qwebengineloadinginfo = struct {
    /// New constructs a new QWebEngineLoadingInfo object.
    ///
    /// ``` other: QtC.QWebEngineLoadingInfo ```
    pub fn New(other: ?*anyopaque) QtC.QWebEngineLoadingInfo {
        return qtc.QWebEngineLoadingInfo_new(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#operator-eq)
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo, other: QtC.QWebEngineLoadingInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineLoadingInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#url)
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineLoadingInfo_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#isErrorPage)
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo ```
    pub fn IsErrorPage(self: ?*anyopaque) bool {
        return qtc.QWebEngineLoadingInfo_IsErrorPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#status)
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo ```
    pub fn Status(self: ?*anyopaque) i64 {
        return qtc.QWebEngineLoadingInfo_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorString)
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineLoadingInfo_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineloadinginfo.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorDomain)
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo ```
    pub fn ErrorDomain(self: ?*anyopaque) i64 {
        return qtc.QWebEngineLoadingInfo_ErrorDomain(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorCode)
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo ```
    pub fn ErrorCode(self: ?*anyopaque) i32 {
        return qtc.QWebEngineLoadingInfo_ErrorCode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#dtor.QWebEngineLoadingInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineLoadingInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineLoadingInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebengineloadinginfo.html#types
pub const enums = struct {
    pub const LoadStatus = enum {
        pub const LoadStartedStatus: i32 = 0;
        pub const LoadStoppedStatus: i32 = 1;
        pub const LoadSucceededStatus: i32 = 2;
        pub const LoadFailedStatus: i32 = 3;
    };

    pub const ErrorDomain = enum {
        pub const NoErrorDomain: i32 = 0;
        pub const InternalErrorDomain: i32 = 1;
        pub const ConnectionErrorDomain: i32 = 2;
        pub const CertificateErrorDomain: i32 = 3;
        pub const HttpErrorDomain: i32 = 4;
        pub const FtpErrorDomain: i32 = 5;
        pub const DnsErrorDomain: i32 = 6;
        pub const HttpStatusCodeDomain: i32 = 7;
    };
};
