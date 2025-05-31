const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qiodevicebase.html
pub const qiodevicebase = struct {
    /// New constructs a new QIODeviceBase object.
    ///
    /// ``` other: QtC.QIODeviceBase ```
    pub fn New(other: ?*anyopaque) QtC.QIODeviceBase {
        return qtc.QIODeviceBase_new(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QIODeviceBase, other: QtC.QIODeviceBase ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QIODeviceBase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }
};

/// https://doc.qt.io/qt-6/qiodevicebase.html#types
pub const enums = struct {
    pub const OpenModeFlag = enum {
        pub const NotOpen: i32 = 0;
        pub const ReadOnly: i32 = 1;
        pub const WriteOnly: i32 = 2;
        pub const ReadWrite: i32 = 3;
        pub const Append: i32 = 4;
        pub const Truncate: i32 = 8;
        pub const Text: i32 = 16;
        pub const Unbuffered: i32 = 32;
        pub const NewOnly: i32 = 64;
        pub const ExistingOnly: i32 = 128;
    };
};
