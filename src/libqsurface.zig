const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsurface_enums = enums;

/// https://doc.qt.io/qt-6/qsurface.html
pub const qsurface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ``` self: QtC.QSurface ```
    ///
    /// Returns: ``` qsurface_enums.SurfaceClass ```
    pub fn SurfaceClass(self: ?*anyopaque) i64 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#format)
    ///
    /// ``` self: QtC.QSurface ```
    pub fn Format(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QSurface_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceType)
    ///
    /// ``` self: QtC.QSurface ```
    ///
    /// Returns: ``` qsurface_enums.SurfaceType ```
    pub fn SurfaceType(self: ?*anyopaque) i64 {
        return qtc.QSurface_SurfaceType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ``` self: QtC.QSurface ```
    pub fn SupportsOpenGL(self: ?*anyopaque) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#size)
    ///
    /// ``` self: QtC.QSurface ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QSurface_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#dtor.QSurface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSurface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSurface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsurface.html#types
pub const enums = struct {
    pub const SurfaceClass = enum {
        pub const Window: i32 = 0;
        pub const Offscreen: i32 = 1;
    };

    pub const SurfaceType = enum {
        pub const RasterSurface: i32 = 0;
        pub const OpenGLSurface: i32 = 1;
        pub const RasterGLSurface: i32 = 2;
        pub const OpenVGSurface: i32 = 3;
        pub const VulkanSurface: i32 = 4;
        pub const MetalSurface: i32 = 5;
        pub const Direct3DSurface: i32 = 6;
    };
};
