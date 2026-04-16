const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevicebase.html)
pub const QIODeviceBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevicebase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QIODeviceBase,

    pub const _is_QIODeviceBase = {};

    /// New constructs a new QIODeviceBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QIODeviceBase `
    ///
    pub fn New(other: anytype) QIODeviceBase {
        comptime _ = @TypeOf(other)._is_QIODeviceBase;
        return .{ .ptr = qtc.QIODeviceBase_new(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QIODeviceBase `
    ///
    /// ` other: QIODeviceBase `
    ///
    pub fn CopyAssign(self: QIODeviceBase, other: QIODeviceBase) void {
        qtc.QIODeviceBase_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevicebase.html#public-types)
pub const enums = struct {
    pub const OpenModeFlag = enum(i32) {
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
