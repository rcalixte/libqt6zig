const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPoint = @import("libqt6").QPoint;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QWindow = @import("libqt6").QWindow;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html)
pub const QBackingStore = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBackingStore,

    pub const _is_QBackingStore = {};

    /// New constructs a new QBackingStore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    pub fn New(window: anytype) QBackingStore {
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QBackingStore_new(@ptrCast(window.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn Window(self: QBackingStore) QWindow {
        return .{ .ptr = qtc.QBackingStore_Window(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn PaintDevice(self: QBackingStore) QPaintDevice {
        return .{ .ptr = qtc.QBackingStore_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    pub fn Flush(self: QBackingStore, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QBackingStore_Flush(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` size: QSize `
    ///
    pub fn Resize(self: QBackingStore, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QBackingStore_Resize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn Size(self: QBackingStore) QSize {
        return .{ .ptr = qtc.QBackingStore_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` area: QRegion `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QBackingStore, area: anytype, dx: i32, dy: i32) bool {
        comptime _ = @TypeOf(area)._is_QRegion;
        return qtc.QBackingStore_Scroll(@ptrCast(self.ptr), @ptrCast(area.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#beginPaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` param1: QRegion `
    ///
    pub fn BeginPaint(self: QBackingStore, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QBackingStore_BeginPaint(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#endPaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn EndPaint(self: QBackingStore) void {
        qtc.QBackingStore_EndPaint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#setStaticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    pub fn SetStaticContents(self: QBackingStore, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QBackingStore_SetStaticContents(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#staticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn StaticContents(self: QBackingStore) QRegion {
        return .{ .ptr = qtc.QBackingStore_StaticContents(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#hasStaticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn HasStaticContents(self: QBackingStore) bool {
        return qtc.QBackingStore_HasStaticContents(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    /// ` window: QWindow `
    ///
    pub fn Flush2(self: QBackingStore, region: anytype, window: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        comptime _ = @TypeOf(window)._is_QWindow;
        qtc.QBackingStore_Flush2(@ptrCast(self.ptr), @ptrCast(region.ptr), @ptrCast(window.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    /// ` window: QWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Flush3(self: QBackingStore, region: anytype, window: anytype, offset: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QBackingStore_Flush3(@ptrCast(self.ptr), @ptrCast(region.ptr), @ptrCast(window.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#dtor.QBackingStore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBackingStore `
    ///
    pub fn Delete(self: QBackingStore) void {
        qtc.QBackingStore_Delete(@ptrCast(self.ptr));
    }
};
