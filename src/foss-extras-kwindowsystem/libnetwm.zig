const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/netwm.html#types
pub const enums = struct {
    pub const NETRootInfo = enum {
        pub const PROTOCOLS: i32 = 0;
        pub const WINDOW_TYPES: i32 = 1;
        pub const STATES: i32 = 2;
        pub const PROTOCOLS2: i32 = 3;
        pub const ACTIONS: i32 = 4;
        pub const PROPERTIES_SIZE: i32 = 5;
    };

    pub const NETWinInfo = enum {
        pub const PROTOCOLS: i32 = 0;
        pub const PROTOCOLS2: i32 = 1;
        pub const PROPERTIES_SIZE: i32 = 2;
    };
};
