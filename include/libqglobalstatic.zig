const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qglobalstatic.html#public-types)
pub const enums = struct {
    pub const GuardValues = enum(i32) {
        pub const Destroyed: i32 = -2;
        pub const Initialized: i32 = -1;
        pub const Uninitialized: i32 = 0;
        pub const Initializing: i32 = 1;
    };
};
