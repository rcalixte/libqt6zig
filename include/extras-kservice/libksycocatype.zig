const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/ksycocatype.html#types
pub const enums = struct {
    pub const KSycocaType = enum {
        pub const KST_KSycocaEntry: i32 = 0;
        pub const KST_KService: i32 = 1;
        pub const KST_KServiceType: i32 = 2;
        pub const KST_KMimeType: i32 = 3;
        pub const KST_KMimeTypeEntry: i32 = 6;
        pub const KST_KServiceGroup: i32 = 7;
        pub const KST_KServiceSeparator: i32 = 10;
        pub const KST_KCustom: i32 = 1000;
    };

    pub const KSycocaFactoryId = enum {
        pub const KST_KServiceFactory: i32 = 1;
        pub const KST_KServiceTypeFactory: i32 = 2;
        pub const KST_KServiceGroupFactory: i32 = 3;
        pub const KST_KMimeTypeFactory: i32 = 6;
        pub const KST_CTimeInfo: i32 = 100;
    };
};
