const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcolormap_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcolormap.html
pub const qcolormap = struct {
    /// New constructs a new QColormap object.
    ///
    /// ``` colormap: QtC.QColormap ```
    pub fn New(colormap: ?*anyopaque) QtC.QColormap {
        return qtc.QColormap_new(@ptrCast(colormap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#initialize)
    ///
    ///
    pub fn Initialize() void {
        qtc.QColormap_Initialize();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#cleanup)
    ///
    ///
    pub fn Cleanup() void {
        qtc.QColormap_Cleanup();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#instance)
    ///
    ///
    pub fn Instance() QtC.QColormap {
        return qtc.QColormap_Instance();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#operator-eq)
    ///
    /// ``` self: QtC.QColormap, colormap: QtC.QColormap ```
    pub fn OperatorAssign(self: ?*anyopaque, colormap: ?*anyopaque) void {
        qtc.QColormap_OperatorAssign(@ptrCast(self), @ptrCast(colormap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#mode)
    ///
    /// ``` self: QtC.QColormap ```
    pub fn Mode(self: ?*anyopaque) i64 {
        return qtc.QColormap_Mode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#depth)
    ///
    /// ``` self: QtC.QColormap ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QColormap_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#size)
    ///
    /// ``` self: QtC.QColormap ```
    pub fn Size(self: ?*anyopaque) i32 {
        return qtc.QColormap_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#pixel)
    ///
    /// ``` self: QtC.QColormap, color: QtC.QColor ```
    pub fn Pixel(self: ?*anyopaque, color: ?*anyopaque) u32 {
        return qtc.QColormap_Pixel(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#colorAt)
    ///
    /// ``` self: QtC.QColormap, pixel: u32 ```
    pub fn ColorAt(self: ?*anyopaque, pixel: u32) QtC.QColor {
        return qtc.QColormap_ColorAt(@ptrCast(self), @intCast(pixel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#colormap)
    ///
    /// ``` self: QtC.QColormap, allocator: std.mem.Allocator ```
    pub fn Colormap(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QColor {
        const _arr: qtc.struct_libqt_list = qtc.QColormap_Colormap(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QColor, _arr.len) catch @panic("qcolormap.Colormap: Memory allocation failed");
        const _data: [*]QtC.QColor = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#instance)
    ///
    /// ``` screen: i32 ```
    pub fn Instance1(screen: i32) QtC.QColormap {
        return qtc.QColormap_Instance1(@intCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#dtor.QColormap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QColormap ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColormap_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcolormap.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Direct: i32 = 0;
        pub const Indexed: i32 = 1;
        pub const Gray: i32 = 2;
    };
};
