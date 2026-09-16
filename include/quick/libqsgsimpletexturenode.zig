const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRectF = @import("libqt6").QRectF;
const QSGClipNode = @import("libqt6").QSGClipNode;
const QSGGeometry = @import("libqt6").QSGGeometry;
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGNode = @import("libqt6").QSGNode;
const QSGTexture = @import("libqt6").QSGTexture;
const qsgnode_enums = @import("libqsgnode.zig").enums;
const qsgsimpletexturenode_enums = enums;
const qsgtexture_enums = @import("libqsgtexture.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html)
pub const QSGSimpleTextureNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGSimpleTextureNode,

    pub const _is_QSGSimpleTextureNode = {};
    pub const _is_QSGGeometryNode = {};
    pub const _is_QSGBasicGeometryNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGSimpleTextureNode object in C++ memory
    ///
    pub fn new() QSGSimpleTextureNode {
        return .{ .ptr = qtc.QSGSimpleTextureNode_new() };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn setRect(self: QSGSimpleTextureNode, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QSGSimpleTextureNode_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setRect2` instead
    ///
    pub const SetRect2 = setRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setRect2(self: QSGSimpleTextureNode, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QSGSimpleTextureNode_SetRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn rect(self: QSGSimpleTextureNode) QRectF {
        return .{ .ptr = qtc.QSGSimpleTextureNode_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSourceRect` instead
    ///
    pub const SetSourceRect = setSourceRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setSourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` r: QRectF `
    ///
    pub fn setSourceRect(self: QSGSimpleTextureNode, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QSGSimpleTextureNode_SetSourceRect(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `setSourceRect2` instead
    ///
    pub const SetSourceRect2 = setSourceRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setSourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setSourceRect2(self: QSGSimpleTextureNode, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QSGSimpleTextureNode_SetSourceRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `sourceRect` instead
    ///
    pub const SourceRect = sourceRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#sourceRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn sourceRect(self: QSGSimpleTextureNode) QRectF {
        return .{ .ptr = qtc.QSGSimpleTextureNode_SourceRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTexture` instead
    ///
    pub const SetTexture = setTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` _texture: QSGTexture `
    ///
    pub fn setTexture(self: QSGSimpleTextureNode, _texture: anytype) void {
        comptime _ = @TypeOf(_texture)._is_QSGTexture;
        qtc.QSGSimpleTextureNode_SetTexture(@ptrCast(self.ptr), @ptrCast(_texture.ptr));
    }

    /// ### DEPRECATED: Use `texture` instead
    ///
    pub const Texture = texture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn texture(self: QSGSimpleTextureNode) QSGTexture {
        return .{ .ptr = qtc.QSGSimpleTextureNode_Texture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFiltering` instead
    ///
    pub const SetFiltering = setFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` _filtering: qsgtexture_enums.Filtering `
    ///
    pub fn setFiltering(self: QSGSimpleTextureNode, _filtering: i32) void {
        qtc.QSGSimpleTextureNode_SetFiltering(@ptrCast(self.ptr), @bitCast(_filtering));
    }

    /// ### DEPRECATED: Use `filtering` instead
    ///
    pub const Filtering = filtering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#filtering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn filtering(self: QSGSimpleTextureNode) i32 {
        return qtc.QSGSimpleTextureNode_Filtering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextureCoordinatesTransform` instead
    ///
    pub const SetTextureCoordinatesTransform = setTextureCoordinatesTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setTextureCoordinatesTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` mode: flag of qsgsimpletexturenode_enums.TextureCoordinatesTransformFlag `
    ///
    pub fn setTextureCoordinatesTransform(self: QSGSimpleTextureNode, mode: i32) void {
        qtc.QSGSimpleTextureNode_SetTextureCoordinatesTransform(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `textureCoordinatesTransform` instead
    ///
    pub const TextureCoordinatesTransform = textureCoordinatesTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#textureCoordinatesTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgsimpletexturenode_enums.TextureCoordinatesTransformFlag `
    ///
    pub fn textureCoordinatesTransform(self: QSGSimpleTextureNode) i32 {
        return qtc.QSGSimpleTextureNode_TextureCoordinatesTransform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOwnsTexture` instead
    ///
    pub const SetOwnsTexture = setOwnsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#setOwnsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` owns: bool `
    ///
    pub fn setOwnsTexture(self: QSGSimpleTextureNode, owns: bool) void {
        qtc.QSGSimpleTextureNode_SetOwnsTexture(@ptrCast(self.ptr), owns);
    }

    /// ### DEPRECATED: Use `ownsTexture` instead
    ///
    pub const OwnsTexture = ownsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#ownsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn ownsTexture(self: QSGSimpleTextureNode) bool {
        return qtc.QSGSimpleTextureNode_OwnsTexture(@ptrCast(self.ptr));
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setMaterial(self: QSGSimpleTextureNode, _material: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn material(self: QSGSimpleTextureNode) QSGMaterial {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setOpaqueMaterial(self: QSGSimpleTextureNode, _material: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn opaqueMaterial(self: QSGSimpleTextureNode) QSGMaterial {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn activeMaterial(self: QSGSimpleTextureNode) QSGMaterial {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` order: i32 `
    ///
    pub fn setRenderOrder(self: QSGSimpleTextureNode, order: i32) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn renderOrder(self: QSGSimpleTextureNode) i32 {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` opacity: f64 `
    ///
    pub fn setInheritedOpacity(self: QSGSimpleTextureNode, opacity: f64) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn inheritedOpacity(self: QSGSimpleTextureNode) f64 {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    pub fn setGeometry(self: QSGSimpleTextureNode, _geometry: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn geometry(self: QSGSimpleTextureNode) QSGGeometry {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn geometry2(self: QSGSimpleTextureNode) QSGGeometry {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn matrix(self: QSGSimpleTextureNode) QMatrix4x4 {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn clipList(self: QSGSimpleTextureNode) QSGClipNode {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` m: QMatrix4x4 `
    ///
    pub fn setRendererMatrix(self: QSGSimpleTextureNode, m: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` c: QSGClipNode `
    ///
    pub fn setRendererClipList(self: QSGSimpleTextureNode, c: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn parent(self: QSGSimpleTextureNode) QSGNode {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGSimpleTextureNode, node: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn removeAllChildNodes(self: QSGSimpleTextureNode) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGSimpleTextureNode, node: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGSimpleTextureNode, node: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGSimpleTextureNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGSimpleTextureNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGSimpleTextureNode, newParent: anytype) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn childCount(self: QSGSimpleTextureNode) i32 {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGSimpleTextureNode, i: i32) QSGNode {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn firstChild(self: QSGSimpleTextureNode) QSGNode {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn lastChild(self: QSGSimpleTextureNode) QSGNode {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn nextSibling(self: QSGSimpleTextureNode) QSGNode {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn previousSibling(self: QSGSimpleTextureNode) QSGNode {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGSimpleTextureNode) i32 {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn clearDirty(self: QSGSimpleTextureNode) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGSimpleTextureNode, bits: i32) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGSimpleTextureNode) i32 {
        return qtc.QSGNode_DirtyState(@ptrCast(self.ptr));
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGSimpleTextureNode) i32 {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGSimpleTextureNode, param1: i32) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGSimpleTextureNode, param1: i32) void {
        qtc.QSGNode_SetFlags(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGSimpleTextureNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGSimpleTextureNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGSimpleTextureNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `isSubtreeBlocked` instead
    ///
    pub const IsSubtreeBlocked = isSubtreeBlocked;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn isSubtreeBlocked(self: QSGSimpleTextureNode) bool {
        return qtc.QSGSimpleTextureNode_IsSubtreeBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsSubtreeBlocked` instead
    ///
    pub const SuperIsSubtreeBlocked = superIsSubtreeBlocked;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGSimpleTextureNode) bool {
        return qtc.QSGSimpleTextureNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSubtreeBlocked` instead
    ///
    pub const OnIsSubtreeBlocked = onIsSubtreeBlocked;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGSimpleTextureNode`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGSimpleTextureNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGSimpleTextureNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preprocess` instead
    ///
    pub const Preprocess = preprocess;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn preprocess(self: QSGSimpleTextureNode) void {
        qtc.QSGSimpleTextureNode_Preprocess(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPreprocess` instead
    ///
    pub const SuperPreprocess = superPreprocess;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn superPreprocess(self: QSGSimpleTextureNode) void {
        qtc.QSGSimpleTextureNode_SuperPreprocess(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreprocess` instead
    ///
    pub const OnPreprocess = onPreprocess;

    /// Inherited from QSGNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGSimpleTextureNode`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGSimpleTextureNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGSimpleTextureNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#dtor.QSGSimpleTextureNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGSimpleTextureNode `
    ///
    pub fn delete(self: QSGSimpleTextureNode) void {
        qtc.QSGSimpleTextureNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgsimpletexturenode.html#public-types)
pub const enums = struct {
    pub const TextureCoordinatesTransformFlag = enum {
        pub const NoTransform: i32 = 0;
        pub const MirrorHorizontally: i32 = 1;
        pub const MirrorVertically: i32 = 2;
    };
};
