const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginefilesystemaccessrequest_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html)
pub const qwebenginefilesystemaccessrequest = struct {
    /// New constructs a new QWebEngineFileSystemAccessRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn New(other: ?*anyopaque) QtC.QWebEngineFileSystemAccessRequest {
        return qtc.QWebEngineFileSystemAccessRequest_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    /// ` other: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    /// ` other: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Accept(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn Reject(self: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Reject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn Origin(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineFileSystemAccessRequest_Origin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn FilePath(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineFileSystemAccessRequest_FilePath(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#handleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginefilesystemaccessrequest_enums.HandleType `
    ///
    pub fn HandleType(self: ?*anyopaque) i32 {
        return qtc.QWebEngineFileSystemAccessRequest_HandleType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accessFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qwebenginefilesystemaccessrequest_enums.AccessFlag `
    ///
    pub fn AccessFlags(self: ?*anyopaque) i32 {
        return qtc.QWebEngineFileSystemAccessRequest_AccessFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#dtor.QWebEngineFileSystemAccessRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineFileSystemAccessRequest `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineFileSystemAccessRequest_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#public-types)
pub const enums = struct {
    pub const HandleType = enum(i32) {
        pub const File: i32 = 0;
        pub const Directory: i32 = 1;
    };

    pub const AccessFlag = enum(i32) {
        pub const Read: i32 = 1;
        pub const Write: i32 = 2;
    };
};
