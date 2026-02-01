const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsurfaceformat_enums = enums;
const struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html)
pub const qsurfaceformat = struct {
    /// New constructs a new QSurfaceFormat object.
    ///
    pub fn New() QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new();
    }

    /// New2 constructs a new QSurfaceFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` options: flag of qsurfaceformat_enums.FormatOption `
    ///
    pub fn New2(options: i32) QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new2(@intCast(options));
    }

    /// New3 constructs a new QSurfaceFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSurfaceFormat `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new3(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` other: QtC.QSurfaceFormat `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSurfaceFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setDepthBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn SetDepthBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetDepthBufferSize(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#depthBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn DepthBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_DepthBufferSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setStencilBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn SetStencilBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetStencilBufferSize(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#stencilBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn StencilBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_StencilBufferSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setRedBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn SetRedBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetRedBufferSize(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#redBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn RedBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_RedBufferSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setGreenBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn SetGreenBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetGreenBufferSize(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#greenBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn GreenBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_GreenBufferSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setBlueBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn SetBlueBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetBlueBufferSize(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#blueBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn BlueBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_BlueBufferSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setAlphaBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn SetAlphaBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetAlphaBufferSize(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#alphaBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn AlphaBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_AlphaBufferSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSamples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` numSamples: i32 `
    ///
    pub fn SetSamples(self: ?*anyopaque, numSamples: i32) void {
        qtc.QSurfaceFormat_SetSamples(@ptrCast(self), @intCast(numSamples));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#samples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn Samples(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_Samples(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` behavior: qsurfaceformat_enums.SwapBehavior `
    ///
    pub fn SetSwapBehavior(self: ?*anyopaque, behavior: i32) void {
        qtc.QSurfaceFormat_SetSwapBehavior(@ptrCast(self), @intCast(behavior));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#swapBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.SwapBehavior `
    ///
    pub fn SwapBehavior(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_SwapBehavior(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn HasAlpha(self: ?*anyopaque) bool {
        return qtc.QSurfaceFormat_HasAlpha(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` profile: qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn SetProfile(self: ?*anyopaque, profile: i32) void {
        qtc.QSurfaceFormat_SetProfile(@ptrCast(self), @intCast(profile));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#profile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn Profile(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_Profile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setRenderableType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` typeVal: qsurfaceformat_enums.RenderableType `
    ///
    pub fn SetRenderableType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QSurfaceFormat_SetRenderableType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#renderableType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.RenderableType `
    ///
    pub fn RenderableType(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_RenderableType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setMajorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` majorVersion: i32 `
    ///
    pub fn SetMajorVersion(self: ?*anyopaque, majorVersion: i32) void {
        qtc.QSurfaceFormat_SetMajorVersion(@ptrCast(self), @intCast(majorVersion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_MajorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setMinorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` minorVersion: i32 `
    ///
    pub fn SetMinorVersion(self: ?*anyopaque, minorVersion: i32) void {
        qtc.QSurfaceFormat_SetMinorVersion(@ptrCast(self), @intCast(minorVersion));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_MinorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn Version(self: ?*anyopaque) struct_i32_i32 {
        const _pair = qtc.QSurfaceFormat_Version(@ptrCast(self));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` major: i32 `
    ///
    /// ` minor: i32 `
    ///
    pub fn SetVersion(self: ?*anyopaque, major: i32, minor: i32) void {
        qtc.QSurfaceFormat_SetVersion(@ptrCast(self), @intCast(major), @intCast(minor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#stereo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn Stereo(self: ?*anyopaque) bool {
        return qtc.QSurfaceFormat_Stereo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setStereo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn SetStereo(self: ?*anyopaque, enable: bool) void {
        qtc.QSurfaceFormat_SetStereo(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` options: flag of qsurfaceformat_enums.FormatOption `
    ///
    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QSurfaceFormat_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` option: qsurfaceformat_enums.FormatOption `
    ///
    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QSurfaceFormat_SetOption(@ptrCast(self), @intCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#testOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` option: qsurfaceformat_enums.FormatOption `
    ///
    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QSurfaceFormat_TestOption(@ptrCast(self), @intCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsurfaceformat_enums.FormatOption `
    ///
    pub fn Options(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_Options(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#swapInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn SwapInterval(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_SwapInterval(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` interval: i32 `
    ///
    pub fn SetSwapInterval(self: ?*anyopaque, interval: i32) void {
        qtc.QSurfaceFormat_SetSwapInterval(@ptrCast(self), @intCast(interval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#colorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn ColorSpace(self: ?*anyopaque) QtC.QColorSpace {
        return qtc.QSurfaceFormat_ColorSpace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` colorSpace: QtC.QColorSpace `
    ///
    pub fn SetColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QSurfaceFormat_SetColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` colorSpace: qsurfaceformat_enums.ColorSpace `
    ///
    pub fn SetColorSpace2(self: ?*anyopaque, colorSpace: i32) void {
        qtc.QSurfaceFormat_SetColorSpace2(@ptrCast(self), @intCast(colorSpace));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setDefaultFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QtC.QSurfaceFormat `
    ///
    pub fn SetDefaultFormat(format: ?*anyopaque) void {
        qtc.QSurfaceFormat_SetDefaultFormat(@ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#defaultFormat)
    ///
    pub fn DefaultFormat() QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_DefaultFormat();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    /// ` option: qsurfaceformat_enums.FormatOption `
    ///
    /// ` on: bool `
    ///
    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QSurfaceFormat_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#dtor.QSurfaceFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSurfaceFormat `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSurfaceFormat_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#public-types)
pub const enums = struct {
    pub const FormatOption = enum(i32) {
        pub const StereoBuffers: i32 = 1;
        pub const DebugContext: i32 = 2;
        pub const DeprecatedFunctions: i32 = 4;
        pub const ResetNotification: i32 = 8;
        pub const ProtectedContent: i32 = 16;
    };

    pub const SwapBehavior = enum(i32) {
        pub const DefaultSwapBehavior: i32 = 0;
        pub const SingleBuffer: i32 = 1;
        pub const DoubleBuffer: i32 = 2;
        pub const TripleBuffer: i32 = 3;
    };

    pub const RenderableType = enum(i32) {
        pub const DefaultRenderableType: i32 = 0;
        pub const OpenGL: i32 = 1;
        pub const OpenGLES: i32 = 2;
        pub const OpenVG: i32 = 4;
    };

    pub const OpenGLContextProfile = enum(i32) {
        pub const NoProfile: i32 = 0;
        pub const CoreProfile: i32 = 1;
        pub const CompatibilityProfile: i32 = 2;
    };

    pub const ColorSpace = enum(i32) {
        pub const DefaultColorSpace: i32 = 0;
        pub const SRGBColorSpace: i32 = 1;
    };
};
