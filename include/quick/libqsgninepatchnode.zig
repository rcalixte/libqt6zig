const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRectF = @import("libqt6").QRectF;
const QSGClipNode = @import("libqt6").QSGClipNode;
const QSGGeometry = @import("libqt6").QSGGeometry;
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGNode = @import("libqt6").QSGNode;
const QSGTexture = @import("libqt6").QSGTexture;
const QVector4D = @import("libqt6").QVector4D;
const qsgnode_enums = @import("libqsgnode.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html)
pub const QSGNinePatchNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGNinePatchNode,

    pub const _is_QSGNinePatchNode = {};
    pub const _is_QSGGeometryNode = {};
    pub const _is_QSGBasicGeometryNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `setTexture` instead
    ///
    pub const SetTexture = setTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNinePatchNode `
    ///
    /// ` texture: QSGTexture `
    ///
    pub fn setTexture(self: QSGNinePatchNode, texture: anytype) void {
        comptime _ = @TypeOf(texture)._is_QSGTexture;
        qtc.QSGNinePatchNode_SetTexture(@ptrCast(self.ptr), @ptrCast(texture.ptr));
    }

    /// ### DEPRECATED: Use `setBounds` instead
    ///
    pub const SetBounds = setBounds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setBounds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNinePatchNode `
    ///
    /// ` bounds: QRectF `
    ///
    pub fn setBounds(self: QSGNinePatchNode, bounds: anytype) void {
        comptime _ = @TypeOf(bounds)._is_QRectF;
        qtc.QSGNinePatchNode_SetBounds(@ptrCast(self.ptr), @ptrCast(bounds.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNinePatchNode `
    ///
    /// ` ratio: f64 `
    ///
    pub fn setDevicePixelRatio(self: QSGNinePatchNode, ratio: f64) void {
        qtc.QSGNinePatchNode_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `setPadding` instead
    ///
    pub const SetPadding = setPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#setPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNinePatchNode `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn setPadding(self: QSGNinePatchNode, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QSGNinePatchNode_SetPadding(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNinePatchNode `
    ///
    pub fn update(self: QSGNinePatchNode) void {
        qtc.QSGNinePatchNode_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rebuildGeometry` instead
    ///
    pub const RebuildGeometry = rebuildGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#rebuildGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` texture: QSGTexture `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    /// ` padding: QVector4D `
    ///
    /// ` bounds: QRectF `
    ///
    /// ` dpr: f64 `
    ///
    pub fn rebuildGeometry(texture: anytype, _geometry: anytype, padding: anytype, bounds: anytype, dpr: f64) void {
        comptime _ = @TypeOf(texture)._is_QSGTexture;
        comptime _ = @TypeOf(_geometry)._is_QSGGeometry;
        comptime _ = @TypeOf(padding)._is_QVector4D;
        comptime _ = @TypeOf(bounds)._is_QRectF;
        qtc.QSGNinePatchNode_RebuildGeometry(@ptrCast(texture.ptr), @ptrCast(_geometry.ptr), @ptrCast(padding.ptr), @ptrCast(bounds.ptr), @bitCast(dpr));
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setMaterial(self: QSGNinePatchNode, _material: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn material(self: QSGNinePatchNode) QSGMaterial {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setOpaqueMaterial(self: QSGNinePatchNode, _material: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn opaqueMaterial(self: QSGNinePatchNode) QSGMaterial {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn activeMaterial(self: QSGNinePatchNode) QSGMaterial {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` order: i32 `
    ///
    pub fn setRenderOrder(self: QSGNinePatchNode, order: i32) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn renderOrder(self: QSGNinePatchNode) i32 {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` opacity: f64 `
    ///
    pub fn setInheritedOpacity(self: QSGNinePatchNode, opacity: f64) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn inheritedOpacity(self: QSGNinePatchNode) f64 {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    pub fn setGeometry(self: QSGNinePatchNode, _geometry: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn geometry(self: QSGNinePatchNode) QSGGeometry {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn geometry2(self: QSGNinePatchNode) QSGGeometry {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn matrix(self: QSGNinePatchNode) QMatrix4x4 {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn clipList(self: QSGNinePatchNode) QSGClipNode {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` m: QMatrix4x4 `
    ///
    pub fn setRendererMatrix(self: QSGNinePatchNode, m: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` c: QSGClipNode `
    ///
    pub fn setRendererClipList(self: QSGNinePatchNode, c: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn parent(self: QSGNinePatchNode) QSGNode {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGNinePatchNode, node: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn removeAllChildNodes(self: QSGNinePatchNode) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGNinePatchNode, node: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGNinePatchNode, node: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGNinePatchNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGNinePatchNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGNinePatchNode, newParent: anytype) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn childCount(self: QSGNinePatchNode) i32 {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGNinePatchNode, i: i32) QSGNode {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn firstChild(self: QSGNinePatchNode) QSGNode {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn lastChild(self: QSGNinePatchNode) QSGNode {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn nextSibling(self: QSGNinePatchNode) QSGNode {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn previousSibling(self: QSGNinePatchNode) QSGNode {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGNinePatchNode) i32 {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn clearDirty(self: QSGNinePatchNode) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGNinePatchNode, bits: i32) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGNinePatchNode) i32 {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn isSubtreeBlocked(self: QSGNinePatchNode) bool {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGNinePatchNode) i32 {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGNinePatchNode, param1: i32) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGNinePatchNode, param1: i32) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    pub fn preprocess(self: QSGNinePatchNode) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGNinePatchNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGNinePatchNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGNinePatchNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgninepatchnode.html#dtor.QSGNinePatchNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGNinePatchNode `
    ///
    pub fn delete(self: QSGNinePatchNode) void {
        qtc.QSGNinePatchNode_Delete(@ptrCast(self.ptr));
    }
};
