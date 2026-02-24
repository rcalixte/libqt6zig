const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsurface_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html)
pub const qsurface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurface `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceClass `
    ///
    pub fn SurfaceClass(self: ?*anyopaque) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurface `
    ///
    pub fn Format(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QSurface_Format(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurface `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn SurfaceType(self: ?*anyopaque) i32 {
        return qtc.QSurface_SurfaceType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurface `
    ///
    pub fn SupportsOpenGL(self: ?*anyopaque) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurface `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QSurface_Size(@ptrCast(self));
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
    /// ` self: QtC.QSurface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSurface_Delete(@ptrCast(self));
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
