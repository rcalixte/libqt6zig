const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginepermission_enums = enums;

/// https://doc.qt.io/qt-6/qwebenginepermission.html
pub const qwebenginepermission = struct {
    /// New constructs a new QWebEnginePermission object.
    ///
    ///
    pub fn New() QtC.QWebEnginePermission {
        return qtc.QWebEnginePermission_new();
    }

    /// New2 constructs a new QWebEnginePermission object.
    ///
    /// ``` other: QtC.QWebEnginePermission ```
    pub fn New2(other: ?*anyopaque) QtC.QWebEnginePermission {
        return qtc.QWebEnginePermission_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#operator-eq)
    ///
    /// ``` self: QtC.QWebEnginePermission, other: QtC.QWebEnginePermission ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEnginePermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#swap)
    ///
    /// ``` self: QtC.QWebEnginePermission, other: QtC.QWebEnginePermission ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEnginePermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#origin)
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    pub fn Origin(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEnginePermission_Origin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#permissionType)
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    ///
    /// Returns: ``` qwebenginepermission_enums.PermissionType ```
    pub fn PermissionType(self: ?*anyopaque) i64 {
        return qtc.QWebEnginePermission_PermissionType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#state)
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    ///
    /// Returns: ``` qwebenginepermission_enums.State ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QWebEnginePermission_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#isValid)
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QWebEnginePermission_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#grant)
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    pub fn Grant(self: ?*anyopaque) void {
        qtc.QWebEnginePermission_Grant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#deny)
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    pub fn Deny(self: ?*anyopaque) void {
        qtc.QWebEnginePermission_Deny(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#reset)
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QWebEnginePermission_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#isPersistent)
    ///
    /// ``` permissionType: qwebenginepermission_enums.PermissionType ```
    pub fn IsPersistent(permissionType: i64) bool {
        return qtc.QWebEnginePermission_IsPersistent(@intCast(permissionType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#dtor.QWebEnginePermission)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEnginePermission ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEnginePermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebenginepermission.html#types
pub const enums = struct {
    pub const PermissionType = enum {
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

    pub const State = enum {
        pub const Invalid: u8 = 0;
        pub const Ask: u8 = 1;
        pub const Granted: u8 = 2;
        pub const Denied: u8 = 3;
    };
};
