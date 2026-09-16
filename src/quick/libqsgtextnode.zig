const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QMatrix4x4 = @import("libqt6").QMatrix4x4;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QSGNode = @import("libqt6").QSGNode;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextLayout = @import("libqt6").QTextLayout;
const qsgnode_enums = @import("libqsgnode.zig").enums;
const qsgtextnode_enums = enums;
const qsgtexture_enums = @import("libqsgtexture.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html)
pub const QSGTextNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGTextNode,

    pub const _is_QSGTextNode = {};
    pub const _is_QSGTransformNode = {};
    pub const _is_QSGNode = {};

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QSGTextNode, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QSGTextNode_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn color(self: QSGTextNode) QColor {
        return .{ .ptr = qtc.QSGTextNode_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextStyle` instead
    ///
    pub const SetTextStyle = setTextStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setTextStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _textStyle: qsgtextnode_enums.TextStyle `
    ///
    pub fn setTextStyle(self: QSGTextNode, _textStyle: u8) void {
        qtc.QSGTextNode_SetTextStyle(@ptrCast(self.ptr), @bitCast(_textStyle));
    }

    /// ### DEPRECATED: Use `textStyle` instead
    ///
    pub const TextStyle = textStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#textStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgtextnode_enums.TextStyle `
    ///
    pub fn textStyle(self: QSGTextNode) u8 {
        return qtc.QSGTextNode_TextStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStyleColor` instead
    ///
    pub const SetStyleColor = setStyleColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setStyleColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _styleColor: QColor `
    ///
    pub fn setStyleColor(self: QSGTextNode, _styleColor: anytype) void {
        comptime _ = @TypeOf(_styleColor)._is_QColor;
        qtc.QSGTextNode_SetStyleColor(@ptrCast(self.ptr), @ptrCast(_styleColor.ptr));
    }

    /// ### DEPRECATED: Use `styleColor` instead
    ///
    pub const StyleColor = styleColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#styleColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn styleColor(self: QSGTextNode) QColor {
        return .{ .ptr = qtc.QSGTextNode_StyleColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLinkColor` instead
    ///
    pub const SetLinkColor = setLinkColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setLinkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _linkColor: QColor `
    ///
    pub fn setLinkColor(self: QSGTextNode, _linkColor: anytype) void {
        comptime _ = @TypeOf(_linkColor)._is_QColor;
        qtc.QSGTextNode_SetLinkColor(@ptrCast(self.ptr), @ptrCast(_linkColor.ptr));
    }

    /// ### DEPRECATED: Use `linkColor` instead
    ///
    pub const LinkColor = linkColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#linkColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn linkColor(self: QSGTextNode) QColor {
        return .{ .ptr = qtc.QSGTextNode_LinkColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectionColor` instead
    ///
    pub const SetSelectionColor = setSelectionColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setSelectionColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _selectionColor: QColor `
    ///
    pub fn setSelectionColor(self: QSGTextNode, _selectionColor: anytype) void {
        comptime _ = @TypeOf(_selectionColor)._is_QColor;
        qtc.QSGTextNode_SetSelectionColor(@ptrCast(self.ptr), @ptrCast(_selectionColor.ptr));
    }

    /// ### DEPRECATED: Use `selectionColor` instead
    ///
    pub const SelectionColor = selectionColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#selectionColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn selectionColor(self: QSGTextNode) QColor {
        return .{ .ptr = qtc.QSGTextNode_SelectionColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectionTextColor` instead
    ///
    pub const SetSelectionTextColor = setSelectionTextColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setSelectionTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _selectionTextColor: QColor `
    ///
    pub fn setSelectionTextColor(self: QSGTextNode, _selectionTextColor: anytype) void {
        comptime _ = @TypeOf(_selectionTextColor)._is_QColor;
        qtc.QSGTextNode_SetSelectionTextColor(@ptrCast(self.ptr), @ptrCast(_selectionTextColor.ptr));
    }

    /// ### DEPRECATED: Use `selectionTextColor` instead
    ///
    pub const SelectionTextColor = selectionTextColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#selectionTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn selectionTextColor(self: QSGTextNode) QColor {
        return .{ .ptr = qtc.QSGTextNode_SelectionTextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRenderType` instead
    ///
    pub const SetRenderType = setRenderType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setRenderType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _renderType: qsgtextnode_enums.RenderType `
    ///
    pub fn setRenderType(self: QSGTextNode, _renderType: u8) void {
        qtc.QSGTextNode_SetRenderType(@ptrCast(self.ptr), @bitCast(_renderType));
    }

    /// ### DEPRECATED: Use `renderType` instead
    ///
    pub const RenderType = renderType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#renderType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgtextnode_enums.RenderType `
    ///
    pub fn renderType(self: QSGTextNode) u8 {
        return qtc.QSGTextNode_RenderType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRenderTypeQuality` instead
    ///
    pub const SetRenderTypeQuality = setRenderTypeQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setRenderTypeQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _renderTypeQuality: i32 `
    ///
    pub fn setRenderTypeQuality(self: QSGTextNode, _renderTypeQuality: i32) void {
        qtc.QSGTextNode_SetRenderTypeQuality(@ptrCast(self.ptr), @bitCast(_renderTypeQuality));
    }

    /// ### DEPRECATED: Use `renderTypeQuality` instead
    ///
    pub const RenderTypeQuality = renderTypeQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#renderTypeQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn renderTypeQuality(self: QSGTextNode) i32 {
        return qtc.QSGTextNode_RenderTypeQuality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltering` instead
    ///
    pub const SetFiltering = setFiltering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setFiltering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _filtering: qsgtexture_enums.Filtering `
    ///
    pub fn setFiltering(self: QSGTextNode, _filtering: i32) void {
        qtc.QSGTextNode_SetFiltering(@ptrCast(self.ptr), @bitCast(_filtering));
    }

    /// ### DEPRECATED: Use `filtering` instead
    ///
    pub const Filtering = filtering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#filtering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgtexture_enums.Filtering `
    ///
    pub fn filtering(self: QSGTextNode) i32 {
        return qtc.QSGTextNode_Filtering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn clear(self: QSGTextNode) void {
        qtc.QSGTextNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setViewport` instead
    ///
    pub const SetViewport = setViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _viewport: QRectF `
    ///
    pub fn setViewport(self: QSGTextNode, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QRectF;
        qtc.QSGTextNode_SetViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn viewport(self: QSGTextNode) QRectF {
        return .{ .ptr = qtc.QSGTextNode_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addTextLayout` instead
    ///
    pub const AddTextLayout = addTextLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` layout: QTextLayout `
    ///
    pub fn addTextLayout(self: QSGTextNode, position: anytype, layout: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(layout)._is_QTextLayout;
        qtc.QSGTextNode_AddTextLayout(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `addTextDocument` instead
    ///
    pub const AddTextDocument = addTextDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn addTextDocument(self: QSGTextNode, position: anytype, document: anytype) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.QSGTextNode_AddTextDocument(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `addTextLayout3` instead
    ///
    pub const AddTextLayout3 = addTextLayout3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` layout: QTextLayout `
    ///
    /// ` selectionStart: i32 `
    ///
    pub fn addTextLayout3(self: QSGTextNode, position: anytype, layout: anytype, selectionStart: i32) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(layout)._is_QTextLayout;
        qtc.QSGTextNode_AddTextLayout3(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(layout.ptr), @bitCast(selectionStart));
    }

    /// ### DEPRECATED: Use `addTextLayout4` instead
    ///
    pub const AddTextLayout4 = addTextLayout4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` layout: QTextLayout `
    ///
    /// ` selectionStart: i32 `
    ///
    /// ` selectionCount: i32 `
    ///
    pub fn addTextLayout4(self: QSGTextNode, position: anytype, layout: anytype, selectionStart: i32, selectionCount: i32) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(layout)._is_QTextLayout;
        qtc.QSGTextNode_AddTextLayout4(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(layout.ptr), @bitCast(selectionStart), @bitCast(selectionCount));
    }

    /// ### DEPRECATED: Use `addTextLayout5` instead
    ///
    pub const AddTextLayout5 = addTextLayout5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` layout: QTextLayout `
    ///
    /// ` selectionStart: i32 `
    ///
    /// ` selectionCount: i32 `
    ///
    /// ` lineStart: i32 `
    ///
    pub fn addTextLayout5(self: QSGTextNode, position: anytype, layout: anytype, selectionStart: i32, selectionCount: i32, lineStart: i32) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(layout)._is_QTextLayout;
        qtc.QSGTextNode_AddTextLayout5(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(layout.ptr), @bitCast(selectionStart), @bitCast(selectionCount), @bitCast(lineStart));
    }

    /// ### DEPRECATED: Use `addTextLayout6` instead
    ///
    pub const AddTextLayout6 = addTextLayout6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` layout: QTextLayout `
    ///
    /// ` selectionStart: i32 `
    ///
    /// ` selectionCount: i32 `
    ///
    /// ` lineStart: i32 `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn addTextLayout6(self: QSGTextNode, position: anytype, layout: anytype, selectionStart: i32, selectionCount: i32, lineStart: i32, lineCount: i32) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(layout)._is_QTextLayout;
        qtc.QSGTextNode_AddTextLayout6(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(layout.ptr), @bitCast(selectionStart), @bitCast(selectionCount), @bitCast(lineStart), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `addTextDocument3` instead
    ///
    pub const AddTextDocument3 = addTextDocument3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` document: QTextDocument `
    ///
    /// ` selectionStart: i32 `
    ///
    pub fn addTextDocument3(self: QSGTextNode, position: anytype, document: anytype, selectionStart: i32) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.QSGTextNode_AddTextDocument3(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(document.ptr), @bitCast(selectionStart));
    }

    /// ### DEPRECATED: Use `addTextDocument4` instead
    ///
    pub const AddTextDocument4 = addTextDocument4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#addTextDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` position: QPointF `
    ///
    /// ` document: QTextDocument `
    ///
    /// ` selectionStart: i32 `
    ///
    /// ` selectionCount: i32 `
    ///
    pub fn addTextDocument4(self: QSGTextNode, position: anytype, document: anytype, selectionStart: i32, selectionCount: i32) void {
        comptime _ = @TypeOf(position)._is_QPointF;
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.QSGTextNode_AddTextDocument4(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(document.ptr), @bitCast(selectionStart), @bitCast(selectionCount));
    }

    /// ### DEPRECATED: Use `setMatrix` instead
    ///
    pub const SetMatrix = setMatrix;

    /// Inherited from QSGTransformNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _matrix: QMatrix4x4 `
    ///
    pub fn setMatrix(self: QSGTextNode, _matrix: anytype) void {
        comptime _ = @TypeOf(_matrix)._is_QMatrix4x4;
        qtc.QSGTransformNode_SetMatrix(@ptrCast(self.ptr), @ptrCast(_matrix.ptr));
    }

    /// ### DEPRECATED: Use `matrix` instead
    ///
    pub const Matrix = matrix;

    /// Inherited from QSGTransformNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#matrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn matrix(self: QSGTextNode) QMatrix4x4 {
        return .{ .ptr = qtc.QSGTransformNode_Matrix(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCombinedMatrix` instead
    ///
    pub const SetCombinedMatrix = setCombinedMatrix;

    /// Inherited from QSGTransformNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#setCombinedMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    /// ` _matrix: QMatrix4x4 `
    ///
    pub fn setCombinedMatrix(self: QSGTextNode, _matrix: anytype) void {
        comptime _ = @TypeOf(_matrix)._is_QMatrix4x4;
        qtc.QSGTransformNode_SetCombinedMatrix(@ptrCast(self.ptr), @ptrCast(_matrix.ptr));
    }

    /// ### DEPRECATED: Use `combinedMatrix` instead
    ///
    pub const CombinedMatrix = combinedMatrix;

    /// Inherited from QSGTransformNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtransformnode.html#combinedMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn combinedMatrix(self: QSGTextNode) QMatrix4x4 {
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
    /// ` self: QSGTextNode `
    ///
    pub fn parent(self: QSGTextNode) QSGNode {
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
    /// ` self: QSGTextNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn removeChildNode(self: QSGTextNode, node: anytype) void {
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
    /// ` self: QSGTextNode `
    ///
    pub fn removeAllChildNodes(self: QSGTextNode) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn prependChildNode(self: QSGTextNode, node: anytype) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` node: QSGNode `
    ///
    pub fn appendChildNode(self: QSGTextNode, node: anytype) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` before: QSGNode `
    ///
    pub fn insertChildNodeBefore(self: QSGTextNode, node: anytype, before: anytype) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` node: QSGNode `
    ///
    /// ` after: QSGNode `
    ///
    pub fn insertChildNodeAfter(self: QSGTextNode, node: anytype, after: anytype) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` newParent: QSGNode `
    ///
    pub fn reparentChildNodesTo(self: QSGTextNode, newParent: anytype) void {
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
    /// ` self: QSGTextNode `
    ///
    pub fn childCount(self: QSGTextNode) i32 {
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
    /// ` self: QSGTextNode `
    ///
    /// ` i: i32 `
    ///
    pub fn childAtIndex(self: QSGTextNode, i: i32) QSGNode {
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
    /// ` self: QSGTextNode `
    ///
    pub fn firstChild(self: QSGTextNode) QSGNode {
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
    /// ` self: QSGTextNode `
    ///
    pub fn lastChild(self: QSGTextNode) QSGNode {
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
    /// ` self: QSGTextNode `
    ///
    pub fn nextSibling(self: QSGTextNode) QSGNode {
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
    /// ` self: QSGTextNode `
    ///
    pub fn previousSibling(self: QSGTextNode) QSGNode {
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
    /// ` self: QSGTextNode `
    ///
    /// ## Returns:
    ///
    /// ` qsgnode_enums.NodeType `
    ///
    pub fn type0(self: QSGTextNode) i32 {
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
    /// ` self: QSGTextNode `
    ///
    pub fn clearDirty(self: QSGTextNode) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` bits: flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn markDirty(self: QSGTextNode, bits: i32) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.DirtyStateBit `
    ///
    pub fn dirtyState(self: QSGTextNode) i32 {
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
    /// ` self: QSGTextNode `
    ///
    pub fn isSubtreeBlocked(self: QSGTextNode) bool {
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
    /// ` self: QSGTextNode `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsgnode_enums.Flag `
    ///
    pub fn flags(self: QSGTextNode) i32 {
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
    /// ` self: QSGTextNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    pub fn setFlag(self: QSGTextNode, param1: i32) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    pub fn setFlags(self: QSGTextNode, param1: i32) void {
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
    /// ` self: QSGTextNode `
    ///
    pub fn preprocess(self: QSGTextNode) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` param1: qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlag2(self: QSGTextNode, param1: i32, param2: bool) void {
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
    /// ` self: QSGTextNode `
    ///
    /// ` param1: flag of qsgnode_enums.Flag `
    ///
    /// ` param2: bool `
    ///
    pub fn setFlags2(self: QSGTextNode, param1: i32, param2: bool) void {
        qtc.QSGNode_SetFlags2(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#dtor.QSGTextNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGTextNode `
    ///
    pub fn delete(self: QSGTextNode) void {
        qtc.QSGTextNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsgtextnode.html#public-types)
pub const enums = struct {
    pub const TextStyle = enum {
        pub const Normal: u8 = 0;
        pub const Outline: u8 = 1;
        pub const Raised: u8 = 2;
        pub const Sunken: u8 = 3;
    };

    pub const RenderType = enum {
        pub const QtRendering: u8 = 0;
        pub const NativeRendering: u8 = 1;
        pub const CurveRendering: u8 = 2;
    };
};
