const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html)
pub const QHttp2Configuration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHttp2Configuration,

    pub const _is_QHttp2Configuration = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHttp2Configuration object in C++ memory
    ///
    pub fn new() QHttp2Configuration {
        return .{ .ptr = qtc.QHttp2Configuration_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHttp2Configuration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHttp2Configuration `
    ///
    pub fn new2(other: anytype) QHttp2Configuration {
        comptime _ = @TypeOf(other)._is_QHttp2Configuration;
        return .{ .ptr = qtc.QHttp2Configuration_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` other: QHttp2Configuration `
    ///
    pub fn operatorAssign(self: QHttp2Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp2Configuration;
        qtc.QHttp2Configuration_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setServerPushEnabled` instead
    ///
    pub const SetServerPushEnabled = setServerPushEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setServerPushEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` enable: bool `
    ///
    pub fn setServerPushEnabled(self: QHttp2Configuration, enable: bool) void {
        qtc.QHttp2Configuration_SetServerPushEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `serverPushEnabled` instead
    ///
    pub const ServerPushEnabled = serverPushEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#serverPushEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn serverPushEnabled(self: QHttp2Configuration) bool {
        return qtc.QHttp2Configuration_ServerPushEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHuffmanCompressionEnabled` instead
    ///
    pub const SetHuffmanCompressionEnabled = setHuffmanCompressionEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setHuffmanCompressionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` enable: bool `
    ///
    pub fn setHuffmanCompressionEnabled(self: QHttp2Configuration, enable: bool) void {
        qtc.QHttp2Configuration_SetHuffmanCompressionEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `huffmanCompressionEnabled` instead
    ///
    pub const HuffmanCompressionEnabled = huffmanCompressionEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#huffmanCompressionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn huffmanCompressionEnabled(self: QHttp2Configuration) bool {
        return qtc.QHttp2Configuration_HuffmanCompressionEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSessionReceiveWindowSize` instead
    ///
    pub const SetSessionReceiveWindowSize = setSessionReceiveWindowSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setSessionReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn setSessionReceiveWindowSize(self: QHttp2Configuration, size: u32) bool {
        return qtc.QHttp2Configuration_SetSessionReceiveWindowSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `sessionReceiveWindowSize` instead
    ///
    pub const SessionReceiveWindowSize = sessionReceiveWindowSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#sessionReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn sessionReceiveWindowSize(self: QHttp2Configuration) u32 {
        return qtc.QHttp2Configuration_SessionReceiveWindowSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStreamReceiveWindowSize` instead
    ///
    pub const SetStreamReceiveWindowSize = setStreamReceiveWindowSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setStreamReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn setStreamReceiveWindowSize(self: QHttp2Configuration, size: u32) bool {
        return qtc.QHttp2Configuration_SetStreamReceiveWindowSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `streamReceiveWindowSize` instead
    ///
    pub const StreamReceiveWindowSize = streamReceiveWindowSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#streamReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn streamReceiveWindowSize(self: QHttp2Configuration) u32 {
        return qtc.QHttp2Configuration_StreamReceiveWindowSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxFrameSize` instead
    ///
    pub const SetMaxFrameSize = setMaxFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setMaxFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn setMaxFrameSize(self: QHttp2Configuration, size: u32) bool {
        return qtc.QHttp2Configuration_SetMaxFrameSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `maxFrameSize` instead
    ///
    pub const MaxFrameSize = maxFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#maxFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn maxFrameSize(self: QHttp2Configuration) u32 {
        return qtc.QHttp2Configuration_MaxFrameSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` other: QHttp2Configuration `
    ///
    pub fn swap(self: QHttp2Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp2Configuration;
        qtc.QHttp2Configuration_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#dtor.QHttp2Configuration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn delete(self: QHttp2Configuration) void {
        qtc.QHttp2Configuration_Delete(@ptrCast(self.ptr));
    }
};
