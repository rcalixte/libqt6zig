const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qwebengineglobalsettings.html#types
pub const enums = struct {
    pub const SecureDnsMode = enum {
        pub const SystemOnly: u8 = 0;
        pub const SecureWithFallback: u8 = 1;
        pub const SecureOnly: u8 = 2;
    };
};
