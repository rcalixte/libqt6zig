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

    /// New constructs a new QHttp2Configuration object.
    ///
    pub fn New() QHttp2Configuration {
        return .{ .ptr = qtc.QHttp2Configuration_new() };
    }

    /// New2 constructs a new QHttp2Configuration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHttp2Configuration `
    ///
    pub fn New2(other: anytype) QHttp2Configuration {
        comptime _ = @TypeOf(other)._is_QHttp2Configuration;
        return .{ .ptr = qtc.QHttp2Configuration_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` other: QHttp2Configuration `
    ///
    pub fn OperatorAssign(self: QHttp2Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp2Configuration;
        qtc.QHttp2Configuration_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setServerPushEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` enable: bool `
    ///
    pub fn SetServerPushEnabled(self: QHttp2Configuration, enable: bool) void {
        qtc.QHttp2Configuration_SetServerPushEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#serverPushEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn ServerPushEnabled(self: QHttp2Configuration) bool {
        return qtc.QHttp2Configuration_ServerPushEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setHuffmanCompressionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` enable: bool `
    ///
    pub fn SetHuffmanCompressionEnabled(self: QHttp2Configuration, enable: bool) void {
        qtc.QHttp2Configuration_SetHuffmanCompressionEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#huffmanCompressionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn HuffmanCompressionEnabled(self: QHttp2Configuration) bool {
        return qtc.QHttp2Configuration_HuffmanCompressionEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setSessionReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn SetSessionReceiveWindowSize(self: QHttp2Configuration, size: u32) bool {
        return qtc.QHttp2Configuration_SetSessionReceiveWindowSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#sessionReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn SessionReceiveWindowSize(self: QHttp2Configuration) u32 {
        return qtc.QHttp2Configuration_SessionReceiveWindowSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setStreamReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn SetStreamReceiveWindowSize(self: QHttp2Configuration, size: u32) bool {
        return qtc.QHttp2Configuration_SetStreamReceiveWindowSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#streamReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn StreamReceiveWindowSize(self: QHttp2Configuration) u32 {
        return qtc.QHttp2Configuration_StreamReceiveWindowSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setMaxFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn SetMaxFrameSize(self: QHttp2Configuration, size: u32) bool {
        return qtc.QHttp2Configuration_SetMaxFrameSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#maxFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn MaxFrameSize(self: QHttp2Configuration) u32 {
        return qtc.QHttp2Configuration_MaxFrameSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp2Configuration `
    ///
    /// ` other: QHttp2Configuration `
    ///
    pub fn Swap(self: QHttp2Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp2Configuration;
        qtc.QHttp2Configuration_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#dtor.QHttp2Configuration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHttp2Configuration `
    ///
    pub fn Delete(self: QHttp2Configuration) void {
        qtc.QHttp2Configuration_Delete(@ptrCast(self.ptr));
    }
};
