const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcameradevice_enums = enums;
const qvideoframeformat_enums = @import("libqvideoframeformat.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcameraformat.html
pub const qcameraformat = struct {
    /// New constructs a new QCameraFormat object.
    ///
    ///
    pub fn New() QtC.QCameraFormat {
        return qtc.QCameraFormat_new();
    }

    /// New2 constructs a new QCameraFormat object.
    ///
    /// ``` other: QtC.QCameraFormat ```
    pub fn New2(other: ?*anyopaque) QtC.QCameraFormat {
        return qtc.QCameraFormat_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator=)
    ///
    /// ``` self: QtC.QCameraFormat, other: QtC.QCameraFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#pixelFormat)
    ///
    /// ``` self: QtC.QCameraFormat ```
    pub fn PixelFormat(self: ?*anyopaque) i64 {
        return qtc.QCameraFormat_PixelFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#resolution)
    ///
    /// ``` self: QtC.QCameraFormat ```
    pub fn Resolution(self: ?*anyopaque) QtC.QSize {
        return qtc.QCameraFormat_Resolution(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#minFrameRate)
    ///
    /// ``` self: QtC.QCameraFormat ```
    pub fn MinFrameRate(self: ?*anyopaque) f32 {
        return qtc.QCameraFormat_MinFrameRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#maxFrameRate)
    ///
    /// ``` self: QtC.QCameraFormat ```
    pub fn MaxFrameRate(self: ?*anyopaque) f32 {
        return qtc.QCameraFormat_MaxFrameRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#isNull)
    ///
    /// ``` self: QtC.QCameraFormat ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QCameraFormat_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator==)
    ///
    /// ``` self: QtC.QCameraFormat, other: QtC.QCameraFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraFormat_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator!=)
    ///
    /// ``` self: QtC.QCameraFormat, other: QtC.QCameraFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#dtor.QCameraFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCameraFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCameraFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcameradevice.html
pub const qcameradevice = struct {
    /// New constructs a new QCameraDevice object.
    ///
    ///
    pub fn New() QtC.QCameraDevice {
        return qtc.QCameraDevice_new();
    }

    /// New2 constructs a new QCameraDevice object.
    ///
    /// ``` other: QtC.QCameraDevice ```
    pub fn New2(other: ?*anyopaque) QtC.QCameraDevice {
        return qtc.QCameraDevice_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator=)
    ///
    /// ``` self: QtC.QCameraDevice, other: QtC.QCameraDevice ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraDevice_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator==)
    ///
    /// ``` self: QtC.QCameraDevice, other: QtC.QCameraDevice ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator!=)
    ///
    /// ``` self: QtC.QCameraDevice, other: QtC.QCameraDevice ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCameraDevice_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isNull)
    ///
    /// ``` self: QtC.QCameraDevice ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QCameraDevice_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#id)
    ///
    /// ``` self: QtC.QCameraDevice, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QCameraDevice_Id(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcameradevice.Id: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#description)
    ///
    /// ``` self: QtC.QCameraDevice, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCameraDevice_Description(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcameradevice.Description: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isDefault)
    ///
    /// ``` self: QtC.QCameraDevice ```
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.QCameraDevice_IsDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#position)
    ///
    /// ``` self: QtC.QCameraDevice ```
    pub fn Position(self: ?*anyopaque) i64 {
        return qtc.QCameraDevice_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#photoResolutions)
    ///
    /// ``` self: QtC.QCameraDevice, allocator: std.mem.Allocator ```
    pub fn PhotoResolutions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.struct_libqt_list = qtc.QCameraDevice_PhotoResolutions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("qcameradevice.PhotoResolutions: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#videoFormats)
    ///
    /// ``` self: QtC.QCameraDevice, allocator: std.mem.Allocator ```
    pub fn VideoFormats(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QCameraFormat {
        const _arr: qtc.struct_libqt_list = qtc.QCameraDevice_VideoFormats(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QCameraFormat, _arr.len) catch @panic("qcameradevice.VideoFormats: Memory allocation failed");
        const _data: [*]QtC.QCameraFormat = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#dtor.QCameraDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCameraDevice ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCameraDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcameradevice.html#types
pub const enums = struct {
    pub const Position = enum {
        pub const UnspecifiedPosition: i32 = 0;
        pub const BackFace: i32 = 1;
        pub const FrontFace: i32 = 2;
    };
};
