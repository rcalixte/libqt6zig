const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-types.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const FirstType: i32 = 0;
        pub const Empty: i32 = 0;
        pub const Archive: i32 = 1;
        pub const Audio: i32 = 2;
        pub const Video: i32 = 3;
        pub const Image: i32 = 4;
        pub const Document: i32 = 5;
        pub const Spreadsheet: i32 = 6;
        pub const Presentation: i32 = 7;
        pub const Text: i32 = 8;
        pub const Folder: i32 = 9;
        pub const LastType: i32 = 9;
    };
};
