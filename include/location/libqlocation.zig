const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlocation.html#public-types)
pub const enums = struct {
    pub const Visibility = enum {
        pub const UnspecifiedVisibility: i32 = 0;
        pub const DeviceVisibility: i32 = 1;
        pub const PrivateVisibility: i32 = 2;
        pub const PublicVisibility: i32 = 4;
    };
};
