const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcborcommon_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcborerror.html
pub const qcborerror = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#operator)
    ///
    /// ``` self: QtC.QCborError ```
    ///
    /// Returns: ``` qcborcommon_enums.Code ```
    pub fn ToQCborError__Code(self: ?*anyopaque) i32 {
        return qtc.QCborError_ToQCborError__Code(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#toString)
    ///
    /// ``` self: QtC.QCborError, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborError_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborerror.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#dtor.QCborError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCborError ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcborcommon.html#types
pub const enums = struct {
    pub const QCborSimpleType = enum {
        pub const False: u8 = 20;
        pub const True: u8 = 21;
        pub const Null: u8 = 22;
        pub const Undefined: u8 = 23;
    };

    pub const QCborTag = enum(u64) {};

    pub const QCborKnownTags = enum {
        pub const DateTimeString: i32 = 0;
        pub const UnixTime_t: i32 = 1;
        pub const PositiveBignum: i32 = 2;
        pub const NegativeBignum: i32 = 3;
        pub const Decimal: i32 = 4;
        pub const Bigfloat: i32 = 5;
        pub const COSE_Encrypt0: i32 = 16;
        pub const COSE_Mac0: i32 = 17;
        pub const COSE_Sign1: i32 = 18;
        pub const ExpectedBase64url: i32 = 21;
        pub const ExpectedBase64: i32 = 22;
        pub const ExpectedBase16: i32 = 23;
        pub const EncodedCbor: i32 = 24;
        pub const Url: i32 = 32;
        pub const Base64url: i32 = 33;
        pub const Base64: i32 = 34;
        pub const RegularExpression: i32 = 35;
        pub const MimeMessage: i32 = 36;
        pub const Uuid: i32 = 37;
        pub const COSE_Encrypt: i32 = 96;
        pub const COSE_Mac: i32 = 97;
        pub const COSE_Sign: i32 = 98;
        pub const Signature: i32 = 55799;
    };

    pub const QCborNegativeInteger = enum(u64) {};

    pub const Code = enum {
        pub const UnknownError: i32 = 1;
        pub const AdvancePastEnd: i32 = 3;
        pub const InputOutputError: i32 = 4;
        pub const GarbageAtEnd: i32 = 256;
        pub const EndOfFile: i32 = 257;
        pub const UnexpectedBreak: i32 = 258;
        pub const UnknownType: i32 = 259;
        pub const IllegalType: i32 = 260;
        pub const IllegalNumber: i32 = 261;
        pub const IllegalSimpleType: i32 = 262;
        pub const InvalidUtf8String: i32 = 516;
        pub const DataTooLarge: i32 = 1024;
        pub const NestingTooDeep: i32 = 1025;
        pub const UnsupportedType: i32 = 1026;
        pub const NoError: i32 = 0;
    };
};
