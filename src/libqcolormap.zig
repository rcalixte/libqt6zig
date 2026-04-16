const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const qcolormap_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html)
pub const QColormap = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QColormap,

    pub const _is_QColormap = {};

    /// New constructs a new QColormap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` colormap: QColormap `
    ///
    pub fn New(colormap: anytype) QColormap {
        comptime _ = @TypeOf(colormap)._is_QColormap;
        return .{ .ptr = qtc.QColormap_new(@ptrCast(colormap.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#initialize)
    ///
    pub fn Initialize() void {
        qtc.QColormap_Initialize();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#cleanup)
    ///
    pub fn Cleanup() void {
        qtc.QColormap_Cleanup();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#instance)
    ///
    pub fn Instance() QColormap {
        return .{ .ptr = qtc.QColormap_Instance() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` colormap: QColormap `
    ///
    pub fn OperatorAssign(self: QColormap, colormap: anytype) void {
        comptime _ = @TypeOf(colormap)._is_QColormap;
        qtc.QColormap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(colormap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ## Returns:
    ///
    /// ` qcolormap_enums.Mode `
    ///
    pub fn Mode(self: QColormap) i32 {
        return qtc.QColormap_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    pub fn Depth(self: QColormap) i32 {
        return qtc.QColormap_Depth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    pub fn Size(self: QColormap) i32 {
        return qtc.QColormap_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#pixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` color: QColor `
    ///
    pub fn Pixel(self: QColormap, color: anytype) u32 {
        comptime _ = @TypeOf(color)._is_QColor;
        return qtc.QColormap_Pixel(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#colorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` pixel: u32 `
    ///
    pub fn ColorAt(self: QColormap, pixel: u32) QColor {
        return .{ .ptr = qtc.QColormap_ColorAt(@ptrCast(self.ptr), @bitCast(pixel)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#colormap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Colormap(self: QColormap, allocator: std.mem.Allocator) []QColor {
        const _arr: qtc.libqt_list = qtc.QColormap_Colormap(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QColor, _arr.len) catch @panic("qcolormap.Colormap: Memory allocation failed");
        const _data: [*]QtC.QColor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#instance)
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: i32 `
    ///
    pub fn Instance1(screen: i32) QColormap {
        return .{ .ptr = qtc.QColormap_Instance1(@bitCast(screen)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#dtor.QColormap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QColormap `
    ///
    pub fn Delete(self: QColormap) void {
        qtc.QColormap_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#public-types)
pub const enums = struct {
    pub const Mode = enum(i32) {
        pub const Direct: i32 = 0;
        pub const Indexed: i32 = 1;
        pub const Gray: i32 = 2;
    };
};
