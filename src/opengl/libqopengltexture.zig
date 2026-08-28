const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QImage = @import("libqt6").QImage;
const QOpenGLPixelTransferOptions = @import("libqt6").QOpenGLPixelTransferOptions;
const qopengltexture_enums = enums;
const Struct_f32_f32 = @import("libqt6").types.Struct_f32_f32; // extern struct { first: f32, second: f32 }
const Struct_i32_i32 = @import("libqt6").types.Struct_i32_i32; // extern struct { first: i32, second: i32 }

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html)
pub const QOpenGLTexture = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLTexture,

    pub const _is_QOpenGLTexture = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLTexture object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: qopengltexture_enums.Target `
    ///
    pub fn new(_target: i32) QOpenGLTexture {
        return .{ .ptr = qtc.QOpenGLTexture_new(@bitCast(_target)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLTexture object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn new2(image: anytype) QOpenGLTexture {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QOpenGLTexture_new2(@ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLTexture object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` genMipMaps: qopengltexture_enums.MipMapGeneration `
    ///
    pub fn new3(image: anytype, genMipMaps: i32) QOpenGLTexture {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QOpenGLTexture_new3(@ptrCast(image.ptr), @bitCast(genMipMaps)) };
    }

    /// ### DEPRECATED: Use `target` instead
    ///
    pub const Target = target;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.Target `
    ///
    pub fn target(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Target(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn create(self: QOpenGLTexture) bool {
        return qtc.QOpenGLTexture_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn destroy(self: QOpenGLTexture) void {
        qtc.QOpenGLTexture_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCreated` instead
    ///
    pub const IsCreated = isCreated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn isCreated(self: QOpenGLTexture) bool {
        return qtc.QOpenGLTexture_IsCreated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textureId` instead
    ///
    pub const TextureId = textureId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#textureId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn textureId(self: QOpenGLTexture) u32 {
        return qtc.QOpenGLTexture_TextureId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bind` instead
    ///
    pub const Bind = bind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn bind(self: QOpenGLTexture) void {
        qtc.QOpenGLTexture_Bind(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bind2` instead
    ///
    pub const Bind2 = bind2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` unit: u32 `
    ///
    pub fn bind2(self: QOpenGLTexture, unit: u32) void {
        qtc.QOpenGLTexture_Bind2(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn release(self: QOpenGLTexture) void {
        qtc.QOpenGLTexture_Release(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `release2` instead
    ///
    pub const Release2 = release2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` unit: u32 `
    ///
    pub fn release2(self: QOpenGLTexture, unit: u32) void {
        qtc.QOpenGLTexture_Release2(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `isBound` instead
    ///
    pub const IsBound = isBound;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isBound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn isBound(self: QOpenGLTexture) bool {
        return qtc.QOpenGLTexture_IsBound(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBound2` instead
    ///
    pub const IsBound2 = isBound2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isBound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` unit: u32 `
    ///
    pub fn isBound2(self: QOpenGLTexture, unit: u32) bool {
        return qtc.QOpenGLTexture_IsBound2(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `boundTextureId` instead
    ///
    pub const BoundTextureId = boundTextureId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#boundTextureId)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: qopengltexture_enums.BindingTarget `
    ///
    pub fn boundTextureId(_target: i32) u32 {
        return qtc.QOpenGLTexture_BoundTextureId(@bitCast(_target));
    }

    /// ### DEPRECATED: Use `boundTextureId2` instead
    ///
    pub const BoundTextureId2 = boundTextureId2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#boundTextureId)
    ///
    /// ## Parameter(s):
    ///
    /// ` unit: u32 `
    ///
    /// ` _target: qopengltexture_enums.BindingTarget `
    ///
    pub fn boundTextureId2(unit: u32, _target: i32) u32 {
        return qtc.QOpenGLTexture_BoundTextureId2(@bitCast(unit), @bitCast(_target));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _format: qopengltexture_enums.TextureFormat `
    ///
    pub fn setFormat(self: QOpenGLTexture, _format: i32) void {
        qtc.QOpenGLTexture_SetFormat(@ptrCast(self.ptr), @bitCast(_format));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.TextureFormat `
    ///
    pub fn format(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Format(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _width: i32 `
    ///
    pub fn setSize(self: QOpenGLTexture, _width: i32) void {
        qtc.QOpenGLTexture_SetSize(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn width(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn height(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn depth(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMipLevels` instead
    ///
    pub const SetMipLevels = setMipLevels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` levels: i32 `
    ///
    pub fn setMipLevels(self: QOpenGLTexture, levels: i32) void {
        qtc.QOpenGLTexture_SetMipLevels(@ptrCast(self.ptr), @bitCast(levels));
    }

    /// ### DEPRECATED: Use `mipLevels` instead
    ///
    pub const MipLevels = mipLevels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn mipLevels(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_MipLevels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumMipLevels` instead
    ///
    pub const MaximumMipLevels = maximumMipLevels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#maximumMipLevels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn maximumMipLevels(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_MaximumMipLevels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLayers` instead
    ///
    pub const SetLayers = setLayers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setLayers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _layers: i32 `
    ///
    pub fn setLayers(self: QOpenGLTexture, _layers: i32) void {
        qtc.QOpenGLTexture_SetLayers(@ptrCast(self.ptr), @bitCast(_layers));
    }

    /// ### DEPRECATED: Use `layers` instead
    ///
    pub const Layers = layers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#layers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn layers(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Layers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `faces` instead
    ///
    pub const Faces = faces;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#faces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn faces(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Faces(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSamples` instead
    ///
    pub const SetSamples = setSamples;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSamples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _samples: i32 `
    ///
    pub fn setSamples(self: QOpenGLTexture, _samples: i32) void {
        qtc.QOpenGLTexture_SetSamples(@ptrCast(self.ptr), @bitCast(_samples));
    }

    /// ### DEPRECATED: Use `samples` instead
    ///
    pub const Samples = samples;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#samples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn samples(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_Samples(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFixedSamplePositions` instead
    ///
    pub const SetFixedSamplePositions = setFixedSamplePositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setFixedSamplePositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` fixed: bool `
    ///
    pub fn setFixedSamplePositions(self: QOpenGLTexture, fixed: bool) void {
        qtc.QOpenGLTexture_SetFixedSamplePositions(@ptrCast(self.ptr), fixed);
    }

    /// ### DEPRECATED: Use `isFixedSamplePositions` instead
    ///
    pub const IsFixedSamplePositions = isFixedSamplePositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isFixedSamplePositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn isFixedSamplePositions(self: QOpenGLTexture) bool {
        return qtc.QOpenGLTexture_IsFixedSamplePositions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allocateStorage` instead
    ///
    pub const AllocateStorage = allocateStorage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#allocateStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn allocateStorage(self: QOpenGLTexture) void {
        qtc.QOpenGLTexture_AllocateStorage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allocateStorage2` instead
    ///
    pub const AllocateStorage2 = allocateStorage2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#allocateStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` pixelFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` pixelType: qopengltexture_enums.PixelType `
    ///
    pub fn allocateStorage2(self: QOpenGLTexture, pixelFormat: i32, pixelType: i32) void {
        qtc.QOpenGLTexture_AllocateStorage2(@ptrCast(self.ptr), @bitCast(pixelFormat), @bitCast(pixelType));
    }

    /// ### DEPRECATED: Use `isStorageAllocated` instead
    ///
    pub const IsStorageAllocated = isStorageAllocated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isStorageAllocated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn isStorageAllocated(self: QOpenGLTexture) bool {
        return qtc.QOpenGLTexture_IsStorageAllocated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createTextureView` instead
    ///
    pub const CreateTextureView = createTextureView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#createTextureView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _target: qopengltexture_enums.Target `
    ///
    /// ` viewFormat: qopengltexture_enums.TextureFormat `
    ///
    /// ` minimumMipmapLevel: i32 `
    ///
    /// ` maximumMipmapLevel: i32 `
    ///
    /// ` minimumLayer: i32 `
    ///
    /// ` maximumLayer: i32 `
    ///
    pub fn createTextureView(self: QOpenGLTexture, _target: i32, viewFormat: i32, minimumMipmapLevel: i32, maximumMipmapLevel: i32, minimumLayer: i32, maximumLayer: i32) QOpenGLTexture {
        return .{ .ptr = qtc.QOpenGLTexture_CreateTextureView(@ptrCast(self.ptr), @bitCast(_target), @bitCast(viewFormat), @bitCast(minimumMipmapLevel), @bitCast(maximumMipmapLevel), @bitCast(minimumLayer), @bitCast(maximumLayer)) };
    }

    /// ### DEPRECATED: Use `isTextureView` instead
    ///
    pub const IsTextureView = isTextureView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isTextureView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn isTextureView(self: QOpenGLTexture) bool {
        return qtc.QOpenGLTexture_IsTextureView(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData(self: QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData2` instead
    ///
    pub const SetData2 = setData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` layerCount: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData2(self: QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData2(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(layerCount), @bitCast(cubeFace), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData3` instead
    ///
    pub const SetData3 = setData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData3(self: QOpenGLTexture, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData3(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData4` instead
    ///
    pub const SetData4 = setData4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData4(self: QOpenGLTexture, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData4(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData5` instead
    ///
    pub const SetData5 = setData5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData5(self: QOpenGLTexture, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData5(@ptrCast(self.ptr), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData6` instead
    ///
    pub const SetData6 = setData6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData6(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData6(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData7` instead
    ///
    pub const SetData7 = setData7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData7(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData7(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData8` instead
    ///
    pub const SetData8 = setData8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData8(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData8(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(layer), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData9` instead
    ///
    pub const SetData9 = setData9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData9(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData9(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData10` instead
    ///
    pub const SetData10 = setData10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` layerCount: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setData10(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, layerCount: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetData10(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(layerCount), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setCompressedData` instead
    ///
    pub const SetCompressedData = setCompressedData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setCompressedData(self: QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: i32, dataSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(dataSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setCompressedData2` instead
    ///
    pub const SetCompressedData2 = setCompressedData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` layerCount: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setCompressedData2(self: QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, dataSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData2(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(layerCount), @bitCast(cubeFace), @bitCast(dataSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setCompressedData3` instead
    ///
    pub const SetCompressedData3 = setCompressedData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setCompressedData3(self: QOpenGLTexture, mipLevel: i32, layer: i32, dataSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData3(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(dataSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setCompressedData4` instead
    ///
    pub const SetCompressedData4 = setCompressedData4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setCompressedData4(self: QOpenGLTexture, mipLevel: i32, dataSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData4(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(dataSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setCompressedData5` instead
    ///
    pub const SetCompressedData5 = setCompressedData5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn setCompressedData5(self: QOpenGLTexture, dataSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLTexture_SetCompressedData5(@ptrCast(self.ptr), @bitCast(dataSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `setData11` instead
    ///
    pub const SetData11 = setData11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` image: QImage `
    ///
    pub fn setData11(self: QOpenGLTexture, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QOpenGLTexture_SetData11(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `hasFeature` instead
    ///
    pub const HasFeature = hasFeature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` feature: qopengltexture_enums.Feature `
    ///
    pub fn hasFeature(feature: i32) bool {
        return qtc.QOpenGLTexture_HasFeature(@bitCast(feature));
    }

    /// ### DEPRECATED: Use `setMipBaseLevel` instead
    ///
    pub const SetMipBaseLevel = setMipBaseLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipBaseLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` baseLevel: i32 `
    ///
    pub fn setMipBaseLevel(self: QOpenGLTexture, baseLevel: i32) void {
        qtc.QOpenGLTexture_SetMipBaseLevel(@ptrCast(self.ptr), @bitCast(baseLevel));
    }

    /// ### DEPRECATED: Use `mipBaseLevel` instead
    ///
    pub const MipBaseLevel = mipBaseLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipBaseLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn mipBaseLevel(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_MipBaseLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMipMaxLevel` instead
    ///
    pub const SetMipMaxLevel = setMipMaxLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipMaxLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` maxLevel: i32 `
    ///
    pub fn setMipMaxLevel(self: QOpenGLTexture, maxLevel: i32) void {
        qtc.QOpenGLTexture_SetMipMaxLevel(@ptrCast(self.ptr), @bitCast(maxLevel));
    }

    /// ### DEPRECATED: Use `mipMaxLevel` instead
    ///
    pub const MipMaxLevel = mipMaxLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipMaxLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn mipMaxLevel(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_MipMaxLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMipLevelRange` instead
    ///
    pub const SetMipLevelRange = setMipLevelRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipLevelRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` baseLevel: i32 `
    ///
    /// ` maxLevel: i32 `
    ///
    pub fn setMipLevelRange(self: QOpenGLTexture, baseLevel: i32, maxLevel: i32) void {
        qtc.QOpenGLTexture_SetMipLevelRange(@ptrCast(self.ptr), @bitCast(baseLevel), @bitCast(maxLevel));
    }

    /// ### DEPRECATED: Use `mipLevelRange` instead
    ///
    pub const MipLevelRange = mipLevelRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipLevelRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn mipLevelRange(self: QOpenGLTexture) Struct_i32_i32 {
        const _pair = qtc.QOpenGLTexture_MipLevelRange(@ptrCast(self.ptr));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setAutoMipMapGenerationEnabled` instead
    ///
    pub const SetAutoMipMapGenerationEnabled = setAutoMipMapGenerationEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setAutoMipMapGenerationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoMipMapGenerationEnabled(self: QOpenGLTexture, enabled: bool) void {
        qtc.QOpenGLTexture_SetAutoMipMapGenerationEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isAutoMipMapGenerationEnabled` instead
    ///
    pub const IsAutoMipMapGenerationEnabled = isAutoMipMapGenerationEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isAutoMipMapGenerationEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn isAutoMipMapGenerationEnabled(self: QOpenGLTexture) bool {
        return qtc.QOpenGLTexture_IsAutoMipMapGenerationEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `generateMipMaps` instead
    ///
    pub const GenerateMipMaps = generateMipMaps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn generateMipMaps(self: QOpenGLTexture) void {
        qtc.QOpenGLTexture_GenerateMipMaps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `generateMipMaps2` instead
    ///
    pub const GenerateMipMaps2 = generateMipMaps2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` baseLevel: i32 `
    ///
    pub fn generateMipMaps2(self: QOpenGLTexture, baseLevel: i32) void {
        qtc.QOpenGLTexture_GenerateMipMaps2(@ptrCast(self.ptr), @bitCast(baseLevel));
    }

    /// ### DEPRECATED: Use `setSwizzleMask` instead
    ///
    pub const SetSwizzleMask = setSwizzleMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSwizzleMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` component: qopengltexture_enums.SwizzleComponent `
    ///
    /// ` value: qopengltexture_enums.SwizzleValue `
    ///
    pub fn setSwizzleMask(self: QOpenGLTexture, component: i32, value: i32) void {
        qtc.QOpenGLTexture_SetSwizzleMask(@ptrCast(self.ptr), @bitCast(component), @bitCast(value));
    }

    /// ### DEPRECATED: Use `setSwizzleMask2` instead
    ///
    pub const SetSwizzleMask2 = setSwizzleMask2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSwizzleMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` r: qopengltexture_enums.SwizzleValue `
    ///
    /// ` g: qopengltexture_enums.SwizzleValue `
    ///
    /// ` b: qopengltexture_enums.SwizzleValue `
    ///
    /// ` a: qopengltexture_enums.SwizzleValue `
    ///
    pub fn setSwizzleMask2(self: QOpenGLTexture, r: i32, g: i32, b: i32, a: i32) void {
        qtc.QOpenGLTexture_SetSwizzleMask2(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `swizzleMask` instead
    ///
    pub const SwizzleMask = swizzleMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#swizzleMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` component: qopengltexture_enums.SwizzleComponent `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.SwizzleValue `
    ///
    pub fn swizzleMask(self: QOpenGLTexture, component: i32) i32 {
        return qtc.QOpenGLTexture_SwizzleMask(@ptrCast(self.ptr), @bitCast(component));
    }

    /// ### DEPRECATED: Use `setDepthStencilMode` instead
    ///
    pub const SetDepthStencilMode = setDepthStencilMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setDepthStencilMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mode: qopengltexture_enums.DepthStencilMode `
    ///
    pub fn setDepthStencilMode(self: QOpenGLTexture, mode: i32) void {
        qtc.QOpenGLTexture_SetDepthStencilMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `depthStencilMode` instead
    ///
    pub const DepthStencilMode = depthStencilMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#depthStencilMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.DepthStencilMode `
    ///
    pub fn depthStencilMode(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_DepthStencilMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setComparisonFunction` instead
    ///
    pub const SetComparisonFunction = setComparisonFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setComparisonFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` function: qopengltexture_enums.ComparisonFunction `
    ///
    pub fn setComparisonFunction(self: QOpenGLTexture, function: i32) void {
        qtc.QOpenGLTexture_SetComparisonFunction(@ptrCast(self.ptr), @bitCast(function));
    }

    /// ### DEPRECATED: Use `comparisonFunction` instead
    ///
    pub const ComparisonFunction = comparisonFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#comparisonFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.ComparisonFunction `
    ///
    pub fn comparisonFunction(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_ComparisonFunction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setComparisonMode` instead
    ///
    pub const SetComparisonMode = setComparisonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setComparisonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mode: qopengltexture_enums.ComparisonMode `
    ///
    pub fn setComparisonMode(self: QOpenGLTexture, mode: i32) void {
        qtc.QOpenGLTexture_SetComparisonMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `comparisonMode` instead
    ///
    pub const ComparisonMode = comparisonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#comparisonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.ComparisonMode `
    ///
    pub fn comparisonMode(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_ComparisonMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinificationFilter` instead
    ///
    pub const SetMinificationFilter = setMinificationFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMinificationFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` filter: qopengltexture_enums.Filter `
    ///
    pub fn setMinificationFilter(self: QOpenGLTexture, filter: i32) void {
        qtc.QOpenGLTexture_SetMinificationFilter(@ptrCast(self.ptr), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `minificationFilter` instead
    ///
    pub const MinificationFilter = minificationFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#minificationFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.Filter `
    ///
    pub fn minificationFilter(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_MinificationFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMagnificationFilter` instead
    ///
    pub const SetMagnificationFilter = setMagnificationFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMagnificationFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` filter: qopengltexture_enums.Filter `
    ///
    pub fn setMagnificationFilter(self: QOpenGLTexture, filter: i32) void {
        qtc.QOpenGLTexture_SetMagnificationFilter(@ptrCast(self.ptr), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `magnificationFilter` instead
    ///
    pub const MagnificationFilter = magnificationFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#magnificationFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.Filter `
    ///
    pub fn magnificationFilter(self: QOpenGLTexture) i32 {
        return qtc.QOpenGLTexture_MagnificationFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinMagFilters` instead
    ///
    pub const SetMinMagFilters = setMinMagFilters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMinMagFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _minificationFilter: qopengltexture_enums.Filter `
    ///
    /// ` _magnificationFilter: qopengltexture_enums.Filter `
    ///
    pub fn setMinMagFilters(self: QOpenGLTexture, _minificationFilter: i32, _magnificationFilter: i32) void {
        qtc.QOpenGLTexture_SetMinMagFilters(@ptrCast(self.ptr), @bitCast(_minificationFilter), @bitCast(_magnificationFilter));
    }

    /// ### DEPRECATED: Use `minMagFilters` instead
    ///
    pub const MinMagFilters = minMagFilters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#minMagFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ## Returns:
    ///
    /// ` Struct_i32_i32 (first: qopengltexture_enums.Filter) (second: qopengltexture_enums.Filter) `
    ///
    pub fn minMagFilters(self: QOpenGLTexture) Struct_i32_i32 {
        const _pair = qtc.QOpenGLTexture_MinMagFilters(@ptrCast(self.ptr));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setMaximumAnisotropy` instead
    ///
    pub const SetMaximumAnisotropy = setMaximumAnisotropy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMaximumAnisotropy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` anisotropy: f32 `
    ///
    pub fn setMaximumAnisotropy(self: QOpenGLTexture, anisotropy: f32) void {
        qtc.QOpenGLTexture_SetMaximumAnisotropy(@ptrCast(self.ptr), @bitCast(anisotropy));
    }

    /// ### DEPRECATED: Use `maximumAnisotropy` instead
    ///
    pub const MaximumAnisotropy = maximumAnisotropy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#maximumAnisotropy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn maximumAnisotropy(self: QOpenGLTexture) f32 {
        return qtc.QOpenGLTexture_MaximumAnisotropy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapMode` instead
    ///
    pub const SetWrapMode = setWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mode: qopengltexture_enums.WrapMode `
    ///
    pub fn setWrapMode(self: QOpenGLTexture, mode: i32) void {
        qtc.QOpenGLTexture_SetWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setWrapMode2` instead
    ///
    pub const SetWrapMode2 = setWrapMode2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` direction: qopengltexture_enums.CoordinateDirection `
    ///
    /// ` mode: qopengltexture_enums.WrapMode `
    ///
    pub fn setWrapMode2(self: QOpenGLTexture, direction: i32, mode: i32) void {
        qtc.QOpenGLTexture_SetWrapMode2(@ptrCast(self.ptr), @bitCast(direction), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `wrapMode` instead
    ///
    pub const WrapMode = wrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#wrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` direction: qopengltexture_enums.CoordinateDirection `
    ///
    /// ## Returns:
    ///
    /// ` qopengltexture_enums.WrapMode `
    ///
    pub fn wrapMode(self: QOpenGLTexture, direction: i32) i32 {
        return qtc.QOpenGLTexture_WrapMode(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `setBorderColor` instead
    ///
    pub const SetBorderColor = setBorderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` color: QColor `
    ///
    pub fn setBorderColor(self: QOpenGLTexture, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QOpenGLTexture_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `setBorderColor2` instead
    ///
    pub const SetBorderColor2 = setBorderColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` r: f32 `
    ///
    /// ` g: f32 `
    ///
    /// ` b: f32 `
    ///
    /// ` a: f32 `
    ///
    pub fn setBorderColor2(self: QOpenGLTexture, r: f32, g: f32, b: f32, a: f32) void {
        qtc.QOpenGLTexture_SetBorderColor2(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `setBorderColor3` instead
    ///
    pub const SetBorderColor3 = setBorderColor3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn setBorderColor3(self: QOpenGLTexture, r: i32, g: i32, b: i32, a: i32) void {
        qtc.QOpenGLTexture_SetBorderColor3(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `setBorderColor4` instead
    ///
    pub const SetBorderColor4 = setBorderColor4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` r: u32 `
    ///
    /// ` g: u32 `
    ///
    /// ` b: u32 `
    ///
    /// ` a: u32 `
    ///
    pub fn setBorderColor4(self: QOpenGLTexture, r: u32, g: u32, b: u32, a: u32) void {
        qtc.QOpenGLTexture_SetBorderColor4(@ptrCast(self.ptr), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `borderColor` instead
    ///
    pub const BorderColor = borderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn borderColor(self: QOpenGLTexture) QColor {
        return .{ .ptr = qtc.QOpenGLTexture_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `borderColor2` instead
    ///
    pub const BorderColor2 = borderColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` border: *f32 `
    ///
    pub fn borderColor2(self: QOpenGLTexture, border: *f32) void {
        qtc.QOpenGLTexture_BorderColor2(@ptrCast(self.ptr), @ptrCast(border));
    }

    /// ### DEPRECATED: Use `borderColor3` instead
    ///
    pub const BorderColor3 = borderColor3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` border: *i32 `
    ///
    pub fn borderColor3(self: QOpenGLTexture, border: *i32) void {
        qtc.QOpenGLTexture_BorderColor3(@ptrCast(self.ptr), @ptrCast(border));
    }

    /// ### DEPRECATED: Use `borderColor4` instead
    ///
    pub const BorderColor4 = borderColor4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` border: *u32 `
    ///
    pub fn borderColor4(self: QOpenGLTexture, border: *u32) void {
        qtc.QOpenGLTexture_BorderColor4(@ptrCast(self.ptr), @ptrCast(border));
    }

    /// ### DEPRECATED: Use `setMinimumLevelOfDetail` instead
    ///
    pub const SetMinimumLevelOfDetail = setMinimumLevelOfDetail;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMinimumLevelOfDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` value: f32 `
    ///
    pub fn setMinimumLevelOfDetail(self: QOpenGLTexture, value: f32) void {
        qtc.QOpenGLTexture_SetMinimumLevelOfDetail(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `minimumLevelOfDetail` instead
    ///
    pub const MinimumLevelOfDetail = minimumLevelOfDetail;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#minimumLevelOfDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn minimumLevelOfDetail(self: QOpenGLTexture) f32 {
        return qtc.QOpenGLTexture_MinimumLevelOfDetail(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumLevelOfDetail` instead
    ///
    pub const SetMaximumLevelOfDetail = setMaximumLevelOfDetail;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMaximumLevelOfDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` value: f32 `
    ///
    pub fn setMaximumLevelOfDetail(self: QOpenGLTexture, value: f32) void {
        qtc.QOpenGLTexture_SetMaximumLevelOfDetail(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `maximumLevelOfDetail` instead
    ///
    pub const MaximumLevelOfDetail = maximumLevelOfDetail;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#maximumLevelOfDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn maximumLevelOfDetail(self: QOpenGLTexture) f32 {
        return qtc.QOpenGLTexture_MaximumLevelOfDetail(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLevelOfDetailRange` instead
    ///
    pub const SetLevelOfDetailRange = setLevelOfDetailRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setLevelOfDetailRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` min: f32 `
    ///
    /// ` max: f32 `
    ///
    pub fn setLevelOfDetailRange(self: QOpenGLTexture, min: f32, max: f32) void {
        qtc.QOpenGLTexture_SetLevelOfDetailRange(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

    /// ### DEPRECATED: Use `levelOfDetailRange` instead
    ///
    pub const LevelOfDetailRange = levelOfDetailRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#levelOfDetailRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn levelOfDetailRange(self: QOpenGLTexture) Struct_f32_f32 {
        const _pair = qtc.QOpenGLTexture_LevelOfDetailRange(@ptrCast(self.ptr));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setLevelofDetailBias` instead
    ///
    pub const SetLevelofDetailBias = setLevelofDetailBias;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setLevelofDetailBias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` bias: f32 `
    ///
    pub fn setLevelofDetailBias(self: QOpenGLTexture, bias: f32) void {
        qtc.QOpenGLTexture_SetLevelofDetailBias(@ptrCast(self.ptr), @bitCast(bias));
    }

    /// ### DEPRECATED: Use `levelofDetailBias` instead
    ///
    pub const LevelofDetailBias = levelofDetailBias;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#levelofDetailBias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn levelofDetailBias(self: QOpenGLTexture) f32 {
        return qtc.QOpenGLTexture_LevelofDetailBias(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bind22` instead
    ///
    pub const Bind22 = bind22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` unit: u32 `
    ///
    /// ` reset: qopengltexture_enums.TextureUnitReset `
    ///
    pub fn bind22(self: QOpenGLTexture, unit: u32, reset: i32) void {
        qtc.QOpenGLTexture_Bind22(@ptrCast(self.ptr), @bitCast(unit), @bitCast(reset));
    }

    /// ### DEPRECATED: Use `release22` instead
    ///
    pub const Release22 = release22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` unit: u32 `
    ///
    /// ` reset: qopengltexture_enums.TextureUnitReset `
    ///
    pub fn release22(self: QOpenGLTexture, unit: u32, reset: i32) void {
        qtc.QOpenGLTexture_Release22(@ptrCast(self.ptr), @bitCast(unit), @bitCast(reset));
    }

    /// ### DEPRECATED: Use `setSize2` instead
    ///
    pub const SetSize2 = setSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn setSize2(self: QOpenGLTexture, _width: i32, _height: i32) void {
        qtc.QOpenGLTexture_SetSize2(@ptrCast(self.ptr), @bitCast(_width), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `setSize3` instead
    ///
    pub const SetSize3 = setSize3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    pub fn setSize3(self: QOpenGLTexture, _width: i32, _height: i32, _depth: i32) void {
        qtc.QOpenGLTexture_SetSize3(@ptrCast(self.ptr), @bitCast(_width), @bitCast(_height), @bitCast(_depth));
    }

    /// ### DEPRECATED: Use `setData72` instead
    ///
    pub const SetData72 = setData72;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData72(self: QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData72(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData82` instead
    ///
    pub const SetData82 = setData82;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` layerCount: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData82(self: QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData82(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(layerCount), @bitCast(cubeFace), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData62` instead
    ///
    pub const SetData62 = setData62;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData62(self: QOpenGLTexture, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData62(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData52` instead
    ///
    pub const SetData52 = setData52;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData52(self: QOpenGLTexture, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData52(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData42` instead
    ///
    pub const SetData42 = setData42;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData42(self: QOpenGLTexture, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData42(@ptrCast(self.ptr), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData102` instead
    ///
    pub const SetData102 = setData102;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData102(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData102(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData112` instead
    ///
    pub const SetData112 = setData112;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData112(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData112(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData12` instead
    ///
    pub const SetData12 = setData12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData12(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, layer: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData12(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(layer), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData13` instead
    ///
    pub const SetData13 = setData13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData13(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData13(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData14` instead
    ///
    pub const SetData14 = setData14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` xOffset: i32 `
    ///
    /// ` yOffset: i32 `
    ///
    /// ` zOffset: i32 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _depth: i32 `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` layerCount: i32 `
    ///
    /// ` sourceFormat: qopengltexture_enums.PixelFormat `
    ///
    /// ` sourceType: qopengltexture_enums.PixelType `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setData14(self: QOpenGLTexture, xOffset: i32, yOffset: i32, zOffset: i32, _width: i32, _height: i32, _depth: i32, mipLevel: i32, layer: i32, cubeFace: i32, layerCount: i32, sourceFormat: i32, sourceType: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetData14(@ptrCast(self.ptr), @bitCast(xOffset), @bitCast(yOffset), @bitCast(zOffset), @bitCast(_width), @bitCast(_height), @bitCast(_depth), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(layerCount), @bitCast(sourceFormat), @bitCast(sourceType), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setCompressedData6` instead
    ///
    pub const SetCompressedData6 = setCompressedData6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setCompressedData6(self: QOpenGLTexture, mipLevel: i32, layer: i32, cubeFace: i32, dataSize: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetCompressedData6(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(cubeFace), @bitCast(dataSize), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setCompressedData7` instead
    ///
    pub const SetCompressedData7 = setCompressedData7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` layerCount: i32 `
    ///
    /// ` cubeFace: qopengltexture_enums.CubeMapFace `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setCompressedData7(self: QOpenGLTexture, mipLevel: i32, layer: i32, layerCount: i32, cubeFace: i32, dataSize: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetCompressedData7(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(layerCount), @bitCast(cubeFace), @bitCast(dataSize), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setCompressedData52` instead
    ///
    pub const SetCompressedData52 = setCompressedData52;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` layer: i32 `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setCompressedData52(self: QOpenGLTexture, mipLevel: i32, layer: i32, dataSize: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetCompressedData52(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(layer), @bitCast(dataSize), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setCompressedData42` instead
    ///
    pub const SetCompressedData42 = setCompressedData42;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` mipLevel: i32 `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setCompressedData42(self: QOpenGLTexture, mipLevel: i32, dataSize: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetCompressedData42(@ptrCast(self.ptr), @bitCast(mipLevel), @bitCast(dataSize), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setCompressedData32` instead
    ///
    pub const SetCompressedData32 = setCompressedData32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` dataSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` options: QOpenGLPixelTransferOptions `
    ///
    pub fn setCompressedData32(self: QOpenGLTexture, dataSize: i32, data: ?*const anyopaque, options: anytype) void {
        comptime _ = @TypeOf(options)._is_QOpenGLPixelTransferOptions;
        qtc.QOpenGLTexture_SetCompressedData32(@ptrCast(self.ptr), @bitCast(dataSize), @ptrCast(data), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `setData22` instead
    ///
    pub const SetData22 = setData22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` image: QImage `
    ///
    /// ` genMipMaps: qopengltexture_enums.MipMapGeneration `
    ///
    pub fn setData22(self: QOpenGLTexture, image: anytype, genMipMaps: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QOpenGLTexture_SetData22(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(genMipMaps));
    }

    /// ### DEPRECATED: Use `generateMipMaps22` instead
    ///
    pub const GenerateMipMaps22 = generateMipMaps22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLTexture `
    ///
    /// ` baseLevel: i32 `
    ///
    /// ` resetBaseLevel: bool `
    ///
    pub fn generateMipMaps22(self: QOpenGLTexture, baseLevel: i32, resetBaseLevel: bool) void {
        qtc.QOpenGLTexture_GenerateMipMaps22(@ptrCast(self.ptr), @bitCast(baseLevel), resetBaseLevel);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#dtor.QOpenGLTexture)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLTexture `
    ///
    pub fn delete(self: QOpenGLTexture) void {
        qtc.QOpenGLTexture_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)
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
