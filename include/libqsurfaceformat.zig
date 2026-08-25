const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColorSpace = @import("libqt6").QColorSpace;
const qsurfaceformat_enums = enums;
const Struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html)
pub const QSurfaceFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSurfaceFormat,

    pub const _is_QSurfaceFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSurfaceFormat object in C++ memory
    ///
    pub fn new() QSurfaceFormat {
        return .{ .ptr = qtc.QSurfaceFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSurfaceFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _options: flag of qsurfaceformat_enums.FormatOption `
    ///
    pub fn new2(_options: i32) QSurfaceFormat {
        return .{ .ptr = qtc.QSurfaceFormat_new2(@bitCast(_options)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSurfaceFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSurfaceFormat `
    ///
    pub fn new3(other: anytype) QSurfaceFormat {
        comptime _ = @TypeOf(other)._is_QSurfaceFormat;
        return .{ .ptr = qtc.QSurfaceFormat_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` other: QSurfaceFormat `
    ///
    pub fn operatorAssign(self: QSurfaceFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSurfaceFormat;
        qtc.QSurfaceFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setDepthBufferSize` instead
    ///
    pub const SetDepthBufferSize = setDepthBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setDepthBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn setDepthBufferSize(self: QSurfaceFormat, size: i32) void {
        qtc.QSurfaceFormat_SetDepthBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `depthBufferSize` instead
    ///
    pub const DepthBufferSize = depthBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#depthBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn depthBufferSize(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_DepthBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStencilBufferSize` instead
    ///
    pub const SetStencilBufferSize = setStencilBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setStencilBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn setStencilBufferSize(self: QSurfaceFormat, size: i32) void {
        qtc.QSurfaceFormat_SetStencilBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `stencilBufferSize` instead
    ///
    pub const StencilBufferSize = stencilBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#stencilBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn stencilBufferSize(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_StencilBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRedBufferSize` instead
    ///
    pub const SetRedBufferSize = setRedBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setRedBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn setRedBufferSize(self: QSurfaceFormat, size: i32) void {
        qtc.QSurfaceFormat_SetRedBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `redBufferSize` instead
    ///
    pub const RedBufferSize = redBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#redBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn redBufferSize(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_RedBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGreenBufferSize` instead
    ///
    pub const SetGreenBufferSize = setGreenBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setGreenBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn setGreenBufferSize(self: QSurfaceFormat, size: i32) void {
        qtc.QSurfaceFormat_SetGreenBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `greenBufferSize` instead
    ///
    pub const GreenBufferSize = greenBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#greenBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn greenBufferSize(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_GreenBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBlueBufferSize` instead
    ///
    pub const SetBlueBufferSize = setBlueBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setBlueBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn setBlueBufferSize(self: QSurfaceFormat, size: i32) void {
        qtc.QSurfaceFormat_SetBlueBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `blueBufferSize` instead
    ///
    pub const BlueBufferSize = blueBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#blueBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn blueBufferSize(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_BlueBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlphaBufferSize` instead
    ///
    pub const SetAlphaBufferSize = setAlphaBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setAlphaBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` size: i32 `
    ///
    pub fn setAlphaBufferSize(self: QSurfaceFormat, size: i32) void {
        qtc.QSurfaceFormat_SetAlphaBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `alphaBufferSize` instead
    ///
    pub const AlphaBufferSize = alphaBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#alphaBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn alphaBufferSize(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_AlphaBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSamples` instead
    ///
    pub const SetSamples = setSamples;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSamples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` numSamples: i32 `
    ///
    pub fn setSamples(self: QSurfaceFormat, numSamples: i32) void {
        qtc.QSurfaceFormat_SetSamples(@ptrCast(self.ptr), @bitCast(numSamples));
    }

    /// ### DEPRECATED: Use `samples` instead
    ///
    pub const Samples = samples;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#samples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn samples(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_Samples(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSwapBehavior` instead
    ///
    pub const SetSwapBehavior = setSwapBehavior;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` behavior: qsurfaceformat_enums.SwapBehavior `
    ///
    pub fn setSwapBehavior(self: QSurfaceFormat, behavior: i32) void {
        qtc.QSurfaceFormat_SetSwapBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `swapBehavior` instead
    ///
    pub const SwapBehavior = swapBehavior;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#swapBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.SwapBehavior `
    ///
    pub fn swapBehavior(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_SwapBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasAlpha` instead
    ///
    pub const HasAlpha = hasAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn hasAlpha(self: QSurfaceFormat) bool {
        return qtc.QSurfaceFormat_HasAlpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProfile` instead
    ///
    pub const SetProfile = setProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` _profile: qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn setProfile(self: QSurfaceFormat, _profile: i32) void {
        qtc.QSurfaceFormat_SetProfile(@ptrCast(self.ptr), @bitCast(_profile));
    }

    /// ### DEPRECATED: Use `profile` instead
    ///
    pub const Profile = profile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#profile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.OpenGLContextProfile `
    ///
    pub fn profile(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_Profile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRenderableType` instead
    ///
    pub const SetRenderableType = setRenderableType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setRenderableType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` typeVal: qsurfaceformat_enums.RenderableType `
    ///
    pub fn setRenderableType(self: QSurfaceFormat, typeVal: i32) void {
        qtc.QSurfaceFormat_SetRenderableType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `renderableType` instead
    ///
    pub const RenderableType = renderableType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#renderableType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` qsurfaceformat_enums.RenderableType `
    ///
    pub fn renderableType(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_RenderableType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMajorVersion` instead
    ///
    pub const SetMajorVersion = setMajorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setMajorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` _majorVersion: i32 `
    ///
    pub fn setMajorVersion(self: QSurfaceFormat, _majorVersion: i32) void {
        qtc.QSurfaceFormat_SetMajorVersion(@ptrCast(self.ptr), @bitCast(_majorVersion));
    }

    /// ### DEPRECATED: Use `majorVersion` instead
    ///
    pub const MajorVersion = majorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn majorVersion(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorVersion` instead
    ///
    pub const SetMinorVersion = setMinorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setMinorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` _minorVersion: i32 `
    ///
    pub fn setMinorVersion(self: QSurfaceFormat, _minorVersion: i32) void {
        qtc.QSurfaceFormat_SetMinorVersion(@ptrCast(self.ptr), @bitCast(_minorVersion));
    }

    /// ### DEPRECATED: Use `minorVersion` instead
    ///
    pub const MinorVersion = minorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn minorVersion(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn version(self: QSurfaceFormat) Struct_i32_i32 {
        const _pair = qtc.QSurfaceFormat_Version(@ptrCast(self.ptr));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` major: i32 `
    ///
    /// ` minor: i32 `
    ///
    pub fn setVersion(self: QSurfaceFormat, major: i32, minor: i32) void {
        qtc.QSurfaceFormat_SetVersion(@ptrCast(self.ptr), @bitCast(major), @bitCast(minor));
    }

    /// ### DEPRECATED: Use `stereo` instead
    ///
    pub const Stereo = stereo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#stereo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn stereo(self: QSurfaceFormat) bool {
        return qtc.QSurfaceFormat_Stereo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStereo` instead
    ///
    pub const SetStereo = setStereo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setStereo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn setStereo(self: QSurfaceFormat, enable: bool) void {
        qtc.QSurfaceFormat_SetStereo(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setOptions` instead
    ///
    pub const SetOptions = setOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` _options: flag of qsurfaceformat_enums.FormatOption `
    ///
    pub fn setOptions(self: QSurfaceFormat, _options: i32) void {
        qtc.QSurfaceFormat_SetOptions(@ptrCast(self.ptr), @bitCast(_options));
    }

    /// ### DEPRECATED: Use `setOption` instead
    ///
    pub const SetOption = setOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` option: qsurfaceformat_enums.FormatOption `
    ///
    pub fn setOption(self: QSurfaceFormat, option: i32) void {
        qtc.QSurfaceFormat_SetOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `testOption` instead
    ///
    pub const TestOption = testOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#testOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` option: qsurfaceformat_enums.FormatOption `
    ///
    pub fn testOption(self: QSurfaceFormat, option: i32) bool {
        return qtc.QSurfaceFormat_TestOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsurfaceformat_enums.FormatOption `
    ///
    pub fn options(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_Options(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swapInterval` instead
    ///
    pub const SwapInterval = swapInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#swapInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn swapInterval(self: QSurfaceFormat) i32 {
        return qtc.QSurfaceFormat_SwapInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSwapInterval` instead
    ///
    pub const SetSwapInterval = setSwapInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` interval: i32 `
    ///
    pub fn setSwapInterval(self: QSurfaceFormat, interval: i32) void {
        qtc.QSurfaceFormat_SetSwapInterval(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `colorSpace` instead
    ///
    pub const ColorSpace = colorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#colorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn colorSpace(self: QSurfaceFormat) QColorSpace {
        return .{ .ptr = qtc.QSurfaceFormat_ColorSpace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColorSpace` instead
    ///
    pub const SetColorSpace = setColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    pub fn setColorSpace(self: QSurfaceFormat, _colorSpace: anytype) void {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        qtc.QSurfaceFormat_SetColorSpace(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr));
    }

    /// ### DEPRECATED: Use `setColorSpace2` instead
    ///
    pub const SetColorSpace2 = setColorSpace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` _colorSpace: qsurfaceformat_enums.ColorSpace `
    ///
    pub fn setColorSpace2(self: QSurfaceFormat, _colorSpace: i32) void {
        qtc.QSurfaceFormat_SetColorSpace2(@ptrCast(self.ptr), @bitCast(_colorSpace));
    }

    /// ### DEPRECATED: Use `setDefaultFormat` instead
    ///
    pub const SetDefaultFormat = setDefaultFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setDefaultFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QSurfaceFormat `
    ///
    pub fn setDefaultFormat(format: anytype) void {
        comptime _ = @TypeOf(format)._is_QSurfaceFormat;
        qtc.QSurfaceFormat_SetDefaultFormat(@ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `defaultFormat` instead
    ///
    pub const DefaultFormat = defaultFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#defaultFormat)
    ///
    pub fn defaultFormat() QSurfaceFormat {
        return .{ .ptr = qtc.QSurfaceFormat_DefaultFormat() };
    }

    /// ### DEPRECATED: Use `setOption2` instead
    ///
    pub const SetOption2 = setOption2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurfaceFormat `
    ///
    /// ` option: qsurfaceformat_enums.FormatOption `
    ///
    /// ` on: bool `
    ///
    pub fn setOption2(self: QSurfaceFormat, option: i32, on: bool) void {
        qtc.QSurfaceFormat_SetOption2(@ptrCast(self.ptr), @bitCast(option), on);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#dtor.QSurfaceFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSurfaceFormat `
    ///
    pub fn delete(self: QSurfaceFormat) void {
        qtc.QSurfaceFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#public-types)
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
