const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAudioFormat = @import("libqt6").QAudioFormat;
const qaudiodevice_enums = enums;
const qaudioformat_enums = @import("libqaudioformat.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html)
pub const QAudioDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAudioDevice,

    pub const _is_QAudioDevice = {};

    /// New constructs a new QAudioDevice object.
    ///
    pub fn New() QAudioDevice {
        return .{ .ptr = qtc.QAudioDevice_new() };
    }

    /// New2 constructs a new QAudioDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn New2(other: anytype) QAudioDevice {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        return .{ .ptr = qtc.QAudioDevice_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn Swap(self: QAudioDevice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        qtc.QAudioDevice_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn OperatorAssign(self: QAudioDevice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        qtc.QAudioDevice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn OperatorEqual(self: QAudioDevice, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        return qtc.QAudioDevice_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn OperatorNotEqual(self: QAudioDevice, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        return qtc.QAudioDevice_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn IsNull(self: QAudioDevice) bool {
        return qtc.QAudioDevice_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: QAudioDevice, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QAudioDevice_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qaudiodevice.Id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QAudioDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAudioDevice_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiodevice.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn IsDefault(self: QAudioDevice) bool {
        return qtc.QAudioDevice_IsDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ## Returns:
    ///
    /// ` qaudiodevice_enums.Mode `
    ///
    pub fn Mode(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isFormatSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` format: QAudioFormat `
    ///
    pub fn IsFormatSupported(self: QAudioDevice, format: anytype) bool {
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        return qtc.QAudioDevice_IsFormatSupported(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#preferredFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn PreferredFormat(self: QAudioDevice) QAudioFormat {
        return .{ .ptr = qtc.QAudioDevice_PreferredFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn MinimumSampleRate(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MinimumSampleRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn MaximumSampleRate(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MaximumSampleRate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn MinimumChannelCount(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MinimumChannelCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn MaximumChannelCount(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MaximumChannelCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#supportedSampleFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qaudioformat_enums.SampleFormat `
    ///
    pub fn SupportedSampleFormats(self: QAudioDevice, allocator: std.mem.Allocator) []u16 {
        const _arr: qtc.libqt_list = qtc.QAudioDevice_SupportedSampleFormats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u16, _arr.len) catch @panic("qaudiodevice.SupportedSampleFormats: Memory allocation failed");
        const _data: [*]u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#channelConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.ChannelConfig `
    ///
    pub fn ChannelConfiguration(self: QAudioDevice) u32 {
        return qtc.QAudioDevice_ChannelConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#dtor.QAudioDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn Delete(self: QAudioDevice) void {
        qtc.QAudioDevice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#public-types)
pub const enums = struct {
    pub const Mode = enum(i32) {
        pub const Null: i32 = 0;
        pub const Input: i32 = 1;
        pub const Output: i32 = 2;
    };
};
