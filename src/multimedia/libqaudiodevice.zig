const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaudiodevice_enums = enums;
const qaudioformat_enums = @import("libqaudioformat.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html)
pub const qaudiodevice = struct {
    /// New constructs a new QAudioDevice object.
    ///
    pub fn New() QtC.QAudioDevice {
        return qtc.QAudioDevice_new();
    }

    /// New2 constructs a new QAudioDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QAudioDevice `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QAudioDevice {
        return qtc.QAudioDevice_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` other: QtC.QAudioDevice `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioDevice_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` other: QtC.QAudioDevice `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioDevice_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` other: QtC.QAudioDevice `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAudioDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` other: QtC.QAudioDevice `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAudioDevice_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QAudioDevice_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QAudioDevice_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qaudiodevice.Id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAudioDevice_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiodevice.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.QAudioDevice_IsDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ## Returns:
    ///
    /// ` qaudiodevice_enums.Mode `
    ///
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QAudioDevice_Mode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isFormatSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` format: QtC.QAudioFormat `
    ///
    pub fn IsFormatSupported(self: ?*anyopaque, format: ?*anyopaque) bool {
        return qtc.QAudioDevice_IsFormatSupported(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#preferredFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn PreferredFormat(self: ?*anyopaque) QtC.QAudioFormat {
        return qtc.QAudioDevice_PreferredFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn MinimumSampleRate(self: ?*anyopaque) i32 {
        return qtc.QAudioDevice_MinimumSampleRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn MaximumSampleRate(self: ?*anyopaque) i32 {
        return qtc.QAudioDevice_MaximumSampleRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn MinimumChannelCount(self: ?*anyopaque) i32 {
        return qtc.QAudioDevice_MinimumChannelCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn MaximumChannelCount(self: ?*anyopaque) i32 {
        return qtc.QAudioDevice_MaximumChannelCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#supportedSampleFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qaudioformat_enums.SampleFormat `
    ///
    pub fn SupportedSampleFormats(self: ?*anyopaque, allocator: std.mem.Allocator) []u16 {
        const _arr: qtc.libqt_list = qtc.QAudioDevice_SupportedSampleFormats(@ptrCast(self));
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
    /// ` self: QtC.QAudioDevice `
    ///
    /// ## Returns:
    ///
    /// ` qaudioformat_enums.ChannelConfig `
    ///
    pub fn ChannelConfiguration(self: ?*anyopaque) u32 {
        return qtc.QAudioDevice_ChannelConfiguration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#dtor.QAudioDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAudioDevice `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioDevice_Delete(@ptrCast(self));
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
