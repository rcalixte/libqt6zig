const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRectF = @import("libqt6").QRectF;
const QSGClipNode = @import("libqt6").QSGClipNode;
const QSGGeometry = @import("libqt6").QSGGeometry;
const QSGMaterial = @import("libqt6").QSGMaterial;
const QSGNode = @import("libqt6").QSGNode;
const qsgnode_enums = @import("libqsgnode.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html)
pub const QSGRectangleNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGRectangleNode,

    pub const _is_QSGRectangleNode = {};
    pub const _is_QSGGeometryNode = {};
    pub const _is_QSGBasicGeometryNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRectangleNode `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn setRect(self: QSGRectangleNode, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QSGRectangleNode_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setRect2` instead
    ///
    pub const SetRect2 = setRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRectangleNode `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setRect2(self: QSGRectangleNode, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QSGRectangleNode_SetRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRectangleNode `
    ///
    pub fn rect(self: QSGRectangleNode) QRectF {
        return .{ .ptr = qtc.QSGRectangleNode_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRectangleNode `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QSGRectangleNode, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QSGRectangleNode_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRectangleNode `
    ///
    pub fn color(self: QSGRectangleNode) QColor {
        return .{ .ptr = qtc.QSGRectangleNode_Color(@ptrCast(self.ptr)) };
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setMaterial(self: QSGRectangleNode, _material: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn material(self: QSGRectangleNode) QSGMaterial {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setOpaqueMaterial(self: QSGRectangleNode, _material: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn opaqueMaterial(self: QSGRectangleNode) QSGMaterial {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn activeMaterial(self: QSGRectangleNode) QSGMaterial {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` order: i32 `
    ///
    pub fn setRenderOrder(self: QSGRectangleNode, order: i32) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn renderOrder(self: QSGRectangleNode) i32 {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` opacity: f64 `
    ///
    pub fn setInheritedOpacity(self: QSGRectangleNode, opacity: f64) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn inheritedOpacity(self: QSGRectangleNode) f64 {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    pub fn setGeometry(self: QSGRectangleNode, _geometry: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn geometry(self: QSGRectangleNode) QSGGeometry {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn geometry2(self: QSGRectangleNode) QSGGeometry {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn matrix(self: QSGRectangleNode) QMatrix4x4 {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn clipList(self: QSGRectangleNode) QSGClipNode {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` m: QMatrix4x4 `
    ///
    pub fn setRendererMatrix(self: QSGRectangleNode, m: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` c: QSGClipNode `
    ///
    pub fn setRendererClipList(self: QSGRectangleNode, c: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn parent(self: QSGRectangleNode) QSGNode {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGRectangleNode, node: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn removeAllChildNodes(self: QSGRectangleNode) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGRectangleNode, node: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGRectangleNode, node: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGRectangleNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGRectangleNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGRectangleNode, newParent: anytype) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn childCount(self: QSGRectangleNode) i32 {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGRectangleNode, i: i32) QSGNode {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn firstChild(self: QSGRectangleNode) QSGNode {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn lastChild(self: QSGRectangleNode) QSGNode {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn nextSibling(self: QSGRectangleNode) QSGNode {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn previousSibling(self: QSGRectangleNode) QSGNode {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGRectangleNode) i32 {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn clearDirty(self: QSGRectangleNode) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGRectangleNode, bits: i32) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGRectangleNode) i32 {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn isSubtreeBlocked(self: QSGRectangleNode) bool {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGRectangleNode) i32 {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGRectangleNode, param1: i32) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGRectangleNode, param1: i32) void {
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
    /// ` self: QSGRectangleNode `
    ///
    pub fn preprocess(self: QSGRectangleNode) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGRectangleNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGRectangleNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGRectangleNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrectanglenode.html#dtor.QSGRectangleNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGRectangleNode `
    ///
    pub fn delete(self: QSGRectangleNode) void {
        qtc.QSGRectangleNode_Delete(@ptrCast(self.ptr));
    }
};
