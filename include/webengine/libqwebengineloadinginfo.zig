const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineloadinginfo_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html)
pub const qwebengineloadinginfo = struct {
    /// New constructs a new QWebEngineLoadingInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineLoadingInfo `
    ///
    pub fn New(other: ?*anyopaque) QtC.QWebEngineLoadingInfo {
        return qtc.QWebEngineLoadingInfo_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ` other: QtC.QWebEngineLoadingInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineLoadingInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineLoadingInfo_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#isErrorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn IsErrorPage(self: ?*anyopaque) bool {
        return qtc.QWebEngineLoadingInfo_IsErrorPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineloadinginfo_enums.LoadStatus `
    ///
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.QWebEngineLoadingInfo_Status(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineLoadingInfo_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineloadinginfo.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineloadinginfo_enums.ErrorDomain `
    ///
    pub fn ErrorDomain(self: ?*anyopaque) i32 {
        return qtc.QWebEngineLoadingInfo_ErrorDomain(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn ErrorCode(self: ?*anyopaque) i32 {
        return qtc.QWebEngineLoadingInfo_ErrorCode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#dtor.QWebEngineLoadingInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineLoadingInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#public-types)
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
