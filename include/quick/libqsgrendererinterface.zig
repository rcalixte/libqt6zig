const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QQuickWindow = @import("libqt6").QQuickWindow;
const qsgrendererinterface_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html)
pub const QSGRendererInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGRendererInterface,

    pub const _is_QSGRendererInterface = {};

    /// ### DEPRECATED: Use `graphicsApi` instead
    ///
    pub const GraphicsApi = graphicsApi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#graphicsApi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRendererInterface `
    ///
    /// ## Returns:
    ///
    /// ` qsgrendererinterface_enums.GraphicsApi `
    ///
    pub fn graphicsApi(self: QSGRendererInterface) i32 {
        return qtc.QSGRendererInterface_GraphicsApi(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getResource` instead
    ///
    pub const GetResource = getResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#getResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRendererInterface `
    ///
    /// ` window: QQuickWindow `
    ///
    /// ` resource: qsgrendererinterface_enums.Resource `
    ///
    pub fn getResource(self: QSGRendererInterface, window: anytype, resource: i32) ?*anyopaque {
        comptime _ = @TypeOf(window)._is_QQuickWindow;
        return qtc.QSGRendererInterface_GetResource(@ptrCast(self.ptr), @ptrCast(window.ptr), @bitCast(resource));
    }

    /// ### DEPRECATED: Use `getResource2` instead
    ///
    pub const GetResource2 = getResource2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#getResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRendererInterface `
    ///
    /// ` window: QQuickWindow `
    ///
    /// ` resource: [:0]const u8 `
    ///
    pub fn getResource2(self: QSGRendererInterface, window: anytype, resource: [:0]const u8) ?*anyopaque {
        comptime _ = @TypeOf(window)._is_QQuickWindow;
        const resource_Cstring = resource.ptr;
        return qtc.QSGRendererInterface_GetResource2(@ptrCast(self.ptr), @ptrCast(window.ptr), resource_Cstring);
    }

    /// ### DEPRECATED: Use `shaderType` instead
    ///
    pub const ShaderType = shaderType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#shaderType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRendererInterface `
    ///
    /// ## Returns:
    ///
    /// ` qsgrendererinterface_enums.ShaderType `
    ///
    pub fn shaderType(self: QSGRendererInterface) i32 {
        return qtc.QSGRendererInterface_ShaderType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `shaderCompilationType` instead
    ///
    pub const ShaderCompilationType = shaderCompilationType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#shaderCompilationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRendererInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgrendererinterface_enums.ShaderCompilationType `
    ///
    pub fn shaderCompilationType(self: QSGRendererInterface) i32 {
        return qtc.QSGRendererInterface_ShaderCompilationType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `shaderSourceType` instead
    ///
    pub const ShaderSourceType = shaderSourceType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#shaderSourceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRendererInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgrendererinterface_enums.ShaderSourceType `
    ///
    pub fn shaderSourceType(self: QSGRendererInterface) i32 {
        return qtc.QSGRendererInterface_ShaderSourceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isApiRhiBased` instead
    ///
    pub const IsApiRhiBased = isApiRhiBased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#isApiRhiBased)
    ///
    /// ## Parameter(s):
    ///
    /// ` api: qsgrendererinterface_enums.GraphicsApi `
    ///
    pub fn isApiRhiBased(api: i32) bool {
        return qtc.QSGRendererInterface_IsApiRhiBased(@bitCast(api));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRendererInterface `
    ///
    /// ` param1: QSGRendererInterface `
    ///
    pub fn operatorAssign(self: QSGRendererInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGRendererInterface;
        qtc.QSGRendererInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#dtor.QSGRendererInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGRendererInterface `
    ///
    pub fn delete(self: QSGRendererInterface) void {
        qtc.QSGRendererInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#public-types)
pub const enums = struct {
    pub const GraphicsApi = enum {
        pub const Unknown: i32 = 0;
        pub const Software: i32 = 1;
        pub const OpenVG: i32 = 2;
        pub const OpenGL: i32 = 3;
        pub const Direct3D11: i32 = 4;
        pub const Vulkan: i32 = 5;
        pub const Metal: i32 = 6;
        pub const Null: i32 = 7;
        pub const Direct3D12: i32 = 8;
        pub const OpenGLRhi: i32 = 3;
        pub const Direct3D11Rhi: i32 = 4;
        pub const VulkanRhi: i32 = 5;
        pub const MetalRhi: i32 = 6;
        pub const NullRhi: i32 = 7;
    };

    pub const Resource = enum {
        pub const DeviceResource: i32 = 0;
        pub const CommandQueueResource: i32 = 1;
        pub const CommandListResource: i32 = 2;
        pub const PainterResource: i32 = 3;
        pub const RhiResource: i32 = 4;
        pub const RhiSwapchainResource: i32 = 5;
        pub const RhiRedirectCommandBuffer: i32 = 6;
        pub const RhiRedirectRenderTarget: i32 = 7;
        pub const PhysicalDeviceResource: i32 = 8;
        pub const OpenGLContextResource: i32 = 9;
        pub const DeviceContextResource: i32 = 10;
        pub const CommandEncoderResource: i32 = 11;
        pub const VulkanInstanceResource: i32 = 12;
        pub const RenderPassResource: i32 = 13;
        pub const RedirectPaintDevice: i32 = 14;
        pub const GraphicsQueueFamilyIndexResource: i32 = 15;
        pub const GraphicsQueueIndexResource: i32 = 16;
    };

    pub const ShaderType = enum {
        pub const UnknownShadingLanguage: i32 = 0;
        pub const GLSL: i32 = 1;
        pub const HLSL: i32 = 2;
        pub const RhiShader: i32 = 3;
    };

    pub const ShaderCompilationType = enum {
        pub const RuntimeCompilation: i32 = 1;
        pub const OfflineCompilation: i32 = 2;
    };

    pub const ShaderSourceType = enum {
        pub const ShaderSourceString: i32 = 1;
        pub const ShaderSourceFile: i32 = 2;
        pub const ShaderByteCode: i32 = 4;
    };

    pub const RenderMode = enum {
        pub const RenderMode2D: i32 = 0;
        pub const RenderMode2DNoDepthBuffer: i32 = 1;
        pub const RenderMode3D: i32 = 2;
    };
};
