const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qbackingstore.html
pub const qbackingstore = struct {
    /// New constructs a new QBackingStore object.
    ///
    /// ``` window: QtC.QWindow ```
    pub fn New(window: ?*anyopaque) QtC.QBackingStore {
        return qtc.QBackingStore_new(@ptrCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#window)
    ///
    /// ``` self: QtC.QBackingStore ```
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QBackingStore_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#paintDevice)
    ///
    /// ``` self: QtC.QBackingStore ```
    pub fn PaintDevice(self: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QBackingStore_PaintDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ``` self: QtC.QBackingStore, region: QtC.QRegion ```
    pub fn Flush(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QBackingStore_Flush(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#resize)
    ///
    /// ``` self: QtC.QBackingStore, size: QtC.QSize ```
    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QBackingStore_Resize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#size)
    ///
    /// ``` self: QtC.QBackingStore ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QBackingStore_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#scroll)
    ///
    /// ``` self: QtC.QBackingStore, area: QtC.QRegion, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, area: ?*anyopaque, dx: i32, dy: i32) bool {
        return qtc.QBackingStore_Scroll(@ptrCast(self), @ptrCast(area), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#beginPaint)
    ///
    /// ``` self: QtC.QBackingStore, param1: QtC.QRegion ```
    pub fn BeginPaint(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBackingStore_BeginPaint(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#endPaint)
    ///
    /// ``` self: QtC.QBackingStore ```
    pub fn EndPaint(self: ?*anyopaque) void {
        qtc.QBackingStore_EndPaint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#setStaticContents)
    ///
    /// ``` self: QtC.QBackingStore, region: QtC.QRegion ```
    pub fn SetStaticContents(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QBackingStore_SetStaticContents(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#staticContents)
    ///
    /// ``` self: QtC.QBackingStore ```
    pub fn StaticContents(self: ?*anyopaque) QtC.QRegion {
        return qtc.QBackingStore_StaticContents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#hasStaticContents)
    ///
    /// ``` self: QtC.QBackingStore ```
    pub fn HasStaticContents(self: ?*anyopaque) bool {
        return qtc.QBackingStore_HasStaticContents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ``` self: QtC.QBackingStore, region: QtC.QRegion, window: QtC.QWindow ```
    pub fn Flush2(self: ?*anyopaque, region: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QBackingStore_Flush2(@ptrCast(self), @ptrCast(region), @ptrCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ``` self: QtC.QBackingStore, region: QtC.QRegion, window: QtC.QWindow, offset: QtC.QPoint ```
    pub fn Flush3(self: ?*anyopaque, region: ?*anyopaque, window: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QBackingStore_Flush3(@ptrCast(self), @ptrCast(region), @ptrCast(window), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#dtor.QBackingStore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBackingStore ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBackingStore_Delete(@ptrCast(self));
    }
};
