const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbluetooth_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html)
pub const qbluetooth = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qbluetooth_enums.Security `
    ///
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.QBluetooth_GetEnumMetaObject(@bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qbluetooth_enums.Security `
    ///
    pub fn GetEnumName(param1: i32) [:0]const u8 {
        const _ret = qtc.QBluetooth_GetEnumName(@bitCast(param1));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn GetEnumMetaObject2(param1: i32) QtC.QMetaObject {
        return qtc.QBluetooth_GetEnumMetaObject2(@bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qbluetooth_enums.AttAccessConstraint `
    ///
    pub fn GetEnumName2(param1: i32) [:0]const u8 {
        const _ret = qtc.QBluetooth_GetEnumName2(@bitCast(param1));
        return std.mem.span(_ret);
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#public-types)
pub const enums = struct {
    pub const Security = enum(i32) {
        pub const NoSecurity: i32 = 0;
        pub const Authorization: i32 = 1;
        pub const Authentication: i32 = 2;
        pub const Encryption: i32 = 4;
        pub const Secure: i32 = 8;
    };

    pub const AttAccessConstraint = enum(i32) {
        pub const AttAuthorizationRequired: i32 = 1;
        pub const AttAuthenticationRequired: i32 = 2;
        pub const AttEncryptionRequired: i32 = 4;
    };
};
