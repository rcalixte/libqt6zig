const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsurfaceformat_enums = enums;
pub const struct_i32_i32 = struct { first: i32, second: i32 };

/// https://doc.qt.io/qt-6/qsurfaceformat.html
pub const qsurfaceformat = struct {
    /// New constructs a new QSurfaceFormat object.
    ///
    ///
    pub fn New() QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new();
    }

    /// New2 constructs a new QSurfaceFormat object.
    ///
    /// ``` options: flag of qsurfaceformat_enums.FormatOption ```
    pub fn New2(options: i64) QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new2(@intCast(options));
    }

    /// New3 constructs a new QSurfaceFormat object.
    ///
    /// ``` other: QtC.QSurfaceFormat ```
    pub fn New3(other: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#operator-eq)
    ///
    /// ``` self: QtC.QSurfaceFormat, other: QtC.QSurfaceFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSurfaceFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setDepthBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat, size: i32 ```
    pub fn SetDepthBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetDepthBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#depthBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn DepthBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_DepthBufferSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setStencilBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat, size: i32 ```
    pub fn SetStencilBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetStencilBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#stencilBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn StencilBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_StencilBufferSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setRedBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat, size: i32 ```
    pub fn SetRedBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetRedBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#redBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn RedBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_RedBufferSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setGreenBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat, size: i32 ```
    pub fn SetGreenBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetGreenBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#greenBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn GreenBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_GreenBufferSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setBlueBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat, size: i32 ```
    pub fn SetBlueBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetBlueBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#blueBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn BlueBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_BlueBufferSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setAlphaBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat, size: i32 ```
    pub fn SetAlphaBufferSize(self: ?*anyopaque, size: i32) void {
        qtc.QSurfaceFormat_SetAlphaBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#alphaBufferSize)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn AlphaBufferSize(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_AlphaBufferSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSamples)
    ///
    /// ``` self: QtC.QSurfaceFormat, numSamples: i32 ```
    pub fn SetSamples(self: ?*anyopaque, numSamples: i32) void {
        qtc.QSurfaceFormat_SetSamples(@ptrCast(self), @intCast(numSamples));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#samples)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn Samples(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_Samples(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapBehavior)
    ///
    /// ``` self: QtC.QSurfaceFormat, behavior: qsurfaceformat_enums.SwapBehavior ```
    pub fn SetSwapBehavior(self: ?*anyopaque, behavior: i64) void {
        qtc.QSurfaceFormat_SetSwapBehavior(@ptrCast(self), @intCast(behavior));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#swapBehavior)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    ///
    /// Returns: ``` qsurfaceformat_enums.SwapBehavior ```
    pub fn SwapBehavior(self: ?*anyopaque) i64 {
        return qtc.QSurfaceFormat_SwapBehavior(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#hasAlpha)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn HasAlpha(self: ?*anyopaque) bool {
        return qtc.QSurfaceFormat_HasAlpha(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setProfile)
    ///
    /// ``` self: QtC.QSurfaceFormat, profile: qsurfaceformat_enums.OpenGLContextProfile ```
    pub fn SetProfile(self: ?*anyopaque, profile: i64) void {
        qtc.QSurfaceFormat_SetProfile(@ptrCast(self), @intCast(profile));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#profile)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    ///
    /// Returns: ``` qsurfaceformat_enums.OpenGLContextProfile ```
    pub fn Profile(self: ?*anyopaque) i64 {
        return qtc.QSurfaceFormat_Profile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setRenderableType)
    ///
    /// ``` self: QtC.QSurfaceFormat, typeVal: qsurfaceformat_enums.RenderableType ```
    pub fn SetRenderableType(self: ?*anyopaque, typeVal: i64) void {
        qtc.QSurfaceFormat_SetRenderableType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#renderableType)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    ///
    /// Returns: ``` qsurfaceformat_enums.RenderableType ```
    pub fn RenderableType(self: ?*anyopaque) i64 {
        return qtc.QSurfaceFormat_RenderableType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setMajorVersion)
    ///
    /// ``` self: QtC.QSurfaceFormat, majorVersion: i32 ```
    pub fn SetMajorVersion(self: ?*anyopaque, majorVersion: i32) void {
        qtc.QSurfaceFormat_SetMajorVersion(@ptrCast(self), @intCast(majorVersion));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#majorVersion)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setMinorVersion)
    ///
    /// ``` self: QtC.QSurfaceFormat, minorVersion: i32 ```
    pub fn SetMinorVersion(self: ?*anyopaque, minorVersion: i32) void {
        qtc.QSurfaceFormat_SetMinorVersion(@ptrCast(self), @intCast(minorVersion));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#minorVersion)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#version)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn Version(self: ?*anyopaque) struct_i32_i32 {
        const _pair: qtc.libqt_pair = qtc.QSurfaceFormat_Version(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setVersion)
    ///
    /// ``` self: QtC.QSurfaceFormat, major: i32, minor: i32 ```
    pub fn SetVersion(self: ?*anyopaque, major: i32, minor: i32) void {
        qtc.QSurfaceFormat_SetVersion(@ptrCast(self), @intCast(major), @intCast(minor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#stereo)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn Stereo(self: ?*anyopaque) bool {
        return qtc.QSurfaceFormat_Stereo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setStereo)
    ///
    /// ``` self: QtC.QSurfaceFormat, enable: bool ```
    pub fn SetStereo(self: ?*anyopaque, enable: bool) void {
        qtc.QSurfaceFormat_SetStereo(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOptions)
    ///
    /// ``` self: QtC.QSurfaceFormat, options: flag of qsurfaceformat_enums.FormatOption ```
    pub fn SetOptions(self: ?*anyopaque, options: i64) void {
        qtc.QSurfaceFormat_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
    ///
    /// ``` self: QtC.QSurfaceFormat, option: qsurfaceformat_enums.FormatOption ```
    pub fn SetOption(self: ?*anyopaque, option: i64) void {
        qtc.QSurfaceFormat_SetOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#testOption)
    ///
    /// ``` self: QtC.QSurfaceFormat, option: qsurfaceformat_enums.FormatOption ```
    pub fn TestOption(self: ?*anyopaque, option: i64) bool {
        return qtc.QSurfaceFormat_TestOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#options)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    ///
    /// Returns: ``` flag of qsurfaceformat_enums.FormatOption ```
    pub fn Options(self: ?*anyopaque) i64 {
        return qtc.QSurfaceFormat_Options(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#swapInterval)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn SwapInterval(self: ?*anyopaque) i32 {
        return qtc.QSurfaceFormat_SwapInterval(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapInterval)
    ///
    /// ``` self: QtC.QSurfaceFormat, interval: i32 ```
    pub fn SetSwapInterval(self: ?*anyopaque, interval: i32) void {
        qtc.QSurfaceFormat_SetSwapInterval(@ptrCast(self), @intCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#colorSpace)
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn ColorSpace(self: ?*anyopaque) QtC.QColorSpace {
        return qtc.QSurfaceFormat_ColorSpace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
    ///
    /// ``` self: QtC.QSurfaceFormat, colorSpace: QtC.QColorSpace ```
    pub fn SetColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QSurfaceFormat_SetColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
    ///
    /// ``` self: QtC.QSurfaceFormat, colorSpace: qsurfaceformat_enums.ColorSpace ```
    pub fn SetColorSpace2(self: ?*anyopaque, colorSpace: i64) void {
        qtc.QSurfaceFormat_SetColorSpace2(@ptrCast(self), @intCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setDefaultFormat)
    ///
    /// ``` format: QtC.QSurfaceFormat ```
    pub fn SetDefaultFormat(format: ?*anyopaque) void {
        qtc.QSurfaceFormat_SetDefaultFormat(@ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#defaultFormat)
    ///
    ///
    pub fn DefaultFormat() QtC.QSurfaceFormat {
        return qtc.QSurfaceFormat_DefaultFormat();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
    ///
    /// ``` self: QtC.QSurfaceFormat, option: qsurfaceformat_enums.FormatOption, on: bool ```
    pub fn SetOption2(self: ?*anyopaque, option: i64, on: bool) void {
        qtc.QSurfaceFormat_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#dtor.QSurfaceFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSurfaceFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSurfaceFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsurfaceformat.html#types
pub const enums = struct {
    pub const FormatOption = enum {
        pub const StereoBuffers: i32 = 1;
        pub const DebugContext: i32 = 2;
        pub const DeprecatedFunctions: i32 = 4;
        pub const ResetNotification: i32 = 8;
        pub const ProtectedContent: i32 = 16;
    };

    pub const SwapBehavior = enum {
        pub const DefaultSwapBehavior: i32 = 0;
        pub const SingleBuffer: i32 = 1;
        pub const DoubleBuffer: i32 = 2;
        pub const TripleBuffer: i32 = 3;
    };

    pub const RenderableType = enum {
        pub const DefaultRenderableType: i32 = 0;
        pub const OpenGL: i32 = 1;
        pub const OpenGLES: i32 = 2;
        pub const OpenVG: i32 = 4;
    };

    pub const OpenGLContextProfile = enum {
        pub const NoProfile: i32 = 0;
        pub const CoreProfile: i32 = 1;
        pub const CompatibilityProfile: i32 = 2;
    };

    pub const ColorSpace = enum {
        pub const DefaultColorSpace: i32 = 0;
        pub const SRGBColorSpace: i32 = 1;
    };
};
