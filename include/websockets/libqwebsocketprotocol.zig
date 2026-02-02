const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketprotocol.html#public-types)
pub const enums = struct {
    pub const Version = enum(i32) {
        pub const VersionUnknown: i32 = -1;
        pub const Version0: i32 = 0;
        pub const Version4: i32 = 4;
        pub const Version5: i32 = 5;
        pub const Version6: i32 = 6;
        pub const Version7: i32 = 7;
        pub const Version8: i32 = 8;
        pub const Version13: i32 = 13;
        pub const VersionLatest: i32 = 13;
    };

    pub const CloseCode = enum(i32) {
        pub const CloseCodeNormal: i32 = 1000;
        pub const CloseCodeGoingAway: i32 = 1001;
        pub const CloseCodeProtocolError: i32 = 1002;
        pub const CloseCodeDatatypeNotSupported: i32 = 1003;
        pub const CloseCodeReserved1004: i32 = 1004;
        pub const CloseCodeMissingStatusCode: i32 = 1005;
        pub const CloseCodeAbnormalDisconnection: i32 = 1006;
        pub const CloseCodeWrongDatatype: i32 = 1007;
        pub const CloseCodePolicyViolated: i32 = 1008;
        pub const CloseCodeTooMuchData: i32 = 1009;
        pub const CloseCodeMissingExtension: i32 = 1010;
        pub const CloseCodeBadOperation: i32 = 1011;
        pub const CloseCodeTlsHandshakeFailed: i32 = 1015;
    };
};
