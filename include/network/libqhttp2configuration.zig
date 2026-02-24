const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html)
pub const qhttp2configuration = struct {
    /// New constructs a new QHttp2Configuration object.
    ///
    pub fn New() QtC.QHttp2Configuration {
        return qtc.QHttp2Configuration_new();
    }

    /// New2 constructs a new QHttp2Configuration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QHttp2Configuration `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QHttp2Configuration {
        return qtc.QHttp2Configuration_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    /// ` other: QtC.QHttp2Configuration `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttp2Configuration_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setServerPushEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    /// ` enable: bool `
    ///
    pub fn SetServerPushEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QHttp2Configuration_SetServerPushEnabled(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#serverPushEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    pub fn ServerPushEnabled(self: ?*anyopaque) bool {
        return qtc.QHttp2Configuration_ServerPushEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setHuffmanCompressionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    /// ` enable: bool `
    ///
    pub fn SetHuffmanCompressionEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QHttp2Configuration_SetHuffmanCompressionEnabled(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#huffmanCompressionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    pub fn HuffmanCompressionEnabled(self: ?*anyopaque) bool {
        return qtc.QHttp2Configuration_HuffmanCompressionEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setSessionReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn SetSessionReceiveWindowSize(self: ?*anyopaque, size: u32) bool {
        return qtc.QHttp2Configuration_SetSessionReceiveWindowSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#sessionReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    pub fn SessionReceiveWindowSize(self: ?*anyopaque) u32 {
        return qtc.QHttp2Configuration_SessionReceiveWindowSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setStreamReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn SetStreamReceiveWindowSize(self: ?*anyopaque, size: u32) bool {
        return qtc.QHttp2Configuration_SetStreamReceiveWindowSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#streamReceiveWindowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    pub fn StreamReceiveWindowSize(self: ?*anyopaque) u32 {
        return qtc.QHttp2Configuration_StreamReceiveWindowSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#setMaxFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    /// ` size: u32 `
    ///
    pub fn SetMaxFrameSize(self: ?*anyopaque, size: u32) bool {
        return qtc.QHttp2Configuration_SetMaxFrameSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#maxFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    pub fn MaxFrameSize(self: ?*anyopaque) u32 {
        return qtc.QHttp2Configuration_MaxFrameSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp2configuration.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QHttp2Configuration `
    ///
    /// ` other: QtC.QHttp2Configuration `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttp2Configuration_Swap(@ptrCast(self), @ptrCast(other));
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
    /// ` self: QtC.QHttp2Configuration `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QHttp2Configuration_Delete(@ptrCast(self));
    }
};
