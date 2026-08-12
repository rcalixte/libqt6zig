const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const qssl_enums = @import("libqssl.zig").enums;
const qssldiffiehellmanparameters_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html)
pub const QSslDiffieHellmanParameters = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslDiffieHellmanParameters,

    pub const _is_QSslDiffieHellmanParameters = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslDiffieHellmanParameters object in C++ memory
    ///
    pub fn new() QSslDiffieHellmanParameters {
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslDiffieHellmanParameters object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslDiffieHellmanParameters `
    ///
    pub fn new2(other: anytype) QSslDiffieHellmanParameters {
        comptime _ = @TypeOf(other)._is_QSslDiffieHellmanParameters;
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultParameters` instead
    ///
    pub const DefaultParameters = defaultParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#defaultParameters)
    ///
    pub fn defaultParameters() QSslDiffieHellmanParameters {
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_DefaultParameters() };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    /// ` other: QSslDiffieHellmanParameters `
    ///
    pub fn operatorAssign(self: QSslDiffieHellmanParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslDiffieHellmanParameters;
        qtc.QSslDiffieHellmanParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    /// ` other: QSslDiffieHellmanParameters `
    ///
    pub fn swap(self: QSslDiffieHellmanParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslDiffieHellmanParameters;
        qtc.QSslDiffieHellmanParameters_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromEncoded` instead
    ///
    pub const FromEncoded = fromEncoded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    pub fn fromEncoded(encoded: []u8) QSslDiffieHellmanParameters {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded(encoded_str) };
    }

    /// ### DEPRECATED: Use `fromEncoded2` instead
    ///
    pub const FromEncoded2 = fromEncoded2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn fromEncoded2(device: anytype) QSslDiffieHellmanParameters {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded2(@ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    pub fn isEmpty(self: QSslDiffieHellmanParameters) bool {
        return qtc.QSslDiffieHellmanParameters_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    pub fn isValid(self: QSslDiffieHellmanParameters) bool {
        return qtc.QSslDiffieHellmanParameters_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    /// ## Returns:
    ///
    /// ` qssldiffiehellmanparameters_enums.Error `
    ///
    pub fn error0(self: QSslDiffieHellmanParameters) i32 {
        return qtc.QSslDiffieHellmanParameters_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QSslDiffieHellmanParameters, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslDiffieHellmanParameters_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslDiffieHellmanParameters.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromEncoded22` instead
    ///
    pub const FromEncoded22 = fromEncoded22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn fromEncoded22(encoded: []u8, format: i32) QSslDiffieHellmanParameters {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded22(encoded_str, @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `fromEncoded23` instead
    ///
    pub const FromEncoded23 = fromEncoded23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn fromEncoded23(device: anytype, format: i32) QSslDiffieHellmanParameters {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded23(@ptrCast(device.ptr), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#dtor.QSslDiffieHellmanParameters)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    pub fn delete(self: QSslDiffieHellmanParameters) void {
        qtc.QSslDiffieHellmanParameters_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const InvalidInputDataError: i32 = 1;
        pub const UnsafeParametersError: i32 = 2;
    };
};
