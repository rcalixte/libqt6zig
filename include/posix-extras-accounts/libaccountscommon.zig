const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Accountscommon.html)
pub const enums = struct {
    pub const ReferenceMode = enum {
        pub const AddReference: i32 = 0;
        pub const StealReference: i32 = 1;
    };
};
