const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#public-types)
pub const enums = struct {
    pub const AllocationOption = enum {
        pub const Grow: i32 = 0;
        pub const KeepSize: i32 = 1;
    };

    pub const GrowthPosition = enum {
        pub const GrowsAtEnd: i32 = 0;
        pub const GrowsAtBeginning: i32 = 1;
    };

    pub const ArrayOption = enum {
        pub const ArrayOptionDefault: i32 = 0;
        pub const CapacityReserved: i32 = 1;
    };

    pub const CutResult = enum {
        pub const Null: i32 = 0;
        pub const Empty: i32 = 1;
        pub const Full: i32 = 2;
        pub const Subset: i32 = 3;
    };
};
