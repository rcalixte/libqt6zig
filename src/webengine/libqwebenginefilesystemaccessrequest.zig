const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const qwebenginefilesystemaccessrequest_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html)
pub const QWebEngineFileSystemAccessRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineFileSystemAccessRequest,

    pub const _is_QWebEngineFileSystemAccessRequest = {};

    /// New constructs a new QWebEngineFileSystemAccessRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineFileSystemAccessRequest `
    ///
    pub fn New(other: anytype) QWebEngineFileSystemAccessRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineFileSystemAccessRequest;
        return .{ .ptr = qtc.QWebEngineFileSystemAccessRequest_new(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    /// ` other: QWebEngineFileSystemAccessRequest `
    ///
    pub fn OperatorAssign(self: QWebEngineFileSystemAccessRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFileSystemAccessRequest;
        qtc.QWebEngineFileSystemAccessRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    /// ` other: QWebEngineFileSystemAccessRequest `
    ///
    pub fn Swap(self: QWebEngineFileSystemAccessRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFileSystemAccessRequest;
        qtc.QWebEngineFileSystemAccessRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn Accept(self: QWebEngineFileSystemAccessRequest) void {
        qtc.QWebEngineFileSystemAccessRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn Reject(self: QWebEngineFileSystemAccessRequest) void {
        qtc.QWebEngineFileSystemAccessRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn Origin(self: QWebEngineFileSystemAccessRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineFileSystemAccessRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn FilePath(self: QWebEngineFileSystemAccessRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineFileSystemAccessRequest_FilePath(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#handleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginefilesystemaccessrequest_enums.HandleType `
    ///
    pub fn HandleType(self: QWebEngineFileSystemAccessRequest) i32 {
        return qtc.QWebEngineFileSystemAccessRequest_HandleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accessFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    /// ## Returns:
    ///
    /// ` flag of qwebenginefilesystemaccessrequest_enums.AccessFlag `
    ///
    pub fn AccessFlags(self: QWebEngineFileSystemAccessRequest) i32 {
        return qtc.QWebEngineFileSystemAccessRequest_AccessFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#dtor.QWebEngineFileSystemAccessRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn Delete(self: QWebEngineFileSystemAccessRequest) void {
        qtc.QWebEngineFileSystemAccessRequest_Delete(@ptrCast(self.ptr));
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
