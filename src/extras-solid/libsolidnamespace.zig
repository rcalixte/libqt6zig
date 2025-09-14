const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/solid-solidnamespace.html#types
pub const enums = struct {
    pub const ErrorType = enum {
        pub const NoError: i32 = 0;
        pub const UnauthorizedOperation: i32 = 1;
        pub const DeviceBusy: i32 = 2;
        pub const OperationFailed: i32 = 3;
        pub const UserCanceled: i32 = 4;
        pub const InvalidOption: i32 = 5;
        pub const MissingDriver: i32 = 6;
    };
};
