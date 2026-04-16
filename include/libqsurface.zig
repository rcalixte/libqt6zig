const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSize = @import("libqt6").QSize;
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;
const qsurface_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html)
pub const QSurface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSurface,

    pub const _is_QSurface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceClass `
    ///
    pub fn SurfaceClass(self: QSurface) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface `
    ///
    pub fn Format(self: QSurface) QSurfaceFormat {
        return .{ .ptr = qtc.QSurface_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn SurfaceType(self: QSurface) i32 {
        return qtc.QSurface_SurfaceType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface `
    ///
    pub fn SupportsOpenGL(self: QSurface) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface `
    ///
    pub fn Size(self: QSurface) QSize {
        return .{ .ptr = qtc.QSurface_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#dtor.QSurface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSurface `
    ///
    pub fn Delete(self: QSurface) void {
        qtc.QSurface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#public-types)
pub const enums = struct {
    pub const SurfaceClass = enum(i32) {
        pub const Window: i32 = 0;
        pub const Offscreen: i32 = 1;
    };

    pub const SurfaceType = enum(i32) {
        pub const RasterSurface: i32 = 0;
        pub const OpenGLSurface: i32 = 1;
        pub const RasterGLSurface: i32 = 2;
        pub const OpenVGSurface: i32 = 3;
        pub const VulkanSurface: i32 = 4;
        pub const MetalSurface: i32 = 5;
        pub const Direct3DSurface: i32 = 6;
    };
};
