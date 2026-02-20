const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html)
pub const qbackingstore = struct {
    /// New constructs a new QBackingStore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QtC.QWindow `
    ///
    pub fn New(window: ?*anyopaque) QtC.QBackingStore {
        return qtc.QBackingStore_new(@ptrCast(window));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QBackingStore_Window(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    pub fn PaintDevice(self: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QBackingStore_PaintDevice(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    /// ` region: QtC.QRegion `
    ///
    pub fn Flush(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QBackingStore_Flush(@ptrCast(self), @ptrCast(region));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QBackingStore_Resize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QBackingStore_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    /// ` area: QtC.QRegion `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: ?*anyopaque, area: ?*anyopaque, dx: i32, dy: i32) bool {
        return qtc.QBackingStore_Scroll(@ptrCast(self), @ptrCast(area), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#beginPaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    /// ` param1: QtC.QRegion `
    ///
    pub fn BeginPaint(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBackingStore_BeginPaint(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#endPaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    pub fn EndPaint(self: ?*anyopaque) void {
        qtc.QBackingStore_EndPaint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#setStaticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    /// ` region: QtC.QRegion `
    ///
    pub fn SetStaticContents(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QBackingStore_SetStaticContents(@ptrCast(self), @ptrCast(region));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#staticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    pub fn StaticContents(self: ?*anyopaque) QtC.QRegion {
        return qtc.QBackingStore_StaticContents(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#hasStaticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    pub fn HasStaticContents(self: ?*anyopaque) bool {
        return qtc.QBackingStore_HasStaticContents(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    /// ` region: QtC.QRegion `
    ///
    /// ` window: QtC.QWindow `
    ///
    pub fn Flush2(self: ?*anyopaque, region: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QBackingStore_Flush2(@ptrCast(self), @ptrCast(region), @ptrCast(window));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBackingStore `
    ///
    /// ` region: QtC.QRegion `
    ///
    /// ` window: QtC.QWindow `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Flush3(self: ?*anyopaque, region: ?*anyopaque, window: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QBackingStore_Flush3(@ptrCast(self), @ptrCast(region), @ptrCast(window), @ptrCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#dtor.QBackingStore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBackingStore `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBackingStore_Delete(@ptrCast(self));
    }
};
