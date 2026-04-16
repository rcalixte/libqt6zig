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

    /// New constructs a new QSslDiffieHellmanParameters object.
    ///
    pub fn New() QSslDiffieHellmanParameters {
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_new() };
    }

    /// New2 constructs a new QSslDiffieHellmanParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSslDiffieHellmanParameters `
    ///
    pub fn New2(other: anytype) QSslDiffieHellmanParameters {
        comptime _ = @TypeOf(other)._is_QSslDiffieHellmanParameters;
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#defaultParameters)
    ///
    pub fn DefaultParameters() QSslDiffieHellmanParameters {
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_DefaultParameters() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    /// ` other: QSslDiffieHellmanParameters `
    ///
    pub fn OperatorAssign(self: QSslDiffieHellmanParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslDiffieHellmanParameters;
        qtc.QSslDiffieHellmanParameters_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    /// ` other: QSslDiffieHellmanParameters `
    ///
    pub fn Swap(self: QSslDiffieHellmanParameters, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslDiffieHellmanParameters;
        qtc.QSslDiffieHellmanParameters_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    pub fn FromEncoded(encoded: []u8) QSslDiffieHellmanParameters {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded(encoded_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn FromEncoded2(device: anytype) QSslDiffieHellmanParameters {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded2(@ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    pub fn IsEmpty(self: QSslDiffieHellmanParameters) bool {
        return qtc.QSslDiffieHellmanParameters_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    pub fn IsValid(self: QSslDiffieHellmanParameters) bool {
        return qtc.QSslDiffieHellmanParameters_IsValid(@ptrCast(self.ptr));
    }

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
    pub fn Error(self: QSslDiffieHellmanParameters) i32 {
        return qtc.QSslDiffieHellmanParameters_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QSslDiffieHellmanParameters, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslDiffieHellmanParameters_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qssldiffiehellmanparameters.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` encoded: []u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn FromEncoded22(encoded: []u8, format: i32) QSslDiffieHellmanParameters {
        const encoded_str = qtc.libqt_string{
            .len = encoded.len,
            .data = encoded.ptr,
        };
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded22(encoded_str, @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn FromEncoded23(device: anytype, format: i32) QSslDiffieHellmanParameters {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QSslDiffieHellmanParameters_FromEncoded23(@ptrCast(device.ptr), @bitCast(format)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#dtor.QSslDiffieHellmanParameters)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslDiffieHellmanParameters `
    ///
    pub fn Delete(self: QSslDiffieHellmanParameters) void {
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
