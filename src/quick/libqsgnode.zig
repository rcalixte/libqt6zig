const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRectF = @import("libqt6").QRectF;
const QSGGeometry = @import("libqt6").QSGGeometry;
const QSGMaterial = @import("libqt6").QSGMaterial;
const qsgnode_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html)
pub const QSGNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGNode,

    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGNode object in C++ memory
    ///
    pub fn new() QSGNode {
        return .{ .ptr = qtc.QSGNode_new() };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn parent(self: QSGNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChildNode` instead
    ///
    pub const RemoveChildNode = removeChildNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeChildNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGNode, node: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        qtc.QSGNode_RemoveChildNode(@ptrCast(self.ptr), @ptrCast(node.ptr));
    }

    /// ### DEPRECATED: Use `removeAllChildNodes` instead
    ///
    pub const RemoveAllChildNodes = removeAllChildNodes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#removeAllChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn removeAllChildNodes(self: QSGNode) void {
        qtc.QSGNode_RemoveAllChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prependChildNode` instead
    ///
    pub const PrependChildNode = prependChildNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#prependChildNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGNode, node: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        qtc.QSGNode_PrependChildNode(@ptrCast(self.ptr), @ptrCast(node.ptr));
    }

    /// ### DEPRECATED: Use `appendChildNode` instead
    ///
    pub const AppendChildNode = appendChildNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#appendChildNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGNode, node: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        qtc.QSGNode_AppendChildNode(@ptrCast(self.ptr), @ptrCast(node.ptr));
    }

    /// ### DEPRECATED: Use `insertChildNodeBefore` instead
    ///
    pub const InsertChildNodeBefore = insertChildNodeBefore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGNode, node: anytype, before: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        comptime _ = @TypeOf(before)._is_QSGNode;
        qtc.QSGNode_InsertChildNodeBefore(@ptrCast(self.ptr), @ptrCast(node.ptr), @ptrCast(before.ptr));
    }

    /// ### DEPRECATED: Use `insertChildNodeAfter` instead
    ///
    pub const InsertChildNodeAfter = insertChildNodeAfter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#insertChildNodeAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGNode, node: anytype, after: anytype) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        comptime _ = @TypeOf(after)._is_QSGNode;
        qtc.QSGNode_InsertChildNodeAfter(@ptrCast(self.ptr), @ptrCast(node.ptr), @ptrCast(after.ptr));
    }

    /// ### DEPRECATED: Use `reparentChildNodesTo` instead
    ///
    pub const ReparentChildNodesTo = reparentChildNodesTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#reparentChildNodesTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGNode, newParent: anytype) void {
        comptime _ = @TypeOf(newParent)._is_QSGNode;
        qtc.QSGNode_ReparentChildNodesTo(@ptrCast(self.ptr), @ptrCast(newParent.ptr));
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn childCount(self: QSGNode) i32 {
        return qtc.QSGNode_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `childAtIndex` instead
    ///
    pub const ChildAtIndex = childAtIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#childAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGNode, i: i32) QSGNode {
        return .{ .ptr = qtc.QSGNode_ChildAtIndex(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn firstChild(self: QSGNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn lastChild(self: QSGNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn nextSibling(self: QSGNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn previousSibling(self: QSGNode) QSGNode {
        return .{ .ptr = qtc.QSGNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGNode) i32 {
        return qtc.QSGNode_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearDirty` instead
    ///
    pub const ClearDirty = clearDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#clearDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn clearDirty(self: QSGNode) void {
        qtc.QSGNode_ClearDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markDirty` instead
    ///
    pub const MarkDirty = markDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#markDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGNode, bits: i32) void {
        qtc.QSGNode_MarkDirty(@ptrCast(self.ptr), @bitCast(bits));
    }

    /// ### DEPRECATED: Use `dirtyState` instead
    ///
    pub const DirtyState = dirtyState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dirtyState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGNode) i32 {
        return qtc.QSGNode_DirtyState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSubtreeBlocked` instead
    ///
    pub const IsSubtreeBlocked = isSubtreeBlocked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn isSubtreeBlocked(self: QSGNode) bool {
        return qtc.QSGNode_IsSubtreeBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSubtreeBlocked` instead
    ///
    pub const OnIsSubtreeBlocked = onIsSubtreeBlocked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNode `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSubtreeBlocked` instead
    ///
    pub const SuperIsSubtreeBlocked = superIsSubtreeBlocked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#isSubtreeBlocked)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGNode) bool {
        return qtc.QSGNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGNode) i32 {
        return qtc.QSGNode_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGNode, param1: i32) void {
        qtc.QSGNode_SetFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGNode, param1: i32) void {
        qtc.QSGNode_SetFlags(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `preprocess` instead
    ///
    pub const Preprocess = preprocess;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn preprocess(self: QSGNode) void {
        qtc.QSGNode_Preprocess(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreprocess` instead
    ///
    pub const OnPreprocess = onPreprocess;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNode `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPreprocess` instead
    ///
    pub const SuperPreprocess = superPreprocess;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#preprocess)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    pub fn superPreprocess(self: QSGNode) void {
        qtc.QSGNode_SuperPreprocess(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlag2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `setFlags2` instead
    ///
    pub const SetFlags2 = setFlags2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#dtor.QSGNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGNode `
    ///
    pub fn delete(self: QSGNode) void {
        qtc.QSGNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode-h.html)
pub const qsgnode_h = extern struct {
    /// ### DEPRECATED: Use `qsgnodeSetDescription` instead
    ///
    pub const QsgnodeSetDescription = qsgnodeSetDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode-h.html#qsgnode_set_description)
    ///
    /// ## Parameter(s):
    ///
    /// ` node: QSGNode `
    ///
    /// ` description: []const u8 `
    ///
    pub fn qsgnodeSetDescription(node: anytype, description: []const u8) void {
        comptime _ = @TypeOf(node)._is_QSGNode;
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.qsgnode_h_QsgnodeSetDescription(@ptrCast(node.ptr), description_str);
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html)
pub const QSGBasicGeometryNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGBasicGeometryNode,

    pub const _is_QSGBasicGeometryNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    pub fn setGeometry(self: QSGBasicGeometryNode, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QSGGeometry;
        qtc.QSGBasicGeometryNode_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn geometry(self: QSGBasicGeometryNode) QSGGeometry {
        return .{ .ptr = qtc.QSGBasicGeometryNode_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometry2` instead
    ///
    pub const Geometry2 = geometry2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn geometry2(self: QSGBasicGeometryNode) QSGGeometry {
        return .{ .ptr = qtc.QSGBasicGeometryNode_Geometry2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `matrix` instead
    ///
    pub const Matrix = matrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#matrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn matrix(self: QSGBasicGeometryNode) QMatrix4x4 {
        return .{ .ptr = qtc.QSGBasicGeometryNode_Matrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipList` instead
    ///
    pub const ClipList = clipList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#clipList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn clipList(self: QSGBasicGeometryNode) QSGClipNode {
        return .{ .ptr = qtc.QSGBasicGeometryNode_ClipList(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRendererMatrix` instead
    ///
    pub const SetRendererMatrix = setRendererMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` m: QMatrix4x4 `
    ///
    pub fn setRendererMatrix(self: QSGBasicGeometryNode, m: anytype) void {
        comptime _ = @TypeOf(m)._is_QMatrix4x4;
        qtc.QSGBasicGeometryNode_SetRendererMatrix(@ptrCast(self.ptr), @ptrCast(m.ptr));
    }

    /// ### DEPRECATED: Use `setRendererClipList` instead
    ///
    pub const SetRendererClipList = setRendererClipList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#setRendererClipList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` c: QSGClipNode `
    ///
    pub fn setRendererClipList(self: QSGBasicGeometryNode, c: anytype) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn parent(self: QSGBasicGeometryNode) QSGNode {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGBasicGeometryNode, node: anytype) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn removeAllChildNodes(self: QSGBasicGeometryNode) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGBasicGeometryNode, node: anytype) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGBasicGeometryNode, node: anytype) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGBasicGeometryNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGBasicGeometryNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGBasicGeometryNode, newParent: anytype) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn childCount(self: QSGBasicGeometryNode) i32 {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGBasicGeometryNode, i: i32) QSGNode {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn firstChild(self: QSGBasicGeometryNode) QSGNode {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn lastChild(self: QSGBasicGeometryNode) QSGNode {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn nextSibling(self: QSGBasicGeometryNode) QSGNode {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn previousSibling(self: QSGBasicGeometryNode) QSGNode {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGBasicGeometryNode) i32 {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn clearDirty(self: QSGBasicGeometryNode) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGBasicGeometryNode, bits: i32) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGBasicGeometryNode) i32 {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn isSubtreeBlocked(self: QSGBasicGeometryNode) bool {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGBasicGeometryNode) i32 {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGBasicGeometryNode, param1: i32) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGBasicGeometryNode, param1: i32) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn preprocess(self: QSGBasicGeometryNode) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGBasicGeometryNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGBasicGeometryNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGBasicGeometryNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgbasicgeometrynode.html#dtor.QSGBasicGeometryNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGBasicGeometryNode `
    ///
    pub fn delete(self: QSGBasicGeometryNode) void {
        qtc.QSGBasicGeometryNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html)
pub const QSGGeometryNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGGeometryNode,

    pub const _is_QSGGeometryNode = {};
    pub const _is_QSGBasicGeometryNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGGeometryNode object in C++ memory
    ///
    pub fn new() QSGGeometryNode {
        return .{ .ptr = qtc.QSGGeometryNode_new() };
    }

    /// ### DEPRECATED: Use `setMaterial` instead
    ///
    pub const SetMaterial = setMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setMaterial(self: QSGGeometryNode, _material: anytype) void {
        comptime _ = @TypeOf(_material)._is_QSGMaterial;
        qtc.QSGGeometryNode_SetMaterial(@ptrCast(self.ptr), @ptrCast(_material.ptr));
    }

    /// ### DEPRECATED: Use `material` instead
    ///
    pub const Material = material;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#material)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    pub fn material(self: QSGGeometryNode) QSGMaterial {
        return .{ .ptr = qtc.QSGGeometryNode_Material(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOpaqueMaterial` instead
    ///
    pub const SetOpaqueMaterial = setOpaqueMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setOpaqueMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    /// ` _material: QSGMaterial `
    ///
    pub fn setOpaqueMaterial(self: QSGGeometryNode, _material: anytype) void {
        comptime _ = @TypeOf(_material)._is_QSGMaterial;
        qtc.QSGGeometryNode_SetOpaqueMaterial(@ptrCast(self.ptr), @ptrCast(_material.ptr));
    }

    /// ### DEPRECATED: Use `opaqueMaterial` instead
    ///
    pub const OpaqueMaterial = opaqueMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#opaqueMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    pub fn opaqueMaterial(self: QSGGeometryNode) QSGMaterial {
        return .{ .ptr = qtc.QSGGeometryNode_OpaqueMaterial(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeMaterial` instead
    ///
    pub const ActiveMaterial = activeMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#activeMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    pub fn activeMaterial(self: QSGGeometryNode) QSGMaterial {
        return .{ .ptr = qtc.QSGGeometryNode_ActiveMaterial(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRenderOrder` instead
    ///
    pub const SetRenderOrder = setRenderOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setRenderOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    /// ` order: i32 `
    ///
    pub fn setRenderOrder(self: QSGGeometryNode, order: i32) void {
        qtc.QSGGeometryNode_SetRenderOrder(@ptrCast(self.ptr), @bitCast(order));
    }

    /// ### DEPRECATED: Use `renderOrder` instead
    ///
    pub const RenderOrder = renderOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#renderOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    pub fn renderOrder(self: QSGGeometryNode) i32 {
        return qtc.QSGGeometryNode_RenderOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInheritedOpacity` instead
    ///
    pub const SetInheritedOpacity = setInheritedOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#setInheritedOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    /// ` opacity: f64 `
    ///
    pub fn setInheritedOpacity(self: QSGGeometryNode, opacity: f64) void {
        qtc.QSGGeometryNode_SetInheritedOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### DEPRECATED: Use `inheritedOpacity` instead
    ///
    pub const InheritedOpacity = inheritedOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#inheritedOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometryNode `
    ///
    pub fn inheritedOpacity(self: QSGGeometryNode) f64 {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    pub fn setGeometry(self: QSGGeometryNode, _geometry: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn geometry(self: QSGGeometryNode) QSGGeometry {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn geometry2(self: QSGGeometryNode) QSGGeometry {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn matrix(self: QSGGeometryNode) QMatrix4x4 {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn clipList(self: QSGGeometryNode) QSGClipNode {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` m: QMatrix4x4 `
    ///
    pub fn setRendererMatrix(self: QSGGeometryNode, m: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` c: QSGClipNode `
    ///
    pub fn setRendererClipList(self: QSGGeometryNode, c: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn parent(self: QSGGeometryNode) QSGNode {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGGeometryNode, node: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn removeAllChildNodes(self: QSGGeometryNode) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGGeometryNode, node: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGGeometryNode, node: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGGeometryNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGGeometryNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGGeometryNode, newParent: anytype) void {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn childCount(self: QSGGeometryNode) i32 {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGGeometryNode, i: i32) QSGNode {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn firstChild(self: QSGGeometryNode) QSGNode {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn lastChild(self: QSGGeometryNode) QSGNode {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn nextSibling(self: QSGGeometryNode) QSGNode {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn previousSibling(self: QSGGeometryNode) QSGNode {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGGeometryNode) i32 {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn clearDirty(self: QSGGeometryNode) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGGeometryNode, bits: i32) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGGeometryNode) i32 {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGGeometryNode) i32 {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGGeometryNode, param1: i32) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGGeometryNode, param1: i32) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGGeometryNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGGeometryNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGGeometryNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn isSubtreeBlocked(self: QSGGeometryNode) bool {
        return qtc.QSGGeometryNode_IsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGGeometryNode) bool {
        return qtc.QSGGeometryNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGGeometryNode`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGGeometryNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGGeometryNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn preprocess(self: QSGGeometryNode) void {
        qtc.QSGGeometryNode_Preprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGGeometryNode `
    ///
    pub fn superPreprocess(self: QSGGeometryNode) void {
        qtc.QSGGeometryNode_SuperPreprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGGeometryNode`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGGeometryNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGGeometryNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometrynode.html#dtor.QSGGeometryNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGGeometryNode `
    ///
    pub fn delete(self: QSGGeometryNode) void {
        qtc.QSGGeometryNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html)
pub const QSGClipNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGClipNode,

    pub const _is_QSGClipNode = {};
    pub const _is_QSGBasicGeometryNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGClipNode object in C++ memory
    ///
    pub fn new() QSGClipNode {
        return .{ .ptr = qtc.QSGClipNode_new() };
    }

    /// ### DEPRECATED: Use `setIsRectangular` instead
    ///
    pub const SetIsRectangular = setIsRectangular;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#setIsRectangular)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGClipNode `
    ///
    /// ` rectHint: bool `
    ///
    pub fn setIsRectangular(self: QSGClipNode, rectHint: bool) void {
        qtc.QSGClipNode_SetIsRectangular(@ptrCast(self.ptr), rectHint);
    }

    /// ### DEPRECATED: Use `isRectangular` instead
    ///
    pub const IsRectangular = isRectangular;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#isRectangular)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGClipNode `
    ///
    pub fn isRectangular(self: QSGClipNode) bool {
        return qtc.QSGClipNode_IsRectangular(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClipRect` instead
    ///
    pub const SetClipRect = setClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGClipNode `
    ///
    /// ` _clipRect: QRectF `
    ///
    pub fn setClipRect(self: QSGClipNode, _clipRect: anytype) void {
        comptime _ = @TypeOf(_clipRect)._is_QRectF;
        qtc.QSGClipNode_SetClipRect(@ptrCast(self.ptr), @ptrCast(_clipRect.ptr));
    }

    /// ### DEPRECATED: Use `clipRect` instead
    ///
    pub const ClipRect = clipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#clipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGClipNode `
    ///
    pub fn clipRect(self: QSGClipNode) QRectF {
        return .{ .ptr = qtc.QSGClipNode_ClipRect(@ptrCast(self.ptr)) };
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
    /// ` self: QSGClipNode `
    ///
    /// ` _geometry: QSGGeometry `
    ///
    pub fn setGeometry(self: QSGClipNode, _geometry: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    pub fn geometry(self: QSGClipNode) QSGGeometry {
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
    /// ` self: QSGClipNode `
    ///
    pub fn geometry2(self: QSGClipNode) QSGGeometry {
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
    /// ` self: QSGClipNode `
    ///
    pub fn matrix(self: QSGClipNode) QMatrix4x4 {
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
    /// ` self: QSGClipNode `
    ///
    pub fn clipList(self: QSGClipNode) QSGClipNode {
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
    /// ` self: QSGClipNode `
    ///
    /// ` m: QMatrix4x4 `
    ///
    pub fn setRendererMatrix(self: QSGClipNode, m: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` c: QSGClipNode `
    ///
    pub fn setRendererClipList(self: QSGClipNode, c: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    pub fn parent(self: QSGClipNode) QSGNode {
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
    /// ` self: QSGClipNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGClipNode, node: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    pub fn removeAllChildNodes(self: QSGClipNode) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGClipNode, node: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGClipNode, node: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGClipNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGClipNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGClipNode, newParent: anytype) void {
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
    /// ` self: QSGClipNode `
    ///
    pub fn childCount(self: QSGClipNode) i32 {
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
    /// ` self: QSGClipNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGClipNode, i: i32) QSGNode {
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
    /// ` self: QSGClipNode `
    ///
    pub fn firstChild(self: QSGClipNode) QSGNode {
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
    /// ` self: QSGClipNode `
    ///
    pub fn lastChild(self: QSGClipNode) QSGNode {
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
    /// ` self: QSGClipNode `
    ///
    pub fn nextSibling(self: QSGClipNode) QSGNode {
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
    /// ` self: QSGClipNode `
    ///
    pub fn previousSibling(self: QSGClipNode) QSGNode {
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
    /// ` self: QSGClipNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGClipNode) i32 {
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
    /// ` self: QSGClipNode `
    ///
    pub fn clearDirty(self: QSGClipNode) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGClipNode, bits: i32) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGClipNode) i32 {
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
    /// ` self: QSGClipNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGClipNode) i32 {
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
    /// ` self: QSGClipNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGClipNode, param1: i32) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGClipNode, param1: i32) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGClipNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGClipNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGClipNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGClipNode `
    ///
    pub fn isSubtreeBlocked(self: QSGClipNode) bool {
        return qtc.QSGClipNode_IsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGClipNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGClipNode) bool {
        return qtc.QSGClipNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGClipNode`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGClipNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGClipNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSGClipNode `
    ///
    pub fn preprocess(self: QSGClipNode) void {
        qtc.QSGClipNode_Preprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGClipNode `
    ///
    pub fn superPreprocess(self: QSGClipNode) void {
        qtc.QSGClipNode_SuperPreprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGClipNode`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGClipNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGClipNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgclipnode.html#dtor.QSGClipNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGClipNode `
    ///
    pub fn delete(self: QSGClipNode) void {
        qtc.QSGClipNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html)
pub const QSGTransformNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGTransformNode,

    pub const _is_QSGTransformNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGTransformNode object in C++ memory
    ///
    pub fn new() QSGTransformNode {
        return .{ .ptr = qtc.QSGTransformNode_new() };
    }

    /// ### DEPRECATED: Use `setMatrix` instead
    ///
    pub const SetMatrix = setMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTransformNode `
    ///
    /// ` _matrix: QMatrix4x4 `
    ///
    pub fn setMatrix(self: QSGTransformNode, _matrix: anytype) void {
        comptime _ = @TypeOf(_matrix)._is_QMatrix4x4;
        qtc.QSGTransformNode_SetMatrix(@ptrCast(self.ptr), @ptrCast(_matrix.ptr));
    }

    /// ### DEPRECATED: Use `matrix` instead
    ///
    pub const Matrix = matrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#matrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTransformNode `
    ///
    pub fn matrix(self: QSGTransformNode) QMatrix4x4 {
        return .{ .ptr = qtc.QSGTransformNode_Matrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCombinedMatrix` instead
    ///
    pub const SetCombinedMatrix = setCombinedMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setCombinedMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTransformNode `
    ///
    /// ` _matrix: QMatrix4x4 `
    ///
    pub fn setCombinedMatrix(self: QSGTransformNode, _matrix: anytype) void {
        comptime _ = @TypeOf(_matrix)._is_QMatrix4x4;
        qtc.QSGTransformNode_SetCombinedMatrix(@ptrCast(self.ptr), @ptrCast(_matrix.ptr));
    }

    /// ### DEPRECATED: Use `combinedMatrix` instead
    ///
    pub const CombinedMatrix = combinedMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#combinedMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTransformNode `
    ///
    pub fn combinedMatrix(self: QSGTransformNode) QMatrix4x4 {
        return .{ .ptr = qtc.QSGTransformNode_CombinedMatrix(@ptrCast(self.ptr)) };
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
    /// ` self: QSGTransformNode `
    ///
    pub fn parent(self: QSGTransformNode) QSGNode {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGTransformNode, node: anytype) void {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn removeAllChildNodes(self: QSGTransformNode) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGTransformNode, node: anytype) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGTransformNode, node: anytype) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGTransformNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGTransformNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGTransformNode, newParent: anytype) void {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn childCount(self: QSGTransformNode) i32 {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGTransformNode, i: i32) QSGNode {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn firstChild(self: QSGTransformNode) QSGNode {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn lastChild(self: QSGTransformNode) QSGNode {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn nextSibling(self: QSGTransformNode) QSGNode {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn previousSibling(self: QSGTransformNode) QSGNode {
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
    /// ` self: QSGTransformNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGTransformNode) i32 {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn clearDirty(self: QSGTransformNode) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGTransformNode, bits: i32) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGTransformNode) i32 {
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
    /// ` self: QSGTransformNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGTransformNode) i32 {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGTransformNode, param1: i32) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGTransformNode, param1: i32) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGTransformNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGTransformNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGTransformNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGTransformNode `
    ///
    pub fn isSubtreeBlocked(self: QSGTransformNode) bool {
        return qtc.QSGTransformNode_IsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGTransformNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGTransformNode) bool {
        return qtc.QSGTransformNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGTransformNode`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGTransformNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGTransformNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSGTransformNode `
    ///
    pub fn preprocess(self: QSGTransformNode) void {
        qtc.QSGTransformNode_Preprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGTransformNode `
    ///
    pub fn superPreprocess(self: QSGTransformNode) void {
        qtc.QSGTransformNode_SuperPreprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGTransformNode`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGTransformNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGTransformNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#dtor.QSGTransformNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGTransformNode `
    ///
    pub fn delete(self: QSGTransformNode) void {
        qtc.QSGTransformNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrootnode.html)
pub const QSGRootNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrootnode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGRootNode,

    pub const _is_QSGRootNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGRootNode object in C++ memory
    ///
    pub fn new() QSGRootNode {
        return .{ .ptr = qtc.QSGRootNode_new() };
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
    /// ` self: QSGRootNode `
    ///
    pub fn parent(self: QSGRootNode) QSGNode {
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
    /// ` self: QSGRootNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGRootNode, node: anytype) void {
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
    /// ` self: QSGRootNode `
    ///
    pub fn removeAllChildNodes(self: QSGRootNode) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGRootNode, node: anytype) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGRootNode, node: anytype) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGRootNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGRootNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGRootNode, newParent: anytype) void {
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
    /// ` self: QSGRootNode `
    ///
    pub fn childCount(self: QSGRootNode) i32 {
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
    /// ` self: QSGRootNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGRootNode, i: i32) QSGNode {
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
    /// ` self: QSGRootNode `
    ///
    pub fn firstChild(self: QSGRootNode) QSGNode {
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
    /// ` self: QSGRootNode `
    ///
    pub fn lastChild(self: QSGRootNode) QSGNode {
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
    /// ` self: QSGRootNode `
    ///
    pub fn nextSibling(self: QSGRootNode) QSGNode {
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
    /// ` self: QSGRootNode `
    ///
    pub fn previousSibling(self: QSGRootNode) QSGNode {
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
    /// ` self: QSGRootNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGRootNode) i32 {
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
    /// ` self: QSGRootNode `
    ///
    pub fn clearDirty(self: QSGRootNode) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGRootNode, bits: i32) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGRootNode) i32 {
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
    /// ` self: QSGRootNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGRootNode) i32 {
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
    /// ` self: QSGRootNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGRootNode, param1: i32) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGRootNode, param1: i32) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGRootNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGRootNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGRootNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGRootNode `
    ///
    pub fn isSubtreeBlocked(self: QSGRootNode) bool {
        return qtc.QSGRootNode_IsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGRootNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGRootNode) bool {
        return qtc.QSGRootNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGRootNode`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGRootNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGRootNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSGRootNode `
    ///
    pub fn preprocess(self: QSGRootNode) void {
        qtc.QSGRootNode_Preprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGRootNode `
    ///
    pub fn superPreprocess(self: QSGRootNode) void {
        qtc.QSGRootNode_SuperPreprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGRootNode`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGRootNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGRootNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrootnode.html#dtor.QSGRootNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGRootNode `
    ///
    pub fn delete(self: QSGRootNode) void {
        qtc.QSGRootNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html)
pub const QSGOpacityNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGOpacityNode,

    pub const _is_QSGOpacityNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGOpacityNode object in C++ memory
    ///
    pub fn new() QSGOpacityNode {
        return .{ .ptr = qtc.QSGOpacityNode_new() };
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpacityNode `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QSGOpacityNode, _opacity: f64) void {
        qtc.QSGOpacityNode_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpacityNode `
    ///
    pub fn opacity(self: QSGOpacityNode) f64 {
        return qtc.QSGOpacityNode_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCombinedOpacity` instead
    ///
    pub const SetCombinedOpacity = setCombinedOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#setCombinedOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpacityNode `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setCombinedOpacity(self: QSGOpacityNode, _opacity: f64) void {
        qtc.QSGOpacityNode_SetCombinedOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `combinedOpacity` instead
    ///
    pub const CombinedOpacity = combinedOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#combinedOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpacityNode `
    ///
    pub fn combinedOpacity(self: QSGOpacityNode) f64 {
        return qtc.QSGOpacityNode_CombinedOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSubtreeBlocked` instead
    ///
    pub const IsSubtreeBlocked = isSubtreeBlocked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#isSubtreeBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpacityNode `
    ///
    pub fn isSubtreeBlocked(self: QSGOpacityNode) bool {
        return qtc.QSGOpacityNode_IsSubtreeBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSubtreeBlocked` instead
    ///
    pub const OnIsSubtreeBlocked = onIsSubtreeBlocked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#isSubtreeBlocked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGOpacityNode `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGOpacityNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGOpacityNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSubtreeBlocked` instead
    ///
    pub const SuperIsSubtreeBlocked = superIsSubtreeBlocked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#isSubtreeBlocked)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGOpacityNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGOpacityNode) bool {
        return qtc.QSGOpacityNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn parent(self: QSGOpacityNode) QSGNode {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGOpacityNode, node: anytype) void {
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn removeAllChildNodes(self: QSGOpacityNode) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGOpacityNode, node: anytype) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGOpacityNode, node: anytype) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGOpacityNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGOpacityNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGOpacityNode, newParent: anytype) void {
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn childCount(self: QSGOpacityNode) i32 {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGOpacityNode, i: i32) QSGNode {
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn firstChild(self: QSGOpacityNode) QSGNode {
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn lastChild(self: QSGOpacityNode) QSGNode {
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn nextSibling(self: QSGOpacityNode) QSGNode {
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn previousSibling(self: QSGOpacityNode) QSGNode {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGOpacityNode) i32 {
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn clearDirty(self: QSGOpacityNode) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGOpacityNode, bits: i32) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGOpacityNode) i32 {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGOpacityNode) i32 {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGOpacityNode, param1: i32) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGOpacityNode, param1: i32) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGOpacityNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGOpacityNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGOpacityNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn preprocess(self: QSGOpacityNode) void {
        qtc.QSGOpacityNode_Preprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGOpacityNode `
    ///
    pub fn superPreprocess(self: QSGOpacityNode) void {
        qtc.QSGOpacityNode_SuperPreprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGOpacityNode`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGOpacityNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGOpacityNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgopacitynode.html#dtor.QSGOpacityNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGOpacityNode `
    ///
    pub fn delete(self: QSGOpacityNode) void {
        qtc.QSGOpacityNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html)
pub const QSGNodeVisitor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGNodeVisitor,

    pub const _is_QSGNodeVisitor = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGNodeVisitor object in C++ memory
    ///
    pub fn new() QSGNodeVisitor {
        return .{ .ptr = qtc.QSGNodeVisitor_new() };
    }

    /// ### DEPRECATED: Use `enterTransformNode` instead
    ///
    pub const EnterTransformNode = enterTransformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterTransformNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGTransformNode `
    ///
    pub fn enterTransformNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGTransformNode;
        qtc.QSGNodeVisitor_EnterTransformNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEnterTransformNode` instead
    ///
    pub const OnEnterTransformNode = onEnterTransformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterTransformNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGTransformNode) callconv(.c) void `
    ///
    pub fn onEnterTransformNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGTransformNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnEnterTransformNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnterTransformNode` instead
    ///
    pub const SuperEnterTransformNode = superEnterTransformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterTransformNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGTransformNode `
    ///
    pub fn superEnterTransformNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGTransformNode;
        qtc.QSGNodeVisitor_SuperEnterTransformNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `leaveTransformNode` instead
    ///
    pub const LeaveTransformNode = leaveTransformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveTransformNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGTransformNode `
    ///
    pub fn leaveTransformNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGTransformNode;
        qtc.QSGNodeVisitor_LeaveTransformNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveTransformNode` instead
    ///
    pub const OnLeaveTransformNode = onLeaveTransformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveTransformNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGTransformNode) callconv(.c) void `
    ///
    pub fn onLeaveTransformNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGTransformNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnLeaveTransformNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLeaveTransformNode` instead
    ///
    pub const SuperLeaveTransformNode = superLeaveTransformNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveTransformNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGTransformNode `
    ///
    pub fn superLeaveTransformNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGTransformNode;
        qtc.QSGNodeVisitor_SuperLeaveTransformNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `enterClipNode` instead
    ///
    pub const EnterClipNode = enterClipNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterClipNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGClipNode `
    ///
    pub fn enterClipNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGClipNode;
        qtc.QSGNodeVisitor_EnterClipNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEnterClipNode` instead
    ///
    pub const OnEnterClipNode = onEnterClipNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterClipNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGClipNode) callconv(.c) void `
    ///
    pub fn onEnterClipNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGClipNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnEnterClipNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnterClipNode` instead
    ///
    pub const SuperEnterClipNode = superEnterClipNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterClipNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGClipNode `
    ///
    pub fn superEnterClipNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGClipNode;
        qtc.QSGNodeVisitor_SuperEnterClipNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `leaveClipNode` instead
    ///
    pub const LeaveClipNode = leaveClipNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveClipNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGClipNode `
    ///
    pub fn leaveClipNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGClipNode;
        qtc.QSGNodeVisitor_LeaveClipNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveClipNode` instead
    ///
    pub const OnLeaveClipNode = onLeaveClipNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveClipNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGClipNode) callconv(.c) void `
    ///
    pub fn onLeaveClipNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGClipNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnLeaveClipNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLeaveClipNode` instead
    ///
    pub const SuperLeaveClipNode = superLeaveClipNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveClipNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGClipNode `
    ///
    pub fn superLeaveClipNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGClipNode;
        qtc.QSGNodeVisitor_SuperLeaveClipNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `enterGeometryNode` instead
    ///
    pub const EnterGeometryNode = enterGeometryNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterGeometryNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGGeometryNode `
    ///
    pub fn enterGeometryNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGGeometryNode;
        qtc.QSGNodeVisitor_EnterGeometryNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEnterGeometryNode` instead
    ///
    pub const OnEnterGeometryNode = onEnterGeometryNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterGeometryNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGGeometryNode) callconv(.c) void `
    ///
    pub fn onEnterGeometryNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGGeometryNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnEnterGeometryNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnterGeometryNode` instead
    ///
    pub const SuperEnterGeometryNode = superEnterGeometryNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterGeometryNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGGeometryNode `
    ///
    pub fn superEnterGeometryNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGGeometryNode;
        qtc.QSGNodeVisitor_SuperEnterGeometryNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `leaveGeometryNode` instead
    ///
    pub const LeaveGeometryNode = leaveGeometryNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveGeometryNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGGeometryNode `
    ///
    pub fn leaveGeometryNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGGeometryNode;
        qtc.QSGNodeVisitor_LeaveGeometryNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveGeometryNode` instead
    ///
    pub const OnLeaveGeometryNode = onLeaveGeometryNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveGeometryNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGGeometryNode) callconv(.c) void `
    ///
    pub fn onLeaveGeometryNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGGeometryNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnLeaveGeometryNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLeaveGeometryNode` instead
    ///
    pub const SuperLeaveGeometryNode = superLeaveGeometryNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveGeometryNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGGeometryNode `
    ///
    pub fn superLeaveGeometryNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGGeometryNode;
        qtc.QSGNodeVisitor_SuperLeaveGeometryNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `enterOpacityNode` instead
    ///
    pub const EnterOpacityNode = enterOpacityNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterOpacityNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGOpacityNode `
    ///
    pub fn enterOpacityNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGOpacityNode;
        qtc.QSGNodeVisitor_EnterOpacityNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEnterOpacityNode` instead
    ///
    pub const OnEnterOpacityNode = onEnterOpacityNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterOpacityNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGOpacityNode) callconv(.c) void `
    ///
    pub fn onEnterOpacityNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGOpacityNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnEnterOpacityNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnterOpacityNode` instead
    ///
    pub const SuperEnterOpacityNode = superEnterOpacityNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#enterOpacityNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGOpacityNode `
    ///
    pub fn superEnterOpacityNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGOpacityNode;
        qtc.QSGNodeVisitor_SuperEnterOpacityNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `leaveOpacityNode` instead
    ///
    pub const LeaveOpacityNode = leaveOpacityNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveOpacityNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGOpacityNode `
    ///
    pub fn leaveOpacityNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGOpacityNode;
        qtc.QSGNodeVisitor_LeaveOpacityNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveOpacityNode` instead
    ///
    pub const OnLeaveOpacityNode = onLeaveOpacityNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveOpacityNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, param1: QSGOpacityNode) callconv(.c) void `
    ///
    pub fn onLeaveOpacityNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGOpacityNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnLeaveOpacityNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLeaveOpacityNode` instead
    ///
    pub const SuperLeaveOpacityNode = superLeaveOpacityNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#leaveOpacityNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGOpacityNode `
    ///
    pub fn superLeaveOpacityNode(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGOpacityNode;
        qtc.QSGNodeVisitor_SuperLeaveOpacityNode(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `visitNode` instead
    ///
    pub const VisitNode = visitNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` n: QSGNode `
    ///
    pub fn visitNode(self: QSGNodeVisitor, n: anytype) void {
        comptime _ = @TypeOf(n)._is_QSGNode;
        qtc.QSGNodeVisitor_VisitNode(@ptrCast(self.ptr), @ptrCast(n.ptr));
    }

    /// ### DEPRECATED: Use `onVisitNode` instead
    ///
    pub const OnVisitNode = onVisitNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, n: QSGNode) callconv(.c) void `
    ///
    pub fn onVisitNode(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnVisitNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVisitNode` instead
    ///
    pub const SuperVisitNode = superVisitNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` n: QSGNode `
    ///
    pub fn superVisitNode(self: QSGNodeVisitor, n: anytype) void {
        comptime _ = @TypeOf(n)._is_QSGNode;
        qtc.QSGNodeVisitor_SuperVisitNode(@ptrCast(self.ptr), @ptrCast(n.ptr));
    }

    /// ### DEPRECATED: Use `visitChildren` instead
    ///
    pub const VisitChildren = visitChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` n: QSGNode `
    ///
    pub fn visitChildren(self: QSGNodeVisitor, n: anytype) void {
        comptime _ = @TypeOf(n)._is_QSGNode;
        qtc.QSGNodeVisitor_VisitChildren(@ptrCast(self.ptr), @ptrCast(n.ptr));
    }

    /// ### DEPRECATED: Use `onVisitChildren` instead
    ///
    pub const OnVisitChildren = onVisitChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` callback: *const fn (self: QSGNodeVisitor, n: QSGNode) callconv(.c) void `
    ///
    pub fn onVisitChildren(self: QSGNodeVisitor, callback: *const fn (QSGNodeVisitor, QSGNode) callconv(.c) void) void {
        qtc.QSGNodeVisitor_OnVisitChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVisitChildren` instead
    ///
    pub const SuperVisitChildren = superVisitChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#visitChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` n: QSGNode `
    ///
    pub fn superVisitChildren(self: QSGNodeVisitor, n: anytype) void {
        comptime _ = @TypeOf(n)._is_QSGNode;
        qtc.QSGNodeVisitor_SuperVisitChildren(@ptrCast(self.ptr), @ptrCast(n.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGNodeVisitor `
    ///
    /// ` param1: QSGNodeVisitor `
    ///
    pub fn operatorAssign(self: QSGNodeVisitor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGNodeVisitor;
        qtc.QSGNodeVisitor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnodevisitor.html#dtor.QSGNodeVisitor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGNodeVisitor `
    ///
    pub fn delete(self: QSGNodeVisitor) void {
        qtc.QSGNodeVisitor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgnode.html#public-types)
pub const enums = struct {
    pub const NodeType = enum {
        pub const BasicNodeType: i32 = 0;
        pub const GeometryNodeType: i32 = 1;
        pub const TransformNodeType: i32 = 2;
        pub const ClipNodeType: i32 = 3;
        pub const OpacityNodeType: i32 = 4;
        pub const RootNodeType: i32 = 5;
        pub const RenderNodeType: i32 = 6;
    };

    pub const Flag = enum {
        pub const OwnedByParent: i32 = 1;
        pub const UsePreprocess: i32 = 2;
        pub const OwnsGeometry: i32 = 65536;
        pub const OwnsMaterial: i32 = 131072;
        pub const OwnsOpaqueMaterial: i32 = 262144;
        pub const IsVisitableNode: i32 = 16777216;
    };

    pub const DirtyStateBit = enum {
        pub const DirtySubtreeBlocked: i32 = 128;
        pub const DirtyMatrix: i32 = 256;
        pub const DirtyNodeAdded: i32 = 1024;
        pub const DirtyNodeRemoved: i32 = 2048;
        pub const DirtyGeometry: i32 = 4096;
        pub const DirtyMaterial: i32 = 8192;
        pub const DirtyOpacity: i32 = 16384;
        pub const DirtyForceUpdate: i32 = 32768;
        pub const DirtyUsePreprocess: i32 = 2;
        pub const DirtyPropagationMask: i32 = 50432;
    };
};
