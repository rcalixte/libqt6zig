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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEnginePermission object in C++ memory
    ///
    pub fn new() QWebEnginePermission {
        return .{ .ptr = qtc.QWebEnginePermission_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEnginePermission object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEnginePermission `
    ///
    pub fn new2(other: anytype) QWebEnginePermission {
        comptime _ = @TypeOf(other)._is_QWebEnginePermission;
        return .{ .ptr = qtc.QWebEnginePermission_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    /// ` other: QWebEnginePermission `
    ///
    pub fn operatorAssign(self: QWebEnginePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEnginePermission;
        qtc.QWebEnginePermission_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    /// ` other: QWebEnginePermission `
    ///
    pub fn swap(self: QWebEnginePermission, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEnginePermission;
        qtc.QWebEnginePermission_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn origin(self: QWebEnginePermission) QUrl {
        return .{ .ptr = qtc.QWebEnginePermission_Origin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `permissionType` instead
    ///
    pub const PermissionType = permissionType;

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
    pub fn permissionType(self: QWebEnginePermission) u8 {
        return qtc.QWebEnginePermission_PermissionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QWebEnginePermission) u8 {
        return qtc.QWebEnginePermission_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn isValid(self: QWebEnginePermission) bool {
        return qtc.QWebEnginePermission_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grant` instead
    ///
    pub const Grant = grant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#grant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn grant(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Grant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deny` instead
    ///
    pub const Deny = deny;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#deny)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn deny(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Deny(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn reset(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPersistent` instead
    ///
    pub const IsPersistent = isPersistent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#isPersistent)
    ///
    /// ## Parameter(s):
    ///
    /// ` _permissionType: qwebenginepermission_enums.PermissionType `
    ///
    pub fn isPersistent(_permissionType: u8) bool {
        return qtc.QWebEnginePermission_IsPersistent(@bitCast(_permissionType));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#dtor.QWebEnginePermission)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEnginePermission `
    ///
    pub fn delete(self: QWebEnginePermission) void {
        qtc.QWebEnginePermission_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#public-types)
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
