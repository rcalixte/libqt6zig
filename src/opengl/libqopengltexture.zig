const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopengltexture_enums = enums;
pub const struct_f32_f32 = extern struct { first: f32, second: f32 };
pub const struct_i32_i32 = extern struct { first: i32, second: i32 };

/// https://doc.qt.io/qt-6/qopengltexture.html
pub const qopengltexture = struct {
    /// New constructs a new QOpenGLTexture object.
    ///
    /// ``` target: qopengltexture_enums.Target ```
    pub fn New(target: i32) QtC.QOpenGLTexture {
        return qtc.QOpenGLTexture_new(@intCast(target));
    }

    /// New2 constructs a new QOpenGLTexture object.
    ///
    /// ``` image: QtC.QImage ```
    pub fn New2(image: ?*anyopaque) QtC.QOpenGLTexture {
        return qtc.QOpenGLTexture_new2(@ptrCast(image));
    }

    /// New3 constructs a new QOpenGLTexture object.
    ///
    /// ``` image: QtC.QImage, genMipMaps: qopengltexture_enums.MipMapGeneration ```
    pub fn New3(image: ?*anyopaque, genMipMaps: i32) QtC.QOpenGLTexture {
        return qtc.QOpenGLTexture_new3(@ptrCast(image), @intCast(genMipMaps));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#target)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    ///
    /// Returns: ``` qopengltexture_enums.Target ```
    pub fn Target(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Target(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#create)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Create(self: ?*anyopaque) bool {
        return qtc.QOpenGLTexture_Create(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#destroy)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QOpenGLTexture_Destroy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#isCreated)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn IsCreated(self: ?*anyopaque) bool {
        return qtc.QOpenGLTexture_IsCreated(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#textureId)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn TextureId(self: ?*anyopaque) u32 {
        return qtc.QOpenGLTexture_TextureId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#bind)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Bind(self: ?*anyopaque) void {
        qtc.QOpenGLTexture_Bind(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#bind)
    ///
    /// ``` self: QtC.QOpenGLTexture, unit: u32 ```
    pub fn Bind2(self: ?*anyopaque, unit: u32) void {
        qtc.QOpenGLTexture_Bind2(@ptrCast(self), @intCast(unit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#release)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Release(self: ?*anyopaque) void {
        qtc.QOpenGLTexture_Release(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#release)
    ///
    /// ``` self: QtC.QOpenGLTexture, unit: u32 ```
    pub fn Release2(self: ?*anyopaque, unit: u32) void {
        qtc.QOpenGLTexture_Release2(@ptrCast(self), @intCast(unit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#isBound)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn IsBound(self: ?*anyopaque) bool {
        return qtc.QOpenGLTexture_IsBound(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#isBound)
    ///
    /// ``` self: QtC.QOpenGLTexture, unit: u32 ```
    pub fn IsBound2(self: ?*anyopaque, unit: u32) bool {
        return qtc.QOpenGLTexture_IsBound2(@ptrCast(self), @intCast(unit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#boundTextureId)
    ///
    /// ``` target: qopengltexture_enums.BindingTarget ```
    pub fn BoundTextureId(target: i32) u32 {
        return qtc.QOpenGLTexture_BoundTextureId(@intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#boundTextureId)
    ///
    /// ``` unit: u32, target: qopengltexture_enums.BindingTarget ```
    pub fn BoundTextureId2(unit: u32, target: i32) u32 {
        return qtc.QOpenGLTexture_BoundTextureId2(@intCast(unit), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setFormat)
    ///
    /// ``` self: QtC.QOpenGLTexture, format: qopengltexture_enums.TextureFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: i32) void {
        qtc.QOpenGLTexture_SetFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#format)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    ///
    /// Returns: ``` qopengltexture_enums.TextureFormat ```
    pub fn Format(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
    ///
    /// ``` self: QtC.QOpenGLTexture, width: i32 ```
    pub fn SetSize(self: ?*anyopaque, width: i32) void {
        qtc.QOpenGLTexture_SetSize(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#width)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#height)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#depth)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMipLevels)
    ///
    /// ``` self: QtC.QOpenGLTexture, levels: i32 ```
    pub fn SetMipLevels(self: ?*anyopaque, levels: i32) void {
        qtc.QOpenGLTexture_SetMipLevels(@ptrCast(self), @intCast(levels));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#mipLevels)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MipLevels(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_MipLevels(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#maximumMipLevels)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MaximumMipLevels(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_MaximumMipLevels(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setLayers)
    ///
    /// ``` self: QtC.QOpenGLTexture, layers: i32 ```
    pub fn SetLayers(self: ?*anyopaque, layers: i32) void {
        qtc.QOpenGLTexture_SetLayers(@ptrCast(self), @intCast(layers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#layers)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Layers(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Layers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#faces)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Faces(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Faces(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setSamples)
    ///
    /// ``` self: QtC.QOpenGLTexture, samples: i32 ```
    pub fn SetSamples(self: ?*anyopaque, samples: i32) void {
        qtc.QOpenGLTexture_SetSamples(@ptrCast(self), @intCast(samples));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#samples)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn Samples(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_Samples(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setFixedSamplePositions)
    ///
    /// ``` self: QtC.QOpenGLTexture, fixed: bool ```
    pub fn SetFixedSamplePositions(self: ?*anyopaque, fixed: bool) void {
        qtc.QOpenGLTexture_SetFixedSamplePositions(@ptrCast(self), fixed);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#isFixedSamplePositions)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn IsFixedSamplePositions(self: ?*anyopaque) bool {
        return qtc.QOpenGLTexture_IsFixedSamplePositions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#allocateStorage)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn AllocateStorage(self: ?*anyopaque) void {
        qtc.QOpenGLTexture_AllocateStorage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#allocateStorage)
    ///
    /// ``` self: QtC.QOpenGLTexture, pixelFormat: qopengltexture_enums.PixelFormat, pixelType: qopengltexture_enums.PixelType ```
    pub fn AllocateStorage2(self: ?*anyopaque, pixelFormat: i32, pixelType: i32) void {
        qtc.QOpenGLTexture_AllocateStorage2(@ptrCast(self), @intCast(pixelFormat), @intCast(pixelType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#isStorageAllocated)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn IsStorageAllocated(self: ?*anyopaque) bool {
        return qtc.QOpenGLTexture_IsStorageAllocated(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#createTextureView)
    ///
    /// ``` self: QtC.QOpenGLTexture, target: qopengltexture_enums.Target, viewFormat: qopengltexture_enums.TextureFormat, minimumMipmapLevel: i32, maximumMipmapLevel: i32, minimumLayer: i32, maximumLayer: i32 ```
    pub fn CreateTextureView(self: ?*anyopaque, target: i32, viewFormat: i32, minimumMipmapLevel: i32, maximumMipmapLevel: i32, minimumLayer: i32, maximumLayer: i32) QtC.QOpenGLTexture {
        return qtc.QOpenGLTexture_CreateTextureView(@ptrCast(self), @intCast(target), @intCast(viewFormat), @intCast(minimumMipmapLevel), @intCast(maximumMipmapLevel), @intCast(minimumLayer), @intCast(maximumLayer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#isTextureView)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn IsTextureView(self: ?*anyopaque) bool {
        return qtc.QOpenGLTexture_IsTextureView(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData(self: ?*anyopaque, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: qopengltexture_enums.CubeMapFace, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData2(self: ?*anyopaque, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData2(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(layerCount), @intCast(cubeFace), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData3(self: ?*anyopaque, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData3(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData4(self: ?*anyopaque, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData4(@ptrCast(self), @intCast(mipLevel), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData5(self: ?*anyopaque, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData5(@ptrCast(self), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData6(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData6(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData7(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData7(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData8(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData8(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(layer), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData9(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData9(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, layerCount: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque ```
    pub fn SetData10(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, layerCount: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData10(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(layerCount), @intCast(sourceFormat), @intCast(sourceType), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, dataSize: i32, data: ?*anyopaque ```
    pub fn SetCompressedData(self: ?*anyopaque, mipLevel: i32, layer: i32, cubeFace: i32, dataSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(dataSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: qopengltexture_enums.CubeMapFace, dataSize: i32, data: ?*anyopaque ```
    pub fn SetCompressedData2(self: ?*anyopaque, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, dataSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData2(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(layerCount), @intCast(cubeFace), @intCast(dataSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, dataSize: i32, data: ?*anyopaque ```
    pub fn SetCompressedData3(self: ?*anyopaque, mipLevel: i32, layer: i32, dataSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData3(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(dataSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, dataSize: i32, data: ?*anyopaque ```
    pub fn SetCompressedData4(self: ?*anyopaque, mipLevel: i32, dataSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData4(@ptrCast(self), @intCast(mipLevel), @intCast(dataSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, dataSize: i32, data: ?*anyopaque ```
    pub fn SetCompressedData5(self: ?*anyopaque, dataSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData5(@ptrCast(self), @intCast(dataSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, image: QtC.QImage ```
    pub fn SetData11(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData11(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#hasFeature)
    ///
    /// ``` feature: qopengltexture_enums.Feature ```
    pub fn HasFeature(feature: i32) bool {
        return qtc.QOpenGLTexture_HasFeature(@intCast(feature));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMipBaseLevel)
    ///
    /// ``` self: QtC.QOpenGLTexture, baseLevel: i32 ```
    pub fn SetMipBaseLevel(self: ?*anyopaque, baseLevel: i32) void {
        qtc.QOpenGLTexture_SetMipBaseLevel(@ptrCast(self), @intCast(baseLevel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#mipBaseLevel)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MipBaseLevel(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_MipBaseLevel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMipMaxLevel)
    ///
    /// ``` self: QtC.QOpenGLTexture, maxLevel: i32 ```
    pub fn SetMipMaxLevel(self: ?*anyopaque, maxLevel: i32) void {
        qtc.QOpenGLTexture_SetMipMaxLevel(@ptrCast(self), @intCast(maxLevel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#mipMaxLevel)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MipMaxLevel(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_MipMaxLevel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMipLevelRange)
    ///
    /// ``` self: QtC.QOpenGLTexture, baseLevel: i32, maxLevel: i32 ```
    pub fn SetMipLevelRange(self: ?*anyopaque, baseLevel: i32, maxLevel: i32) void {
        qtc.QOpenGLTexture_SetMipLevelRange(@ptrCast(self), @intCast(baseLevel), @intCast(maxLevel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#mipLevelRange)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MipLevelRange(self: ?*anyopaque) struct_i32_i32 {
        const _pair: qtc.libqt_pair = qtc.QOpenGLTexture_MipLevelRange(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setAutoMipMapGenerationEnabled)
    ///
    /// ``` self: QtC.QOpenGLTexture, enabled: bool ```
    pub fn SetAutoMipMapGenerationEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QOpenGLTexture_SetAutoMipMapGenerationEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#isAutoMipMapGenerationEnabled)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn IsAutoMipMapGenerationEnabled(self: ?*anyopaque) bool {
        return qtc.QOpenGLTexture_IsAutoMipMapGenerationEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn GenerateMipMaps(self: ?*anyopaque) void {
        qtc.QOpenGLTexture_GenerateMipMaps(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
    ///
    /// ``` self: QtC.QOpenGLTexture, baseLevel: i32 ```
    pub fn GenerateMipMaps2(self: ?*anyopaque, baseLevel: i32) void {
        qtc.QOpenGLTexture_GenerateMipMaps2(@ptrCast(self), @intCast(baseLevel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setSwizzleMask)
    ///
    /// ``` self: QtC.QOpenGLTexture, component: qopengltexture_enums.SwizzleComponent, value: qopengltexture_enums.SwizzleValue ```
    pub fn SetSwizzleMask(self: ?*anyopaque, component: i32, value: i32) void {
        qtc.QOpenGLTexture_SetSwizzleMask(@ptrCast(self), @intCast(component), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setSwizzleMask)
    ///
    /// ``` self: QtC.QOpenGLTexture, r: qopengltexture_enums.SwizzleValue, g: qopengltexture_enums.SwizzleValue, b: qopengltexture_enums.SwizzleValue, a: qopengltexture_enums.SwizzleValue ```
    pub fn SetSwizzleMask2(self: ?*anyopaque, r: i32, g: i32, b: i32, a: i32) void {
        qtc.QOpenGLTexture_SetSwizzleMask2(@ptrCast(self), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#swizzleMask)
    ///
    /// ``` self: QtC.QOpenGLTexture, component: qopengltexture_enums.SwizzleComponent ```
    ///
    /// Returns: ``` qopengltexture_enums.SwizzleValue ```
    pub fn SwizzleMask(self: ?*anyopaque, component: i32) i32 {
        return qtc.QOpenGLTexture_SwizzleMask(@ptrCast(self), @intCast(component));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setDepthStencilMode)
    ///
    /// ``` self: QtC.QOpenGLTexture, mode: qopengltexture_enums.DepthStencilMode ```
    pub fn SetDepthStencilMode(self: ?*anyopaque, mode: i32) void {
        qtc.QOpenGLTexture_SetDepthStencilMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#depthStencilMode)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    ///
    /// Returns: ``` qopengltexture_enums.DepthStencilMode ```
    pub fn DepthStencilMode(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_DepthStencilMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setComparisonFunction)
    ///
    /// ``` self: QtC.QOpenGLTexture, function: qopengltexture_enums.ComparisonFunction ```
    pub fn SetComparisonFunction(self: ?*anyopaque, function: i32) void {
        qtc.QOpenGLTexture_SetComparisonFunction(@ptrCast(self), @intCast(function));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#comparisonFunction)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    ///
    /// Returns: ``` qopengltexture_enums.ComparisonFunction ```
    pub fn ComparisonFunction(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_ComparisonFunction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setComparisonMode)
    ///
    /// ``` self: QtC.QOpenGLTexture, mode: qopengltexture_enums.ComparisonMode ```
    pub fn SetComparisonMode(self: ?*anyopaque, mode: i32) void {
        qtc.QOpenGLTexture_SetComparisonMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#comparisonMode)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    ///
    /// Returns: ``` qopengltexture_enums.ComparisonMode ```
    pub fn ComparisonMode(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_ComparisonMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMinificationFilter)
    ///
    /// ``` self: QtC.QOpenGLTexture, filter: qopengltexture_enums.Filter ```
    pub fn SetMinificationFilter(self: ?*anyopaque, filter: i32) void {
        qtc.QOpenGLTexture_SetMinificationFilter(@ptrCast(self), @intCast(filter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#minificationFilter)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    ///
    /// Returns: ``` qopengltexture_enums.Filter ```
    pub fn MinificationFilter(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_MinificationFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMagnificationFilter)
    ///
    /// ``` self: QtC.QOpenGLTexture, filter: qopengltexture_enums.Filter ```
    pub fn SetMagnificationFilter(self: ?*anyopaque, filter: i32) void {
        qtc.QOpenGLTexture_SetMagnificationFilter(@ptrCast(self), @intCast(filter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#magnificationFilter)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    ///
    /// Returns: ``` qopengltexture_enums.Filter ```
    pub fn MagnificationFilter(self: ?*anyopaque) i32 {
        return qtc.QOpenGLTexture_MagnificationFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMinMagFilters)
    ///
    /// ``` self: QtC.QOpenGLTexture, minificationFilter: qopengltexture_enums.Filter, magnificationFilter: qopengltexture_enums.Filter ```
    pub fn SetMinMagFilters(self: ?*anyopaque, minificationFilter: i32, magnificationFilter: i32) void {
        qtc.QOpenGLTexture_SetMinMagFilters(@ptrCast(self), @intCast(minificationFilter), @intCast(magnificationFilter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#minMagFilters)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MinMagFilters(self: ?*anyopaque) struct_i32_i32 {
        const _pair: qtc.libqt_pair = qtc.QOpenGLTexture_MinMagFilters(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(_pair.second))).*,
        };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMaximumAnisotropy)
    ///
    /// ``` self: QtC.QOpenGLTexture, anisotropy: f32 ```
    pub fn SetMaximumAnisotropy(self: ?*anyopaque, anisotropy: f32) void {
        qtc.QOpenGLTexture_SetMaximumAnisotropy(@ptrCast(self), @floatCast(anisotropy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#maximumAnisotropy)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MaximumAnisotropy(self: ?*anyopaque) f32 {
        return qtc.QOpenGLTexture_MaximumAnisotropy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setWrapMode)
    ///
    /// ``` self: QtC.QOpenGLTexture, mode: qopengltexture_enums.WrapMode ```
    pub fn SetWrapMode(self: ?*anyopaque, mode: i32) void {
        qtc.QOpenGLTexture_SetWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setWrapMode)
    ///
    /// ``` self: QtC.QOpenGLTexture, direction: qopengltexture_enums.CoordinateDirection, mode: qopengltexture_enums.WrapMode ```
    pub fn SetWrapMode2(self: ?*anyopaque, direction: i32, mode: i32) void {
        qtc.QOpenGLTexture_SetWrapMode2(@ptrCast(self), @intCast(direction), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#wrapMode)
    ///
    /// ``` self: QtC.QOpenGLTexture, direction: qopengltexture_enums.CoordinateDirection ```
    ///
    /// Returns: ``` qopengltexture_enums.WrapMode ```
    pub fn WrapMode(self: ?*anyopaque, direction: i32) i32 {
        return qtc.QOpenGLTexture_WrapMode(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture, color: QtC.QColor ```
    pub fn SetBorderColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture, r: f32, g: f32, b: f32, a: f32 ```
    pub fn SetBorderColor2(self: ?*anyopaque, r: f32, g: f32, b: f32, a: f32) void {
        qtc.QOpenGLTexture_SetBorderColor2(@ptrCast(self), @floatCast(r), @floatCast(g), @floatCast(b), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture, r: i32, g: i32, b: i32, a: i32 ```
    pub fn SetBorderColor3(self: ?*anyopaque, r: i32, g: i32, b: i32, a: i32) void {
        qtc.QOpenGLTexture_SetBorderColor3(@ptrCast(self), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture, r: u32, g: u32, b: u32, a: u32 ```
    pub fn SetBorderColor4(self: ?*anyopaque, r: u32, g: u32, b: u32, a: u32) void {
        qtc.QOpenGLTexture_SetBorderColor4(@ptrCast(self), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn BorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QOpenGLTexture_BorderColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture, border: *f32 ```
    pub fn BorderColor2(self: ?*anyopaque, border: *f32) void {
        qtc.QOpenGLTexture_BorderColor2(@ptrCast(self), @ptrCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture, border: *i32 ```
    pub fn BorderColor3(self: ?*anyopaque, border: *i32) void {
        qtc.QOpenGLTexture_BorderColor3(@ptrCast(self), @ptrCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ``` self: QtC.QOpenGLTexture, border: *u32 ```
    pub fn BorderColor4(self: ?*anyopaque, border: *u32) void {
        qtc.QOpenGLTexture_BorderColor4(@ptrCast(self), @ptrCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMinimumLevelOfDetail)
    ///
    /// ``` self: QtC.QOpenGLTexture, value: f32 ```
    pub fn SetMinimumLevelOfDetail(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLTexture_SetMinimumLevelOfDetail(@ptrCast(self), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#minimumLevelOfDetail)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MinimumLevelOfDetail(self: ?*anyopaque) f32 {
        return qtc.QOpenGLTexture_MinimumLevelOfDetail(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setMaximumLevelOfDetail)
    ///
    /// ``` self: QtC.QOpenGLTexture, value: f32 ```
    pub fn SetMaximumLevelOfDetail(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLTexture_SetMaximumLevelOfDetail(@ptrCast(self), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#maximumLevelOfDetail)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn MaximumLevelOfDetail(self: ?*anyopaque) f32 {
        return qtc.QOpenGLTexture_MaximumLevelOfDetail(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setLevelOfDetailRange)
    ///
    /// ``` self: QtC.QOpenGLTexture, min: f32, max: f32 ```
    pub fn SetLevelOfDetailRange(self: ?*anyopaque, min: f32, max: f32) void {
        qtc.QOpenGLTexture_SetLevelOfDetailRange(@ptrCast(self), @floatCast(min), @floatCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#levelOfDetailRange)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn LevelOfDetailRange(self: ?*anyopaque) struct_f32_f32 {
        const _pair: qtc.libqt_pair = qtc.QOpenGLTexture_LevelOfDetailRange(@ptrCast(self));
        return struct_f32_f32{
            .first = @ptrCast(_pair.first),
            .second = @ptrCast(_pair.second),
        };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setLevelofDetailBias)
    ///
    /// ``` self: QtC.QOpenGLTexture, bias: f32 ```
    pub fn SetLevelofDetailBias(self: ?*anyopaque, bias: f32) void {
        qtc.QOpenGLTexture_SetLevelofDetailBias(@ptrCast(self), @floatCast(bias));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#levelofDetailBias)
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn LevelofDetailBias(self: ?*anyopaque) f32 {
        return qtc.QOpenGLTexture_LevelofDetailBias(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#bind)
    ///
    /// ``` self: QtC.QOpenGLTexture, unit: u32, reset: qopengltexture_enums.TextureUnitReset ```
    pub fn Bind22(self: ?*anyopaque, unit: u32, reset: i32) void {
        qtc.QOpenGLTexture_Bind22(@ptrCast(self), @intCast(unit), @intCast(reset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#release)
    ///
    /// ``` self: QtC.QOpenGLTexture, unit: u32, reset: qopengltexture_enums.TextureUnitReset ```
    pub fn Release22(self: ?*anyopaque, unit: u32, reset: i32) void {
        qtc.QOpenGLTexture_Release22(@ptrCast(self), @intCast(unit), @intCast(reset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
    ///
    /// ``` self: QtC.QOpenGLTexture, width: i32, height: i32 ```
    pub fn SetSize2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QOpenGLTexture_SetSize2(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
    ///
    /// ``` self: QtC.QOpenGLTexture, width: i32, height: i32, depth: i32 ```
    pub fn SetSize3(self: ?*anyopaque, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLTexture_SetSize3(@ptrCast(self), @intCast(width), @intCast(height), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData72(self: ?*anyopaque, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData72(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: qopengltexture_enums.CubeMapFace, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData82(self: ?*anyopaque, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData82(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(layerCount), @intCast(cubeFace), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData62(self: ?*anyopaque, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData62(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData52(self: ?*anyopaque, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData52(@ptrCast(self), @intCast(mipLevel), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData42(self: ?*anyopaque, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData42(@ptrCast(self), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData102(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData102(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData112(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData112(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData12(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData12(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(layer), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData13(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData13(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, layerCount: i32, sourceFormat: qopengltexture_enums.PixelFormat, sourceType: qopengltexture_enums.PixelType, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetData14(self: ?*anyopaque, xOffset: i32, yOffset: i32, zOffset: i32, width: i32, height: i32, depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, layerCount: i32, sourceFormat: i32, sourceType: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetData14(@ptrCast(self), @intCast(xOffset), @intCast(yOffset), @intCast(zOffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(layerCount), @intCast(sourceFormat), @intCast(sourceType), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: qopengltexture_enums.CubeMapFace, dataSize: i32, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetCompressedData6(self: ?*anyopaque, mipLevel: i32, layer: i32, cubeFace: i32, dataSize: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData6(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(cubeFace), @intCast(dataSize), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: qopengltexture_enums.CubeMapFace, dataSize: i32, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetCompressedData7(self: ?*anyopaque, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, dataSize: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData7(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(layerCount), @intCast(cubeFace), @intCast(dataSize), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, layer: i32, dataSize: i32, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetCompressedData52(self: ?*anyopaque, mipLevel: i32, layer: i32, dataSize: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData52(@ptrCast(self), @intCast(mipLevel), @intCast(layer), @intCast(dataSize), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, mipLevel: i32, dataSize: i32, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetCompressedData42(self: ?*anyopaque, mipLevel: i32, dataSize: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData42(@ptrCast(self), @intCast(mipLevel), @intCast(dataSize), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ``` self: QtC.QOpenGLTexture, dataSize: i32, data: ?*anyopaque, options: QtC.QOpenGLPixelTransferOptions ```
    pub fn SetCompressedData32(self: ?*anyopaque, dataSize: i32, data: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData32(@ptrCast(self), @intCast(dataSize), data, @ptrCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ``` self: QtC.QOpenGLTexture, image: QtC.QImage, genMipMaps: qopengltexture_enums.MipMapGeneration ```
    pub fn SetData22(self: ?*anyopaque, image: ?*anyopaque, genMipMaps: i32) void {
        qtc.QOpenGLTexture_SetData22(@ptrCast(self), @ptrCast(image), @intCast(genMipMaps));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
    ///
    /// ``` self: QtC.QOpenGLTexture, baseLevel: i32, resetBaseLevel: bool ```
    pub fn GenerateMipMaps22(self: ?*anyopaque, baseLevel: i32, resetBaseLevel: bool) void {
        qtc.QOpenGLTexture_GenerateMipMaps22(@ptrCast(self), @intCast(baseLevel), resetBaseLevel);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopengltexture.html#dtor.QOpenGLTexture)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLTexture ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLTexture_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopengltexture.html#types
pub const enums = struct {
    pub const Target = enum {
        pub const Target1D: i32 = 3552;
        pub const Target1DArray: i32 = 35864;
        pub const Target2D: i32 = 3553;
        pub const Target2DArray: i32 = 35866;
        pub const Target3D: i32 = 32879;
        pub const TargetCubeMap: i32 = 34067;
        pub const TargetCubeMapArray: i32 = 36873;
        pub const Target2DMultisample: i32 = 37120;
        pub const Target2DMultisampleArray: i32 = 37122;
        pub const TargetRectangle: i32 = 34037;
        pub const TargetBuffer: i32 = 35882;
    };

    pub const BindingTarget = enum {
        pub const BindingTarget1D: i32 = 32872;
        pub const BindingTarget1DArray: i32 = 35868;
        pub const BindingTarget2D: i32 = 32873;
        pub const BindingTarget2DArray: i32 = 35869;
        pub const BindingTarget3D: i32 = 32874;
        pub const BindingTargetCubeMap: i32 = 34068;
        pub const BindingTargetCubeMapArray: i32 = 36874;
        pub const BindingTarget2DMultisample: i32 = 37124;
        pub const BindingTarget2DMultisampleArray: i32 = 37125;
        pub const BindingTargetRectangle: i32 = 34038;
        pub const BindingTargetBuffer: i32 = 35884;
    };

    pub const MipMapGeneration = enum {
        pub const GenerateMipMaps: i32 = 0;
        pub const DontGenerateMipMaps: i32 = 1;
    };

    pub const TextureUnitReset = enum {
        pub const ResetTextureUnit: i32 = 0;
        pub const DontResetTextureUnit: i32 = 1;
    };

    pub const TextureFormat = enum {
        pub const NoFormat: i32 = 0;
        pub const R8_UNorm: i32 = 33321;
        pub const RG8_UNorm: i32 = 33323;
        pub const RGB8_UNorm: i32 = 32849;
        pub const RGBA8_UNorm: i32 = 32856;
        pub const R16_UNorm: i32 = 33322;
        pub const RG16_UNorm: i32 = 33324;
        pub const RGB16_UNorm: i32 = 32852;
        pub const RGBA16_UNorm: i32 = 32859;
        pub const R8_SNorm: i32 = 36756;
        pub const RG8_SNorm: i32 = 36757;
        pub const RGB8_SNorm: i32 = 36758;
        pub const RGBA8_SNorm: i32 = 36759;
        pub const R16_SNorm: i32 = 36760;
        pub const RG16_SNorm: i32 = 36761;
        pub const RGB16_SNorm: i32 = 36762;
        pub const RGBA16_SNorm: i32 = 36763;
        pub const R8U: i32 = 33330;
        pub const RG8U: i32 = 33336;
        pub const RGB8U: i32 = 36221;
        pub const RGBA8U: i32 = 36220;
        pub const R16U: i32 = 33332;
        pub const RG16U: i32 = 33338;
        pub const RGB16U: i32 = 36215;
        pub const RGBA16U: i32 = 36214;
        pub const R32U: i32 = 33334;
        pub const RG32U: i32 = 33340;
        pub const RGB32U: i32 = 36209;
        pub const RGBA32U: i32 = 36208;
        pub const R8I: i32 = 33329;
        pub const RG8I: i32 = 33335;
        pub const RGB8I: i32 = 36239;
        pub const RGBA8I: i32 = 36238;
        pub const R16I: i32 = 33331;
        pub const RG16I: i32 = 33337;
        pub const RGB16I: i32 = 36233;
        pub const RGBA16I: i32 = 36232;
        pub const R32I: i32 = 33333;
        pub const RG32I: i32 = 33339;
        pub const RGB32I: i32 = 36227;
        pub const RGBA32I: i32 = 36226;
        pub const R16F: i32 = 33325;
        pub const RG16F: i32 = 33327;
        pub const RGB16F: i32 = 34843;
        pub const RGBA16F: i32 = 34842;
        pub const R32F: i32 = 33326;
        pub const RG32F: i32 = 33328;
        pub const RGB32F: i32 = 34837;
        pub const RGBA32F: i32 = 34836;
        pub const RGB9E5: i32 = 35901;
        pub const RG11B10F: i32 = 35898;
        pub const RG3B2: i32 = 10768;
        pub const R5G6B5: i32 = 36194;
        pub const RGB5A1: i32 = 32855;
        pub const RGBA4: i32 = 32854;
        pub const RGB10A2: i32 = 36975;
        pub const D16: i32 = 33189;
        pub const D24: i32 = 33190;
        pub const D24S8: i32 = 35056;
        pub const D32: i32 = 33191;
        pub const D32F: i32 = 36012;
        pub const D32FS8X24: i32 = 36013;
        pub const S8: i32 = 36168;
        pub const RGB_DXT1: i32 = 33776;
        pub const RGBA_DXT1: i32 = 33777;
        pub const RGBA_DXT3: i32 = 33778;
        pub const RGBA_DXT5: i32 = 33779;
        pub const R_ATI1N_UNorm: i32 = 36283;
        pub const R_ATI1N_SNorm: i32 = 36284;
        pub const RG_ATI2N_UNorm: i32 = 36285;
        pub const RG_ATI2N_SNorm: i32 = 36286;
        pub const RGB_BP_UNSIGNED_FLOAT: i32 = 36495;
        pub const RGB_BP_SIGNED_FLOAT: i32 = 36494;
        pub const RGB_BP_UNorm: i32 = 36492;
        pub const R11_EAC_UNorm: i32 = 37488;
        pub const R11_EAC_SNorm: i32 = 37489;
        pub const RG11_EAC_UNorm: i32 = 37490;
        pub const RG11_EAC_SNorm: i32 = 37491;
        pub const RGB8_ETC2: i32 = 37492;
        pub const SRGB8_ETC2: i32 = 37493;
        pub const RGB8_PunchThrough_Alpha1_ETC2: i32 = 37494;
        pub const SRGB8_PunchThrough_Alpha1_ETC2: i32 = 37495;
        pub const RGBA8_ETC2_EAC: i32 = 37496;
        pub const SRGB8_Alpha8_ETC2_EAC: i32 = 37497;
        pub const RGB8_ETC1: i32 = 36196;
        pub const RGBA_ASTC_4x4: i32 = 37808;
        pub const RGBA_ASTC_5x4: i32 = 37809;
        pub const RGBA_ASTC_5x5: i32 = 37810;
        pub const RGBA_ASTC_6x5: i32 = 37811;
        pub const RGBA_ASTC_6x6: i32 = 37812;
        pub const RGBA_ASTC_8x5: i32 = 37813;
        pub const RGBA_ASTC_8x6: i32 = 37814;
        pub const RGBA_ASTC_8x8: i32 = 37815;
        pub const RGBA_ASTC_10x5: i32 = 37816;
        pub const RGBA_ASTC_10x6: i32 = 37817;
        pub const RGBA_ASTC_10x8: i32 = 37818;
        pub const RGBA_ASTC_10x10: i32 = 37819;
        pub const RGBA_ASTC_12x10: i32 = 37820;
        pub const RGBA_ASTC_12x12: i32 = 37821;
        pub const SRGB8_Alpha8_ASTC_4x4: i32 = 37840;
        pub const SRGB8_Alpha8_ASTC_5x4: i32 = 37841;
        pub const SRGB8_Alpha8_ASTC_5x5: i32 = 37842;
        pub const SRGB8_Alpha8_ASTC_6x5: i32 = 37843;
        pub const SRGB8_Alpha8_ASTC_6x6: i32 = 37844;
        pub const SRGB8_Alpha8_ASTC_8x5: i32 = 37845;
        pub const SRGB8_Alpha8_ASTC_8x6: i32 = 37846;
        pub const SRGB8_Alpha8_ASTC_8x8: i32 = 37847;
        pub const SRGB8_Alpha8_ASTC_10x5: i32 = 37848;
        pub const SRGB8_Alpha8_ASTC_10x6: i32 = 37849;
        pub const SRGB8_Alpha8_ASTC_10x8: i32 = 37850;
        pub const SRGB8_Alpha8_ASTC_10x10: i32 = 37851;
        pub const SRGB8_Alpha8_ASTC_12x10: i32 = 37852;
        pub const SRGB8_Alpha8_ASTC_12x12: i32 = 37853;
        pub const SRGB8: i32 = 35905;
        pub const SRGB8_Alpha8: i32 = 35907;
        pub const SRGB_DXT1: i32 = 35916;
        pub const SRGB_Alpha_DXT1: i32 = 35917;
        pub const SRGB_Alpha_DXT3: i32 = 35918;
        pub const SRGB_Alpha_DXT5: i32 = 35919;
        pub const SRGB_BP_UNorm: i32 = 36493;
        pub const DepthFormat: i32 = 6402;
        pub const AlphaFormat: i32 = 6406;
        pub const RGBFormat: i32 = 6407;
        pub const RGBAFormat: i32 = 6408;
        pub const LuminanceFormat: i32 = 6409;
        pub const LuminanceAlphaFormat: i32 = 6410;
    };

    pub const TextureFormatClass = enum {
        pub const NoFormatClass: i32 = 0;
        pub const FormatClass_128Bit: i32 = 1;
        pub const FormatClass_96Bit: i32 = 2;
        pub const FormatClass_64Bit: i32 = 3;
        pub const FormatClass_48Bit: i32 = 4;
        pub const FormatClass_32Bit: i32 = 5;
        pub const FormatClass_24Bit: i32 = 6;
        pub const FormatClass_16Bit: i32 = 7;
        pub const FormatClass_8Bit: i32 = 8;
        pub const FormatClass_RGTC1_R: i32 = 9;
        pub const FormatClass_RGTC2_RG: i32 = 10;
        pub const FormatClass_BPTC_Unorm: i32 = 11;
        pub const FormatClass_BPTC_Float: i32 = 12;
        pub const FormatClass_S3TC_DXT1_RGB: i32 = 13;
        pub const FormatClass_S3TC_DXT1_RGBA: i32 = 14;
        pub const FormatClass_S3TC_DXT3_RGBA: i32 = 15;
        pub const FormatClass_S3TC_DXT5_RGBA: i32 = 16;
        pub const FormatClass_Unique: i32 = 17;
    };

    pub const CubeMapFace = enum {
        pub const CubeMapPositiveX: i32 = 34069;
        pub const CubeMapNegativeX: i32 = 34070;
        pub const CubeMapPositiveY: i32 = 34071;
        pub const CubeMapNegativeY: i32 = 34072;
        pub const CubeMapPositiveZ: i32 = 34073;
        pub const CubeMapNegativeZ: i32 = 34074;
    };

    pub const PixelFormat = enum {
        pub const NoSourceFormat: i32 = 0;
        pub const Red: i32 = 6403;
        pub const RG: i32 = 33319;
        pub const RGB: i32 = 6407;
        pub const BGR: i32 = 32992;
        pub const RGBA: i32 = 6408;
        pub const BGRA: i32 = 32993;
        pub const Red_Integer: i32 = 36244;
        pub const RG_Integer: i32 = 33320;
        pub const RGB_Integer: i32 = 36248;
        pub const BGR_Integer: i32 = 36250;
        pub const RGBA_Integer: i32 = 36249;
        pub const BGRA_Integer: i32 = 36251;
        pub const Stencil: i32 = 6401;
        pub const Depth: i32 = 6402;
        pub const DepthStencil: i32 = 34041;
        pub const Alpha: i32 = 6406;
        pub const Luminance: i32 = 6409;
        pub const LuminanceAlpha: i32 = 6410;
    };

    pub const PixelType = enum {
        pub const NoPixelType: i32 = 0;
        pub const Int8: i32 = 5120;
        pub const UInt8: i32 = 5121;
        pub const Int16: i32 = 5122;
        pub const UInt16: i32 = 5123;
        pub const Int32: i32 = 5124;
        pub const UInt32: i32 = 5125;
        pub const Float16: i32 = 5131;
        pub const Float16OES: i32 = 36193;
        pub const Float32: i32 = 5126;
        pub const UInt32_RGB9_E5: i32 = 35902;
        pub const UInt32_RG11B10F: i32 = 35899;
        pub const UInt8_RG3B2: i32 = 32818;
        pub const UInt8_RG3B2_Rev: i32 = 33634;
        pub const UInt16_RGB5A1: i32 = 32820;
        pub const UInt16_RGB5A1_Rev: i32 = 33638;
        pub const UInt16_R5G6B5: i32 = 33635;
        pub const UInt16_R5G6B5_Rev: i32 = 33636;
        pub const UInt16_RGBA4: i32 = 32819;
        pub const UInt16_RGBA4_Rev: i32 = 33637;
        pub const UInt32_RGBA8: i32 = 32821;
        pub const UInt32_RGBA8_Rev: i32 = 33639;
        pub const UInt32_RGB10A2: i32 = 32822;
        pub const UInt32_RGB10A2_Rev: i32 = 33640;
        pub const UInt32_D24S8: i32 = 34042;
        pub const Float32_D32_UInt32_S8_X24: i32 = 36269;
    };

    pub const SwizzleComponent = enum {
        pub const SwizzleRed: i32 = 36418;
        pub const SwizzleGreen: i32 = 36419;
        pub const SwizzleBlue: i32 = 36420;
        pub const SwizzleAlpha: i32 = 36421;
    };

    pub const SwizzleValue = enum {
        pub const RedValue: i32 = 6403;
        pub const GreenValue: i32 = 6404;
        pub const BlueValue: i32 = 6405;
        pub const AlphaValue: i32 = 6406;
        pub const ZeroValue: i32 = 0;
        pub const OneValue: i32 = 1;
    };

    pub const WrapMode = enum {
        pub const Repeat: i32 = 10497;
        pub const MirroredRepeat: i32 = 33648;
        pub const ClampToEdge: i32 = 33071;
        pub const ClampToBorder: i32 = 33069;
    };

    pub const CoordinateDirection = enum {
        pub const DirectionS: i32 = 10242;
        pub const DirectionT: i32 = 10243;
        pub const DirectionR: i32 = 32882;
    };

    pub const Feature = enum {
        pub const ImmutableStorage: i32 = 1;
        pub const ImmutableMultisampleStorage: i32 = 2;
        pub const TextureRectangle: i32 = 4;
        pub const TextureArrays: i32 = 8;
        pub const Texture3D: i32 = 16;
        pub const TextureMultisample: i32 = 32;
        pub const TextureBuffer: i32 = 64;
        pub const TextureCubeMapArrays: i32 = 128;
        pub const Swizzle: i32 = 256;
        pub const StencilTexturing: i32 = 512;
        pub const AnisotropicFiltering: i32 = 1024;
        pub const NPOTTextures: i32 = 2048;
        pub const NPOTTextureRepeat: i32 = 4096;
        pub const Texture1D: i32 = 8192;
        pub const TextureComparisonOperators: i32 = 16384;
        pub const TextureMipMapLevel: i32 = 32768;
        pub const MaxFeatureFlag: i32 = 65536;
    };

    pub const DepthStencilMode = enum {
        pub const DepthMode: i32 = 6402;
        pub const StencilMode: i32 = 6401;
    };

    pub const ComparisonFunction = enum {
        pub const CompareLessEqual: i32 = 515;
        pub const CompareGreaterEqual: i32 = 518;
        pub const CompareLess: i32 = 513;
        pub const CompareGreater: i32 = 516;
        pub const CompareEqual: i32 = 514;
        pub const CompareNotEqual: i32 = 517;
        pub const CompareAlways: i32 = 519;
        pub const CompareNever: i32 = 512;
        pub const CommpareNotEqual: i32 = 517;
    };

    pub const ComparisonMode = enum {
        pub const CompareRefToTexture: i32 = 34894;
        pub const CompareNone: i32 = 0;
    };

    pub const Filter = enum {
        pub const Nearest: i32 = 9728;
        pub const Linear: i32 = 9729;
        pub const NearestMipMapNearest: i32 = 9984;
        pub const NearestMipMapLinear: i32 = 9986;
        pub const LinearMipMapNearest: i32 = 9985;
        pub const LinearMipMapLinear: i32 = 9987;
    };
};
