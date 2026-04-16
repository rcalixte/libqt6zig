const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSize = @import("libqt6").QSize;
const qcameradevice_enums = enums;
const qtvideo_enums = @import("libqtvideo.zig").enums;
const qvideoframeformat_enums = @import("libqvideoframeformat.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html)
pub const QCameraFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCameraFormat,

    pub const _is_QCameraFormat = {};

    /// New constructs a new QCameraFormat object.
    ///
    pub fn New() QCameraFormat {
        return .{ .ptr = qtc.QCameraFormat_new() };
    }

    /// New2 constructs a new QCameraFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCameraFormat `
    ///
    pub fn New2(other: anytype) QCameraFormat {
        comptime _ = @TypeOf(other)._is_QCameraFormat;
        return .{ .ptr = qtc.QCameraFormat_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    /// ` other: QCameraFormat `
    ///
    pub fn OperatorAssign(self: QCameraFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCameraFormat;
        qtc.QCameraFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#pixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    /// ## Returns:
    ///
    /// ` qvideoframeformat_enums.PixelFormat `
    ///
    pub fn PixelFormat(self: QCameraFormat) i32 {
        return qtc.QCameraFormat_PixelFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#resolution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    pub fn Resolution(self: QCameraFormat) QSize {
        return .{ .ptr = qtc.QCameraFormat_Resolution(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#minFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    pub fn MinFrameRate(self: QCameraFormat) f32 {
        return qtc.QCameraFormat_MinFrameRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#maxFrameRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    pub fn MaxFrameRate(self: QCameraFormat) f32 {
        return qtc.QCameraFormat_MaxFrameRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    pub fn IsNull(self: QCameraFormat) bool {
        return qtc.QCameraFormat_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    /// ` other: QCameraFormat `
    ///
    pub fn OperatorEqual(self: QCameraFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QCameraFormat;
        return qtc.QCameraFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraFormat `
    ///
    /// ` other: QCameraFormat `
    ///
    pub fn OperatorNotEqual(self: QCameraFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QCameraFormat;
        return qtc.QCameraFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#dtor.QCameraFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCameraFormat `
    ///
    pub fn Delete(self: QCameraFormat) void {
        qtc.QCameraFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html)
pub const QCameraDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCameraDevice,

    pub const _is_QCameraDevice = {};

    /// New constructs a new QCameraDevice object.
    ///
    pub fn New() QCameraDevice {
        return .{ .ptr = qtc.QCameraDevice_new() };
    }

    /// New2 constructs a new QCameraDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCameraDevice `
    ///
    pub fn New2(other: anytype) QCameraDevice {
        comptime _ = @TypeOf(other)._is_QCameraDevice;
        return .{ .ptr = qtc.QCameraDevice_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ` other: QCameraDevice `
    ///
    pub fn OperatorAssign(self: QCameraDevice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCameraDevice;
        qtc.QCameraDevice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ` other: QCameraDevice `
    ///
    pub fn OperatorEqual(self: QCameraDevice, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QCameraDevice;
        return qtc.QCameraDevice_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ` other: QCameraDevice `
    ///
    pub fn OperatorNotEqual(self: QCameraDevice, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QCameraDevice;
        return qtc.QCameraDevice_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    pub fn IsNull(self: QCameraDevice) bool {
        return qtc.QCameraDevice_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: QCameraDevice, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCameraDevice_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcameradevice.Id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QCameraDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCameraDevice_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcameradevice.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    pub fn IsDefault(self: QCameraDevice) bool {
        return qtc.QCameraDevice_IsDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ## Returns:
    ///
    /// ` qcameradevice_enums.Position `
    ///
    pub fn Position(self: QCameraDevice) i32 {
        return qtc.QCameraDevice_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#photoResolutions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PhotoResolutions(self: QCameraDevice, allocator: std.mem.Allocator) []QSize {
        const _arr: qtc.libqt_list = qtc.QCameraDevice_PhotoResolutions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("qcameradevice.PhotoResolutions: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#videoFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VideoFormats(self: QCameraDevice, allocator: std.mem.Allocator) []QCameraFormat {
        const _arr: qtc.libqt_list = qtc.QCameraDevice_VideoFormats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QCameraFormat, _arr.len) catch @panic("qcameradevice.VideoFormats: Memory allocation failed");
        const _data: [*]QtC.QCameraFormat = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#correctionAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCameraDevice `
    ///
    /// ## Returns:
    ///
    /// ` qtvideo_enums.Rotation `
    ///
    pub fn CorrectionAngle(self: QCameraDevice) i32 {
        return qtc.QCameraDevice_CorrectionAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#dtor.QCameraDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCameraDevice `
    ///
    pub fn Delete(self: QCameraDevice) void {
        qtc.QCameraDevice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#public-types)
pub const enums = struct {
    pub const Position = enum(i32) {
        pub const UnspecifiedPosition: i32 = 0;
        pub const BackFace: i32 = 1;
        pub const FrontFace: i32 = 2;
    };
};
