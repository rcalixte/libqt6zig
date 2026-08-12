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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineFileSystemAccessRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineFileSystemAccessRequest `
    ///
    pub fn new(other: anytype) QWebEngineFileSystemAccessRequest {
        comptime _ = @TypeOf(other)._is_QWebEngineFileSystemAccessRequest;
        return .{ .ptr = qtc.QWebEngineFileSystemAccessRequest_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    /// ` other: QWebEngineFileSystemAccessRequest `
    ///
    pub fn operatorAssign(self: QWebEngineFileSystemAccessRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFileSystemAccessRequest;
        qtc.QWebEngineFileSystemAccessRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    /// ` other: QWebEngineFileSystemAccessRequest `
    ///
    pub fn swap(self: QWebEngineFileSystemAccessRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineFileSystemAccessRequest;
        qtc.QWebEngineFileSystemAccessRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn accept(self: QWebEngineFileSystemAccessRequest) void {
        qtc.QWebEngineFileSystemAccessRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reject` instead
    ///
    pub const Reject = reject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#reject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn reject(self: QWebEngineFileSystemAccessRequest) void {
        qtc.QWebEngineFileSystemAccessRequest_Reject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn origin(self: QWebEngineFileSystemAccessRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineFileSystemAccessRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn filePath(self: QWebEngineFileSystemAccessRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineFileSystemAccessRequest_FilePath(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `handleType` instead
    ///
    pub const HandleType = handleType;

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
    pub fn handleType(self: QWebEngineFileSystemAccessRequest) i32 {
        return qtc.QWebEngineFileSystemAccessRequest_HandleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessFlags` instead
    ///
    pub const AccessFlags = accessFlags;

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
    pub fn accessFlags(self: QWebEngineFileSystemAccessRequest) i32 {
        return qtc.QWebEngineFileSystemAccessRequest_AccessFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#dtor.QWebEngineFileSystemAccessRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFileSystemAccessRequest `
    ///
    pub fn delete(self: QWebEngineFileSystemAccessRequest) void {
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
