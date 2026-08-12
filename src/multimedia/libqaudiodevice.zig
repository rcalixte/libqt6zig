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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAudioDevice object in C++ memory
    ///
    pub fn new() QAudioDevice {
        return .{ .ptr = qtc.QAudioDevice_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAudioDevice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn new2(other: anytype) QAudioDevice {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        return .{ .ptr = qtc.QAudioDevice_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn swap(self: QAudioDevice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        qtc.QAudioDevice_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn operatorAssign(self: QAudioDevice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        qtc.QAudioDevice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn operatorEqual(self: QAudioDevice, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        return qtc.QAudioDevice_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` other: QAudioDevice `
    ///
    pub fn operatorNotEqual(self: QAudioDevice, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAudioDevice;
        return qtc.QAudioDevice_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn isNull(self: QAudioDevice) bool {
        return qtc.QAudioDevice_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: QAudioDevice, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QAudioDevice_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QAudioDevice.id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QAudioDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAudioDevice_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAudioDevice.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn isDefault(self: QAudioDevice) bool {
        return qtc.QAudioDevice_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

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
    pub fn mode(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFormatSupported` instead
    ///
    pub const IsFormatSupported = isFormatSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#isFormatSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    /// ` format: QAudioFormat `
    ///
    pub fn isFormatSupported(self: QAudioDevice, format: anytype) bool {
        comptime _ = @TypeOf(format)._is_QAudioFormat;
        return qtc.QAudioDevice_IsFormatSupported(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `preferredFormat` instead
    ///
    pub const PreferredFormat = preferredFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#preferredFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn preferredFormat(self: QAudioDevice) QAudioFormat {
        return .{ .ptr = qtc.QAudioDevice_PreferredFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSampleRate` instead
    ///
    pub const MinimumSampleRate = minimumSampleRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn minimumSampleRate(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MinimumSampleRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumSampleRate` instead
    ///
    pub const MaximumSampleRate = maximumSampleRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumSampleRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn maximumSampleRate(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MaximumSampleRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumChannelCount` instead
    ///
    pub const MinimumChannelCount = minimumChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#minimumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn minimumChannelCount(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MinimumChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumChannelCount` instead
    ///
    pub const MaximumChannelCount = maximumChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#maximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn maximumChannelCount(self: QAudioDevice) i32 {
        return qtc.QAudioDevice_MaximumChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedSampleFormats` instead
    ///
    pub const SupportedSampleFormats = supportedSampleFormats;

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
    pub fn supportedSampleFormats(self: QAudioDevice, allocator: std.mem.Allocator) []u16 {
        const _arr: qtc.libqt_list = qtc.QAudioDevice_SupportedSampleFormats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u16, _arr.len) catch @panic("QAudioDevice.supportedSampleFormats: Memory allocation failed");
        const _data_val: [*]u16 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `channelConfiguration` instead
    ///
    pub const ChannelConfiguration = channelConfiguration;

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
    pub fn channelConfiguration(self: QAudioDevice) u32 {
        return qtc.QAudioDevice_ChannelConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaudiodevice.html#dtor.QAudioDevice)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAudioDevice `
    ///
    pub fn delete(self: QAudioDevice) void {
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
