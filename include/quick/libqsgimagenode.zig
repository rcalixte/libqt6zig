const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRectF = @import("libqt6").QRectF;
const QSGClipNode = @import("libqt6").QSGClipNode;
const QSGGeometry = @import("libqt6").QSGGeometry;
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGNode = @import("libqt6").QSGNode;
const QSGTexture = @import("libqt6").QSGTexture;
const qsgimagenode_enums = enums;
const qsgnode_enums = @import("libqsgnode.zig").enums;
const qsgtexture_enums = @import("libqsgtexture.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html)
pub const QSGImageNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGImageNode,

    pub const _is_QSGImageNode = {};
    pub const _is_QSGGeometryNode = {};
    pub const _is_QSGBasicGeometryNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn setRect(self: QSGImageNode, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QSGImageNode_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setRect2` instead
    ///
    pub const SetRect2 = setRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setRect2(self: QSGImageNode, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QSGImageNode_SetRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn rect(self: QSGImageNode) QRectF {
        return .{ .ptr = qtc.QSGImageNode_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSourceRect` instead
    ///
    pub const SetSourceRect = setSourceRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setSourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` r: QRectF `
    ///
    pub fn setSourceRect(self: QSGImageNode, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QSGImageNode_SetSourceRect(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `setSourceRect2` instead
    ///
    pub const SetSourceRect2 = setSourceRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setSourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setSourceRect2(self: QSGImageNode, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QSGImageNode_SetSourceRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `sourceRect` instead
    ///
    pub const SourceRect = sourceRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#sourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn sourceRect(self: QSGImageNode) QRectF {
        return .{ .ptr = qtc.QSGImageNode_SourceRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTexture` instead
    ///
    pub const SetTexture = setTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` _texture: QSGTexture `
    ///
    pub fn setTexture(self: QSGImageNode, _texture: anytype) void {
        comptime _ = @TypeOf(_texture)._is_QSGTexture;
        qtc.QSGImageNode_SetTexture(@ptrCast(self.ptr), @ptrCast(_texture.ptr));
    }

    /// ### DEPRECATED: Use `texture` instead
    ///
    pub const Texture = texture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn texture(self: QSGImageNode) QSGTexture {
        return .{ .ptr = qtc.QSGImageNode_Texture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFiltering` instead
    ///
    pub const SetFiltering = setFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` _filtering: qsgtexture_enums.Filtering `
    ///
    pub fn setFiltering(self: QSGImageNode, _filtering: i32) void {
        qtc.QSGImageNode_SetFiltering(@ptrCast(self.ptr), @bitCast(_filtering));
    }

    /// ### DEPRECATED: Use `filtering` instead
    ///
    pub const Filtering = filtering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#filtering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn filtering(self: QSGImageNode) i32 {
        return qtc.QSGImageNode_Filtering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMipmapFiltering` instead
    ///
    pub const SetMipmapFiltering = setMipmapFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setMipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` _filtering: qsgtexture_enums.Filtering `
    ///
    pub fn setMipmapFiltering(self: QSGImageNode, _filtering: i32) void {
        qtc.QSGImageNode_SetMipmapFiltering(@ptrCast(self.ptr), @bitCast(_filtering));
    }

    /// ### DEPRECATED: Use `mipmapFiltering` instead
    ///
    pub const MipmapFiltering = mipmapFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#mipmapFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn mipmapFiltering(self: QSGImageNode) i32 {
        return qtc.QSGImageNode_MipmapFiltering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnisotropyLevel` instead
    ///
    pub const SetAnisotropyLevel = setAnisotropyLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setAnisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` level: qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn setAnisotropyLevel(self: QSGImageNode, level: i32) void {
        qtc.QSGImageNode_SetAnisotropyLevel(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `anisotropyLevel` instead
    ///
    pub const AnisotropyLevel = anisotropyLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#anisotropyLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.AnisotropyLevel `
    ///
    pub fn anisotropyLevel(self: QSGImageNode) i32 {
        return qtc.QSGImageNode_AnisotropyLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextureCoordinatesTransform` instead
    ///
    pub const SetTextureCoordinatesTransform = setTextureCoordinatesTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setTextureCoordinatesTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` mode: flag of qsgimagenode_enums.TextureCoordinatesTransformFlag `
    ///
    pub fn setTextureCoordinatesTransform(self: QSGImageNode, mode: i32) void {
        qtc.QSGImageNode_SetTextureCoordinatesTransform(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `textureCoordinatesTransform` instead
    ///
    pub const TextureCoordinatesTransform = textureCoordinatesTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#textureCoordinatesTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgimagenode_enums.TextureCoordinatesTransformFlag `
    ///
    pub fn textureCoordinatesTransform(self: QSGImageNode) i32 {
        return qtc.QSGImageNode_TextureCoordinatesTransform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOwnsTexture` instead
    ///
    pub const SetOwnsTexture = setOwnsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#setOwnsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` owns: bool `
    ///
    pub fn setOwnsTexture(self: QSGImageNode, owns: bool) void {
        qtc.QSGImageNode_SetOwnsTexture(@ptrCast(self.ptr), owns);
    }

    /// ### DEPRECATED: Use `ownsTexture` instead
    ///
    pub const OwnsTexture = ownsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#ownsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn ownsTexture(self: QSGImageNode) bool {
        return qtc.QSGImageNode_OwnsTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rebuildGeometry` instead
    ///
    pub const RebuildGeometry = rebuildGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#rebuildGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` g: QSGGeometry `
    ///
    /// ` _texture: QSGTexture `
    ///
    /// ` _rect: QRectF `
    ///
    /// ` _sourceRect: QRectF `
    ///
    /// ` texCoordMode: flag of qsgimagenode_enums.TextureCoordinatesTransformFlag `
    ///
    pub fn rebuildGeometry(g: anytype, _texture: anytype, _rect: anytype, _sourceRect: anytype, texCoordMode: i32) void {
        comptime _ = @TypeOf(g)._is_QSGGeometry;
        comptime _ = @TypeOf(_texture)._is_QSGTexture;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        comptime _ = @TypeOf(_sourceRect)._is_QRectF;
        qtc.QSGImageNode_RebuildGeometry(@ptrCast(g.ptr), @ptrCast(_texture.ptr), @ptrCast(_rect.ptr), @ptrCast(_sourceRect.ptr), @bitCast(texCoordMode));
    }

    /// ### DEPRECATED: Use `setMaterial` instead
    ///
    pub const SetMaterial = setMaterial;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setMaterial(self: QSGImageNode, _material: anytype) void {
        comptime _ = @TypeOf(_material)._is_QSGMaterial;
        qtc.QSGGeometryNode_SetMaterial(@ptrCast(self.ptr), @ptrCast(_material.ptr));
    }

    /// ### DEPRECATED: Use `material` instead
    ///
    pub const Material = material;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn material(self: QSGImageNode) QSGMaterial {
        return .{ .ptr = qtc.QSGGeometryNode_Material(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOpaqueMaterial` instead
    ///
    pub const SetOpaqueMaterial = setOpaqueMaterial;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setOpaqueMaterial(self: QSGImageNode, _material: anytype) void {
        comptime _ = @TypeOf(_material)._is_QSGMaterial;
        qtc.QSGGeometryNode_SetOpaqueMaterial(@ptrCast(self.ptr), @ptrCast(_material.ptr));
    }

    /// ### DEPRECATED: Use `opaqueMaterial` instead
    ///
    pub const OpaqueMaterial = opaqueMaterial;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn opaqueMaterial(self: QSGImageNode) QSGMaterial {
        return .{ .ptr = qtc.QSGGeometryNode_OpaqueMaterial(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeMaterial` instead
    ///
    pub const ActiveMaterial = activeMaterial;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn activeMaterial(self: QSGImageNode) QSGMaterial {
        return .{ .ptr = qtc.QSGGeometryNode_ActiveMaterial(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRenderOrder` instead
    ///
    pub const SetRenderOrder = setRenderOrder;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` order: i32 `
    ///
    pub fn setRenderOrder(self: QSGImageNode, order: i32) void {
        qtc.QSGGeometryNode_SetRenderOrder(@ptrCast(self.ptr), @bitCast(order));
    }

    /// ### DEPRECATED: Use `renderOrder` instead
    ///
    pub const RenderOrder = renderOrder;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn renderOrder(self: QSGImageNode) i32 {
        return qtc.QSGGeometryNode_RenderOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInheritedOpacity` instead
    ///
    pub const SetInheritedOpacity = setInheritedOpacity;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` opacity: f64 `
    ///
    pub fn setInheritedOpacity(self: QSGImageNode, opacity: f64) void {
        qtc.QSGGeometryNode_SetInheritedOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### DEPRECATED: Use `inheritedOpacity` instead
    ///
    pub const InheritedOpacity = inheritedOpacity;

    /// Inherited from QSGGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn inheritedOpacity(self: QSGImageNode) f64 {
        return qtc.QSGGeometryNode_InheritedOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QSGBasicGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    pub fn setGeometry(self: QSGImageNode, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QSGGeometry;
        qtc.QSGBasicGeometryNode_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QSGBasicGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn geometry(self: QSGImageNode) QSGGeometry {
        return .{ .ptr = qtc.QSGBasicGeometryNode_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometry2` instead
    ///
    pub const Geometry2 = geometry2;

    /// Inherited from QSGBasicGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn geometry2(self: QSGImageNode) QSGGeometry {
        return .{ .ptr = qtc.QSGBasicGeometryNode_Geometry2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `matrix` instead
    ///
    pub const Matrix = matrix;

    /// Inherited from QSGBasicGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn matrix(self: QSGImageNode) QMatrix4x4 {
        return .{ .ptr = qtc.QSGBasicGeometryNode_Matrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipList` instead
    ///
    pub const ClipList = clipList;

    /// Inherited from QSGBasicGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn clipList(self: QSGImageNode) QSGClipNode {
        return .{ .ptr = qtc.QSGBasicGeometryNode_ClipList(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRendererMatrix` instead
    ///
    pub const SetRendererMatrix = setRendererMatrix;

    /// Inherited from QSGBasicGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` m: QMatrix4x4 `
    ///
    pub fn setRendererMatrix(self: QSGImageNode, m: anytype) void {
        comptime _ = @TypeOf(m)._is_QMatrix4x4;
        qtc.QSGBasicGeometryNode_SetRendererMatrix(@ptrCast(self.ptr), @ptrCast(m.ptr));
    }

    /// ### DEPRECATED: Use `setRendererClipList` instead
    ///
    pub const SetRendererClipList = setRendererClipList;

    /// Inherited from QSGBasicGeometryNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` c: QSGClipNode `
    ///
    pub fn setRendererClipList(self: QSGImageNode, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QSGClipNode;
        qtc.QSGBasicGeometryNode_SetRendererClipList(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn parent(self: QSGImageNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChildNode` instead
    ///
    pub const RemoveChildNode = removeChildNode;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGImageNode, node: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        qtc.QSGNode_RemoveChildNode(@ptrCast(self.ptr), @ptrCast(node.ptr));
    }

    /// ### DEPRECATED: Use `removeAllChildNodes` instead
    ///
    pub const RemoveAllChildNodes = removeAllChildNodes;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn removeAllChildNodes(self: QSGImageNode) void {
        qtc.QSGNode_RemoveAllChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prependChildNode` instead
    ///
    pub const PrependChildNode = prependChildNode;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGImageNode, node: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        qtc.QSGNode_PrependChildNode(@ptrCast(self.ptr), @ptrCast(node.ptr));
    }

    /// ### DEPRECATED: Use `appendChildNode` instead
    ///
    pub const AppendChildNode = appendChildNode;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGImageNode, node: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        qtc.QSGNode_AppendChildNode(@ptrCast(self.ptr), @ptrCast(node.ptr));
    }

    /// ### DEPRECATED: Use `insertChildNodeBefore` instead
    ///
    pub const InsertChildNodeBefore = insertChildNodeBefore;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGImageNode, node: anytype, before: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        comptime _ = @TypeOf(before)._is_QSGNode;
        qtc.QSGNode_InsertChildNodeBefore(@ptrCast(self.ptr), @ptrCast(node.ptr), @ptrCast(before.ptr));
    }

    /// ### DEPRECATED: Use `insertChildNodeAfter` instead
    ///
    pub const InsertChildNodeAfter = insertChildNodeAfter;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGImageNode, node: anytype, after: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        comptime _ = @TypeOf(after)._is_QSGNode;
        qtc.QSGNode_InsertChildNodeAfter(@ptrCast(self.ptr), @ptrCast(node.ptr), @ptrCast(after.ptr));
    }

    /// ### DEPRECATED: Use `reparentChildNodesTo` instead
    ///
    pub const ReparentChildNodesTo = reparentChildNodesTo;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGImageNode, newParent: anytype) void {
        comptime _ = @TypeOf(newParent)._is_QSGNode;
        qtc.QSGNode_ReparentChildNodesTo(@ptrCast(self.ptr), @ptrCast(newParent.ptr));
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn childCount(self: QSGImageNode) i32 {
        return qtc.QSGNode_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `childAtIndex` instead
    ///
    pub const ChildAtIndex = childAtIndex;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGImageNode, i: i32) QSGNode {
        return .{ .ptr = qtc.QSGNode_ChildAtIndex(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn firstChild(self: QSGImageNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn lastChild(self: QSGImageNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn nextSibling(self: QSGImageNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn previousSibling(self: QSGImageNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGImageNode) i32 {
        return qtc.QSGNode_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearDirty` instead
    ///
    pub const ClearDirty = clearDirty;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn clearDirty(self: QSGImageNode) void {
        qtc.QSGNode_ClearDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markDirty` instead
    ///
    pub const MarkDirty = markDirty;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGImageNode, bits: i32) void {
        qtc.QSGNode_MarkDirty(@ptrCast(self.ptr), @bitCast(bits));
    }

    /// ### DEPRECATED: Use `dirtyState` instead
    ///
    pub const DirtyState = dirtyState;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGImageNode) i32 {
        return qtc.QSGNode_DirtyState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSubtreeBlocked` instead
    ///
    pub const IsSubtreeBlocked = isSubtreeBlocked;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn isSubtreeBlocked(self: QSGImageNode) bool {
        return qtc.QSGNode_IsSubtreeBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGImageNode) i32 {
        return qtc.QSGNode_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGImageNode, param1: i32) void {
        qtc.QSGNode_SetFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGImageNode, param1: i32) void {
        qtc.QSGNode_SetFlags(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `preprocess` instead
    ///
    pub const Preprocess = preprocess;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn preprocess(self: QSGImageNode) void {
        qtc.QSGNode_Preprocess(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGImageNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlag2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `setFlags2` instead
    ///
    pub const SetFlags2 = setFlags2;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGImageNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGImageNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#dtor.QSGImageNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGImageNode `
    ///
    pub fn delete(self: QSGImageNode) void {
        qtc.QSGImageNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgimagenode.html#public-types)
pub const enums = struct {
    pub const TextureCoordinatesTransformFlag = enum {
        pub const NoTransform: i32 = 0;
        pub const MirrorHorizontally: i32 = 1;
        pub const MirrorVertically: i32 = 2;
    };
};
