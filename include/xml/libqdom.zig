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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomImplementation object in C++ memory
    ///
    pub fn new() QDomImplementation {
        return .{ .ptr = qtc.QDomImplementation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomImplementation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` implementation: QDomImplementation `
    ///
    pub fn new2(implementation: anytype) QDomImplementation {
        comptime _ = @TypeOf(implementation)._is_QDomImplementation;
        return .{ .ptr = qtc.QDomImplementation_new2(@ptrCast(implementation.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` other: QDomImplementation `
    ///
    pub fn operatorAssign(self: QDomImplementation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomImplementation;
        qtc.QDomImplementation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` other: QDomImplementation `
    ///
    pub fn operatorEqual(self: QDomImplementation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomImplementation;
        return qtc.QDomImplementation_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    /// ` other: QDomImplementation `
    ///
    pub fn operatorNotEqual(self: QDomImplementation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomImplementation;
        return qtc.QDomImplementation_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `hasFeature` instead
    ///
    pub const HasFeature = hasFeature;

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
    pub fn hasFeature(self: QDomImplementation, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `createDocumentType` instead
    ///
    pub const CreateDocumentType = createDocumentType;

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
    pub fn createDocumentType(self: QDomImplementation, qName: []const u8, publicId: []const u8, systemId: []const u8) QDomDocumentType {
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

    /// ### DEPRECATED: Use `createDocument` instead
    ///
    pub const CreateDocument = createDocument;

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
    pub fn createDocument(self: QDomImplementation, nsURI: []const u8, qName: []const u8, doctype: anytype) QDomDocument {
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

    /// ### DEPRECATED: Use `invalidDataPolicy` instead
    ///
    pub const InvalidDataPolicy = invalidDataPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#invalidDataPolicy)
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.InvalidDataPolicy `
    ///
    pub fn invalidDataPolicy() i32 {
        return qtc.QDomImplementation_InvalidDataPolicy();
    }

    /// ### DEPRECATED: Use `setInvalidDataPolicy` instead
    ///
    pub const SetInvalidDataPolicy = setInvalidDataPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#setInvalidDataPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` policy: qdom_enums.InvalidDataPolicy `
    ///
    pub fn setInvalidDataPolicy(policy: i32) void {
        qtc.QDomImplementation_SetInvalidDataPolicy(@bitCast(policy));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomImplementation `
    ///
    pub fn isNull(self: QDomImplementation) bool {
        return qtc.QDomImplementation_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#dtor.QDomImplementation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomImplementation `
    ///
    pub fn delete(self: QDomImplementation) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomNode object in C++ memory
    ///
    pub fn new() QDomNode {
        return .{ .ptr = qtc.QDomNode_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomNode object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` node: QDomNode `
    ///
    pub fn new2(node: anytype) QDomNode {
        comptime _ = @TypeOf(node)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_new2(@ptrCast(node.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` other: QDomNode `
    ///
    pub fn operatorAssign(self: QDomNode, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNode;
        qtc.QDomNode_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` other: QDomNode `
    ///
    pub fn operatorEqual(self: QDomNode, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` other: QDomNode `
    ///
    pub fn operatorNotEqual(self: QDomNode, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomNode, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomNode, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomNode, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` oldChild: QDomNode `
    ///
    pub fn removeChild(self: QDomNode, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` newChild: QDomNode `
    ///
    pub fn appendChild(self: QDomNode, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn hasChildNodes(self: QDomNode) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn cloneNode(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn normalize(self: QDomNode) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomNode, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nodeName(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNode.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomNode) i32 {
        return qtc.QDomNode_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn parentNode(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn childNodes(self: QDomNode) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn firstChild(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn lastChild(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn previousSibling(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn nextSibling(self: QDomNode) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn attributes(self: QDomNode) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn ownerDocument(self: QDomNode) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn namespaceURI(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNode.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localName(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNode.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn hasAttributes(self: QDomNode) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nodeValue(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNode.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomNode, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prefix(self: QDomNode, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNode.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn setPrefix(self: QDomNode, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isAttr(self: QDomNode) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isCDATASection(self: QDomNode) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isDocumentFragment(self: QDomNode) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isDocument(self: QDomNode) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isDocumentType(self: QDomNode) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isElement(self: QDomNode) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isEntityReference(self: QDomNode) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isText(self: QDomNode) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isEntity(self: QDomNode) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isNotation(self: QDomNode) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isProcessingInstruction(self: QDomNode) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isCharacterData(self: QDomNode) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isComment(self: QDomNode) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` name: []const u8 `
    ///
    pub fn namedItem(self: QDomNode, name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn isNull(self: QDomNode) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn clear(self: QDomNode) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toAttr(self: QDomNode) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toCDATASection(self: QDomNode) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toDocumentFragment(self: QDomNode) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toDocument(self: QDomNode) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toDocumentType(self: QDomNode) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toEntityReference(self: QDomNode) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toText(self: QDomNode) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toEntity(self: QDomNode) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toNotation(self: QDomNode) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toProcessingInstruction(self: QDomNode) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toCharacterData(self: QDomNode) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn toComment(self: QDomNode) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomNode, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn firstChildElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn lastChildElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn previousSiblingElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn nextSiblingElement(self: QDomNode) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn lineNumber(self: QDomNode) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    pub fn columnNumber(self: QDomNode) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` deep: bool `
    ///
    pub fn cloneNode1(self: QDomNode, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomNode, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomNode, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomNode, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomNode, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomNode, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomNode, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomNode, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn nextSiblingElement1(self: QDomNode, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNode `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomNode, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#dtor.QDomNode)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNode `
    ///
    pub fn delete(self: QDomNode) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomNodeList object in C++ memory
    ///
    pub fn new() QDomNodeList {
        return .{ .ptr = qtc.QDomNodeList_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomNodeList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` nodeList: QDomNodeList `
    ///
    pub fn new2(nodeList: anytype) QDomNodeList {
        comptime _ = @TypeOf(nodeList)._is_QDomNodeList;
        return .{ .ptr = qtc.QDomNodeList_new2(@ptrCast(nodeList.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` other: QDomNodeList `
    ///
    pub fn operatorAssign(self: QDomNodeList, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNodeList;
        qtc.QDomNodeList_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` other: QDomNodeList `
    ///
    pub fn operatorEqual(self: QDomNodeList, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNodeList;
        return qtc.QDomNodeList_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` other: QDomNodeList `
    ///
    pub fn operatorNotEqual(self: QDomNodeList, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNodeList;
        return qtc.QDomNodeList_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` index: i32 `
    ///
    pub fn item(self: QDomNodeList, index: i32) QDomNode {
        return .{ .ptr = qtc.QDomNodeList_Item(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    /// ` index: i32 `
    ///
    pub fn at(self: QDomNodeList, index: i32) QDomNode {
        return .{ .ptr = qtc.QDomNodeList_At(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn length(self: QDomNodeList) i32 {
        return qtc.QDomNodeList_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn count(self: QDomNodeList) i32 {
        return qtc.QDomNodeList_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn size(self: QDomNodeList) i32 {
        return qtc.QDomNodeList_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn isEmpty(self: QDomNodeList) bool {
        return qtc.QDomNodeList_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#dtor.QDomNodeList)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNodeList `
    ///
    pub fn delete(self: QDomNodeList) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomDocumentType object in C++ memory
    ///
    pub fn new() QDomDocumentType {
        return .{ .ptr = qtc.QDomDocumentType_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomDocumentType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` documentType: QDomDocumentType `
    ///
    pub fn new2(documentType: anytype) QDomDocumentType {
        comptime _ = @TypeOf(documentType)._is_QDomDocumentType;
        return .{ .ptr = qtc.QDomDocumentType_new2(@ptrCast(documentType.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` other: QDomDocumentType `
    ///
    pub fn operatorAssign(self: QDomDocumentType, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomDocumentType;
        qtc.QDomDocumentType_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `entities` instead
    ///
    pub const Entities = entities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#entities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn entities(self: QDomDocumentType) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomDocumentType_Entities(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `notations` instead
    ///
    pub const Notations = notations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#notations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn notations(self: QDomDocumentType) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomDocumentType_Notations(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `publicId` instead
    ///
    pub const PublicId = publicId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn publicId(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.publicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `systemId` instead
    ///
    pub const SystemId = systemId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemId(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.systemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `internalSubset` instead
    ///
    pub const InternalSubset = internalSubset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#internalSubset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn internalSubset(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_InternalSubset(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.internalSubset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomDocumentType) i32 {
        return qtc.QDomDocumentType_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomDocumentType, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomDocumentType, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomDocumentType, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomDocumentType, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomDocumentType, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomDocumentType, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomDocumentType, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn hasChildNodes(self: QDomDocumentType) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn cloneNode(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn normalize(self: QDomDocumentType) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomDocumentType, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn parentNode(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn childNodes(self: QDomDocumentType) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn firstChild(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn lastChild(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn previousSibling(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn nextSibling(self: QDomDocumentType) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn attributes(self: QDomDocumentType) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn ownerDocument(self: QDomDocumentType) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn hasAttributes(self: QDomDocumentType) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

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
    pub fn setNodeValue(self: QDomDocumentType, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomDocumentType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentType.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomDocumentType, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isAttr(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isCDATASection(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isDocumentFragment(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isDocument(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isDocumentType(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isElement(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isEntityReference(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isText(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isEntity(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isNotation(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isProcessingInstruction(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isCharacterData(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isComment(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomDocumentType, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn isNull(self: QDomDocumentType) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn clear(self: QDomDocumentType) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toAttr(self: QDomDocumentType) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toCDATASection(self: QDomDocumentType) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toDocumentFragment(self: QDomDocumentType) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toDocument(self: QDomDocumentType) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toDocumentType(self: QDomDocumentType) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toEntityReference(self: QDomDocumentType) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toText(self: QDomDocumentType) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toEntity(self: QDomDocumentType) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toNotation(self: QDomDocumentType) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toProcessingInstruction(self: QDomDocumentType) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toCharacterData(self: QDomDocumentType) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn toComment(self: QDomDocumentType) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomDocumentType, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn firstChildElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn lastChildElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn previousSiblingElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn nextSiblingElement(self: QDomDocumentType) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn lineNumber(self: QDomDocumentType) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn columnNumber(self: QDomDocumentType) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomDocumentType, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomDocumentType, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

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
    pub fn firstChildElement1(self: QDomDocumentType, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomDocumentType, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

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
    pub fn lastChildElement1(self: QDomDocumentType, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomDocumentType, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

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
    pub fn previousSiblingElement1(self: QDomDocumentType, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomDocumentType, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomDocumentType, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomDocumentType, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#dtor.QDomDocumentType)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocumentType `
    ///
    pub fn delete(self: QDomDocumentType) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomDocument object in C++ memory
    ///
    pub fn new() QDomDocument {
        return .{ .ptr = qtc.QDomDocument_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new2(_name: []const u8) QDomDocument {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_new2(name_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDomDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _doctype: QDomDocumentType `
    ///
    pub fn new3(_doctype: anytype) QDomDocument {
        comptime _ = @TypeOf(_doctype)._is_QDomDocumentType;
        return .{ .ptr = qtc.QDomDocument_new3(@ptrCast(_doctype.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDomDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QDomDocument `
    ///
    pub fn new4(document: anytype) QDomDocument {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        return .{ .ptr = qtc.QDomDocument_new4(@ptrCast(document.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` other: QDomDocument `
    ///
    pub fn operatorAssign(self: QDomDocument, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomDocument;
        qtc.QDomDocument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `createElement` instead
    ///
    pub const CreateElement = createElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn createElement(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateElement(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `createDocumentFragment` instead
    ///
    pub const CreateDocumentFragment = createDocumentFragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn createDocumentFragment(self: QDomDocument) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomDocument_CreateDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createTextNode` instead
    ///
    pub const CreateTextNode = createTextNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createTextNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn createTextNode(self: QDomDocument, data: []const u8) QDomText {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateTextNode(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `createComment` instead
    ///
    pub const CreateComment = createComment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn createComment(self: QDomDocument, data: []const u8) QDomComment {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateComment(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `createCDATASection` instead
    ///
    pub const CreateCDATASection = createCDATASection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn createCDATASection(self: QDomDocument, data: []const u8) QDomCDATASection {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateCDATASection(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `createProcessingInstruction` instead
    ///
    pub const CreateProcessingInstruction = createProcessingInstruction;

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
    pub fn createProcessingInstruction(self: QDomDocument, target: []const u8, data: []const u8) QDomProcessingInstruction {
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

    /// ### DEPRECATED: Use `createAttribute` instead
    ///
    pub const CreateAttribute = createAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn createAttribute(self: QDomDocument, _name: []const u8) QDomAttr {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateAttribute(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `createEntityReference` instead
    ///
    pub const CreateEntityReference = createEntityReference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn createEntityReference(self: QDomDocument, _name: []const u8) QDomEntityReference {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_CreateEntityReference(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `elementsByTagName` instead
    ///
    pub const ElementsByTagName = elementsByTagName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` tagname: []const u8 `
    ///
    pub fn elementsByTagName(self: QDomDocument, tagname: []const u8) QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_ElementsByTagName(@ptrCast(self.ptr), tagname_str) };
    }

    /// ### DEPRECATED: Use `importNode` instead
    ///
    pub const ImportNode = importNode;

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
    pub fn importNode(self: QDomDocument, importedNode: anytype, deep: bool) QDomNode {
        comptime _ = @TypeOf(importedNode)._is_QDomNode;
        return .{ .ptr = qtc.QDomDocument_ImportNode(@ptrCast(self.ptr), @ptrCast(importedNode.ptr), deep) };
    }

    /// ### DEPRECATED: Use `createElementNS` instead
    ///
    pub const CreateElementNS = createElementNS;

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
    pub fn createElementNS(self: QDomDocument, nsURI: []const u8, qName: []const u8) QDomElement {
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

    /// ### DEPRECATED: Use `createAttributeNS` instead
    ///
    pub const CreateAttributeNS = createAttributeNS;

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
    pub fn createAttributeNS(self: QDomDocument, nsURI: []const u8, qName: []const u8) QDomAttr {
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

    /// ### DEPRECATED: Use `elementsByTagNameNS` instead
    ///
    pub const ElementsByTagNameNS = elementsByTagNameNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagNameNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` _localName: []const u8 `
    ///
    pub fn elementsByTagNameNS(self: QDomDocument, nsURI: []const u8, _localName: []const u8) QDomNodeList {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_ElementsByTagNameNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### DEPRECATED: Use `elementById` instead
    ///
    pub const ElementById = elementById;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn elementById(self: QDomDocument, elementId: []const u8) QDomElement {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_ElementById(@ptrCast(self.ptr), elementId_str) };
    }

    /// ### DEPRECATED: Use `doctype` instead
    ///
    pub const Doctype = doctype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#doctype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn doctype(self: QDomDocument) QDomDocumentType {
        return .{ .ptr = qtc.QDomDocument_Doctype(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `implementation` instead
    ///
    pub const Implementation = implementation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#implementation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn implementation(self: QDomDocument) QDomImplementation {
        return .{ .ptr = qtc.QDomDocument_Implementation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `documentElement` instead
    ///
    pub const DocumentElement = documentElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#documentElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn documentElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomDocument_DocumentElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomDocument) i32 {
        return qtc.QDomDocument_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContent` instead
    ///
    pub const SetContent = setContent;

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
    pub fn setContent(self: QDomDocument, text: []u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent(@ptrCast(self.ptr), text_str, namespaceProcessing);
    }

    /// ### DEPRECATED: Use `setContent2` instead
    ///
    pub const SetContent2 = setContent2;

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
    pub fn setContent2(self: QDomDocument, text: []const u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent2(@ptrCast(self.ptr), text_str, namespaceProcessing);
    }

    /// ### DEPRECATED: Use `setContent3` instead
    ///
    pub const SetContent3 = setContent3;

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
    pub fn setContent3(self: QDomDocument, dev: anytype, namespaceProcessing: bool) bool {
        comptime _ = @TypeOf(dev)._is_QIODevice;
        return qtc.QDomDocument_SetContent3(@ptrCast(self.ptr), @ptrCast(dev.ptr), namespaceProcessing);
    }

    /// ### DEPRECATED: Use `setContent7` instead
    ///
    pub const SetContent7 = setContent7;

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
    pub fn setContent7(self: QDomDocument, reader: anytype, namespaceProcessing: bool) bool {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return qtc.QDomDocument_SetContent7(@ptrCast(self.ptr), @ptrCast(reader.ptr), namespaceProcessing);
    }

    /// ### DEPRECATED: Use `setContent8` instead
    ///
    pub const SetContent8 = setContent8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn setContent8(self: QDomDocument, data: []const u8) QDomDocument__ParseResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_SetContent8(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `setContent9` instead
    ///
    pub const SetContent9 = setContent9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` device: QIODevice `
    ///
    pub fn setContent9(self: QDomDocument, device: anytype) QDomDocument__ParseResult {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QDomDocument_SetContent9(@ptrCast(self.ptr), @ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `setContent10` instead
    ///
    pub const SetContent10 = setContent10;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    pub fn setContent10(self: QDomDocument, reader: anytype) QDomDocument__ParseResult {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return .{ .ptr = qtc.QDomDocument_SetContent10(@ptrCast(self.ptr), @ptrCast(reader.ptr)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocument_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocument.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toByteArray` instead
    ///
    pub const ToByteArray = toByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toByteArray(self: QDomDocument, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QDomDocument.toByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContent22` instead
    ///
    pub const SetContent22 = setContent22;

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
    pub fn setContent22(self: QDomDocument, data: []const u8, options: i32) QDomDocument__ParseResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QDomDocument_SetContent22(@ptrCast(self.ptr), data_str, @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `setContent23` instead
    ///
    pub const SetContent23 = setContent23;

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
    pub fn setContent23(self: QDomDocument, device: anytype, options: i32) QDomDocument__ParseResult {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QDomDocument_SetContent23(@ptrCast(self.ptr), @ptrCast(device.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `setContent24` instead
    ///
    pub const SetContent24 = setContent24;

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
    pub fn setContent24(self: QDomDocument, reader: anytype, options: i32) QDomDocument__ParseResult {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return .{ .ptr = qtc.QDomDocument_SetContent24(@ptrCast(self.ptr), @ptrCast(reader.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

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
    pub fn toString1(self: QDomDocument, allocator: std.mem.Allocator, indent: i32) []const u8 {
        var _str = qtc.QDomDocument_ToString1(@ptrCast(self.ptr), @bitCast(indent));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocument.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toByteArray1` instead
    ///
    pub const ToByteArray1 = toByteArray1;

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
    pub fn toByteArray1(self: QDomDocument, allocator: std.mem.Allocator, indent: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray1(@ptrCast(self.ptr), @bitCast(indent));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QDomDocument.toByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomDocument, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomDocument, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomDocument, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomDocument, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomDocument, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomDocument, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomDocument, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn hasChildNodes(self: QDomDocument) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn cloneNode(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn normalize(self: QDomDocument) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomDocument, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocument.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn parentNode(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn childNodes(self: QDomDocument) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn firstChild(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn lastChild(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn previousSibling(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn nextSibling(self: QDomDocument) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn attributes(self: QDomDocument) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn ownerDocument(self: QDomDocument) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocument.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocument.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn hasAttributes(self: QDomDocument) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocument.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

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
    pub fn setNodeValue(self: QDomDocument, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocument.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomDocument, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isAttr(self: QDomDocument) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isCDATASection(self: QDomDocument) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isDocumentFragment(self: QDomDocument) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isDocument(self: QDomDocument) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isDocumentType(self: QDomDocument) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isElement(self: QDomDocument) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isEntityReference(self: QDomDocument) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isText(self: QDomDocument) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isEntity(self: QDomDocument) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isNotation(self: QDomDocument) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isProcessingInstruction(self: QDomDocument) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isCharacterData(self: QDomDocument) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isComment(self: QDomDocument) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomDocument, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn isNull(self: QDomDocument) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn clear(self: QDomDocument) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toAttr(self: QDomDocument) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toCDATASection(self: QDomDocument) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toDocumentFragment(self: QDomDocument) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toDocument(self: QDomDocument) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toDocumentType(self: QDomDocument) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toEntityReference(self: QDomDocument) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toText(self: QDomDocument) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toEntity(self: QDomDocument) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toNotation(self: QDomDocument) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toProcessingInstruction(self: QDomDocument) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toCharacterData(self: QDomDocument) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn toComment(self: QDomDocument) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomDocument, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn firstChildElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn lastChildElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn previousSiblingElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn nextSiblingElement(self: QDomDocument) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn lineNumber(self: QDomDocument) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument `
    ///
    pub fn columnNumber(self: QDomDocument) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomDocument, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomDocument, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

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
    pub fn firstChildElement1(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomDocument, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

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
    pub fn lastChildElement1(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomDocument, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

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
    pub fn previousSiblingElement1(self: QDomDocument, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomDocument, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomDocument, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomDocument, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#dtor.QDomDocument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocument `
    ///
    pub fn delete(self: QDomDocument) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomNamedNodeMap object in C++ memory
    ///
    pub fn new() QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNamedNodeMap_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomNamedNodeMap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` namedNodeMap: QDomNamedNodeMap `
    ///
    pub fn new2(namedNodeMap: anytype) QDomNamedNodeMap {
        comptime _ = @TypeOf(namedNodeMap)._is_QDomNamedNodeMap;
        return .{ .ptr = qtc.QDomNamedNodeMap_new2(@ptrCast(namedNodeMap.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` other: QDomNamedNodeMap `
    ///
    pub fn operatorAssign(self: QDomNamedNodeMap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNamedNodeMap;
        qtc.QDomNamedNodeMap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` other: QDomNamedNodeMap `
    ///
    pub fn operatorEqual(self: QDomNamedNodeMap, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNamedNodeMap;
        return qtc.QDomNamedNodeMap_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` other: QDomNamedNodeMap `
    ///
    pub fn operatorNotEqual(self: QDomNamedNodeMap, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNamedNodeMap;
        return qtc.QDomNamedNodeMap_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomNamedNodeMap, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setNamedItem` instead
    ///
    pub const SetNamedItem = setNamedItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` newNode: QDomNode `
    ///
    pub fn setNamedItem(self: QDomNamedNodeMap, newNode: anytype) QDomNode {
        comptime _ = @TypeOf(newNode)._is_QDomNode;
        return .{ .ptr = qtc.QDomNamedNodeMap_SetNamedItem(@ptrCast(self.ptr), @ptrCast(newNode.ptr)) };
    }

    /// ### DEPRECATED: Use `removeNamedItem` instead
    ///
    pub const RemoveNamedItem = removeNamedItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn removeNamedItem(self: QDomNamedNodeMap, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_RemoveNamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` index: i32 `
    ///
    pub fn item(self: QDomNamedNodeMap, index: i32) QDomNode {
        return .{ .ptr = qtc.QDomNamedNodeMap_Item(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `namedItemNS` instead
    ///
    pub const NamedItemNS = namedItemNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` _localName: []const u8 `
    ///
    pub fn namedItemNS(self: QDomNamedNodeMap, nsURI: []const u8, _localName: []const u8) QDomNode {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_NamedItemNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### DEPRECATED: Use `setNamedItemNS` instead
    ///
    pub const SetNamedItemNS = setNamedItemNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` newNode: QDomNode `
    ///
    pub fn setNamedItemNS(self: QDomNamedNodeMap, newNode: anytype) QDomNode {
        comptime _ = @TypeOf(newNode)._is_QDomNode;
        return .{ .ptr = qtc.QDomNamedNodeMap_SetNamedItemNS(@ptrCast(self.ptr), @ptrCast(newNode.ptr)) };
    }

    /// ### DEPRECATED: Use `removeNamedItemNS` instead
    ///
    pub const RemoveNamedItemNS = removeNamedItemNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` _localName: []const u8 `
    ///
    pub fn removeNamedItemNS(self: QDomNamedNodeMap, nsURI: []const u8, _localName: []const u8) QDomNode {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        return .{ .ptr = qtc.QDomNamedNodeMap_RemoveNamedItemNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn length(self: QDomNamedNodeMap) i32 {
        return qtc.QDomNamedNodeMap_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn count(self: QDomNamedNodeMap) i32 {
        return qtc.QDomNamedNodeMap_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn size(self: QDomNamedNodeMap) i32 {
        return qtc.QDomNamedNodeMap_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn isEmpty(self: QDomNamedNodeMap) bool {
        return qtc.QDomNamedNodeMap_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn contains(self: QDomNamedNodeMap, _name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QDomNamedNodeMap_Contains(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#dtor.QDomNamedNodeMap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNamedNodeMap `
    ///
    pub fn delete(self: QDomNamedNodeMap) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomDocumentFragment object in C++ memory
    ///
    pub fn new() QDomDocumentFragment {
        return .{ .ptr = qtc.QDomDocumentFragment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomDocumentFragment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` documentFragment: QDomDocumentFragment `
    ///
    pub fn new2(documentFragment: anytype) QDomDocumentFragment {
        comptime _ = @TypeOf(documentFragment)._is_QDomDocumentFragment;
        return .{ .ptr = qtc.QDomDocumentFragment_new2(@ptrCast(documentFragment.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` other: QDomDocumentFragment `
    ///
    pub fn operatorAssign(self: QDomDocumentFragment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomDocumentFragment;
        qtc.QDomDocumentFragment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomDocumentFragment) i32 {
        return qtc.QDomDocumentFragment_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomDocumentFragment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomDocumentFragment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomDocumentFragment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomDocumentFragment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomDocumentFragment, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomDocumentFragment, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomDocumentFragment, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn hasChildNodes(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn cloneNode(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn normalize(self: QDomDocumentFragment) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomDocumentFragment, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentFragment.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn parentNode(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn childNodes(self: QDomDocumentFragment) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn firstChild(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn lastChild(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn previousSibling(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn nextSibling(self: QDomDocumentFragment) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn attributes(self: QDomDocumentFragment) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn ownerDocument(self: QDomDocumentFragment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentFragment.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentFragment.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn hasAttributes(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentFragment.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

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
    pub fn setNodeValue(self: QDomDocumentFragment, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomDocumentFragment.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomDocumentFragment, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isAttr(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isCDATASection(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isDocumentFragment(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isDocument(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isDocumentType(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isElement(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isEntityReference(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isText(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isEntity(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isNotation(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isProcessingInstruction(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isCharacterData(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isComment(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomDocumentFragment, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn isNull(self: QDomDocumentFragment) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn clear(self: QDomDocumentFragment) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toAttr(self: QDomDocumentFragment) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toCDATASection(self: QDomDocumentFragment) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toDocumentFragment(self: QDomDocumentFragment) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toDocument(self: QDomDocumentFragment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toDocumentType(self: QDomDocumentFragment) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toEntityReference(self: QDomDocumentFragment) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toText(self: QDomDocumentFragment) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toEntity(self: QDomDocumentFragment) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toNotation(self: QDomDocumentFragment) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toProcessingInstruction(self: QDomDocumentFragment) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toCharacterData(self: QDomDocumentFragment) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn toComment(self: QDomDocumentFragment) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomDocumentFragment, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn firstChildElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn lastChildElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn previousSiblingElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn nextSiblingElement(self: QDomDocumentFragment) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn lineNumber(self: QDomDocumentFragment) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn columnNumber(self: QDomDocumentFragment) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomDocumentFragment, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomDocumentFragment, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

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
    pub fn firstChildElement1(self: QDomDocumentFragment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomDocumentFragment, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

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
    pub fn lastChildElement1(self: QDomDocumentFragment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomDocumentFragment, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

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
    pub fn previousSiblingElement1(self: QDomDocumentFragment, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomDocumentFragment, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomDocumentFragment, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomDocumentFragment, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#dtor.QDomDocumentFragment)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocumentFragment `
    ///
    pub fn delete(self: QDomDocumentFragment) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomCharacterData object in C++ memory
    ///
    pub fn new() QDomCharacterData {
        return .{ .ptr = qtc.QDomCharacterData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomCharacterData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` characterData: QDomCharacterData `
    ///
    pub fn new2(characterData: anytype) QDomCharacterData {
        comptime _ = @TypeOf(characterData)._is_QDomCharacterData;
        return .{ .ptr = qtc.QDomCharacterData_new2(@ptrCast(characterData.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` other: QDomCharacterData `
    ///
    pub fn operatorAssign(self: QDomCharacterData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomCharacterData;
        qtc.QDomCharacterData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `substringData` instead
    ///
    pub const SubstringData = substringData;

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
    /// ` _count: usize `
    ///
    pub fn substringData(self: QDomCharacterData, allocator: std.mem.Allocator, offset: usize, _count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCharacterData.substringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `appendData` instead
    ///
    pub const AppendData = appendData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn appendData(self: QDomCharacterData, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// ### DEPRECATED: Use `insertData` instead
    ///
    pub const InsertData = insertData;

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
    pub fn insertData(self: QDomCharacterData, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// ### DEPRECATED: Use `deleteData` instead
    ///
    pub const DeleteData = deleteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` offset: usize `
    ///
    /// ` _count: usize `
    ///
    pub fn deleteData(self: QDomCharacterData, offset: usize, _count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `replaceData` instead
    ///
    pub const ReplaceData = replaceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` offset: usize `
    ///
    /// ` _count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn replaceData(self: QDomCharacterData, offset: usize, _count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count), arg_str);
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn length(self: QDomCharacterData) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCharacterData.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` _data: []const u8 `
    ///
    pub fn setData(self: QDomCharacterData, _data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomCharacterData) i32 {
        return qtc.QDomCharacterData_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomCharacterData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomCharacterData, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomCharacterData, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomCharacterData, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomCharacterData, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomCharacterData, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomCharacterData, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn hasChildNodes(self: QDomCharacterData) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn cloneNode(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn normalize(self: QDomCharacterData) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomCharacterData, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCharacterData.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn parentNode(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn childNodes(self: QDomCharacterData) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn firstChild(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn lastChild(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn previousSibling(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn nextSibling(self: QDomCharacterData) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn attributes(self: QDomCharacterData) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn ownerDocument(self: QDomCharacterData) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCharacterData.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCharacterData.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn hasAttributes(self: QDomCharacterData) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCharacterData.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

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
    pub fn setNodeValue(self: QDomCharacterData, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomCharacterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCharacterData.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomCharacterData, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isAttr(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isCDATASection(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isDocumentFragment(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isDocument(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isDocumentType(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isElement(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isEntityReference(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isText(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isEntity(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isNotation(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isProcessingInstruction(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isCharacterData(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isComment(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomCharacterData, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn isNull(self: QDomCharacterData) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn clear(self: QDomCharacterData) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toAttr(self: QDomCharacterData) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toCDATASection(self: QDomCharacterData) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toDocumentFragment(self: QDomCharacterData) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toDocument(self: QDomCharacterData) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toDocumentType(self: QDomCharacterData) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toEntityReference(self: QDomCharacterData) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toText(self: QDomCharacterData) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toEntity(self: QDomCharacterData) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toNotation(self: QDomCharacterData) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toProcessingInstruction(self: QDomCharacterData) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toCharacterData(self: QDomCharacterData) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn toComment(self: QDomCharacterData) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomCharacterData, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn firstChildElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn lastChildElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn previousSiblingElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn nextSiblingElement(self: QDomCharacterData) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn lineNumber(self: QDomCharacterData) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn columnNumber(self: QDomCharacterData) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomCharacterData, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomCharacterData, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

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
    pub fn firstChildElement1(self: QDomCharacterData, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomCharacterData, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

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
    pub fn lastChildElement1(self: QDomCharacterData, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomCharacterData, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

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
    pub fn previousSiblingElement1(self: QDomCharacterData, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomCharacterData, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomCharacterData, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomCharacterData, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#dtor.QDomCharacterData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomCharacterData `
    ///
    pub fn delete(self: QDomCharacterData) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomAttr object in C++ memory
    ///
    pub fn new() QDomAttr {
        return .{ .ptr = qtc.QDomAttr_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomAttr object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` attr: QDomAttr `
    ///
    pub fn new2(attr: anytype) QDomAttr {
        comptime _ = @TypeOf(attr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomAttr_new2(@ptrCast(attr.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` other: QDomAttr `
    ///
    pub fn operatorAssign(self: QDomAttr, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomAttr;
        qtc.QDomAttr_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomAttr_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomAttr.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `specified` instead
    ///
    pub const Specified = specified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#specified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn specified(self: QDomAttr) bool {
        return qtc.QDomAttr_Specified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ownerElement` instead
    ///
    pub const OwnerElement = ownerElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#ownerElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ownerElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomAttr_OwnerElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomAttr_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomAttr.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setValue(self: QDomAttr, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomAttr_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomAttr) i32 {
        return qtc.QDomAttr_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomAttr, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomAttr, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomAttr, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomAttr, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomAttr, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomAttr, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomAttr, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn hasChildNodes(self: QDomAttr) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn cloneNode(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn normalize(self: QDomAttr) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomAttr, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomAttr.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn parentNode(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn childNodes(self: QDomAttr) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn firstChild(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn lastChild(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn previousSibling(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn nextSibling(self: QDomAttr) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn attributes(self: QDomAttr) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn ownerDocument(self: QDomAttr) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomAttr.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomAttr.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn hasAttributes(self: QDomAttr) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomAttr.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomAttr, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomAttr, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomAttr.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomAttr, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isAttr(self: QDomAttr) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isCDATASection(self: QDomAttr) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isDocumentFragment(self: QDomAttr) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isDocument(self: QDomAttr) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isDocumentType(self: QDomAttr) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isElement(self: QDomAttr) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isEntityReference(self: QDomAttr) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isText(self: QDomAttr) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isEntity(self: QDomAttr) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isNotation(self: QDomAttr) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isProcessingInstruction(self: QDomAttr) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isCharacterData(self: QDomAttr) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isComment(self: QDomAttr) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomAttr, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn isNull(self: QDomAttr) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn clear(self: QDomAttr) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toAttr(self: QDomAttr) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toCDATASection(self: QDomAttr) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toDocumentFragment(self: QDomAttr) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toDocument(self: QDomAttr) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toDocumentType(self: QDomAttr) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toEntityReference(self: QDomAttr) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toText(self: QDomAttr) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toEntity(self: QDomAttr) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toNotation(self: QDomAttr) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toProcessingInstruction(self: QDomAttr) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toCharacterData(self: QDomAttr) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn toComment(self: QDomAttr) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomAttr, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn firstChildElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn lastChildElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn previousSiblingElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn nextSiblingElement(self: QDomAttr) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn lineNumber(self: QDomAttr) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomAttr `
    ///
    pub fn columnNumber(self: QDomAttr) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomAttr, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomAttr, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

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
    pub fn firstChildElement1(self: QDomAttr, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomAttr, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

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
    pub fn lastChildElement1(self: QDomAttr, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomAttr, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

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
    pub fn previousSiblingElement1(self: QDomAttr, tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomAttr, tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomAttr, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomAttr, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#dtor.QDomAttr)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomAttr `
    ///
    pub fn delete(self: QDomAttr) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomElement object in C++ memory
    ///
    pub fn new() QDomElement {
        return .{ .ptr = qtc.QDomElement_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomElement object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` element: QDomElement `
    ///
    pub fn new2(element: anytype) QDomElement {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.QDomElement_new2(@ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` other: QDomElement `
    ///
    pub fn operatorAssign(self: QDomElement, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomElement;
        qtc.QDomElement_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn attribute(self: QDomElement, allocator: std.mem.Allocator, _name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.QDomElement_Attribute(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setAttribute(self: QDomElement, _name: []const u8, _value: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomElement_SetAttribute(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: isize `
    ///
    pub fn setAttribute2(self: QDomElement, _name: []const u8, _value: isize) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_SetAttribute2(@ptrCast(self.ptr), name_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttribute3` instead
    ///
    pub const SetAttribute3 = setAttribute3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: usize `
    ///
    pub fn setAttribute3(self: QDomElement, _name: []const u8, _value: usize) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_SetAttribute3(@ptrCast(self.ptr), name_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttribute4` instead
    ///
    pub const SetAttribute4 = setAttribute4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: i32 `
    ///
    pub fn setAttribute4(self: QDomElement, _name: []const u8, _value: i32) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_SetAttribute4(@ptrCast(self.ptr), name_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttribute5` instead
    ///
    pub const SetAttribute5 = setAttribute5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: u32 `
    ///
    pub fn setAttribute5(self: QDomElement, _name: []const u8, _value: u32) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_SetAttribute5(@ptrCast(self.ptr), name_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttribute6` instead
    ///
    pub const SetAttribute6 = setAttribute6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: f32 `
    ///
    pub fn setAttribute6(self: QDomElement, _name: []const u8, _value: f32) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_SetAttribute6(@ptrCast(self.ptr), name_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttribute7` instead
    ///
    pub const SetAttribute7 = setAttribute7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: f64 `
    ///
    pub fn setAttribute7(self: QDomElement, _name: []const u8, _value: f64) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_SetAttribute7(@ptrCast(self.ptr), name_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `removeAttribute` instead
    ///
    pub const RemoveAttribute = removeAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn removeAttribute(self: QDomElement, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_RemoveAttribute(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `attributeNode` instead
    ///
    pub const AttributeNode = attributeNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn attributeNode(self: QDomElement, _name: []const u8) QDomAttr {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomElement_AttributeNode(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setAttributeNode` instead
    ///
    pub const SetAttributeNode = setAttributeNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newAttr: QDomAttr `
    ///
    pub fn setAttributeNode(self: QDomElement, newAttr: anytype) QDomAttr {
        comptime _ = @TypeOf(newAttr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomElement_SetAttributeNode(@ptrCast(self.ptr), @ptrCast(newAttr.ptr)) };
    }

    /// ### DEPRECATED: Use `removeAttributeNode` instead
    ///
    pub const RemoveAttributeNode = removeAttributeNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` oldAttr: QDomAttr `
    ///
    pub fn removeAttributeNode(self: QDomElement, oldAttr: anytype) QDomAttr {
        comptime _ = @TypeOf(oldAttr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomElement_RemoveAttributeNode(@ptrCast(self.ptr), @ptrCast(oldAttr.ptr)) };
    }

    /// ### DEPRECATED: Use `elementsByTagName` instead
    ///
    pub const ElementsByTagName = elementsByTagName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` tagname: []const u8 `
    ///
    pub fn elementsByTagName(self: QDomElement, tagname: []const u8) QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return .{ .ptr = qtc.QDomElement_ElementsByTagName(@ptrCast(self.ptr), tagname_str) };
    }

    /// ### DEPRECATED: Use `hasAttribute` instead
    ///
    pub const HasAttribute = hasAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn hasAttribute(self: QDomElement, _name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QDomElement_HasAttribute(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `attributeNS` instead
    ///
    pub const AttributeNS = attributeNS;

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
    /// ` _localName: []const u8 `
    ///
    pub fn attributeNS(self: QDomElement, allocator: std.mem.Allocator, nsURI: []const u8, _localName: []const u8) []const u8 {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        var _str = qtc.QDomElement_AttributeNS(@ptrCast(self.ptr), nsURI_str, localName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.attributeNS: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttributeNS` instead
    ///
    pub const SetAttributeNS = setAttributeNS;

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
    /// ` _value: []const u8 `
    ///
    pub fn setAttributeNS(self: QDomElement, nsURI: []const u8, qName: []const u8, _value: []const u8) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomElement_SetAttributeNS(@ptrCast(self.ptr), nsURI_str, qName_str, value_str);
    }

    /// ### DEPRECATED: Use `setAttributeNS2` instead
    ///
    pub const SetAttributeNS2 = setAttributeNS2;

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
    /// ` _value: i32 `
    ///
    pub fn setAttributeNS2(self: QDomElement, nsURI: []const u8, qName: []const u8, _value: i32) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS2(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttributeNS3` instead
    ///
    pub const SetAttributeNS3 = setAttributeNS3;

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
    /// ` _value: u32 `
    ///
    pub fn setAttributeNS3(self: QDomElement, nsURI: []const u8, qName: []const u8, _value: u32) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS3(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttributeNS4` instead
    ///
    pub const SetAttributeNS4 = setAttributeNS4;

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
    /// ` _value: isize `
    ///
    pub fn setAttributeNS4(self: QDomElement, nsURI: []const u8, qName: []const u8, _value: isize) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS4(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttributeNS5` instead
    ///
    pub const SetAttributeNS5 = setAttributeNS5;

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
    /// ` _value: usize `
    ///
    pub fn setAttributeNS5(self: QDomElement, nsURI: []const u8, qName: []const u8, _value: usize) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS5(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `setAttributeNS6` instead
    ///
    pub const SetAttributeNS6 = setAttributeNS6;

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
    /// ` _value: f64 `
    ///
    pub fn setAttributeNS6(self: QDomElement, nsURI: []const u8, qName: []const u8, _value: f64) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS6(@ptrCast(self.ptr), nsURI_str, qName_str, @bitCast(_value));
    }

    /// ### DEPRECATED: Use `removeAttributeNS` instead
    ///
    pub const RemoveAttributeNS = removeAttributeNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` _localName: []const u8 `
    ///
    pub fn removeAttributeNS(self: QDomElement, nsURI: []const u8, _localName: []const u8) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        qtc.QDomElement_RemoveAttributeNS(@ptrCast(self.ptr), nsURI_str, localName_str);
    }

    /// ### DEPRECATED: Use `attributeNodeNS` instead
    ///
    pub const AttributeNodeNS = attributeNodeNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNodeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` _localName: []const u8 `
    ///
    pub fn attributeNodeNS(self: QDomElement, nsURI: []const u8, _localName: []const u8) QDomAttr {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        return .{ .ptr = qtc.QDomElement_AttributeNodeNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### DEPRECATED: Use `setAttributeNodeNS` instead
    ///
    pub const SetAttributeNodeNS = setAttributeNodeNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNodeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` newAttr: QDomAttr `
    ///
    pub fn setAttributeNodeNS(self: QDomElement, newAttr: anytype) QDomAttr {
        comptime _ = @TypeOf(newAttr)._is_QDomAttr;
        return .{ .ptr = qtc.QDomElement_SetAttributeNodeNS(@ptrCast(self.ptr), @ptrCast(newAttr.ptr)) };
    }

    /// ### DEPRECATED: Use `elementsByTagNameNS` instead
    ///
    pub const ElementsByTagNameNS = elementsByTagNameNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagNameNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` _localName: []const u8 `
    ///
    pub fn elementsByTagNameNS(self: QDomElement, nsURI: []const u8, _localName: []const u8) QDomNodeList {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        return .{ .ptr = qtc.QDomElement_ElementsByTagNameNS(@ptrCast(self.ptr), nsURI_str, localName_str) };
    }

    /// ### DEPRECATED: Use `hasAttributeNS` instead
    ///
    pub const HasAttributeNS = hasAttributeNS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` _localName: []const u8 `
    ///
    pub fn hasAttributeNS(self: QDomElement, nsURI: []const u8, _localName: []const u8) bool {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        return qtc.QDomElement_HasAttributeNS(@ptrCast(self.ptr), nsURI_str, localName_str);
    }

    /// ### DEPRECATED: Use `tagName` instead
    ///
    pub const TagName = tagName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#tagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tagName(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomElement_TagName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.tagName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTagName` instead
    ///
    pub const SetTagName = setTagName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setTagName(self: QDomElement, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDomElement_SetTagName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn attributes(self: QDomElement) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomElement_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomElement) i32 {
        return qtc.QDomElement_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomElement_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `attribute2` instead
    ///
    pub const Attribute2 = attribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` defValue: []const u8 `
    ///
    pub fn attribute2(self: QDomElement, allocator: std.mem.Allocator, _name: []const u8, defValue: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const defValue_str = qtc.libqt_string{
            .len = defValue.len,
            .data = defValue.ptr,
        };
        var _str = qtc.QDomElement_Attribute2(@ptrCast(self.ptr), name_str, defValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.attribute2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `attributeNS3` instead
    ///
    pub const AttributeNS3 = attributeNS3;

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
    /// ` _localName: []const u8 `
    ///
    /// ` defValue: []const u8 `
    ///
    pub fn attributeNS3(self: QDomElement, allocator: std.mem.Allocator, nsURI: []const u8, _localName: []const u8, defValue: []const u8) []const u8 {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = _localName.len,
            .data = _localName.ptr,
        };
        const defValue_str = qtc.libqt_string{
            .len = defValue.len,
            .data = defValue.ptr,
        };
        var _str = qtc.QDomElement_AttributeNS3(@ptrCast(self.ptr), nsURI_str, localName_str, defValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.attributeNS3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomElement, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomElement, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomElement, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomElement, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomElement, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomElement, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomElement, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn hasChildNodes(self: QDomElement) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn cloneNode(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn normalize(self: QDomElement) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomElement, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn parentNode(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn childNodes(self: QDomElement) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn firstChild(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn lastChild(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn previousSibling(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn nextSibling(self: QDomElement) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn ownerDocument(self: QDomElement) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn hasAttributes(self: QDomElement) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomElement, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomElement, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomElement.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomElement, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isAttr(self: QDomElement) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isCDATASection(self: QDomElement) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isDocumentFragment(self: QDomElement) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isDocument(self: QDomElement) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isDocumentType(self: QDomElement) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isElement(self: QDomElement) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isEntityReference(self: QDomElement) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isText(self: QDomElement) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isEntity(self: QDomElement) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isNotation(self: QDomElement) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isProcessingInstruction(self: QDomElement) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isCharacterData(self: QDomElement) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isComment(self: QDomElement) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomElement, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn isNull(self: QDomElement) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn clear(self: QDomElement) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toAttr(self: QDomElement) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toCDATASection(self: QDomElement) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toDocumentFragment(self: QDomElement) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toDocument(self: QDomElement) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toDocumentType(self: QDomElement) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toEntityReference(self: QDomElement) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toText(self: QDomElement) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toEntity(self: QDomElement) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toNotation(self: QDomElement) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toProcessingInstruction(self: QDomElement) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toCharacterData(self: QDomElement) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn toComment(self: QDomElement) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomElement, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn firstChildElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn lastChildElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn previousSiblingElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn nextSiblingElement(self: QDomElement) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn lineNumber(self: QDomElement) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    pub fn columnNumber(self: QDomElement) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomElement, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomElement, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomElement, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomElement, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomElement, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomElement, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomElement, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomElement `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomElement, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomElement, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomElement, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#dtor.QDomElement)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomElement `
    ///
    pub fn delete(self: QDomElement) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomText object in C++ memory
    ///
    pub fn new() QDomText {
        return .{ .ptr = qtc.QDomText_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomText object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: QDomText `
    ///
    pub fn new2(_text: anytype) QDomText {
        comptime _ = @TypeOf(_text)._is_QDomText;
        return .{ .ptr = qtc.QDomText_new2(@ptrCast(_text.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` other: QDomText `
    ///
    pub fn operatorAssign(self: QDomText, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomText;
        qtc.QDomText_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `splitText` instead
    ///
    pub const SplitText = splitText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#splitText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` offset: i32 `
    ///
    pub fn splitText(self: QDomText, offset: i32) QDomText {
        return .{ .ptr = qtc.QDomText_SplitText(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomText) i32 {
        return qtc.QDomText_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `substringData` instead
    ///
    pub const SubstringData = substringData;

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
    /// ` _count: usize `
    ///
    pub fn substringData(self: QDomText, allocator: std.mem.Allocator, offset: usize, _count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomText.substringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `appendData` instead
    ///
    pub const AppendData = appendData;

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
    pub fn appendData(self: QDomText, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// ### DEPRECATED: Use `insertData` instead
    ///
    pub const InsertData = insertData;

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
    pub fn insertData(self: QDomText, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// ### DEPRECATED: Use `deleteData` instead
    ///
    pub const DeleteData = deleteData;

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
    /// ` _count: usize `
    ///
    pub fn deleteData(self: QDomText, offset: usize, _count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `replaceData` instead
    ///
    pub const ReplaceData = replaceData;

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
    /// ` _count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn replaceData(self: QDomText, offset: usize, _count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count), arg_str);
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn length(self: QDomText) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

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
    pub fn data(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomText.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _data: []const u8 `
    ///
    pub fn setData(self: QDomText, _data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomText, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomText, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomText, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomText, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomText, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomText, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomText, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn hasChildNodes(self: QDomText) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn cloneNode(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn normalize(self: QDomText) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomText, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomText.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn parentNode(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn childNodes(self: QDomText) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn firstChild(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn lastChild(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn previousSibling(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn nextSibling(self: QDomText) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn attributes(self: QDomText) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn ownerDocument(self: QDomText) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomText.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomText.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn hasAttributes(self: QDomText) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomText.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomText, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomText, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomText.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomText, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isAttr(self: QDomText) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isCDATASection(self: QDomText) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isDocumentFragment(self: QDomText) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isDocument(self: QDomText) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isDocumentType(self: QDomText) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isElement(self: QDomText) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isEntityReference(self: QDomText) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isText(self: QDomText) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isEntity(self: QDomText) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isNotation(self: QDomText) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isProcessingInstruction(self: QDomText) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isCharacterData(self: QDomText) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isComment(self: QDomText) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomText, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn isNull(self: QDomText) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn clear(self: QDomText) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toAttr(self: QDomText) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toCDATASection(self: QDomText) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toDocumentFragment(self: QDomText) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toDocument(self: QDomText) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toDocumentType(self: QDomText) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toEntityReference(self: QDomText) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toText(self: QDomText) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toEntity(self: QDomText) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toNotation(self: QDomText) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toProcessingInstruction(self: QDomText) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toCharacterData(self: QDomText) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn toComment(self: QDomText) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomText, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn firstChildElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn lastChildElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn previousSiblingElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn nextSiblingElement(self: QDomText) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn lineNumber(self: QDomText) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    pub fn columnNumber(self: QDomText) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomText, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomText, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomText, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomText, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomText, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomText, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomText, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomText `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomText, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomText, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomText, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#dtor.QDomText)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomText `
    ///
    pub fn delete(self: QDomText) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomComment object in C++ memory
    ///
    pub fn new() QDomComment {
        return .{ .ptr = qtc.QDomComment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomComment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` comment: QDomComment `
    ///
    pub fn new2(comment: anytype) QDomComment {
        comptime _ = @TypeOf(comment)._is_QDomComment;
        return .{ .ptr = qtc.QDomComment_new2(@ptrCast(comment.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` other: QDomComment `
    ///
    pub fn operatorAssign(self: QDomComment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomComment;
        qtc.QDomComment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomComment) i32 {
        return qtc.QDomComment_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `substringData` instead
    ///
    pub const SubstringData = substringData;

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
    /// ` _count: usize `
    ///
    pub fn substringData(self: QDomComment, allocator: std.mem.Allocator, offset: usize, _count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomComment.substringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `appendData` instead
    ///
    pub const AppendData = appendData;

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
    pub fn appendData(self: QDomComment, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// ### DEPRECATED: Use `insertData` instead
    ///
    pub const InsertData = insertData;

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
    pub fn insertData(self: QDomComment, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// ### DEPRECATED: Use `deleteData` instead
    ///
    pub const DeleteData = deleteData;

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
    /// ` _count: usize `
    ///
    pub fn deleteData(self: QDomComment, offset: usize, _count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `replaceData` instead
    ///
    pub const ReplaceData = replaceData;

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
    /// ` _count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn replaceData(self: QDomComment, offset: usize, _count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count), arg_str);
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn length(self: QDomComment) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

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
    pub fn data(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomComment.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _data: []const u8 `
    ///
    pub fn setData(self: QDomComment, _data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomComment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomComment, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomComment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomComment, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomComment, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomComment, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomComment, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn hasChildNodes(self: QDomComment) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn cloneNode(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn normalize(self: QDomComment) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomComment, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomComment.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn parentNode(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn childNodes(self: QDomComment) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn firstChild(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn lastChild(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn previousSibling(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn nextSibling(self: QDomComment) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn attributes(self: QDomComment) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn ownerDocument(self: QDomComment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomComment.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomComment.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn hasAttributes(self: QDomComment) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomComment.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomComment, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomComment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomComment.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomComment, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isAttr(self: QDomComment) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isCDATASection(self: QDomComment) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isDocumentFragment(self: QDomComment) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isDocument(self: QDomComment) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isDocumentType(self: QDomComment) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isElement(self: QDomComment) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isEntityReference(self: QDomComment) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isText(self: QDomComment) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isEntity(self: QDomComment) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isNotation(self: QDomComment) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isProcessingInstruction(self: QDomComment) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isCharacterData(self: QDomComment) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isComment(self: QDomComment) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomComment, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn isNull(self: QDomComment) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn clear(self: QDomComment) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toAttr(self: QDomComment) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toCDATASection(self: QDomComment) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toDocumentFragment(self: QDomComment) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toDocument(self: QDomComment) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toDocumentType(self: QDomComment) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toEntityReference(self: QDomComment) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toText(self: QDomComment) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toEntity(self: QDomComment) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toNotation(self: QDomComment) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toProcessingInstruction(self: QDomComment) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toCharacterData(self: QDomComment) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn toComment(self: QDomComment) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomComment, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn firstChildElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn lastChildElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn previousSiblingElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn nextSiblingElement(self: QDomComment) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn lineNumber(self: QDomComment) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    pub fn columnNumber(self: QDomComment) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomComment, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomComment, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomComment, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomComment, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomComment, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomComment, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomComment, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomComment `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomComment, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomComment, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomComment, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#dtor.QDomComment)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomComment `
    ///
    pub fn delete(self: QDomComment) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomCDATASection object in C++ memory
    ///
    pub fn new() QDomCDATASection {
        return .{ .ptr = qtc.QDomCDATASection_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomCDATASection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` cdataSection: QDomCDATASection `
    ///
    pub fn new2(cdataSection: anytype) QDomCDATASection {
        comptime _ = @TypeOf(cdataSection)._is_QDomCDATASection;
        return .{ .ptr = qtc.QDomCDATASection_new2(@ptrCast(cdataSection.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` other: QDomCDATASection `
    ///
    pub fn operatorAssign(self: QDomCDATASection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomCDATASection;
        qtc.QDomCDATASection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomCDATASection) i32 {
        return qtc.QDomCDATASection_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `splitText` instead
    ///
    pub const SplitText = splitText;

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
    pub fn splitText(self: QDomCDATASection, offset: i32) QDomText {
        return .{ .ptr = qtc.QDomText_SplitText(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `substringData` instead
    ///
    pub const SubstringData = substringData;

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
    /// ` _count: usize `
    ///
    pub fn substringData(self: QDomCDATASection, allocator: std.mem.Allocator, offset: usize, _count: usize) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCDATASection.substringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `appendData` instead
    ///
    pub const AppendData = appendData;

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
    pub fn appendData(self: QDomCDATASection, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self.ptr), arg_str);
    }

    /// ### DEPRECATED: Use `insertData` instead
    ///
    pub const InsertData = insertData;

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
    pub fn insertData(self: QDomCDATASection, offset: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self.ptr), @bitCast(offset), arg_str);
    }

    /// ### DEPRECATED: Use `deleteData` instead
    ///
    pub const DeleteData = deleteData;

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
    /// ` _count: usize `
    ///
    pub fn deleteData(self: QDomCDATASection, offset: usize, _count: usize) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `replaceData` instead
    ///
    pub const ReplaceData = replaceData;

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
    /// ` _count: usize `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn replaceData(self: QDomCDATASection, offset: usize, _count: usize, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_count), arg_str);
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn length(self: QDomCDATASection) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

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
    pub fn data(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCDATASection.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _data: []const u8 `
    ///
    pub fn setData(self: QDomCDATASection, _data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomCDATASection, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomCDATASection, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomCDATASection, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomCDATASection, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomCDATASection, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomCDATASection, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomCDATASection, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn hasChildNodes(self: QDomCDATASection) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn cloneNode(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn normalize(self: QDomCDATASection) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomCDATASection, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCDATASection.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn parentNode(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn childNodes(self: QDomCDATASection) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn firstChild(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn lastChild(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn previousSibling(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn nextSibling(self: QDomCDATASection) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn attributes(self: QDomCDATASection) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn ownerDocument(self: QDomCDATASection) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCDATASection.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCDATASection.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn hasAttributes(self: QDomCDATASection) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCDATASection.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomCDATASection, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomCDATASection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomCDATASection.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomCDATASection, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isAttr(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isCDATASection(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isDocumentFragment(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isDocument(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isDocumentType(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isElement(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isEntityReference(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isText(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isEntity(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isNotation(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isProcessingInstruction(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isCharacterData(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isComment(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomCDATASection, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn isNull(self: QDomCDATASection) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn clear(self: QDomCDATASection) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toAttr(self: QDomCDATASection) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toCDATASection(self: QDomCDATASection) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toDocumentFragment(self: QDomCDATASection) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toDocument(self: QDomCDATASection) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toDocumentType(self: QDomCDATASection) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toEntityReference(self: QDomCDATASection) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toText(self: QDomCDATASection) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toEntity(self: QDomCDATASection) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toNotation(self: QDomCDATASection) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toProcessingInstruction(self: QDomCDATASection) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toCharacterData(self: QDomCDATASection) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn toComment(self: QDomCDATASection) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomCDATASection, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn firstChildElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn lastChildElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn previousSiblingElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn nextSiblingElement(self: QDomCDATASection) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn lineNumber(self: QDomCDATASection) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn columnNumber(self: QDomCDATASection) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomCDATASection, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomCDATASection, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomCDATASection, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomCDATASection, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomCDATASection, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomCDATASection, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomCDATASection, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomCDATASection `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomCDATASection, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomCDATASection, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomCDATASection, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#dtor.QDomCDATASection)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomCDATASection `
    ///
    pub fn delete(self: QDomCDATASection) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomNotation object in C++ memory
    ///
    pub fn new() QDomNotation {
        return .{ .ptr = qtc.QDomNotation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomNotation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` notation: QDomNotation `
    ///
    pub fn new2(notation: anytype) QDomNotation {
        comptime _ = @TypeOf(notation)._is_QDomNotation;
        return .{ .ptr = qtc.QDomNotation_new2(@ptrCast(notation.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` other: QDomNotation `
    ///
    pub fn operatorAssign(self: QDomNotation, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomNotation;
        qtc.QDomNotation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `publicId` instead
    ///
    pub const PublicId = publicId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn publicId(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNotation_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNotation.publicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `systemId` instead
    ///
    pub const SystemId = systemId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemId(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNotation_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNotation.systemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomNotation) i32 {
        return qtc.QDomNotation_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomNotation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomNotation, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomNotation, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomNotation, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomNotation, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomNotation, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomNotation, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn hasChildNodes(self: QDomNotation) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn cloneNode(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn normalize(self: QDomNotation) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomNotation, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNotation.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn parentNode(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn childNodes(self: QDomNotation) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn firstChild(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn lastChild(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn previousSibling(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn nextSibling(self: QDomNotation) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn attributes(self: QDomNotation) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn ownerDocument(self: QDomNotation) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNotation.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNotation.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn hasAttributes(self: QDomNotation) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNotation.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomNotation, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomNotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomNotation.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomNotation, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isAttr(self: QDomNotation) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isCDATASection(self: QDomNotation) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isDocumentFragment(self: QDomNotation) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isDocument(self: QDomNotation) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isDocumentType(self: QDomNotation) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isElement(self: QDomNotation) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isEntityReference(self: QDomNotation) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isText(self: QDomNotation) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isEntity(self: QDomNotation) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isNotation(self: QDomNotation) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isProcessingInstruction(self: QDomNotation) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isCharacterData(self: QDomNotation) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isComment(self: QDomNotation) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomNotation, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn isNull(self: QDomNotation) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn clear(self: QDomNotation) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toAttr(self: QDomNotation) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toCDATASection(self: QDomNotation) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toDocumentFragment(self: QDomNotation) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toDocument(self: QDomNotation) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toDocumentType(self: QDomNotation) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toEntityReference(self: QDomNotation) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toText(self: QDomNotation) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toEntity(self: QDomNotation) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toNotation(self: QDomNotation) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toProcessingInstruction(self: QDomNotation) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toCharacterData(self: QDomNotation) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn toComment(self: QDomNotation) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomNotation, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn firstChildElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn lastChildElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn previousSiblingElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn nextSiblingElement(self: QDomNotation) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn lineNumber(self: QDomNotation) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    pub fn columnNumber(self: QDomNotation) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomNotation, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomNotation, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomNotation, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomNotation, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomNotation, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomNotation, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomNotation, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomNotation `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomNotation, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomNotation, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomNotation, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#dtor.QDomNotation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomNotation `
    ///
    pub fn delete(self: QDomNotation) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomEntity object in C++ memory
    ///
    pub fn new() QDomEntity {
        return .{ .ptr = qtc.QDomEntity_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomEntity object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` entity: QDomEntity `
    ///
    pub fn new2(entity: anytype) QDomEntity {
        comptime _ = @TypeOf(entity)._is_QDomEntity;
        return .{ .ptr = qtc.QDomEntity_new2(@ptrCast(entity.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` other: QDomEntity `
    ///
    pub fn operatorAssign(self: QDomEntity, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomEntity;
        qtc.QDomEntity_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `publicId` instead
    ///
    pub const PublicId = publicId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn publicId(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.publicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `systemId` instead
    ///
    pub const SystemId = systemId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemId(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.systemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `notationName` instead
    ///
    pub const NotationName = notationName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#notationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn notationName(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_NotationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.notationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomEntity) i32 {
        return qtc.QDomEntity_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomEntity, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomEntity, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomEntity, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomEntity, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomEntity, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomEntity, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomEntity, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn hasChildNodes(self: QDomEntity) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn cloneNode(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn normalize(self: QDomEntity) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomEntity, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn parentNode(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn childNodes(self: QDomEntity) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn firstChild(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn lastChild(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn previousSibling(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn nextSibling(self: QDomEntity) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn attributes(self: QDomEntity) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn ownerDocument(self: QDomEntity) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn hasAttributes(self: QDomEntity) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomEntity, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomEntity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntity.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomEntity, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isAttr(self: QDomEntity) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isCDATASection(self: QDomEntity) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isDocumentFragment(self: QDomEntity) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isDocument(self: QDomEntity) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isDocumentType(self: QDomEntity) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isElement(self: QDomEntity) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isEntityReference(self: QDomEntity) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isText(self: QDomEntity) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isEntity(self: QDomEntity) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isNotation(self: QDomEntity) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isProcessingInstruction(self: QDomEntity) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isCharacterData(self: QDomEntity) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isComment(self: QDomEntity) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomEntity, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn isNull(self: QDomEntity) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn clear(self: QDomEntity) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toAttr(self: QDomEntity) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toCDATASection(self: QDomEntity) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toDocumentFragment(self: QDomEntity) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toDocument(self: QDomEntity) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toDocumentType(self: QDomEntity) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toEntityReference(self: QDomEntity) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toText(self: QDomEntity) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toEntity(self: QDomEntity) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toNotation(self: QDomEntity) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toProcessingInstruction(self: QDomEntity) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toCharacterData(self: QDomEntity) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn toComment(self: QDomEntity) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomEntity, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn firstChildElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn lastChildElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn previousSiblingElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn nextSiblingElement(self: QDomEntity) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn lineNumber(self: QDomEntity) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    pub fn columnNumber(self: QDomEntity) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomEntity, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomEntity, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomEntity, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomEntity, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomEntity, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomEntity, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomEntity, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntity `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomEntity, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomEntity, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomEntity, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#dtor.QDomEntity)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomEntity `
    ///
    pub fn delete(self: QDomEntity) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomEntityReference object in C++ memory
    ///
    pub fn new() QDomEntityReference {
        return .{ .ptr = qtc.QDomEntityReference_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomEntityReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` entityReference: QDomEntityReference `
    ///
    pub fn new2(entityReference: anytype) QDomEntityReference {
        comptime _ = @TypeOf(entityReference)._is_QDomEntityReference;
        return .{ .ptr = qtc.QDomEntityReference_new2(@ptrCast(entityReference.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` other: QDomEntityReference `
    ///
    pub fn operatorAssign(self: QDomEntityReference, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomEntityReference;
        qtc.QDomEntityReference_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomEntityReference) i32 {
        return qtc.QDomEntityReference_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomEntityReference, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomEntityReference, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomEntityReference, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomEntityReference, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomEntityReference, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomEntityReference, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomEntityReference, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn hasChildNodes(self: QDomEntityReference) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn cloneNode(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn normalize(self: QDomEntityReference) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomEntityReference, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntityReference.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn parentNode(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn childNodes(self: QDomEntityReference) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn firstChild(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn lastChild(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn previousSibling(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn nextSibling(self: QDomEntityReference) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn attributes(self: QDomEntityReference) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn ownerDocument(self: QDomEntityReference) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntityReference.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntityReference.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn hasAttributes(self: QDomEntityReference) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntityReference.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomEntityReference, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomEntityReference, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomEntityReference.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomEntityReference, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isAttr(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isCDATASection(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isDocumentFragment(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isDocument(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isDocumentType(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isElement(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isEntityReference(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isText(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isEntity(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isNotation(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isProcessingInstruction(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isCharacterData(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isComment(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomEntityReference, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn isNull(self: QDomEntityReference) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn clear(self: QDomEntityReference) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toAttr(self: QDomEntityReference) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toCDATASection(self: QDomEntityReference) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toDocumentFragment(self: QDomEntityReference) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toDocument(self: QDomEntityReference) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toDocumentType(self: QDomEntityReference) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toEntityReference(self: QDomEntityReference) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toText(self: QDomEntityReference) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toEntity(self: QDomEntityReference) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toNotation(self: QDomEntityReference) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toProcessingInstruction(self: QDomEntityReference) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toCharacterData(self: QDomEntityReference) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn toComment(self: QDomEntityReference) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomEntityReference, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn firstChildElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn lastChildElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn previousSiblingElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn nextSiblingElement(self: QDomEntityReference) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn lineNumber(self: QDomEntityReference) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn columnNumber(self: QDomEntityReference) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomEntityReference, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomEntityReference, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomEntityReference, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomEntityReference, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomEntityReference, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomEntityReference, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomEntityReference, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomEntityReference `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomEntityReference, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomEntityReference, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomEntityReference, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#dtor.QDomEntityReference)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomEntityReference `
    ///
    pub fn delete(self: QDomEntityReference) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomProcessingInstruction object in C++ memory
    ///
    pub fn new() QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomProcessingInstruction_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomProcessingInstruction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` processingInstruction: QDomProcessingInstruction `
    ///
    pub fn new2(processingInstruction: anytype) QDomProcessingInstruction {
        comptime _ = @TypeOf(processingInstruction)._is_QDomProcessingInstruction;
        return .{ .ptr = qtc.QDomProcessingInstruction_new2(@ptrCast(processingInstruction.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` other: QDomProcessingInstruction `
    ///
    pub fn operatorAssign(self: QDomProcessingInstruction, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDomProcessingInstruction;
        qtc.QDomProcessingInstruction_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `target` instead
    ///
    pub const Target = target;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn target(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomProcessingInstruction_Target(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomProcessingInstruction.target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomProcessingInstruction_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomProcessingInstruction.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _data: []const u8 `
    ///
    pub fn setData(self: QDomProcessingInstruction, _data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.QDomProcessingInstruction_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `nodeType` instead
    ///
    pub const NodeType = nodeType;

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
    pub fn nodeType(self: QDomProcessingInstruction) i32 {
        return qtc.QDomProcessingInstruction_NodeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QDomProcessingInstruction, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QDomProcessingInstruction, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QDomNode;
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `insertBefore` instead
    ///
    pub const InsertBefore = insertBefore;

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
    pub fn insertBefore(self: QDomProcessingInstruction, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertBefore(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAfter` instead
    ///
    pub const InsertAfter = insertAfter;

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
    pub fn insertAfter(self: QDomProcessingInstruction, newChild: anytype, refChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(refChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_InsertAfter(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(refChild.ptr)) };
    }

    /// ### DEPRECATED: Use `replaceChild` instead
    ///
    pub const ReplaceChild = replaceChild;

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
    pub fn replaceChild(self: QDomProcessingInstruction, newChild: anytype, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_ReplaceChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `removeChild` instead
    ///
    pub const RemoveChild = removeChild;

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
    pub fn removeChild(self: QDomProcessingInstruction, oldChild: anytype) QDomNode {
        comptime _ = @TypeOf(oldChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_RemoveChild(@ptrCast(self.ptr), @ptrCast(oldChild.ptr)) };
    }

    /// ### DEPRECATED: Use `appendChild` instead
    ///
    pub const AppendChild = appendChild;

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
    pub fn appendChild(self: QDomProcessingInstruction, newChild: anytype) QDomNode {
        comptime _ = @TypeOf(newChild)._is_QDomNode;
        return .{ .ptr = qtc.QDomNode_AppendChild(@ptrCast(self.ptr), @ptrCast(newChild.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildNodes` instead
    ///
    pub const HasChildNodes = hasChildNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn hasChildNodes(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode` instead
    ///
    pub const CloneNode = cloneNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn cloneNode(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn normalize(self: QDomProcessingInstruction) void {
        qtc.QDomNode_Normalize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

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
    pub fn isSupported(self: QDomProcessingInstruction, feature: []const u8, version: []const u8) bool {
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

    /// ### DEPRECATED: Use `nodeName` instead
    ///
    pub const NodeName = nodeName;

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
    pub fn nodeName(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomProcessingInstruction.nodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentNode` instead
    ///
    pub const ParentNode = parentNode;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn parentNode(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_ParentNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childNodes` instead
    ///
    pub const ChildNodes = childNodes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn childNodes(self: QDomProcessingInstruction) QDomNodeList {
        return .{ .ptr = qtc.QDomNode_ChildNodes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstChild` instead
    ///
    pub const FirstChild = firstChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn firstChild(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_FirstChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChild` instead
    ///
    pub const LastChild = lastChild;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn lastChild(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_LastChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSibling` instead
    ///
    pub const PreviousSibling = previousSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn previousSibling(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_PreviousSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSibling` instead
    ///
    pub const NextSibling = nextSibling;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn nextSibling(self: QDomProcessingInstruction) QDomNode {
        return .{ .ptr = qtc.QDomNode_NextSibling(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn attributes(self: QDomProcessingInstruction) QDomNamedNodeMap {
        return .{ .ptr = qtc.QDomNode_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownerDocument` instead
    ///
    pub const OwnerDocument = ownerDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn ownerDocument(self: QDomProcessingInstruction) QDomDocument {
        return .{ .ptr = qtc.QDomNode_OwnerDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceURI` instead
    ///
    pub const NamespaceURI = namespaceURI;

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
    pub fn namespaceURI(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomProcessingInstruction.namespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

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
    pub fn localName(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomProcessingInstruction.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAttributes` instead
    ///
    pub const HasAttributes = hasAttributes;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn hasAttributes(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nodeValue` instead
    ///
    pub const NodeValue = nodeValue;

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
    pub fn nodeValue(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomProcessingInstruction.nodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNodeValue` instead
    ///
    pub const SetNodeValue = setNodeValue;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setNodeValue(self: QDomProcessingInstruction, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

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
    pub fn prefix(self: QDomProcessingInstruction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDomProcessingInstruction.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrefix` instead
    ///
    pub const SetPrefix = setPrefix;

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
    pub fn setPrefix(self: QDomProcessingInstruction, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self.ptr), pre_str);
    }

    /// ### DEPRECATED: Use `isAttr` instead
    ///
    pub const IsAttr = isAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isAttr(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATASection` instead
    ///
    pub const IsCDATASection = isCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isCDATASection(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentFragment` instead
    ///
    pub const IsDocumentFragment = isDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isDocumentFragment(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocument` instead
    ///
    pub const IsDocument = isDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isDocument(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDocumentType` instead
    ///
    pub const IsDocumentType = isDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isDocumentType(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isElement` instead
    ///
    pub const IsElement = isElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isElement(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isEntityReference(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isText` instead
    ///
    pub const IsText = isText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isText(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntity` instead
    ///
    pub const IsEntity = isEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isEntity(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNotation` instead
    ///
    pub const IsNotation = isNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isNotation(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isProcessingInstruction(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacterData` instead
    ///
    pub const IsCharacterData = isCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isCharacterData(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isComment(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `namedItem` instead
    ///
    pub const NamedItem = namedItem;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn namedItem(self: QDomProcessingInstruction, _name: []const u8) QDomNode {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NamedItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn isNull(self: QDomProcessingInstruction) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn clear(self: QDomProcessingInstruction) void {
        qtc.QDomNode_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toAttr` instead
    ///
    pub const ToAttr = toAttr;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toAttr(self: QDomProcessingInstruction) QDomAttr {
        return .{ .ptr = qtc.QDomNode_ToAttr(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCDATASection` instead
    ///
    pub const ToCDATASection = toCDATASection;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toCDATASection(self: QDomProcessingInstruction) QDomCDATASection {
        return .{ .ptr = qtc.QDomNode_ToCDATASection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentFragment` instead
    ///
    pub const ToDocumentFragment = toDocumentFragment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toDocumentFragment(self: QDomProcessingInstruction) QDomDocumentFragment {
        return .{ .ptr = qtc.QDomNode_ToDocumentFragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocument` instead
    ///
    pub const ToDocument = toDocument;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toDocument(self: QDomProcessingInstruction) QDomDocument {
        return .{ .ptr = qtc.QDomNode_ToDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDocumentType` instead
    ///
    pub const ToDocumentType = toDocumentType;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toDocumentType(self: QDomProcessingInstruction) QDomDocumentType {
        return .{ .ptr = qtc.QDomNode_ToDocumentType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toElement` instead
    ///
    pub const ToElement = toElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_ToElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntityReference` instead
    ///
    pub const ToEntityReference = toEntityReference;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toEntityReference(self: QDomProcessingInstruction) QDomEntityReference {
        return .{ .ptr = qtc.QDomNode_ToEntityReference(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toText` instead
    ///
    pub const ToText = toText;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toText(self: QDomProcessingInstruction) QDomText {
        return .{ .ptr = qtc.QDomNode_ToText(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toEntity(self: QDomProcessingInstruction) QDomEntity {
        return .{ .ptr = qtc.QDomNode_ToEntity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toNotation` instead
    ///
    pub const ToNotation = toNotation;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toNotation(self: QDomProcessingInstruction) QDomNotation {
        return .{ .ptr = qtc.QDomNode_ToNotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toProcessingInstruction` instead
    ///
    pub const ToProcessingInstruction = toProcessingInstruction;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toProcessingInstruction(self: QDomProcessingInstruction) QDomProcessingInstruction {
        return .{ .ptr = qtc.QDomNode_ToProcessingInstruction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharacterData` instead
    ///
    pub const ToCharacterData = toCharacterData;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toCharacterData(self: QDomProcessingInstruction) QDomCharacterData {
        return .{ .ptr = qtc.QDomNode_ToCharacterData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toComment` instead
    ///
    pub const ToComment = toComment;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn toComment(self: QDomProcessingInstruction) QDomComment {
        return .{ .ptr = qtc.QDomNode_ToComment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QDomProcessingInstruction, param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `firstChildElement` instead
    ///
    pub const FirstChildElement = firstChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn firstChildElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_FirstChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastChildElement` instead
    ///
    pub const LastChildElement = lastChildElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn lastChildElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_LastChildElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement` instead
    ///
    pub const PreviousSiblingElement = previousSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn previousSiblingElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement` instead
    ///
    pub const NextSiblingElement = nextSiblingElement;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn nextSiblingElement(self: QDomProcessingInstruction) QDomElement {
        return .{ .ptr = qtc.QDomNode_NextSiblingElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn lineNumber(self: QDomProcessingInstruction) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn columnNumber(self: QDomProcessingInstruction) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cloneNode1` instead
    ///
    pub const CloneNode1 = cloneNode1;

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
    pub fn cloneNode1(self: QDomProcessingInstruction, deep: bool) QDomNode {
        return .{ .ptr = qtc.QDomNode_CloneNode1(@ptrCast(self.ptr), deep) };
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QDomProcessingInstruction, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QTextStream;
        qtc.QDomNode_Save3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `firstChildElement1` instead
    ///
    pub const FirstChildElement1 = firstChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn firstChildElement1(self: QDomProcessingInstruction, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `firstChildElement2` instead
    ///
    pub const FirstChildElement2 = firstChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn firstChildElement2(self: QDomProcessingInstruction, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_FirstChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement1` instead
    ///
    pub const LastChildElement1 = lastChildElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn lastChildElement1(self: QDomProcessingInstruction, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `lastChildElement2` instead
    ///
    pub const LastChildElement2 = lastChildElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn lastChildElement2(self: QDomProcessingInstruction, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_LastChildElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement1` instead
    ///
    pub const PreviousSiblingElement1 = previousSiblingElement1;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _tagName: []const u8 `
    ///
    pub fn previousSiblingElement1(self: QDomProcessingInstruction, _tagName: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self.ptr), tagName_str) };
    }

    /// ### DEPRECATED: Use `previousSiblingElement2` instead
    ///
    pub const PreviousSiblingElement2 = previousSiblingElement2;

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    /// ` _tagName: []const u8 `
    ///
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn previousSiblingElement2(self: QDomProcessingInstruction, _tagName: []const u8, _namespaceURI: []const u8) QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = _tagName.len,
            .data = _tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self.ptr), tagName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement1` instead
    ///
    pub const NextSiblingElement1 = nextSiblingElement1;

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
    pub fn nextSiblingElement1(self: QDomProcessingInstruction, taName: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement1(@ptrCast(self.ptr), taName_str) };
    }

    /// ### DEPRECATED: Use `nextSiblingElement2` instead
    ///
    pub const NextSiblingElement2 = nextSiblingElement2;

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
    /// ` _namespaceURI: []const u8 `
    ///
    pub fn nextSiblingElement2(self: QDomProcessingInstruction, taName: []const u8, _namespaceURI: []const u8) QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = _namespaceURI.len,
            .data = _namespaceURI.ptr,
        };
        return .{ .ptr = qtc.QDomNode_NextSiblingElement2(@ptrCast(self.ptr), taName_str, namespaceURI_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#dtor.QDomProcessingInstruction)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomProcessingInstruction `
    ///
    pub fn delete(self: QDomProcessingInstruction) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDomDocument::ParseResult object in C++ memory
    ///
    pub fn new() QDomDocument__ParseResult {
        return .{ .ptr = qtc.QDomDocument__ParseResult_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDomDocument::ParseResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDomDocument__ParseResult `
    ///
    pub fn new2(param1: anytype) QDomDocument__ParseResult {
        comptime _ = @TypeOf(param1)._is_QDomDocument__ParseResult;
        return .{ .ptr = qtc.QDomDocument__ParseResult_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `errorMessage` instead
    ///
    pub const ErrorMessage = errorMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorMessage(self: QDomDocument__ParseResult, allocator: std.mem.Allocator) []const u8 {
        var errorMessage_str = qtc.QDomDocument__ParseResult_ErrorMessage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&errorMessage_str);
        const errorMessage_ret = allocator.alloc(u8, errorMessage_str.len) catch @panic("QDomDocument__ParseResult.errorMessage: Memory allocation failed");
        @memcpy(errorMessage_ret, errorMessage_str.data[0..errorMessage_str.len]);
        return errorMessage_ret;
    }

    /// ### DEPRECATED: Use `setErrorMessage` instead
    ///
    pub const SetErrorMessage = setErrorMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` _errorMessage: []const u8 `
    ///
    pub fn setErrorMessage(self: QDomDocument__ParseResult, _errorMessage: []const u8) void {
        const errorMessage_str = qtc.libqt_string{
            .len = _errorMessage.len,
            .data = _errorMessage.ptr,
        };
        qtc.QDomDocument__ParseResult_SetErrorMessage(@ptrCast(self.ptr), errorMessage_str);
    }

    /// ### DEPRECATED: Use `errorLine` instead
    ///
    pub const ErrorLine = errorLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn errorLine(self: QDomDocument__ParseResult) isize {
        return qtc.QDomDocument__ParseResult_ErrorLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setErrorLine` instead
    ///
    pub const SetErrorLine = setErrorLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` _errorLine: isize `
    ///
    pub fn setErrorLine(self: QDomDocument__ParseResult, _errorLine: isize) void {
        qtc.QDomDocument__ParseResult_SetErrorLine(@ptrCast(self.ptr), @bitCast(_errorLine));
    }

    /// ### DEPRECATED: Use `errorColumn` instead
    ///
    pub const ErrorColumn = errorColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn errorColumn(self: QDomDocument__ParseResult) isize {
        return qtc.QDomDocument__ParseResult_ErrorColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setErrorColumn` instead
    ///
    pub const SetErrorColumn = setErrorColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` _errorColumn: isize `
    ///
    pub fn setErrorColumn(self: QDomDocument__ParseResult, _errorColumn: isize) void {
        qtc.QDomDocument__ParseResult_SetErrorColumn(@ptrCast(self.ptr), @bitCast(_errorColumn));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn toBool(self: QDomDocument__ParseResult) bool {
        return qtc.QDomDocument__ParseResult_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    /// ` param1: QDomDocument__ParseResult `
    ///
    pub fn operatorAssign(self: QDomDocument__ParseResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDomDocument__ParseResult;
        qtc.QDomDocument__ParseResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDomDocument__ParseResult `
    ///
    pub fn delete(self: QDomDocument__ParseResult) void {
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
