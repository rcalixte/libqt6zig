const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qssl_enums = @import("libqssl.zig").enums;
const qssldiffiehellmanparameters_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html
pub const qssldiffiehellmanparameters = struct {
    /// New constructs a new QSslDiffieHellmanParameters object.
    ///
    ///
    pub fn New() QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_new();
    }

    /// New2 constructs a new QSslDiffieHellmanParameters object.
    ///
    /// ``` other: QtC.QSslDiffieHellmanParameters ```
    pub fn New2(other: ?*anyopaque) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#defaultParameters)
    ///
    ///
    pub fn DefaultParameters() QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_DefaultParameters();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#operator=)
    ///
    /// ``` self: QtC.QSslDiffieHellmanParameters, other: QtC.QSslDiffieHellmanParameters ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslDiffieHellmanParameters_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#swap)
    ///
    /// ``` self: QtC.QSslDiffieHellmanParameters, other: QtC.QSslDiffieHellmanParameters ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslDiffieHellmanParameters_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ``` encoded: []u8 ```
    pub fn FromEncoded(encoded: []u8) QtC.QSslDiffieHellmanParameters {
        const encoded_str = qtc.struct_libqt_string{
            .len = encoded.len,
            .data = @constCast(encoded.ptr),
        };
        return qtc.QSslDiffieHellmanParameters_FromEncoded(encoded_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ``` device: QtC.QIODevice ```
    pub fn FromEncodedWithDevice(device: ?*anyopaque) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_FromEncodedWithDevice(@ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isEmpty)
    ///
    /// ``` self: QtC.QSslDiffieHellmanParameters ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSslDiffieHellmanParameters_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isValid)
    ///
    /// ``` self: QtC.QSslDiffieHellmanParameters ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSslDiffieHellmanParameters_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#error)
    ///
    /// ``` self: QtC.QSslDiffieHellmanParameters ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QSslDiffieHellmanParameters_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#errorString)
    ///
    /// ``` self: QtC.QSslDiffieHellmanParameters, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslDiffieHellmanParameters_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qssldiffiehellmanparameters.ErrorString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ``` encoded: []u8, format: qssl_enums.EncodingFormat ```
    pub fn FromEncoded2(encoded: []u8, format: i64) QtC.QSslDiffieHellmanParameters {
        const encoded_str = qtc.struct_libqt_string{
            .len = encoded.len,
            .data = @constCast(encoded.ptr),
        };
        return qtc.QSslDiffieHellmanParameters_FromEncoded2(encoded_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
    ///
    /// ``` device: QtC.QIODevice, format: qssl_enums.EncodingFormat ```
    pub fn FromEncoded22(device: ?*anyopaque, format: i64) QtC.QSslDiffieHellmanParameters {
        return qtc.QSslDiffieHellmanParameters_FromEncoded22(@ptrCast(device), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#dtor.QSslDiffieHellmanParameters)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslDiffieHellmanParameters ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslDiffieHellmanParameters_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const InvalidInputDataError: i32 = 1;
        pub const UnsafeParametersError: i32 = 2;
    };
};
