const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialiterable.html#public-types)
pub const enums = struct {
    pub const Position = enum {
        pub const Unspecified: i32 = 0;
        pub const AtBegin: i32 = 1;
        pub const AtEnd: i32 = 2;
    };
};
