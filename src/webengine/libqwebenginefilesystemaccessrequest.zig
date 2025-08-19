const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginefilesystemaccessrequest_enums = enums;

/// https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html
pub const qwebenginefilesystemaccessrequest = struct {
    /// New constructs a new QWebEngineFileSystemAccessRequest object.
    ///
    /// ``` other: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn New(other: ?*anyopaque) QtC.QWebEngineFileSystemAccessRequest {
        return qtc.QWebEngineFileSystemAccessRequest_new(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#operator-eq)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest, other: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#swap)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest, other: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accept)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#reject)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn Reject(self: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Reject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#origin)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn Origin(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineFileSystemAccessRequest_Origin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#filePath)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn FilePath(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineFileSystemAccessRequest_FilePath(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#handleType)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest ```
    ///
    /// Returns: ``` qwebenginefilesystemaccessrequest_enums.HandleType ```
    pub fn HandleType(self: ?*anyopaque) i32 {
        return qtc.QWebEngineFileSystemAccessRequest_HandleType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accessFlags)
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest ```
    ///
    /// Returns: ``` flag of qwebenginefilesystemaccessrequest_enums.AccessFlag ```
    pub fn AccessFlags(self: ?*anyopaque) i64 {
        return qtc.QWebEngineFileSystemAccessRequest_AccessFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#dtor.QWebEngineFileSystemAccessRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineFileSystemAccessRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#types
pub const enums = struct {
    pub const HandleType = enum {
        pub const File: i32 = 0;
        pub const Directory: i32 = 1;
    };

    pub const AccessFlag = enum {
        pub const Read: i32 = 1;
        pub const Write: i32 = 2;
    };
};
