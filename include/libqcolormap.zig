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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QColormap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _colormap: QColormap `
    ///
    pub fn new(_colormap: anytype) QColormap {
        comptime _ = @TypeOf(_colormap)._is_QColormap;
        return .{ .ptr = qtc.QColormap_new(@ptrCast(_colormap.ptr)) };
    }

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#initialize)
    ///
    pub fn initialize() void {
        qtc.QColormap_Initialize();
    }

    /// ### DEPRECATED: Use `cleanup` instead
    ///
    pub const Cleanup = cleanup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#cleanup)
    ///
    pub fn cleanup() void {
        qtc.QColormap_Cleanup();
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#instance)
    ///
    pub fn instance() QColormap {
        return .{ .ptr = qtc.QColormap_Instance() };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` _colormap: QColormap `
    ///
    pub fn operatorAssign(self: QColormap, _colormap: anytype) void {
        comptime _ = @TypeOf(_colormap)._is_QColormap;
        qtc.QColormap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(_colormap.ptr));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

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
    pub fn mode(self: QColormap) i32 {
        return qtc.QColormap_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    pub fn depth(self: QColormap) i32 {
        return qtc.QColormap_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    pub fn size(self: QColormap) i32 {
        return qtc.QColormap_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pixel` instead
    ///
    pub const Pixel = pixel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#pixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` color: QColor `
    ///
    pub fn pixel(self: QColormap, color: anytype) u32 {
        comptime _ = @TypeOf(color)._is_QColor;
        return qtc.QColormap_Pixel(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `colorAt` instead
    ///
    pub const ColorAt = colorAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#colorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` _pixel: u32 `
    ///
    pub fn colorAt(self: QColormap, _pixel: u32) QColor {
        return .{ .ptr = qtc.QColormap_ColorAt(@ptrCast(self.ptr), @bitCast(_pixel)) };
    }

    /// ### DEPRECATED: Use `colormap` instead
    ///
    pub const Colormap = colormap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#colormap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QColormap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn colormap(self: QColormap, allocator: std.mem.Allocator) []QColor {
        const _arr: qtc.libqt_list = qtc.QColormap_Colormap(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QColor, _arr.len) catch @panic("QColormap.colormap: Memory allocation failed");
        const _data_val: [*]QtC.QColor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `instance1` instead
    ///
    pub const Instance1 = instance1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#instance)
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: i32 `
    ///
    pub fn instance1(screen: i32) QColormap {
        return .{ .ptr = qtc.QColormap_Instance1(@bitCast(screen)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#dtor.QColormap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QColormap `
    ///
    pub fn delete(self: QColormap) void {
        qtc.QColormap_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#public-types)
pub const enums = struct {
    pub const Mode = enum {
        pub const Direct: i32 = 0;
        pub const Indexed: i32 = 1;
        pub const Gray: i32 = 2;
    };
};
