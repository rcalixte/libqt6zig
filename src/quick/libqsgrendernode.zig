const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QSGClipNode = @import("libqt6").QSGClipNode;
const QSGNode = @import("libqt6").QSGNode;
const qsgnode_enums = @import("libqsgnode.zig").enums;
const qsgrendernode_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html)
pub const QSGRenderNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGRenderNode,

    pub const _is_QSGRenderNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGRenderNode object in C++ memory
    ///
    pub fn new() QSGRenderNode {
        return .{ .ptr = qtc.QSGRenderNode_new() };
    }

    /// ### DEPRECATED: Use `changedStates` instead
    ///
    pub const ChangedStates = changedStates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#changedStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgrendernode_enums.StateFlag `
    ///
    pub fn changedStates(self: QSGRenderNode) i32 {
        return qtc.QSGRenderNode_ChangedStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChangedStates` instead
    ///
    pub const OnChangedStates = onChangedStates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#changedStates)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onChangedStates(self: QSGRenderNode, callback: *const fn () callconv(.c) i32) void {
        qtc.QSGRenderNode_OnChangedStates(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChangedStates` instead
    ///
    pub const SuperChangedStates = superChangedStates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#changedStates)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgrendernode_enums.StateFlag `
    ///
    pub fn superChangedStates(self: QSGRenderNode) i32 {
        return qtc.QSGRenderNode_SuperChangedStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepare` instead
    ///
    pub const Prepare = prepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn prepare(self: QSGRenderNode) void {
        qtc.QSGRenderNode_Prepare(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPrepare` instead
    ///
    pub const OnPrepare = onPrepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#prepare)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPrepare(self: QSGRenderNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGRenderNode_OnPrepare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPrepare` instead
    ///
    pub const SuperPrepare = superPrepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#prepare)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn superPrepare(self: QSGRenderNode) void {
        qtc.QSGRenderNode_SuperPrepare(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `render` instead
    ///
    pub const Render = render;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` state: QSGRenderNode__RenderState `
    ///
    pub fn render(self: QSGRenderNode, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QSGRenderNode__RenderState;
        qtc.QSGRenderNode_Render(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `onRender` instead
    ///
    pub const OnRender = onRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#render)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` callback: *const fn (self: QSGRenderNode, state: QSGRenderNode__RenderState) callconv(.c) void `
    ///
    pub fn onRender(self: QSGRenderNode, callback: *const fn (QSGRenderNode, QSGRenderNode__RenderState) callconv(.c) void) void {
        qtc.QSGRenderNode_OnRender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRender` instead
    ///
    pub const SuperRender = superRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#render)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` state: QSGRenderNode__RenderState `
    ///
    pub fn superRender(self: QSGRenderNode, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QSGRenderNode__RenderState;
        qtc.QSGRenderNode_SuperRender(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `releaseResources` instead
    ///
    pub const ReleaseResources = releaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#releaseResources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn releaseResources(self: QSGRenderNode) void {
        qtc.QSGRenderNode_ReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleaseResources` instead
    ///
    pub const OnReleaseResources = onReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#releaseResources)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReleaseResources(self: QSGRenderNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGRenderNode_OnReleaseResources(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReleaseResources` instead
    ///
    pub const SuperReleaseResources = superReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#releaseResources)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn superReleaseResources(self: QSGRenderNode) void {
        qtc.QSGRenderNode_SuperReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgrendernode_enums.RenderingFlag `
    ///
    pub fn flags(self: QSGRenderNode) i32 {
        return qtc.QSGRenderNode_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onFlags(self: QSGRenderNode, callback: *const fn () callconv(.c) i32) void {
        qtc.QSGRenderNode_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgrendernode_enums.RenderingFlag `
    ///
    pub fn superFlags(self: QSGRenderNode) i32 {
        return qtc.QSGRenderNode_SuperFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn rect(self: QSGRenderNode) QRectF {
        return .{ .ptr = qtc.QSGRenderNode_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onRect` instead
    ///
    pub const OnRect = onRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#rect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRect(self: QSGRenderNode, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QSGRenderNode_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRect` instead
    ///
    pub const SuperRect = superRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#rect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn superRect(self: QSGRenderNode) QRectF {
        return .{ .ptr = qtc.QSGRenderNode_SuperRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `projectionMatrix` instead
    ///
    pub const ProjectionMatrix = projectionMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#projectionMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn projectionMatrix(self: QSGRenderNode) QMatrix4x4 {
        return .{ .ptr = qtc.QSGRenderNode_ProjectionMatrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `projectionMatrix2` instead
    ///
    pub const ProjectionMatrix2 = projectionMatrix2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#projectionMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    /// ` index: isize `
    ///
    pub fn projectionMatrix2(self: QSGRenderNode, index: isize) QMatrix4x4 {
        return .{ .ptr = qtc.QSGRenderNode_ProjectionMatrix2(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `matrix` instead
    ///
    pub const Matrix = matrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#matrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn matrix(self: QSGRenderNode) QMatrix4x4 {
        return .{ .ptr = qtc.QSGRenderNode_Matrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipList` instead
    ///
    pub const ClipList = clipList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#clipList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn clipList(self: QSGRenderNode) QSGClipNode {
        return .{ .ptr = qtc.QSGRenderNode_ClipList(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inheritedOpacity` instead
    ///
    pub const InheritedOpacity = inheritedOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#inheritedOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn inheritedOpacity(self: QSGRenderNode) f64 {
        return qtc.QSGRenderNode_InheritedOpacity(@ptrCast(self.ptr));
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
    /// ` self: QSGRenderNode `
    ///
    pub fn parent(self: QSGRenderNode) QSGNode {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGRenderNode, node: anytype) void {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn removeAllChildNodes(self: QSGRenderNode) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGRenderNode, node: anytype) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGRenderNode, node: anytype) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGRenderNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGRenderNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGRenderNode, newParent: anytype) void {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn childCount(self: QSGRenderNode) i32 {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGRenderNode, i: i32) QSGNode {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn firstChild(self: QSGRenderNode) QSGNode {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn lastChild(self: QSGRenderNode) QSGNode {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn nextSibling(self: QSGRenderNode) QSGNode {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn previousSibling(self: QSGRenderNode) QSGNode {
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
    /// ` self: QSGRenderNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGRenderNode) i32 {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn clearDirty(self: QSGRenderNode) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGRenderNode, bits: i32) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGRenderNode) i32 {
        return qtc.QSGNode_DirtyState(@ptrCast(self.ptr));
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
    /// ` self: QSGRenderNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGRenderNode, param1: i32) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGRenderNode, param1: i32) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGRenderNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGRenderNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGRenderNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGRenderNode `
    ///
    pub fn isSubtreeBlocked(self: QSGRenderNode) bool {
        return qtc.QSGRenderNode_IsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGRenderNode `
    ///
    pub fn superIsSubtreeBlocked(self: QSGRenderNode) bool {
        return qtc.QSGRenderNode_SuperIsSubtreeBlocked(@ptrCast(self.ptr));
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
    /// ` self: QSGRenderNode`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSubtreeBlocked(self: QSGRenderNode, callback: *const fn () callconv(.c) bool) void {
        qtc.QSGRenderNode_OnIsSubtreeBlocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSGRenderNode `
    ///
    pub fn preprocess(self: QSGRenderNode) void {
        qtc.QSGRenderNode_Preprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGRenderNode `
    ///
    pub fn superPreprocess(self: QSGRenderNode) void {
        qtc.QSGRenderNode_SuperPreprocess(@ptrCast(self.ptr));
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
    /// ` self: QSGRenderNode`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPreprocess(self: QSGRenderNode, callback: *const fn () callconv(.c) void) void {
        qtc.QSGRenderNode_OnPreprocess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#dtor.QSGRenderNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGRenderNode `
    ///
    pub fn delete(self: QSGRenderNode) void {
        qtc.QSGRenderNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html)
pub const QSGRenderNode__RenderState = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGRenderNode__RenderState,

    pub const _is_QSGRenderNode__RenderState = {};

    /// ### DEPRECATED: Use `projectionMatrix` instead
    ///
    pub const ProjectionMatrix = projectionMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#projectionMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    pub fn projectionMatrix(self: QSGRenderNode__RenderState) QMatrix4x4 {
        return .{ .ptr = qtc.QSGRenderNode__RenderState_ProjectionMatrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scissorRect` instead
    ///
    pub const ScissorRect = scissorRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#scissorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    pub fn scissorRect(self: QSGRenderNode__RenderState) QRect {
        return .{ .ptr = qtc.QSGRenderNode__RenderState_ScissorRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scissorEnabled` instead
    ///
    pub const ScissorEnabled = scissorEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#scissorEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    pub fn scissorEnabled(self: QSGRenderNode__RenderState) bool {
        return qtc.QSGRenderNode__RenderState_ScissorEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stencilValue` instead
    ///
    pub const StencilValue = stencilValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#stencilValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    pub fn stencilValue(self: QSGRenderNode__RenderState) i32 {
        return qtc.QSGRenderNode__RenderState_StencilValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stencilEnabled` instead
    ///
    pub const StencilEnabled = stencilEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#stencilEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    pub fn stencilEnabled(self: QSGRenderNode__RenderState) bool {
        return qtc.QSGRenderNode__RenderState_StencilEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clipRegion` instead
    ///
    pub const ClipRegion = clipRegion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#clipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    pub fn clipRegion(self: QSGRenderNode__RenderState) QRegion {
        return .{ .ptr = qtc.QSGRenderNode__RenderState_ClipRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    /// ` state: [:0]const u8 `
    ///
    pub fn get(self: QSGRenderNode__RenderState, state: [:0]const u8) ?*anyopaque {
        const state_Cstring = state.ptr;
        return qtc.QSGRenderNode__RenderState_Get(@ptrCast(self.ptr), state_Cstring);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode-renderstate.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    /// ` param1: QSGRenderNode__RenderState `
    ///
    pub fn operatorAssign(self: QSGRenderNode__RenderState, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSGRenderNode__RenderState;
        qtc.QSGRenderNode__RenderState_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGRenderNode__RenderState `
    ///
    pub fn delete(self: QSGRenderNode__RenderState) void {
        qtc.QSGRenderNode__RenderState_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgrendernode.html#public-types)
pub const enums = struct {
    pub const StateFlag = enum {
        pub const DepthState: i32 = 1;
        pub const StencilState: i32 = 2;
        pub const ScissorState: i32 = 4;
        pub const ColorState: i32 = 8;
        pub const BlendState: i32 = 16;
        pub const CullState: i32 = 32;
        pub const ViewportState: i32 = 64;
        pub const RenderTargetState: i32 = 128;
    };

    pub const RenderingFlag = enum {
        pub const BoundedRectRendering: i32 = 1;
        pub const DepthAwareRendering: i32 = 2;
        pub const OpaqueRendering: i32 = 4;
        pub const NoExternalRendering: i32 = 8;
    };
};
