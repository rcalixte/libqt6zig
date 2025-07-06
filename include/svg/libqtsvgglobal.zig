const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qtsvgglobal.html#types
pub const enums = struct {
    pub const Option = enum {
        pub const NoOption: u32 = 0;
        pub const Tiny12FeaturesOnly: u32 = 1;
        pub const AssumeTrustedSource: u32 = 2;
    };
};
