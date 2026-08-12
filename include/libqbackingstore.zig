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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBackingStore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    pub fn new(_window: anytype) QBackingStore {
        comptime _ = @TypeOf(_window)._is_QWindow;
        return .{ .ptr = qtc.QBackingStore_new(@ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn window(self: QBackingStore) QWindow {
        return .{ .ptr = qtc.QBackingStore_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `paintDevice` instead
    ///
    pub const PaintDevice = paintDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn paintDevice(self: QBackingStore) QPaintDevice {
        return .{ .ptr = qtc.QBackingStore_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `flush` instead
    ///
    pub const Flush = flush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    pub fn flush(self: QBackingStore, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QBackingStore_Flush(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` _size: QSize `
    ///
    pub fn resize(self: QBackingStore, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QBackingStore_Resize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn size(self: QBackingStore) QSize {
        return .{ .ptr = qtc.QBackingStore_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

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
    pub fn scroll(self: QBackingStore, area: anytype, dx: i32, dy: i32) bool {
        comptime _ = @TypeOf(area)._is_QRegion;
        return qtc.QBackingStore_Scroll(@ptrCast(self.ptr), @ptrCast(area.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `beginPaint` instead
    ///
    pub const BeginPaint = beginPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#beginPaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` param1: QRegion `
    ///
    pub fn beginPaint(self: QBackingStore, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QBackingStore_BeginPaint(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `endPaint` instead
    ///
    pub const EndPaint = endPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#endPaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn endPaint(self: QBackingStore) void {
        qtc.QBackingStore_EndPaint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStaticContents` instead
    ///
    pub const SetStaticContents = setStaticContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#setStaticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    pub fn setStaticContents(self: QBackingStore, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QBackingStore_SetStaticContents(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `staticContents` instead
    ///
    pub const StaticContents = staticContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#staticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn staticContents(self: QBackingStore) QRegion {
        return .{ .ptr = qtc.QBackingStore_StaticContents(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasStaticContents` instead
    ///
    pub const HasStaticContents = hasStaticContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#hasStaticContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    pub fn hasStaticContents(self: QBackingStore) bool {
        return qtc.QBackingStore_HasStaticContents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flush2` instead
    ///
    pub const Flush2 = flush2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    /// ` _window: QWindow `
    ///
    pub fn flush2(self: QBackingStore, region: anytype, _window: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        comptime _ = @TypeOf(_window)._is_QWindow;
        qtc.QBackingStore_Flush2(@ptrCast(self.ptr), @ptrCast(region.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `flush3` instead
    ///
    pub const Flush3 = flush3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBackingStore `
    ///
    /// ` region: QRegion `
    ///
    /// ` _window: QWindow `
    ///
    /// ` offset: QPoint `
    ///
    pub fn flush3(self: QBackingStore, region: anytype, _window: anytype, offset: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QBackingStore_Flush3(@ptrCast(self.ptr), @ptrCast(region.ptr), @ptrCast(_window.ptr), @ptrCast(offset.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#dtor.QBackingStore)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBackingStore `
    ///
    pub fn delete(self: QBackingStore) void {
        qtc.QBackingStore_Delete(@ptrCast(self.ptr));
    }
};
