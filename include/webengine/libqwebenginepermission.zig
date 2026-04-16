const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const qwebenginepermission_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html)
pub const QWebEnginePermission = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEnginePermission,

    pub const _is_QWebEnginePermission = {};

    /// New constructs a new QWebEnginePermission object.
    ///
    pub fn New() QWebEnginePermission {
        return .{ .ptr = qtc.QWebEnginePermission_new() };
    }

    /// New2 constructs a new QWebEnginePermission object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEnginePermission `
    ///
    pub fn New2(other: anytype) QWebEnginePermission {
        comptime _ = @TypeOf(other)._is_QWebEnginePermission;
        return .{ .ptr = qtc.QWebEnginePermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    /// ` other: QWebEnginePermission `
    ///
    pub fn OperatorAssign(self: QWebEnginePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEnginePermission;
        qtc.QWebEnginePermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    /// ` other: QWebEnginePermission `
    ///
    pub fn Swap(self: QWebEnginePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEnginePermission;
        qtc.QWebEnginePermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn Origin(self: QWebEnginePermission) QUrl {
        return .{ .ptr = qtc.QWebEnginePermission_Origin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#permissionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginepermission_enums.PermissionType `
    ///
    pub fn PermissionType(self: QWebEnginePermission) u8 {
        return qtc.QWebEnginePermission_PermissionType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginepermission_enums.State `
    ///
    pub fn State(self: QWebEnginePermission) u8 {
        return qtc.QWebEnginePermission_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn IsValid(self: QWebEnginePermission) bool {
        return qtc.QWebEnginePermission_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#grant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn Grant(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Grant(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#deny)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn Deny(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Deny(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn Reset(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#isPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` permissionType: qwebenginepermission_enums.PermissionType `
    ///
    pub fn IsPersistent(permissionType: u8) bool {
        return qtc.QWebEnginePermission_IsPersistent(@bitCast(permissionType));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#dtor.QWebEnginePermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn Delete(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#public-types)
pub const enums = struct {
    pub const PermissionType = enum(u8) {
        pub const Unsupported: u8 = 0;
        pub const MediaAudioCapture: u8 = 1;
        pub const MediaVideoCapture: u8 = 2;
        pub const MediaAudioVideoCapture: u8 = 3;
        pub const DesktopVideoCapture: u8 = 4;
        pub const DesktopAudioVideoCapture: u8 = 5;
        pub const MouseLock: u8 = 6;
        pub const Notifications: u8 = 7;
        pub const Geolocation: u8 = 8;
        pub const ClipboardReadWrite: u8 = 9;
        pub const LocalFontsAccess: u8 = 10;
    };

    pub const State = enum(u8) {
        pub const Invalid: u8 = 0;
        pub const Ask: u8 = 1;
        pub const Granted: u8 = 2;
        pub const Denied: u8 = 3;
    };
};
