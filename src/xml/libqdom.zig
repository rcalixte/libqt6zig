const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QTextStream = @import("libqt6").QTextStream;
const QXmlStreamReader = @import("libqt6").QXmlStreamReader;
const qdom_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html)
pub const QDomImplementation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomImplementation,

    pub const _is_QDomImplementation = {};

    /// New constructs a new QDomImplementation object.
    ///
    pub fn New() QDomImplementation {
        return .{ .ptr = qtc.QDomImplementation_new() };
    }

    /// New2 constructs a new QDomImplementation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` implementation: QDomImplementation `
    ///
    pub fn New2(implementation: anytype) QDomImplementation {
        comptime _ = @TypeOf(implementation)._is_QDomImplementation;
        return .{ .ptr = qtc.QDomImplementation_new2(@ptrCast(implementation.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` other: QDomImplementation `
    ///
    pub fn OperatorAssign(self: QDomImplementation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomImplementation;
        qtc.QDomImplementation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` other: QDomImplementation `
    ///
    pub fn OperatorEqual(self: QDomImplementation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomImplementation;
        return qtc.QDomImplementation_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` other: QDomImplementation `
    ///
    pub fn OperatorNotEqual(self: QDomImplementation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomImplementation;
        return qtc.QDomImplementation_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn HasFeature(self: QDomImplementation, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomImplementation_HasFeature(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#createDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` publicId: []const u8 `
    ///
    /// ` systemId: []const u8 `
    ///
    pub fn CreateDocumentType(self: QDomImplementation, qName: []const u8, publicId: []const u8, systemId: []const u8) QDomDocumentType {
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        const publicId_str = qtc.libqt_string{
            .len = publicId.len,
            .data = publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = systemId.len,
            .data = systemId.ptr,
        };
        return .{ .ptr = qtc.QDomImplementation_CreateDocumentType(@ptrCast(self.ptr), qName_str, publicId_str, systemId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#createDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` doctype: QDomDocumentType `
    ///
    pub fn CreateDocument(self: QDomImplementation, nsURI: []const u8, qName: []const u8, doctype: anytype) QDomDocument {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        comptime _ = @TypeOf(doctype)._is_QDomDocumentType;
        return .{ .ptr = qtc.QDomImplementation_CreateDocument(@ptrCast(self.ptr), nsURI_str, qName_str, @ptrCast(doctype.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#invalidDataPolicy)
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.InvalidDataPolicy `
    ///
    pub fn InvalidDataPolicy() i32 {
        return qtc.QDomImplementation_InvalidDataPolicy();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#setInvalidDataPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` policy: qdom_enums.InvalidDataPolicy `
    ///
    pub fn SetInvalidDataPolicy(policy: i32) void {
        qtc.QDomImplementation_SetInvalidDataPolicy(@bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    pub fn IsNull(self: QDomImplementation) bool {
        return qtc.QDomImplementation_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#dtor.QDomImplementation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomImplementation `
    ///
    pub fn Delete(self: QDomImplementation) void {
        qtc.QDomImplementation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html)
pub const QDomNode = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomNode,

    pub const _is_QDomNode = {};

    /// New constructs a new QDomNode object.
    ///
    pub fn New() QDomNode {
        return .{ .ptr = qtc.QDomNode_new() };
    }

    /// New2 constructs a new QDomNode object.
    ///
    /// ## Parameter(s):
    ///
    /// ` node: QDomNode `
    ///
    pub fn New2(node: anytype) QDomNode {
        comptime _ = @TypeOf(node)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_new2(@ptrCast(node.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorAssign(self: QDomNode, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNode;
        qtc.QDomNode_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomNode, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomNode, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomNode, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomNode, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomNode, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomNode, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomNode, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn HasChildNodes(self: QDomNode) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn CloneNode(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn Normalize(self: QDomNode) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomNode, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomNode) i32 {
        return qtc.QDomNode_NodeType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ParentNode(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ChildNodes(self: QDomNode) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn FirstChild(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn LastChild(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn PreviousSibling(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn NextSibling(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn Attributes(self: QDomNode) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn OwnerDocument(self: QDomNode) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn HasAttributes(self: QDomNode) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomNode, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomNode, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsAttr(self: QDomNode) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsCDATASection(self: QDomNode) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsDocumentFragment(self: QDomNode) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsDocument(self: QDomNode) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsDocumentType(self: QDomNode) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsElement(self: QDomNode) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsEntityReference(self: QDomNode) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsText(self: QDomNode) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsEntity(self: QDomNode) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsNotation(self: QDomNode) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsProcessingInstruction(self: QDomNode) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsCharacterData(self: QDomNode) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsComment(self: QDomNode) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomNode, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn IsNull(self: QDomNode) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn Clear(self: QDomNode) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToAttr(self: QDomNode) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToCDATASection(self: QDomNode) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToDocumentFragment(self: QDomNode) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToDocument(self: QDomNode) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToDocumentType(self: QDomNode) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToEntityReference(self: QDomNode) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToText(self: QDomNode) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToEntity(self: QDomNode) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToNotation(self: QDomNode) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToProcessingInstruction(self: QDomNode) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToCharacterData(self: QDomNode) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ToComment(self: QDomNode) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomNode, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn FirstChildElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn LastChildElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn PreviousSiblingElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn NextSiblingElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn LineNumber(self: QDomNode) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ColumnNumber(self: QDomNode) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomNode, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomNode, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomNode, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomNode, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomNode, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomNode, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomNode, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomNode, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomNode, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomNode, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#dtor.QDomNode)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNode `
    ///
    pub fn Delete(self: QDomNode) void {
        qtc.QDomNode_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html)
pub const QDomNodeList = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomNodeList,

    pub const _is_QDomNodeList = {};

    /// New constructs a new QDomNodeList object.
    ///
    pub fn New() QDomNodeList {
        return .{ .ptr = qtc.QDomNodeList_new() };
    }

    /// New2 constructs a new QDomNodeList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` nodeList: QDomNodeList `
    ///
    pub fn New2(nodeList: anytype) QDomNodeList {
        comptime _ = @TypeOf(nodeList)._is_QDomNodeList;
        return .{ .ptr = qtc.QDomNodeList_new2(@ptrCast(nodeList.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` other: QDomNodeList `
    ///
    pub fn OperatorAssign(self: QDomNodeList, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNodeList;
        qtc.QDomNodeList_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` other: QDomNodeList `
    ///
    pub fn OperatorEqual(self: QDomNodeList, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNodeList;
        return qtc.QDomNodeList_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` other: QDomNodeList `
    ///
    pub fn OperatorNotEqual(self: QDomNodeList, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNodeList;
        return qtc.QDomNodeList_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` index: i32 `
    ///
    pub fn Item(self: QDomNodeList, index: i32) QDomNode {
        return .{ .ptr = qtc.QDomNodeList_Item(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: QDomNodeList, index: i32) QDomNode {
        return .{ .ptr = qtc.QDomNodeList_At(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn Length(self: QDomNodeList) i32 {
        return qtc.QDomNodeList_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn Count(self: QDomNodeList) i32 {
        return qtc.QDomNodeList_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn Size(self: QDomNodeList) i32 {
        return qtc.QDomNodeList_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn IsEmpty(self: QDomNodeList) bool {
        return qtc.QDomNodeList_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#dtor.QDomNodeList)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn Delete(self: QDomNodeList) void {
        qtc.QDomNodeList_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html)
pub const QDomDocumentType = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomDocumentType,

    pub const _is_QDomDocumentType = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomDocumentType object.
    ///
    pub fn New() QDomDocumentType {
        return .{ .ptr = qtc.QDomDocumentType_new() };
    }

    /// New2 constructs a new QDomDocumentType object.
    ///
    /// ## Parameter(s):
    ///
    /// ` documentType: QDomDocumentType `
    ///
    pub fn New2(documentType: anytype) QDomDocumentType {
        comptime _ = @TypeOf(documentType)._is_QDomDocumentType;
        return .{ .ptr = qtc.QDomDocumentType_new2(@ptrCast(documentType.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` other: QDomDocumentType `
    ///
    pub fn OperatorAssign(self: QDomDocumentType, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomDocumentType;
        qtc.QDomDocumentType_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#entities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn Entities(self: QDomDocumentType) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomDocumentType_Entities(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#notations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn Notations(self: QDomDocumentType) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomDocumentType_Notations(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PublicId(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemId(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#internalSubset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InternalSubset(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_InternalSubset(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.InternalSubset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomDocumentType) i32 {
        return qtc.QDomDocumentType_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomDocumentType, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomDocumentType, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomDocumentType, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomDocumentType, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomDocumentType, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomDocumentType, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomDocumentType, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn HasChildNodes(self: QDomDocumentType) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn CloneNode(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn Normalize(self: QDomDocumentType) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomDocumentType, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ParentNode(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ChildNodes(self: QDomDocumentType) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn FirstChild(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn LastChild(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn PreviousSibling(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn NextSibling(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn Attributes(self: QDomDocumentType) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn OwnerDocument(self: QDomDocumentType) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn HasAttributes(self: QDomDocumentType) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomDocumentType, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomDocumentType, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsAttr(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsCDATASection(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsDocumentFragment(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsDocument(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsDocumentType(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsElement(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsEntityReference(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsText(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsEntity(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsNotation(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsProcessingInstruction(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsCharacterData(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsComment(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomDocumentType, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn IsNull(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn Clear(self: QDomDocumentType) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToAttr(self: QDomDocumentType) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToCDATASection(self: QDomDocumentType) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToDocumentFragment(self: QDomDocumentType) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToDocument(self: QDomDocumentType) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToDocumentType(self: QDomDocumentType) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToEntityReference(self: QDomDocumentType) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToText(self: QDomDocumentType) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToEntity(self: QDomDocumentType) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToNotation(self: QDomDocumentType) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToProcessingInstruction(self: QDomDocumentType) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToCharacterData(self: QDomDocumentType) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ToComment(self: QDomDocumentType) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomDocumentType, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn FirstChildElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn LastChildElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn PreviousSiblingElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn NextSiblingElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn LineNumber(self: QDomDocumentType) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ColumnNumber(self: QDomDocumentType) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomDocumentType, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomDocumentType, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomDocumentType, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomDocumentType, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomDocumentType, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomDocumentType, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomDocumentType, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomDocumentType, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomDocumentType, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomDocumentType, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#dtor.QDomDocumentType)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn Delete(self: QDomDocumentType) void {
        qtc.QDomDocumentType_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html)
pub const QDomDocument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomDocument,

    pub const _is_QDomDocument = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomDocument object.
    ///
    pub fn New() QDomDocument {
        return .{ .ptr = qtc.QDomDocument_new() };
    }

    /// New2 constructs a new QDomDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New2(name: []const u8) QDomDocument {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_new2(name_str) };
    }

    /// New3 constructs a new QDomDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` doctype: QDomDocumentType `
    ///
    pub fn New3(doctype: anytype) QDomDocument {
        comptime _ = @TypeOf(doctype)._is_QDomDocumentType;
        return .{ .ptr = qtc.QDomDocument_new3(@ptrCast(doctype.ptr)) };
    }

    /// New4 constructs a new QDomDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QDomDocument `
    ///
    pub fn New4(document: anytype) QDomDocument {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        return .{ .ptr = qtc.QDomDocument_new4(@ptrCast(document.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` other: QDomDocument `
    ///
    pub fn OperatorAssign(self: QDomDocument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomDocument;
        qtc.QDomDocument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn CreateElement(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateElement(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn CreateDocumentFragment(self: QDomDocument) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomDocument_CreateDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createTextNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateTextNode(self: QDomDocument, data: []const u8) QDomText {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateTextNode(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateComment(self: QDomDocument, data: []const u8) QDomComment {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateComment(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateCDATASection(self: QDomDocument, data: []const u8) QDomCDATASection {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateCDATASection(@ptrCast(self.ptr), data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` target: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateProcessingInstruction(self: QDomDocument, target: []const u8, data: []const u8) QDomProcessingInstruction {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateProcessingInstruction(@ptrCast(self.ptr), target_str, data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateAttribute(self: QDomDocument, name: []const u8) QDomAttr {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateAttribute(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateEntityReference(self: QDomDocument, name: []const u8) QDomEntityReference {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateEntityReference(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagname: []const u8 `
    ///
    pub fn ElementsByTagName(self: QDomDocument, tagname: []const u8) QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_ElementsByTagName(@ptrCast(self.ptr), tagname_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#importNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` importedNode: QDomNode `
    ///
    /// ` deep: bool `
    ///
    pub fn ImportNode(self: QDomDocument, importedNode: anytype, deep: bool) QDomNode {
        comptime _ = @TypeOf(importedNode)._is_QDomNode;
        return .{ .ptr = qtc.QDomDocument_ImportNode(@ptrCast(self.ptr), @ptrCast(importedNode.ptr), deep) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createElementNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    pub fn CreateElementNS(self: QDomDocument, nsURI: []const u8, qName: []const u8) QDomElement {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateElementNS(@ptrCast(self.ptr), nsURI_str, qName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    pub fn CreateAttributeNS(self: QDomDocument, nsURI: []const u8, qName: []const u8) QDomAttr {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateAttributeNS(@ptrCast(self.ptr), nsURI_str, qName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagNameNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn ElementsByTagNameNS(self: QDomDocument, nsURI: []const u8, localName: []const u8) QDomNodeList {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_ElementsByTagNameNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn ElementById(self: QDomDocument, elementId: []const u8) QDomElement {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_ElementById(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#doctype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn Doctype(self: QDomDocument) QDomDocumentType {
        return .{ .ptr = qtc.QDomDocument_Doctype(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#implementation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn Implementation(self: QDomDocument) QDomImplementation {
        return .{ .ptr = qtc.QDomDocument_Implementation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#documentElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn DocumentElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomDocument_DocumentElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomDocument) i32 {
        return qtc.QDomDocument_NodeType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` text: []u8 `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent(self: QDomDocument, text: []u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent(@ptrCast(self.ptr), text_str, namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` text: []const u8 `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent2(self: QDomDocument, text: []const u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent2(@ptrCast(self.ptr), text_str, namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` dev: QIODevice `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent3(self: QDomDocument, dev: anytype, namespaceProcessing: bool) bool {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return qtc.QDomDocument_SetContent3(@ptrCast(self.ptr), @ptrCast(dev.ptr), namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent7(self: QDomDocument, reader: anytype, namespaceProcessing: bool) bool {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return qtc.QDomDocument_SetContent7(@ptrCast(self.ptr), @ptrCast(reader.ptr), namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetContent8(self: QDomDocument, data: []const u8) QDomDocument__ParseResult {
        return .{ .ptr = qtc.QDomDocument_SetContent8(@ptrCast(self.ptr), data.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetContent9(self: QDomDocument, device: anytype) QDomDocument__ParseResult {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QDomDocument_SetContent9(@ptrCast(self.ptr), @ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    pub fn SetContent10(self: QDomDocument, reader: anytype) QDomDocument__ParseResult {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return .{ .ptr = qtc.QDomDocument_SetContent10(@ptrCast(self.ptr), @ptrCast(reader.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocument_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: QDomDocument, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdomdocument.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    /// ` options: flag of qdom_enums.ParseOption `
    ///
    pub fn SetContent22(self: QDomDocument, data: []const u8, options: i32) QDomDocument__ParseResult {
        return .{ .ptr = qtc.QDomDocument_SetContent22(@ptrCast(self.ptr), data.ptr, @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` device: QIODevice `
    ///
    /// ` options: flag of qdom_enums.ParseOption `
    ///
    pub fn SetContent23(self: QDomDocument, device: anytype, options: i32) QDomDocument__ParseResult {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QDomDocument_SetContent23(@ptrCast(self.ptr), @ptrCast(device.ptr), @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    /// ` options: flag of qdom_enums.ParseOption `
    ///
    pub fn SetContent24(self: QDomDocument, reader: anytype, options: i32) QDomDocument__ParseResult {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return .{ .ptr = qtc.QDomDocument_SetContent24(@ptrCast(self.ptr), @ptrCast(reader.ptr), @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` indent: i32 `
    ///
    pub fn ToString1(self: QDomDocument, allocator: std.mem.Allocator, indent: i32) []const u8 {
        var _str = qtc.QDomDocument_ToString1(@ptrCast(self.ptr), @bitCast(indent));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` indent: i32 `
    ///
    pub fn ToByteArray1(self: QDomDocument, allocator: std.mem.Allocator, indent: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray1(@ptrCast(self.ptr), @bitCast(indent));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdomdocument.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomDocument, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomDocument, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomDocument, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomDocument, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomDocument, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomDocument, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomDocument, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn HasChildNodes(self: QDomDocument) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn CloneNode(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn Normalize(self: QDomDocument) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomDocument, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ParentNode(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ChildNodes(self: QDomDocument) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn FirstChild(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn LastChild(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn PreviousSibling(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn NextSibling(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn Attributes(self: QDomDocument) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn OwnerDocument(self: QDomDocument) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn HasAttributes(self: QDomDocument) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomDocument, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomDocument, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsAttr(self: QDomDocument) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsCDATASection(self: QDomDocument) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsDocumentFragment(self: QDomDocument) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsDocument(self: QDomDocument) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsDocumentType(self: QDomDocument) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsElement(self: QDomDocument) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsEntityReference(self: QDomDocument) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsText(self: QDomDocument) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsEntity(self: QDomDocument) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsNotation(self: QDomDocument) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsProcessingInstruction(self: QDomDocument) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsCharacterData(self: QDomDocument) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsComment(self: QDomDocument) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomDocument, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn IsNull(self: QDomDocument) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn Clear(self: QDomDocument) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToAttr(self: QDomDocument) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToCDATASection(self: QDomDocument) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToDocumentFragment(self: QDomDocument) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToDocument(self: QDomDocument) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToDocumentType(self: QDomDocument) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToEntityReference(self: QDomDocument) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToText(self: QDomDocument) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToEntity(self: QDomDocument) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToNotation(self: QDomDocument) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToProcessingInstruction(self: QDomDocument) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToCharacterData(self: QDomDocument) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ToComment(self: QDomDocument) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomDocument, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn FirstChildElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn LastChildElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn PreviousSiblingElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn NextSiblingElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn LineNumber(self: QDomDocument) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ColumnNumber(self: QDomDocument) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomDocument, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomDocument, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomDocument, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomDocument, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomDocument, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomDocument, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomDocument, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#dtor.QDomDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocument `
    ///
    pub fn Delete(self: QDomDocument) void {
        qtc.QDomDocument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html)
pub const QDomNamedNodeMap = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomNamedNodeMap,

    pub const _is_QDomNamedNodeMap = {};

    /// New constructs a new QDomNamedNodeMap object.
    ///
    pub fn New() QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNamedNodeMap_new() };
    }

    /// New2 constructs a new QDomNamedNodeMap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` namedNodeMap: QDomNamedNodeMap `
    ///
    pub fn New2(namedNodeMap: anytype) QDomNamedNodeMap {
        comptime _ = @TypeOf(namedNodeMap)._is_QDomNamedNodeMap;
        return .{ .ptr = qtc.QDomNamedNodeMap_new2(@ptrCast(namedNodeMap.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` other: QDomNamedNodeMap `
    ///
    pub fn OperatorAssign(self: QDomNamedNodeMap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNamedNodeMap;
        qtc.QDomNamedNodeMap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` other: QDomNamedNodeMap `
    ///
    pub fn OperatorEqual(self: QDomNamedNodeMap, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNamedNodeMap;
        return qtc.QDomNamedNodeMap_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` other: QDomNamedNodeMap `
    ///
    pub fn OperatorNotEqual(self: QDomNamedNodeMap, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNamedNodeMap;
        return qtc.QDomNamedNodeMap_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomNamedNodeMap, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` newNode: QDomNode `
    ///
    pub fn SetNamedItem(self: QDomNamedNodeMap, newNode: anytype) QDomNode {
        comptime _ = @TypeOf(newNode)._is_QDomNode;
        return .{ .ptr = qtc.QDomNamedNodeMap_SetNamedItem(@ptrCast(self.ptr), @ptrCast(newNode.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveNamedItem(self: QDomNamedNodeMap, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_RemoveNamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` index: i32 `
    ///
    pub fn Item(self: QDomNamedNodeMap, index: i32) QDomNode {
        return .{ .ptr = qtc.QDomNamedNodeMap_Item(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn NamedItemNS(self: QDomNamedNodeMap, nsURI: []const u8, localName: []const u8) QDomNode {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_NamedItemNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` newNode: QDomNode `
    ///
    pub fn SetNamedItemNS(self: QDomNamedNodeMap, newNode: anytype) QDomNode {
        comptime _ = @TypeOf(newNode)._is_QDomNode;
        return .{ .ptr = qtc.QDomNamedNodeMap_SetNamedItemNS(@ptrCast(self.ptr), @ptrCast(newNode.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn RemoveNamedItemNS(self: QDomNamedNodeMap, nsURI: []const u8, localName: []const u8) QDomNode {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_RemoveNamedItemNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn Length(self: QDomNamedNodeMap) i32 {
        return qtc.QDomNamedNodeMap_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn Count(self: QDomNamedNodeMap) i32 {
        return qtc.QDomNamedNodeMap_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn Size(self: QDomNamedNodeMap) i32 {
        return qtc.QDomNamedNodeMap_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn IsEmpty(self: QDomNamedNodeMap) bool {
        return qtc.QDomNamedNodeMap_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Contains(self: QDomNamedNodeMap, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNamedNodeMap_Contains(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#dtor.QDomNamedNodeMap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn Delete(self: QDomNamedNodeMap) void {
        qtc.QDomNamedNodeMap_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html)
pub const QDomDocumentFragment = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomDocumentFragment,

    pub const _is_QDomDocumentFragment = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomDocumentFragment object.
    ///
    pub fn New() QDomDocumentFragment {
        return .{ .ptr = qtc.QDomDocumentFragment_new() };
    }

    /// New2 constructs a new QDomDocumentFragment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` documentFragment: QDomDocumentFragment `
    ///
    pub fn New2(documentFragment: anytype) QDomDocumentFragment {
        comptime _ = @TypeOf(documentFragment)._is_QDomDocumentFragment;
        return .{ .ptr = qtc.QDomDocumentFragment_new2(@ptrCast(documentFragment.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` other: QDomDocumentFragment `
    ///
    pub fn OperatorAssign(self: QDomDocumentFragment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomDocumentFragment;
        qtc.QDomDocumentFragment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomDocumentFragment) i32 {
        return qtc.QDomDocumentFragment_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomDocumentFragment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomDocumentFragment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomDocumentFragment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomDocumentFragment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomDocumentFragment, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomDocumentFragment, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomDocumentFragment, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn HasChildNodes(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn CloneNode(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn Normalize(self: QDomDocumentFragment) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomDocumentFragment, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ParentNode(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ChildNodes(self: QDomDocumentFragment) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn FirstChild(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn LastChild(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn PreviousSibling(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn NextSibling(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn Attributes(self: QDomDocumentFragment) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn OwnerDocument(self: QDomDocumentFragment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn HasAttributes(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomDocumentFragment, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomDocumentFragment, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsAttr(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsCDATASection(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsDocumentFragment(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsDocument(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsDocumentType(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsElement(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsEntityReference(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsText(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsEntity(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsNotation(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsProcessingInstruction(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsCharacterData(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsComment(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomDocumentFragment, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn IsNull(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn Clear(self: QDomDocumentFragment) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToAttr(self: QDomDocumentFragment) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToCDATASection(self: QDomDocumentFragment) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToDocumentFragment(self: QDomDocumentFragment) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToDocument(self: QDomDocumentFragment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToDocumentType(self: QDomDocumentFragment) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToEntityReference(self: QDomDocumentFragment) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToText(self: QDomDocumentFragment) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToEntity(self: QDomDocumentFragment) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToNotation(self: QDomDocumentFragment) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToProcessingInstruction(self: QDomDocumentFragment) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToCharacterData(self: QDomDocumentFragment) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ToComment(self: QDomDocumentFragment) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomDocumentFragment, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn FirstChildElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn LastChildElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn PreviousSiblingElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn NextSiblingElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn LineNumber(self: QDomDocumentFragment) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ColumnNumber(self: QDomDocumentFragment) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomDocumentFragment, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomDocumentFragment, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomDocumentFragment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomDocumentFragment, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomDocumentFragment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomDocumentFragment, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomDocumentFragment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomDocumentFragment, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomDocumentFragment, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomDocumentFragment, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#dtor.QDomDocumentFragment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn Delete(self: QDomDocumentFragment) void {
        qtc.QDomDocumentFragment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html)
pub const QDomCharacterData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomCharacterData,

    pub const _is_QDomCharacterData = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomCharacterData object.
    ///
    pub fn New() QDomCharacterData {
        return .{ .ptr = qtc.QDomCharacterData_new() };
    }

    /// New2 constructs a new QDomCharacterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` characterData: QDomCharacterData `
    ///
    pub fn New2(characterData: anytype) QDomCharacterData {
        comptime _ = @TypeOf(characterData)._is_QDomCharacterData;
        return .{ .ptr = qtc.QDomCharacterData_new2(@ptrCast(characterData.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` other: QDomCharacterData `
    ///
    pub fn OperatorAssign(self: QDomCharacterData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomCharacterData;
        qtc.QDomCharacterData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn SubstringData(self: QDomCharacterData, allocator: std.mem.Allocator, offset: usize, count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: QDomCharacterData, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` offset: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: QDomCharacterData, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn DeleteData(self: QDomCharacterData, offset: usize, count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: QDomCharacterData, offset: usize, count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), arg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn Length(self: QDomCharacterData) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: QDomCharacterData, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomCharacterData) i32 {
        return qtc.QDomCharacterData_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomCharacterData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomCharacterData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomCharacterData, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomCharacterData, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomCharacterData, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomCharacterData, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomCharacterData, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn HasChildNodes(self: QDomCharacterData) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn CloneNode(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn Normalize(self: QDomCharacterData) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomCharacterData, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ParentNode(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ChildNodes(self: QDomCharacterData) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn FirstChild(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn LastChild(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn PreviousSibling(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn NextSibling(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn Attributes(self: QDomCharacterData) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn OwnerDocument(self: QDomCharacterData) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn HasAttributes(self: QDomCharacterData) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomCharacterData, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomCharacterData, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsAttr(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsCDATASection(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsDocumentFragment(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsDocument(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsDocumentType(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsElement(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsEntityReference(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsText(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsEntity(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsNotation(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsProcessingInstruction(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsCharacterData(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsComment(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomCharacterData, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn IsNull(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn Clear(self: QDomCharacterData) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToAttr(self: QDomCharacterData) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToCDATASection(self: QDomCharacterData) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToDocumentFragment(self: QDomCharacterData) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToDocument(self: QDomCharacterData) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToDocumentType(self: QDomCharacterData) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToEntityReference(self: QDomCharacterData) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToText(self: QDomCharacterData) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToEntity(self: QDomCharacterData) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToNotation(self: QDomCharacterData) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToProcessingInstruction(self: QDomCharacterData) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToCharacterData(self: QDomCharacterData) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ToComment(self: QDomCharacterData) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomCharacterData, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn FirstChildElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn LastChildElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn PreviousSiblingElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn NextSiblingElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn LineNumber(self: QDomCharacterData) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ColumnNumber(self: QDomCharacterData) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomCharacterData, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomCharacterData, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomCharacterData, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomCharacterData, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomCharacterData, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomCharacterData, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomCharacterData, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomCharacterData, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomCharacterData, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomCharacterData, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#dtor.QDomCharacterData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn Delete(self: QDomCharacterData) void {
        qtc.QDomCharacterData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html)
pub const QDomAttr = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomAttr,

    pub const _is_QDomAttr = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomAttr object.
    ///
    pub fn New() QDomAttr {
        return .{ .ptr = qtc.QDomAttr_new() };
    }

    /// New2 constructs a new QDomAttr object.
    ///
    /// ## Parameter(s):
    ///
    /// ` attr: QDomAttr `
    ///
    pub fn New2(attr: anytype) QDomAttr {
        comptime _ = @TypeOf(attr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomAttr_new2(@ptrCast(attr.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` other: QDomAttr `
    ///
    pub fn OperatorAssign(self: QDomAttr, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomAttr;
        qtc.QDomAttr_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomAttr_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#specified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn Specified(self: QDomAttr) bool {
        return qtc.QDomAttr_Specified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#ownerElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn OwnerElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomAttr_OwnerElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomAttr_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetValue(self: QDomAttr, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomAttr_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomAttr) i32 {
        return qtc.QDomAttr_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomAttr, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomAttr, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomAttr, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomAttr, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomAttr, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomAttr, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomAttr, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn HasChildNodes(self: QDomAttr) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn CloneNode(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn Normalize(self: QDomAttr) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomAttr, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ParentNode(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ChildNodes(self: QDomAttr) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn FirstChild(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn LastChild(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn PreviousSibling(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn NextSibling(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn Attributes(self: QDomAttr) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn OwnerDocument(self: QDomAttr) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn HasAttributes(self: QDomAttr) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomAttr, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomAttr, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsAttr(self: QDomAttr) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsCDATASection(self: QDomAttr) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsDocumentFragment(self: QDomAttr) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsDocument(self: QDomAttr) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsDocumentType(self: QDomAttr) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsElement(self: QDomAttr) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsEntityReference(self: QDomAttr) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsText(self: QDomAttr) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsEntity(self: QDomAttr) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsNotation(self: QDomAttr) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsProcessingInstruction(self: QDomAttr) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsCharacterData(self: QDomAttr) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsComment(self: QDomAttr) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomAttr, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn IsNull(self: QDomAttr) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn Clear(self: QDomAttr) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToAttr(self: QDomAttr) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToCDATASection(self: QDomAttr) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToDocumentFragment(self: QDomAttr) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToDocument(self: QDomAttr) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToDocumentType(self: QDomAttr) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToEntityReference(self: QDomAttr) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToText(self: QDomAttr) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToEntity(self: QDomAttr) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToNotation(self: QDomAttr) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToProcessingInstruction(self: QDomAttr) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToCharacterData(self: QDomAttr) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ToComment(self: QDomAttr) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomAttr, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn FirstChildElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn LastChildElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn PreviousSiblingElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn NextSiblingElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn LineNumber(self: QDomAttr) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ColumnNumber(self: QDomAttr) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomAttr, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomAttr, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomAttr, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomAttr, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomAttr, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomAttr, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomAttr, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomAttr, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomAttr, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomAttr, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#dtor.QDomAttr)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomAttr `
    ///
    pub fn Delete(self: QDomAttr) void {
        qtc.QDomAttr_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html)
pub const QDomElement = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomElement,

    pub const _is_QDomElement = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomElement object.
    ///
    pub fn New() QDomElement {
        return .{ .ptr = qtc.QDomElement_new() };
    }

    /// New2 constructs a new QDomElement object.
    ///
    /// ## Parameter(s):
    ///
    /// ` element: QDomElement `
    ///
    pub fn New2(element: anytype) QDomElement {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.QDomElement_new2(@ptrCast(element.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` other: QDomElement `
    ///
    pub fn OperatorAssign(self: QDomElement, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomElement;
        qtc.QDomElement_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Attribute(self: QDomElement, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QDomElement_Attribute(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAttribute(self: QDomElement, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomElement_SetAttribute(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: isize `
    ///
    pub fn SetAttribute2(self: QDomElement, name: []const u8, value: isize) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute2(@ptrCast(self.ptr), name_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: usize `
    ///
    pub fn SetAttribute3(self: QDomElement, name: []const u8, value: usize) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute3(@ptrCast(self.ptr), name_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: i32 `
    ///
    pub fn SetAttribute4(self: QDomElement, name: []const u8, value: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute4(@ptrCast(self.ptr), name_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn SetAttribute5(self: QDomElement, name: []const u8, value: u32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute5(@ptrCast(self.ptr), name_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: f32 `
    ///
    pub fn SetAttribute6(self: QDomElement, name: []const u8, value: f32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute6(@ptrCast(self.ptr), name_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttribute7(self: QDomElement, name: []const u8, value: f64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute7(@ptrCast(self.ptr), name_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveAttribute(self: QDomElement, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_RemoveAttribute(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AttributeNode(self: QDomElement, name: []const u8) QDomAttr {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomElement_AttributeNode(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newAttr: QDomAttr `
    ///
    pub fn SetAttributeNode(self: QDomElement, newAttr: anytype) QDomAttr {
        comptime _ = @TypeOf(newAttr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomElement_SetAttributeNode(@ptrCast(self.ptr), @ptrCast(newAttr.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` oldAttr: QDomAttr `
    ///
    pub fn RemoveAttributeNode(self: QDomElement, oldAttr: anytype) QDomAttr {
        comptime _ = @TypeOf(oldAttr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomElement_RemoveAttributeNode(@ptrCast(self.ptr), @ptrCast(oldAttr.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagname: []const u8 `
    ///
    pub fn ElementsByTagName(self: QDomElement, tagname: []const u8) QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return .{ .ptr = qtc.QDomElement_ElementsByTagName(@ptrCast(self.ptr), tagname_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasAttribute(self: QDomElement, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomElement_HasAttribute(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn AttributeNS(self: QDomElement, allocator: std.mem.Allocator, nsURI: []const u8, localName: []const u8) []const u8 {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        var _str = qtc.QDomElement_AttributeNS(@ptrCast(self.ptr), nsURI_str, localName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.AttributeNS: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAttributeNS(self: QDomElement, nsURI: []const u8, qName: []const u8, value: []const u8) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomElement_SetAttributeNS(@ptrCast(self.ptr), nsURI_str, qName_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: i32 `
    ///
    pub fn SetAttributeNS2(self: QDomElement, nsURI: []const u8, qName: []const u8, value: i32) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS2(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn SetAttributeNS3(self: QDomElement, nsURI: []const u8, qName: []const u8, value: u32) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS3(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: isize `
    ///
    pub fn SetAttributeNS4(self: QDomElement, nsURI: []const u8, qName: []const u8, value: isize) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS4(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: usize `
    ///
    pub fn SetAttributeNS5(self: QDomElement, nsURI: []const u8, qName: []const u8, value: usize) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS5(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttributeNS6(self: QDomElement, nsURI: []const u8, qName: []const u8, value: f64) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS6(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn RemoveAttributeNS(self: QDomElement, nsURI: []const u8, localName: []const u8) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        qtc.QDomElement_RemoveAttributeNS(@ptrCast(self.ptr), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNodeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn AttributeNodeNS(self: QDomElement, nsURI: []const u8, localName: []const u8) QDomAttr {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return .{ .ptr = qtc.QDomElement_AttributeNodeNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNodeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newAttr: QDomAttr `
    ///
    pub fn SetAttributeNodeNS(self: QDomElement, newAttr: anytype) QDomAttr {
        comptime _ = @TypeOf(newAttr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomElement_SetAttributeNodeNS(@ptrCast(self.ptr), @ptrCast(newAttr.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagNameNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn ElementsByTagNameNS(self: QDomElement, nsURI: []const u8, localName: []const u8) QDomNodeList {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return .{ .ptr = qtc.QDomElement_ElementsByTagNameNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn HasAttributeNS(self: QDomElement, nsURI: []const u8, localName: []const u8) bool {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return qtc.QDomElement_HasAttributeNS(@ptrCast(self.ptr), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#tagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TagName(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomElement_TagName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.TagName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetTagName(self: QDomElement, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetTagName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn Attributes(self: QDomElement) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomElement_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomElement) i32 {
        return qtc.QDomElement_NodeType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomElement_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` defValue: []const u8 `
    ///
    pub fn Attribute2(self: QDomElement, allocator: std.mem.Allocator, name: []const u8, defValue: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const defValue_str = qtc.libqt_string{
            .len = defValue.len,
            .data = defValue.ptr,
        };
        var _str = qtc.QDomElement_Attribute2(@ptrCast(self.ptr), name_str, defValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    /// ` defValue: []const u8 `
    ///
    pub fn AttributeNS3(self: QDomElement, allocator: std.mem.Allocator, nsURI: []const u8, localName: []const u8, defValue: []const u8) []const u8 {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        const defValue_str = qtc.libqt_string{
            .len = defValue.len,
            .data = defValue.ptr,
        };
        var _str = qtc.QDomElement_AttributeNS3(@ptrCast(self.ptr), nsURI_str, localName_str, defValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.AttributeNS3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomElement, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomElement, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomElement, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomElement, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomElement, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomElement, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomElement, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn HasChildNodes(self: QDomElement) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn CloneNode(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn Normalize(self: QDomElement) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomElement, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ParentNode(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ChildNodes(self: QDomElement) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn FirstChild(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn LastChild(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn PreviousSibling(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn NextSibling(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn OwnerDocument(self: QDomElement) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn HasAttributes(self: QDomElement) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomElement, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomElement, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsAttr(self: QDomElement) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsCDATASection(self: QDomElement) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsDocumentFragment(self: QDomElement) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsDocument(self: QDomElement) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsDocumentType(self: QDomElement) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsElement(self: QDomElement) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsEntityReference(self: QDomElement) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsText(self: QDomElement) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsEntity(self: QDomElement) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsNotation(self: QDomElement) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsProcessingInstruction(self: QDomElement) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsCharacterData(self: QDomElement) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsComment(self: QDomElement) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomElement, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn IsNull(self: QDomElement) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn Clear(self: QDomElement) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToAttr(self: QDomElement) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToCDATASection(self: QDomElement) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToDocumentFragment(self: QDomElement) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToDocument(self: QDomElement) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToDocumentType(self: QDomElement) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToEntityReference(self: QDomElement) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToText(self: QDomElement) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToEntity(self: QDomElement) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToNotation(self: QDomElement) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToProcessingInstruction(self: QDomElement) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToCharacterData(self: QDomElement) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ToComment(self: QDomElement) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomElement, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn FirstChildElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn LastChildElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn PreviousSiblingElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn NextSiblingElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn LineNumber(self: QDomElement) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ColumnNumber(self: QDomElement) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomElement, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomElement, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomElement, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomElement, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomElement, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomElement, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomElement, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomElement, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomElement, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomElement, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#dtor.QDomElement)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomElement `
    ///
    pub fn Delete(self: QDomElement) void {
        qtc.QDomElement_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html)
pub const QDomText = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomText,

    pub const _is_QDomText = {};
    pub const _is_QDomCharacterData = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomText object.
    ///
    pub fn New() QDomText {
        return .{ .ptr = qtc.QDomText_new() };
    }

    /// New2 constructs a new QDomText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: QDomText `
    ///
    pub fn New2(text: anytype) QDomText {
        comptime _ = @TypeOf(text)._is_QDomText;
        return .{ .ptr = qtc.QDomText_new2(@ptrCast(text.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` other: QDomText `
    ///
    pub fn OperatorAssign(self: QDomText, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomText;
        qtc.QDomText_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#splitText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` offset: i32 `
    ///
    pub fn SplitText(self: QDomText, offset: i32) QDomText {
        return .{ .ptr = qtc.QDomText_SplitText(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomText) i32 {
        return qtc.QDomText_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn SubstringData(self: QDomText, allocator: std.mem.Allocator, offset: usize, count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: QDomText, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` offset: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: QDomText, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn DeleteData(self: QDomText, offset: usize, count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: QDomText, offset: usize, count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn Length(self: QDomText) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: QDomText, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomText, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomText, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomText, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomText, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomText, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomText, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomText, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn HasChildNodes(self: QDomText) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn CloneNode(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn Normalize(self: QDomText) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomText, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ParentNode(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ChildNodes(self: QDomText) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn FirstChild(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn LastChild(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn PreviousSibling(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn NextSibling(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn Attributes(self: QDomText) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn OwnerDocument(self: QDomText) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn HasAttributes(self: QDomText) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomText, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomText, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsAttr(self: QDomText) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsCDATASection(self: QDomText) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsDocumentFragment(self: QDomText) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsDocument(self: QDomText) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsDocumentType(self: QDomText) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsElement(self: QDomText) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsEntityReference(self: QDomText) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsText(self: QDomText) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsEntity(self: QDomText) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsNotation(self: QDomText) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsProcessingInstruction(self: QDomText) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsCharacterData(self: QDomText) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsComment(self: QDomText) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomText, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn IsNull(self: QDomText) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn Clear(self: QDomText) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToAttr(self: QDomText) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToCDATASection(self: QDomText) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToDocumentFragment(self: QDomText) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToDocument(self: QDomText) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToDocumentType(self: QDomText) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToEntityReference(self: QDomText) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToText(self: QDomText) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToEntity(self: QDomText) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToNotation(self: QDomText) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToProcessingInstruction(self: QDomText) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToCharacterData(self: QDomText) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ToComment(self: QDomText) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomText, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn FirstChildElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn LastChildElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn PreviousSiblingElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn NextSiblingElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn LineNumber(self: QDomText) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ColumnNumber(self: QDomText) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomText, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomText, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomText, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomText, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomText, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomText, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomText, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomText, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomText, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomText, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#dtor.QDomText)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomText `
    ///
    pub fn Delete(self: QDomText) void {
        qtc.QDomText_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html)
pub const QDomComment = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomComment,

    pub const _is_QDomComment = {};
    pub const _is_QDomCharacterData = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomComment object.
    ///
    pub fn New() QDomComment {
        return .{ .ptr = qtc.QDomComment_new() };
    }

    /// New2 constructs a new QDomComment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` comment: QDomComment `
    ///
    pub fn New2(comment: anytype) QDomComment {
        comptime _ = @TypeOf(comment)._is_QDomComment;
        return .{ .ptr = qtc.QDomComment_new2(@ptrCast(comment.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` other: QDomComment `
    ///
    pub fn OperatorAssign(self: QDomComment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomComment;
        qtc.QDomComment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomComment) i32 {
        return qtc.QDomComment_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn SubstringData(self: QDomComment, allocator: std.mem.Allocator, offset: usize, count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: QDomComment, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` offset: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: QDomComment, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn DeleteData(self: QDomComment, offset: usize, count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: QDomComment, offset: usize, count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn Length(self: QDomComment) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: QDomComment, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomComment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomComment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomComment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomComment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomComment, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomComment, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomComment, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn HasChildNodes(self: QDomComment) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn CloneNode(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn Normalize(self: QDomComment) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomComment, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ParentNode(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ChildNodes(self: QDomComment) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn FirstChild(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn LastChild(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn PreviousSibling(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn NextSibling(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn Attributes(self: QDomComment) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn OwnerDocument(self: QDomComment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn HasAttributes(self: QDomComment) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomComment, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomComment, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsAttr(self: QDomComment) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsCDATASection(self: QDomComment) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsDocumentFragment(self: QDomComment) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsDocument(self: QDomComment) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsDocumentType(self: QDomComment) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsElement(self: QDomComment) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsEntityReference(self: QDomComment) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsText(self: QDomComment) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsEntity(self: QDomComment) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsNotation(self: QDomComment) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsProcessingInstruction(self: QDomComment) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsCharacterData(self: QDomComment) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsComment(self: QDomComment) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomComment, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn IsNull(self: QDomComment) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn Clear(self: QDomComment) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToAttr(self: QDomComment) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToCDATASection(self: QDomComment) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToDocumentFragment(self: QDomComment) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToDocument(self: QDomComment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToDocumentType(self: QDomComment) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToEntityReference(self: QDomComment) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToText(self: QDomComment) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToEntity(self: QDomComment) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToNotation(self: QDomComment) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToProcessingInstruction(self: QDomComment) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToCharacterData(self: QDomComment) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ToComment(self: QDomComment) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomComment, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn FirstChildElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn LastChildElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn PreviousSiblingElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn NextSiblingElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn LineNumber(self: QDomComment) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ColumnNumber(self: QDomComment) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomComment, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomComment, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomComment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomComment, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomComment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomComment, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomComment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomComment, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomComment, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomComment, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#dtor.QDomComment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomComment `
    ///
    pub fn Delete(self: QDomComment) void {
        qtc.QDomComment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html)
pub const QDomCDATASection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomCDATASection,

    pub const _is_QDomCDATASection = {};
    pub const _is_QDomText = {};
    pub const _is_QDomCharacterData = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomCDATASection object.
    ///
    pub fn New() QDomCDATASection {
        return .{ .ptr = qtc.QDomCDATASection_new() };
    }

    /// New2 constructs a new QDomCDATASection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cdataSection: QDomCDATASection `
    ///
    pub fn New2(cdataSection: anytype) QDomCDATASection {
        comptime _ = @TypeOf(cdataSection)._is_QDomCDATASection;
        return .{ .ptr = qtc.QDomCDATASection_new2(@ptrCast(cdataSection.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` other: QDomCDATASection `
    ///
    pub fn OperatorAssign(self: QDomCDATASection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomCDATASection;
        qtc.QDomCDATASection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomCDATASection) i32 {
        return qtc.QDomCDATASection_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomText
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#splitText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` offset: i32 `
    ///
    pub fn SplitText(self: QDomCDATASection, offset: i32) QDomText {
        return .{ .ptr = qtc.QDomText_SplitText(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn SubstringData(self: QDomCDATASection, allocator: std.mem.Allocator, offset: usize, count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: QDomCDATASection, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` offset: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: QDomCDATASection, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    pub fn DeleteData(self: QDomCDATASection, offset: usize, count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` offset: usize `
    ///
    /// ` count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: QDomCDATASection, offset: usize, count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn Length(self: QDomCDATASection) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: QDomCDATASection, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomCDATASection, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomCDATASection, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomCDATASection, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomCDATASection, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomCDATASection, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomCDATASection, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomCDATASection, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn HasChildNodes(self: QDomCDATASection) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn CloneNode(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn Normalize(self: QDomCDATASection) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomCDATASection, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ParentNode(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ChildNodes(self: QDomCDATASection) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn FirstChild(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn LastChild(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn PreviousSibling(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn NextSibling(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn Attributes(self: QDomCDATASection) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn OwnerDocument(self: QDomCDATASection) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn HasAttributes(self: QDomCDATASection) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomCDATASection, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomCDATASection, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsAttr(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsCDATASection(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsDocumentFragment(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsDocument(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsDocumentType(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsElement(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsEntityReference(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsText(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsEntity(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsNotation(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsProcessingInstruction(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsCharacterData(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsComment(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomCDATASection, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn IsNull(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn Clear(self: QDomCDATASection) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToAttr(self: QDomCDATASection) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToCDATASection(self: QDomCDATASection) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToDocumentFragment(self: QDomCDATASection) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToDocument(self: QDomCDATASection) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToDocumentType(self: QDomCDATASection) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToEntityReference(self: QDomCDATASection) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToText(self: QDomCDATASection) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToEntity(self: QDomCDATASection) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToNotation(self: QDomCDATASection) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToProcessingInstruction(self: QDomCDATASection) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToCharacterData(self: QDomCDATASection) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ToComment(self: QDomCDATASection) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomCDATASection, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn FirstChildElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn LastChildElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn PreviousSiblingElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn NextSiblingElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn LineNumber(self: QDomCDATASection) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ColumnNumber(self: QDomCDATASection) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomCDATASection, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomCDATASection, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomCDATASection, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomCDATASection, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomCDATASection, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomCDATASection, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomCDATASection, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomCDATASection, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomCDATASection, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomCDATASection, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#dtor.QDomCDATASection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn Delete(self: QDomCDATASection) void {
        qtc.QDomCDATASection_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html)
pub const QDomNotation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomNotation,

    pub const _is_QDomNotation = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomNotation object.
    ///
    pub fn New() QDomNotation {
        return .{ .ptr = qtc.QDomNotation_new() };
    }

    /// New2 constructs a new QDomNotation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` notation: QDomNotation `
    ///
    pub fn New2(notation: anytype) QDomNotation {
        comptime _ = @TypeOf(notation)._is_QDomNotation;
        return .{ .ptr = qtc.QDomNotation_new2(@ptrCast(notation.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` other: QDomNotation `
    ///
    pub fn OperatorAssign(self: QDomNotation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNotation;
        qtc.QDomNotation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PublicId(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNotation_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemId(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNotation_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomNotation) i32 {
        return qtc.QDomNotation_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomNotation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomNotation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomNotation, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomNotation, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomNotation, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomNotation, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomNotation, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn HasChildNodes(self: QDomNotation) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn CloneNode(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn Normalize(self: QDomNotation) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomNotation, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ParentNode(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ChildNodes(self: QDomNotation) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn FirstChild(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn LastChild(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn PreviousSibling(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn NextSibling(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn Attributes(self: QDomNotation) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn OwnerDocument(self: QDomNotation) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn HasAttributes(self: QDomNotation) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomNotation, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomNotation, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsAttr(self: QDomNotation) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsCDATASection(self: QDomNotation) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsDocumentFragment(self: QDomNotation) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsDocument(self: QDomNotation) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsDocumentType(self: QDomNotation) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsElement(self: QDomNotation) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsEntityReference(self: QDomNotation) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsText(self: QDomNotation) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsEntity(self: QDomNotation) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsNotation(self: QDomNotation) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsProcessingInstruction(self: QDomNotation) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsCharacterData(self: QDomNotation) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsComment(self: QDomNotation) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomNotation, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn IsNull(self: QDomNotation) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn Clear(self: QDomNotation) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToAttr(self: QDomNotation) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToCDATASection(self: QDomNotation) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToDocumentFragment(self: QDomNotation) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToDocument(self: QDomNotation) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToDocumentType(self: QDomNotation) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToEntityReference(self: QDomNotation) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToText(self: QDomNotation) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToEntity(self: QDomNotation) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToNotation(self: QDomNotation) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToProcessingInstruction(self: QDomNotation) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToCharacterData(self: QDomNotation) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ToComment(self: QDomNotation) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomNotation, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn FirstChildElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn LastChildElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn PreviousSiblingElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn NextSiblingElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn LineNumber(self: QDomNotation) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ColumnNumber(self: QDomNotation) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomNotation, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomNotation, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomNotation, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomNotation, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomNotation, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomNotation, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomNotation, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomNotation, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomNotation, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomNotation, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#dtor.QDomNotation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNotation `
    ///
    pub fn Delete(self: QDomNotation) void {
        qtc.QDomNotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html)
pub const QDomEntity = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomEntity,

    pub const _is_QDomEntity = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomEntity object.
    ///
    pub fn New() QDomEntity {
        return .{ .ptr = qtc.QDomEntity_new() };
    }

    /// New2 constructs a new QDomEntity object.
    ///
    /// ## Parameter(s):
    ///
    /// ` entity: QDomEntity `
    ///
    pub fn New2(entity: anytype) QDomEntity {
        comptime _ = @TypeOf(entity)._is_QDomEntity;
        return .{ .ptr = qtc.QDomEntity_new2(@ptrCast(entity.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` other: QDomEntity `
    ///
    pub fn OperatorAssign(self: QDomEntity, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomEntity;
        qtc.QDomEntity_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PublicId(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemId(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#notationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NotationName(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_NotationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NotationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomEntity) i32 {
        return qtc.QDomEntity_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomEntity, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomEntity, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomEntity, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomEntity, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomEntity, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomEntity, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomEntity, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn HasChildNodes(self: QDomEntity) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn CloneNode(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn Normalize(self: QDomEntity) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomEntity, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ParentNode(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ChildNodes(self: QDomEntity) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn FirstChild(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn LastChild(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn PreviousSibling(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn NextSibling(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn Attributes(self: QDomEntity) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn OwnerDocument(self: QDomEntity) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn HasAttributes(self: QDomEntity) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomEntity, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomEntity, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsAttr(self: QDomEntity) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsCDATASection(self: QDomEntity) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsDocumentFragment(self: QDomEntity) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsDocument(self: QDomEntity) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsDocumentType(self: QDomEntity) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsElement(self: QDomEntity) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsEntityReference(self: QDomEntity) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsText(self: QDomEntity) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsEntity(self: QDomEntity) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsNotation(self: QDomEntity) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsProcessingInstruction(self: QDomEntity) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsCharacterData(self: QDomEntity) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsComment(self: QDomEntity) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomEntity, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn IsNull(self: QDomEntity) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn Clear(self: QDomEntity) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToAttr(self: QDomEntity) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToCDATASection(self: QDomEntity) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToDocumentFragment(self: QDomEntity) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToDocument(self: QDomEntity) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToDocumentType(self: QDomEntity) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToEntityReference(self: QDomEntity) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToText(self: QDomEntity) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToEntity(self: QDomEntity) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToNotation(self: QDomEntity) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToProcessingInstruction(self: QDomEntity) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToCharacterData(self: QDomEntity) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ToComment(self: QDomEntity) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomEntity, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn FirstChildElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn LastChildElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn PreviousSiblingElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn NextSiblingElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn LineNumber(self: QDomEntity) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ColumnNumber(self: QDomEntity) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomEntity, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomEntity, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomEntity, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomEntity, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomEntity, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomEntity, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomEntity, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomEntity, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomEntity, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomEntity, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#dtor.QDomEntity)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomEntity `
    ///
    pub fn Delete(self: QDomEntity) void {
        qtc.QDomEntity_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html)
pub const QDomEntityReference = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomEntityReference,

    pub const _is_QDomEntityReference = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomEntityReference object.
    ///
    pub fn New() QDomEntityReference {
        return .{ .ptr = qtc.QDomEntityReference_new() };
    }

    /// New2 constructs a new QDomEntityReference object.
    ///
    /// ## Parameter(s):
    ///
    /// ` entityReference: QDomEntityReference `
    ///
    pub fn New2(entityReference: anytype) QDomEntityReference {
        comptime _ = @TypeOf(entityReference)._is_QDomEntityReference;
        return .{ .ptr = qtc.QDomEntityReference_new2(@ptrCast(entityReference.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` other: QDomEntityReference `
    ///
    pub fn OperatorAssign(self: QDomEntityReference, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomEntityReference;
        qtc.QDomEntityReference_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomEntityReference) i32 {
        return qtc.QDomEntityReference_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomEntityReference, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomEntityReference, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomEntityReference, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomEntityReference, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomEntityReference, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomEntityReference, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomEntityReference, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn HasChildNodes(self: QDomEntityReference) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn CloneNode(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn Normalize(self: QDomEntityReference) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomEntityReference, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ParentNode(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ChildNodes(self: QDomEntityReference) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn FirstChild(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn LastChild(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn PreviousSibling(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn NextSibling(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn Attributes(self: QDomEntityReference) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn OwnerDocument(self: QDomEntityReference) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn HasAttributes(self: QDomEntityReference) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomEntityReference, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomEntityReference, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsAttr(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsCDATASection(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsDocumentFragment(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsDocument(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsDocumentType(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsElement(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsEntityReference(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsText(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsEntity(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsNotation(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsProcessingInstruction(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsCharacterData(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsComment(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomEntityReference, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn IsNull(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn Clear(self: QDomEntityReference) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToAttr(self: QDomEntityReference) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToCDATASection(self: QDomEntityReference) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToDocumentFragment(self: QDomEntityReference) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToDocument(self: QDomEntityReference) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToDocumentType(self: QDomEntityReference) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToEntityReference(self: QDomEntityReference) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToText(self: QDomEntityReference) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToEntity(self: QDomEntityReference) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToNotation(self: QDomEntityReference) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToProcessingInstruction(self: QDomEntityReference) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToCharacterData(self: QDomEntityReference) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ToComment(self: QDomEntityReference) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomEntityReference, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn FirstChildElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn LastChildElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn PreviousSiblingElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn NextSiblingElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn LineNumber(self: QDomEntityReference) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ColumnNumber(self: QDomEntityReference) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomEntityReference, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomEntityReference, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomEntityReference, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomEntityReference, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomEntityReference, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomEntityReference, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomEntityReference, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomEntityReference, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomEntityReference, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomEntityReference, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#dtor.QDomEntityReference)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn Delete(self: QDomEntityReference) void {
        qtc.QDomEntityReference_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html)
pub const QDomProcessingInstruction = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomProcessingInstruction,

    pub const _is_QDomProcessingInstruction = {};
    pub const _is_QDomNode = {};

    /// New constructs a new QDomProcessingInstruction object.
    ///
    pub fn New() QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomProcessingInstruction_new() };
    }

    /// New2 constructs a new QDomProcessingInstruction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` processingInstruction: QDomProcessingInstruction `
    ///
    pub fn New2(processingInstruction: anytype) QDomProcessingInstruction {
        comptime _ = @TypeOf(processingInstruction)._is_QDomProcessingInstruction;
        return .{ .ptr = qtc.QDomProcessingInstruction_new2(@ptrCast(processingInstruction.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` other: QDomProcessingInstruction `
    ///
    pub fn OperatorAssign(self: QDomProcessingInstruction, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomProcessingInstruction;
        qtc.QDomProcessingInstruction_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Target(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomProcessingInstruction_Target(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomProcessingInstruction_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: QDomProcessingInstruction, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomProcessingInstruction_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: QDomProcessingInstruction) i32 {
        return qtc.QDomProcessingInstruction_NodeType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorEqual(self: QDomProcessingInstruction, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` other: QDomNode `
    ///
    pub fn OperatorNotEqual(self: QDomProcessingInstruction, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertBefore(self: QDomProcessingInstruction, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` refChild: QDomNode `
    ///
    pub fn InsertAfter(self: QDomProcessingInstruction, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` newChild: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn ReplaceChild(self: QDomProcessingInstruction, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn RemoveChild(self: QDomProcessingInstruction, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn AppendChild(self: QDomProcessingInstruction, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn HasChildNodes(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn CloneNode(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn Normalize(self: QDomProcessingInstruction) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: QDomProcessingInstruction, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self.ptr), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ParentNode(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ChildNodes(self: QDomProcessingInstruction) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn FirstChild(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn LastChild(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn PreviousSibling(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn NextSibling(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn Attributes(self: QDomProcessingInstruction) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn OwnerDocument(self: QDomProcessingInstruction) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn HasAttributes(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: QDomProcessingInstruction, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: QDomProcessingInstruction, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsAttr(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsCDATASection(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsDocumentFragment(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsDocument(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsDocumentType(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsElement(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsEntityReference(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsText(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsEntity(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsNotation(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsProcessingInstruction(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsCharacterData(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsComment(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: QDomProcessingInstruction, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn IsNull(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn Clear(self: QDomProcessingInstruction) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToAttr(self: QDomProcessingInstruction) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToCDATASection(self: QDomProcessingInstruction) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToDocumentFragment(self: QDomProcessingInstruction) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToDocument(self: QDomProcessingInstruction) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToDocumentType(self: QDomProcessingInstruction) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToEntityReference(self: QDomProcessingInstruction) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToText(self: QDomProcessingInstruction) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToEntity(self: QDomProcessingInstruction) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToNotation(self: QDomProcessingInstruction) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToProcessingInstruction(self: QDomProcessingInstruction) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToCharacterData(self: QDomProcessingInstruction) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ToComment(self: QDomProcessingInstruction) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: QDomProcessingInstruction, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn FirstChildElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn LastChildElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn PreviousSiblingElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn NextSiblingElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn LineNumber(self: QDomProcessingInstruction) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ColumnNumber(self: QDomProcessingInstruction) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: QDomProcessingInstruction, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` param1: QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: QDomProcessingInstruction, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: QDomProcessingInstruction, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: QDomProcessingInstruction, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: QDomProcessingInstruction, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: QDomProcessingInstruction, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: QDomProcessingInstruction, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: QDomProcessingInstruction, tagName: []const u8, namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: QDomProcessingInstruction, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: QDomProcessingInstruction, taName: []const u8, namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#dtor.QDomProcessingInstruction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn Delete(self: QDomProcessingInstruction) void {
        qtc.QDomProcessingInstruction_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html)
pub const QDomDocument__ParseResult = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDomDocument__ParseResult,

    pub const _is_QDomDocument__ParseResult = {};

    /// New constructs a new QDomDocument::ParseResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDomDocument__ParseResult `
    ///
    pub fn New(param1: anytype) QDomDocument__ParseResult {
        comptime _ = @TypeOf(param1)._is_QDomDocument__ParseResult;
        return .{ .ptr = qtc.QDomDocument__ParseResult_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorMessage(self: QDomDocument__ParseResult, allocator: std.mem.Allocator) []const u8 {
        var errorMessage_str = qtc.QDomDocument__ParseResult_ErrorMessage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&errorMessage_str);
        const errorMessage_ret = allocator.alloc(u8, errorMessage_str.len) catch @panic("qdomdocument__parseresult.ErrorMessage: Memory allocation failed");
        @memcpy(errorMessage_ret, errorMessage_str.data[0..errorMessage_str.len]);
        return errorMessage_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` errorMessage: []const u8 `
    ///
    pub fn SetErrorMessage(self: QDomDocument__ParseResult, errorMessage: []const u8) void {
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        qtc.QDomDocument__ParseResult_SetErrorMessage(@ptrCast(self.ptr), errorMessage_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn ErrorLine(self: QDomDocument__ParseResult) isize {
        return qtc.QDomDocument__ParseResult_ErrorLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` errorLine: isize `
    ///
    pub fn SetErrorLine(self: QDomDocument__ParseResult, errorLine: isize) void {
        qtc.QDomDocument__ParseResult_SetErrorLine(@ptrCast(self.ptr), @bitCast(errorLine));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn ErrorColumn(self: QDomDocument__ParseResult) isize {
        return qtc.QDomDocument__ParseResult_ErrorColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` errorColumn: isize `
    ///
    pub fn SetErrorColumn(self: QDomDocument__ParseResult, errorColumn: isize) void {
        qtc.QDomDocument__ParseResult_SetErrorColumn(@ptrCast(self.ptr), @bitCast(errorColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn ToBool(self: QDomDocument__ParseResult) bool {
        return qtc.QDomDocument__ParseResult_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` param1: QDomDocument__ParseResult `
    ///
    pub fn OperatorAssign(self: QDomDocument__ParseResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDomDocument__ParseResult;
        qtc.QDomDocument__ParseResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn Delete(self: QDomDocument__ParseResult) void {
        qtc.QDomDocument__ParseResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdom.html#public-types)
pub const enums = struct {
    pub const InvalidDataPolicy = enum(i32) {
        pub const AcceptInvalidChars: i32 = 0;
        pub const DropInvalidChars: i32 = 1;
        pub const ReturnNullNode: i32 = 2;
    };

    pub const NodeType = enum(i32) {
        pub const ElementNode: i32 = 1;
        pub const AttributeNode: i32 = 2;
        pub const TextNode: i32 = 3;
        pub const CDATASectionNode: i32 = 4;
        pub const EntityReferenceNode: i32 = 5;
        pub const EntityNode: i32 = 6;
        pub const ProcessingInstructionNode: i32 = 7;
        pub const CommentNode: i32 = 8;
        pub const DocumentNode: i32 = 9;
        pub const DocumentTypeNode: i32 = 10;
        pub const DocumentFragmentNode: i32 = 11;
        pub const NotationNode: i32 = 12;
        pub const BaseNode: i32 = 21;
        pub const CharacterDataNode: i32 = 22;
    };

    pub const EncodingPolicy = enum(i32) {
        pub const EncodingFromDocument: i32 = 1;
        pub const EncodingFromTextStream: i32 = 2;
    };

    pub const ParseOption = enum(i32) {
        pub const Default: i32 = 0;
        pub const UseNamespaceProcessing: i32 = 1;
        pub const PreserveSpacingOnlyNodes: i32 = 2;
    };
};
