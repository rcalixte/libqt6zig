const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qdiriterator.html#types
pub const enums = struct {
    pub const IteratorFlag = enum {
        pub const NoIteratorFlags: i32 = 0;
        pub const FollowSymlinks: i32 = 1;
        pub const Subdirectories: i32 = 2;
    };
};
