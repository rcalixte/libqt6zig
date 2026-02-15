const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdom_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html)
pub const qdomimplementation = struct {
    /// New constructs a new QDomImplementation object.
    ///
    pub fn New() QtC.QDomImplementation {
        return qtc.QDomImplementation_new();
    }

    /// New2 constructs a new QDomImplementation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` implementation: QtC.QDomImplementation `
    ///
    pub fn New2(implementation: ?*anyopaque) QtC.QDomImplementation {
        return qtc.QDomImplementation_new2(@ptrCast(implementation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    /// ` other: QtC.QDomImplementation `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomImplementation_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    /// ` other: QtC.QDomImplementation `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomImplementation_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    /// ` other: QtC.QDomImplementation `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomImplementation_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn HasFeature(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomImplementation_HasFeature(@ptrCast(self), feature_str, version_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#createDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` publicId: []const u8 `
    ///
    /// ` systemId: []const u8 `
    ///
    pub fn CreateDocumentType(self: ?*anyopaque, qName: []const u8, publicId: []const u8, systemId: []const u8) QtC.QDomDocumentType {
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
        return qtc.QDomImplementation_CreateDocumentType(@ptrCast(self), qName_str, publicId_str, systemId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#createDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` doctype: QtC.QDomDocumentType `
    ///
    pub fn CreateDocument(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, doctype: ?*anyopaque) QtC.QDomDocument {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        return qtc.QDomImplementation_CreateDocument(@ptrCast(self), nsURI_str, qName_str, @ptrCast(doctype));
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
        qtc.QDomImplementation_SetInvalidDataPolicy(@intCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomImplementation_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomimplementation.html#dtor.QDomImplementation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomImplementation `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomImplementation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html)
pub const qdomnode = struct {
    /// New constructs a new QDomNode object.
    ///
    pub fn New() QtC.QDomNode {
        return qtc.QDomNode_new();
    }

    /// New2 constructs a new QDomNode object.
    ///
    /// ## Parameter(s):
    ///
    /// ` node: QtC.QDomNode `
    ///
    pub fn New2(node: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_new2(@ptrCast(node));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNode_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomNode_NodeType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNode `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#dtor.QDomNode)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomNode `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNode_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html)
pub const qdomnodelist = struct {
    /// New constructs a new QDomNodeList object.
    ///
    pub fn New() QtC.QDomNodeList {
        return qtc.QDomNodeList_new();
    }

    /// New2 constructs a new QDomNodeList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` nodeList: QtC.QDomNodeList `
    ///
    pub fn New2(nodeList: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNodeList_new2(@ptrCast(nodeList));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    /// ` other: QtC.QDomNodeList `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNodeList_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    /// ` other: QtC.QDomNodeList `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNodeList_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    /// ` other: QtC.QDomNodeList `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNodeList_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    /// ` index: i32 `
    ///
    pub fn Item(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNodeList_Item(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNodeList_At(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomNodeList_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDomNodeList_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    pub fn Size(self: ?*anyopaque) i32 {
        return qtc.QDomNodeList_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QDomNodeList_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnodelist.html#dtor.QDomNodeList)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomNodeList `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNodeList_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html)
pub const qdomdocumenttype = struct {
    /// New constructs a new QDomDocumentType object.
    ///
    pub fn New() QtC.QDomDocumentType {
        return qtc.QDomDocumentType_new();
    }

    /// New2 constructs a new QDomDocumentType object.
    ///
    /// ## Parameter(s):
    ///
    /// ` documentType: QtC.QDomDocumentType `
    ///
    pub fn New2(documentType: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomDocumentType_new2(@ptrCast(documentType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` other: QtC.QDomDocumentType `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocumentType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#entities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn Entities(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomDocumentType_Entities(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#notations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn Notations(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomDocumentType_Notations(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PublicId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_PublicId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_SystemId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#internalSubset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InternalSubset(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocumentType_InternalSubset(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.InternalSubset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomDocumentType_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumenttype.html#dtor.QDomDocumentType)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomDocumentType `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocumentType_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html)
pub const qdomdocument = struct {
    /// New constructs a new QDomDocument object.
    ///
    pub fn New() QtC.QDomDocument {
        return qtc.QDomDocument_new();
    }

    /// New2 constructs a new QDomDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New2(name: []const u8) QtC.QDomDocument {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDomDocument_new2(name_str);
    }

    /// New3 constructs a new QDomDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` doctype: QtC.QDomDocumentType `
    ///
    pub fn New3(doctype: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomDocument_new3(@ptrCast(doctype));
    }

    /// New4 constructs a new QDomDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QtC.QDomDocument `
    ///
    pub fn New4(document: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomDocument_new4(@ptrCast(document));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` other: QtC.QDomDocument `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocument_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn CreateElement(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomDocument_CreateElement(@ptrCast(self), tagName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn CreateDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomDocument_CreateDocumentFragment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createTextNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateTextNode(self: ?*anyopaque, data: []const u8) QtC.QDomText {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_CreateTextNode(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateComment(self: ?*anyopaque, data: []const u8) QtC.QDomComment {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_CreateComment(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateCDATASection(self: ?*anyopaque, data: []const u8) QtC.QDomCDATASection {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_CreateCDATASection(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` target: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    pub fn CreateProcessingInstruction(self: ?*anyopaque, target: []const u8, data: []const u8) QtC.QDomProcessingInstruction {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_CreateProcessingInstruction(@ptrCast(self), target_str, data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateAttribute(self: ?*anyopaque, name: []const u8) QtC.QDomAttr {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomDocument_CreateAttribute(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CreateEntityReference(self: ?*anyopaque, name: []const u8) QtC.QDomEntityReference {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomDocument_CreateEntityReference(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagname: []const u8 `
    ///
    pub fn ElementsByTagName(self: ?*anyopaque, tagname: []const u8) QtC.QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return qtc.QDomDocument_ElementsByTagName(@ptrCast(self), tagname_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#importNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` importedNode: QtC.QDomNode `
    ///
    /// ` deep: bool `
    ///
    pub fn ImportNode(self: ?*anyopaque, importedNode: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomDocument_ImportNode(@ptrCast(self), @ptrCast(importedNode), deep);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createElementNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    pub fn CreateElementNS(self: ?*anyopaque, nsURI: []const u8, qName: []const u8) QtC.QDomElement {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        return qtc.QDomDocument_CreateElementNS(@ptrCast(self), nsURI_str, qName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#createAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    pub fn CreateAttributeNS(self: ?*anyopaque, nsURI: []const u8, qName: []const u8) QtC.QDomAttr {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        return qtc.QDomDocument_CreateAttributeNS(@ptrCast(self), nsURI_str, qName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagNameNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn ElementsByTagNameNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNodeList {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return qtc.QDomDocument_ElementsByTagNameNS(@ptrCast(self), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#elementById)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn ElementById(self: ?*anyopaque, elementId: []const u8) QtC.QDomElement {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.QDomDocument_ElementById(@ptrCast(self), elementId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#doctype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn Doctype(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomDocument_Doctype(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#implementation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn Implementation(self: ?*anyopaque) QtC.QDomImplementation {
        return qtc.QDomDocument_Implementation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#documentElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn DocumentElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomDocument_DocumentElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomDocument_NodeType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` text: []u8 `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent(self: ?*anyopaque, text: []u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent(@ptrCast(self), text_str, namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` text: []const u8 `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent2(self: ?*anyopaque, text: []const u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent2(@ptrCast(self), text_str, namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` dev: QtC.QIODevice `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent3(self: ?*anyopaque, dev: ?*anyopaque, namespaceProcessing: bool) bool {
        return qtc.QDomDocument_SetContent3(@ptrCast(self), @ptrCast(dev), namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` reader: QtC.QXmlStreamReader `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetContent7(self: ?*anyopaque, reader: ?*anyopaque, namespaceProcessing: bool) bool {
        return qtc.QDomDocument_SetContent7(@ptrCast(self), @ptrCast(reader), namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetContent8(self: ?*anyopaque, data: []const u8) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent8(@ptrCast(self), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetContent9(self: ?*anyopaque, device: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent9(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` reader: QtC.QXmlStreamReader `
    ///
    pub fn SetContent10(self: ?*anyopaque, reader: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent10(@ptrCast(self), @ptrCast(reader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocument_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdomdocument.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` data: []const u8 `
    ///
    /// ` options: flag of qdom_enums.ParseOption `
    ///
    pub fn SetContent22(self: ?*anyopaque, data: []const u8, options: i32) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent22(@ptrCast(self), data.ptr, @intCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` options: flag of qdom_enums.ParseOption `
    ///
    pub fn SetContent23(self: ?*anyopaque, device: ?*anyopaque, options: i32) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent23(@ptrCast(self), @ptrCast(device), @intCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` reader: QtC.QXmlStreamReader `
    ///
    /// ` options: flag of qdom_enums.ParseOption `
    ///
    pub fn SetContent24(self: ?*anyopaque, reader: ?*anyopaque, options: i32) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent24(@ptrCast(self), @ptrCast(reader), @intCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` indent: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, indent: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomDocument_ToString1(@ptrCast(self), @intCast(indent));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` indent: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray1(self: ?*anyopaque, indent: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray1(@ptrCast(self), @intCast(indent));
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
    /// ` self: QtC.QDomDocument `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomDocument `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomDocument `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomDocument `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument.html#dtor.QDomDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomDocument `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocument_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html)
pub const qdomnamednodemap = struct {
    /// New constructs a new QDomNamedNodeMap object.
    ///
    pub fn New() QtC.QDomNamedNodeMap {
        return qtc.QDomNamedNodeMap_new();
    }

    /// New2 constructs a new QDomNamedNodeMap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` namedNodeMap: QtC.QDomNamedNodeMap `
    ///
    pub fn New2(namedNodeMap: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNamedNodeMap_new2(@ptrCast(namedNodeMap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` other: QtC.QDomNamedNodeMap `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNamedNodeMap_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` other: QtC.QDomNamedNodeMap `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` other: QtC.QDomNamedNodeMap `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNamedNodeMap_NamedItem(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` newNode: QtC.QDomNode `
    ///
    pub fn SetNamedItem(self: ?*anyopaque, newNode: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_SetNamedItem(@ptrCast(self), @ptrCast(newNode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveNamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNamedNodeMap_RemoveNamedItem(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` index: i32 `
    ///
    pub fn Item(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_Item(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn NamedItemNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNode {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return qtc.QDomNamedNodeMap_NamedItemNS(@ptrCast(self), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` newNode: QtC.QDomNode `
    ///
    pub fn SetNamedItemNS(self: ?*anyopaque, newNode: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_SetNamedItemNS(@ptrCast(self), @ptrCast(newNode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItemNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn RemoveNamedItemNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNode {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return qtc.QDomNamedNodeMap_RemoveNamedItemNS(@ptrCast(self), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomNamedNodeMap_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDomNamedNodeMap_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    pub fn Size(self: ?*anyopaque) i32 {
        return qtc.QDomNamedNodeMap_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNamedNodeMap_Contains(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnamednodemap.html#dtor.QDomNamedNodeMap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomNamedNodeMap `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNamedNodeMap_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html)
pub const qdomdocumentfragment = struct {
    /// New constructs a new QDomDocumentFragment object.
    ///
    pub fn New() QtC.QDomDocumentFragment {
        return qtc.QDomDocumentFragment_new();
    }

    /// New2 constructs a new QDomDocumentFragment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` documentFragment: QtC.QDomDocumentFragment `
    ///
    pub fn New2(documentFragment: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomDocumentFragment_new2(@ptrCast(documentFragment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` other: QtC.QDomDocumentFragment `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocumentFragment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomDocumentFragment_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocumentfragment.html#dtor.QDomDocumentFragment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomDocumentFragment `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocumentFragment_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html)
pub const qdomcharacterdata = struct {
    /// New constructs a new QDomCharacterData object.
    ///
    pub fn New() QtC.QDomCharacterData {
        return qtc.QDomCharacterData_new();
    }

    /// New2 constructs a new QDomCharacterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` characterData: QtC.QDomCharacterData `
    ///
    pub fn New2(characterData: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomCharacterData_new2(@ptrCast(characterData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` other: QtC.QDomCharacterData `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomCharacterData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` offset: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#dtor.QDomCharacterData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomCharacterData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomCharacterData_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html)
pub const qdomattr = struct {
    /// New constructs a new QDomAttr object.
    ///
    pub fn New() QtC.QDomAttr {
        return qtc.QDomAttr_new();
    }

    /// New2 constructs a new QDomAttr object.
    ///
    /// ## Parameter(s):
    ///
    /// ` attr: QtC.QDomAttr `
    ///
    pub fn New2(attr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomAttr_new2(@ptrCast(attr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` other: QtC.QDomAttr `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomAttr_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomAttr_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#specified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn Specified(self: ?*anyopaque) bool {
        return qtc.QDomAttr_Specified(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#ownerElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn OwnerElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomAttr_OwnerElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomAttr_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomAttr_SetValue(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomAttr_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomAttr `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomAttr `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomAttr `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomAttr `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomattr.html#dtor.QDomAttr)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomAttr `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomAttr_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html)
pub const qdomelement = struct {
    /// New constructs a new QDomElement object.
    ///
    pub fn New() QtC.QDomElement {
        return qtc.QDomElement_new();
    }

    /// New2 constructs a new QDomElement object.
    ///
    /// ## Parameter(s):
    ///
    /// ` element: QtC.QDomElement `
    ///
    pub fn New2(element: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomElement_new2(@ptrCast(element));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` other: QtC.QDomElement `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomElement_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attribute(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QDomElement_Attribute(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAttribute(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomElement_SetAttribute(@ptrCast(self), name_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: i64 `
    ///
    pub fn SetAttribute2(self: ?*anyopaque, name: []const u8, value: i64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute2(@ptrCast(self), name_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: u64 `
    ///
    pub fn SetAttribute3(self: ?*anyopaque, name: []const u8, value: u64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute3(@ptrCast(self), name_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: i32 `
    ///
    pub fn SetAttribute4(self: ?*anyopaque, name: []const u8, value: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute4(@ptrCast(self), name_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn SetAttribute5(self: ?*anyopaque, name: []const u8, value: u32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute5(@ptrCast(self), name_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: f32 `
    ///
    pub fn SetAttribute6(self: ?*anyopaque, name: []const u8, value: f32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute6(@ptrCast(self), name_str, @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttribute7(self: ?*anyopaque, name: []const u8, value: f64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute7(@ptrCast(self), name_str, @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveAttribute(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_RemoveAttribute(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AttributeNode(self: ?*anyopaque, name: []const u8) QtC.QDomAttr {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomElement_AttributeNode(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` newAttr: QtC.QDomAttr `
    ///
    pub fn SetAttributeNode(self: ?*anyopaque, newAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_SetAttributeNode(@ptrCast(self), @ptrCast(newAttr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` oldAttr: QtC.QDomAttr `
    ///
    pub fn RemoveAttributeNode(self: ?*anyopaque, oldAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_RemoveAttributeNode(@ptrCast(self), @ptrCast(oldAttr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` tagname: []const u8 `
    ///
    pub fn ElementsByTagName(self: ?*anyopaque, tagname: []const u8) QtC.QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return qtc.QDomElement_ElementsByTagName(@ptrCast(self), tagname_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasAttribute(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomElement_HasAttribute(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttributeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        var _str = qtc.QDomElement_AttributeNS(@ptrCast(self), nsURI_str, localName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.AttributeNS: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetAttributeNS(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: []const u8) void {
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
        qtc.QDomElement_SetAttributeNS(@ptrCast(self), nsURI_str, qName_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: i32 `
    ///
    pub fn SetAttributeNS2(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: i32) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS2(@ptrCast(self), nsURI_str, qName_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn SetAttributeNS3(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: u32) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS3(@ptrCast(self), nsURI_str, qName_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: i64 `
    ///
    pub fn SetAttributeNS4(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: i64) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS4(@ptrCast(self), nsURI_str, qName_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: u64 `
    ///
    pub fn SetAttributeNS5(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: u64) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS5(@ptrCast(self), nsURI_str, qName_str, @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` qName: []const u8 `
    ///
    /// ` value: f64 `
    ///
    pub fn SetAttributeNS6(self: ?*anyopaque, nsURI: []const u8, qName: []const u8, value: f64) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const qName_str = qtc.libqt_string{
            .len = qName.len,
            .data = qName.ptr,
        };
        qtc.QDomElement_SetAttributeNS6(@ptrCast(self), nsURI_str, qName_str, @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn RemoveAttributeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) void {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        qtc.QDomElement_RemoveAttributeNS(@ptrCast(self), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNodeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn AttributeNodeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomAttr {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return qtc.QDomElement_AttributeNodeNS(@ptrCast(self), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNodeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` newAttr: QtC.QDomAttr `
    ///
    pub fn SetAttributeNodeNS(self: ?*anyopaque, newAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_SetAttributeNodeNS(@ptrCast(self), @ptrCast(newAttr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagNameNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn ElementsByTagNameNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) QtC.QDomNodeList {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return qtc.QDomElement_ElementsByTagNameNS(@ptrCast(self), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#hasAttributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    pub fn HasAttributeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8) bool {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        return qtc.QDomElement_HasAttributeNS(@ptrCast(self), nsURI_str, localName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#tagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TagName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomElement_TagName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.TagName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#setTagName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetTagName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetTagName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomElement_Attributes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomElement_NodeType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomElement_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    /// ` defValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attribute2(self: ?*anyopaque, name: []const u8, defValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const defValue_str = qtc.libqt_string{
            .len = defValue.len,
            .data = defValue.ptr,
        };
        var _str = qtc.QDomElement_Attribute2(@ptrCast(self), name_str, defValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` nsURI: []const u8 `
    ///
    /// ` localName: []const u8 `
    ///
    /// ` defValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttributeNS3(self: ?*anyopaque, nsURI: []const u8, localName: []const u8, defValue: []const u8, allocator: std.mem.Allocator) []const u8 {
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
        var _str = qtc.QDomElement_AttributeNS3(@ptrCast(self), nsURI_str, localName_str, defValue_str);
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
    /// ` self: QtC.QDomElement `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomElement `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomElement `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomElement `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomElement `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomElement `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomelement.html#dtor.QDomElement)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomElement `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomElement_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html)
pub const qdomtext = struct {
    /// New constructs a new QDomText object.
    ///
    pub fn New() QtC.QDomText {
        return qtc.QDomText_new();
    }

    /// New2 constructs a new QDomText object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: QtC.QDomText `
    ///
    pub fn New2(text: ?*anyopaque) QtC.QDomText {
        return qtc.QDomText_new2(@ptrCast(text));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` other: QtC.QDomText `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomText_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#splitText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` offset: i32 `
    ///
    pub fn SplitText(self: ?*anyopaque, offset: i32) QtC.QDomText {
        return qtc.QDomText_SplitText(@ptrCast(self), @intCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomText_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
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
    /// ` self: QtC.QDomText `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` offset: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self));
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
    /// ` self: QtC.QDomText `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomText `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomText `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomText `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomText `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomText `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#dtor.QDomText)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomText `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomText_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html)
pub const qdomcomment = struct {
    /// New constructs a new QDomComment object.
    ///
    pub fn New() QtC.QDomComment {
        return qtc.QDomComment_new();
    }

    /// New2 constructs a new QDomComment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` comment: QtC.QDomComment `
    ///
    pub fn New2(comment: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomComment_new2(@ptrCast(comment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` other: QtC.QDomComment `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomComment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomComment_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
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
    /// ` self: QtC.QDomComment `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` offset: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self));
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
    /// ` self: QtC.QDomComment `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomComment `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomComment `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomComment `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomComment `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomComment `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcomment.html#dtor.QDomComment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomComment `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomComment_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html)
pub const qdomcdatasection = struct {
    /// New constructs a new QDomCDATASection object.
    ///
    pub fn New() QtC.QDomCDATASection {
        return qtc.QDomCDATASection_new();
    }

    /// New2 constructs a new QDomCDATASection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cdataSection: QtC.QDomCDATASection `
    ///
    pub fn New2(cdataSection: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomCDATASection_new2(@ptrCast(cdataSection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` other: QtC.QDomCDATASection `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomCDATASection_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomCDATASection_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomText
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomtext.html#splitText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` offset: i32 `
    ///
    pub fn SplitText(self: ?*anyopaque, offset: i32) QtC.QDomText {
        return qtc.QDomText_SplitText(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
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
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` offset: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` offset: u64 `
    ///
    /// ` count: u64 `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomCharacterData_Data(@ptrCast(self));
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
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomcdatasection.html#dtor.QDomCDATASection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomCDATASection `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomCDATASection_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html)
pub const qdomnotation = struct {
    /// New constructs a new QDomNotation object.
    ///
    pub fn New() QtC.QDomNotation {
        return qtc.QDomNotation_new();
    }

    /// New2 constructs a new QDomNotation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` notation: QtC.QDomNotation `
    ///
    pub fn New2(notation: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNotation_new2(@ptrCast(notation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` other: QtC.QDomNotation `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNotation_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PublicId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNotation_PublicId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNotation_SystemId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomNotation_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomNotation `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomNotation `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomNotation `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomNotation `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnotation.html#dtor.QDomNotation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomNotation `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html)
pub const qdomentity = struct {
    /// New constructs a new QDomEntity object.
    ///
    pub fn New() QtC.QDomEntity {
        return qtc.QDomEntity_new();
    }

    /// New2 constructs a new QDomEntity object.
    ///
    /// ## Parameter(s):
    ///
    /// ` entity: QtC.QDomEntity `
    ///
    pub fn New2(entity: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomEntity_new2(@ptrCast(entity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` other: QtC.QDomEntity `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomEntity_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PublicId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_PublicId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_SystemId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#notationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NotationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomEntity_NotationName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NotationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomEntity_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomEntity `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomEntity `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomEntity `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntity `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentity.html#dtor.QDomEntity)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomEntity `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomEntity_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html)
pub const qdomentityreference = struct {
    /// New constructs a new QDomEntityReference object.
    ///
    pub fn New() QtC.QDomEntityReference {
        return qtc.QDomEntityReference_new();
    }

    /// New2 constructs a new QDomEntityReference object.
    ///
    /// ## Parameter(s):
    ///
    /// ` entityReference: QtC.QDomEntityReference `
    ///
    pub fn New2(entityReference: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomEntityReference_new2(@ptrCast(entityReference));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` other: QtC.QDomEntityReference `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomEntityReference_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomEntityReference_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomentityreference.html#dtor.QDomEntityReference)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomEntityReference `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomEntityReference_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html)
pub const qdomprocessinginstruction = struct {
    /// New constructs a new QDomProcessingInstruction object.
    ///
    pub fn New() QtC.QDomProcessingInstruction {
        return qtc.QDomProcessingInstruction_new();
    }

    /// New2 constructs a new QDomProcessingInstruction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` processingInstruction: QtC.QDomProcessingInstruction `
    ///
    pub fn New2(processingInstruction: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomProcessingInstruction_new2(@ptrCast(processingInstruction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` other: QtC.QDomProcessingInstruction `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomProcessingInstruction_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Target(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomProcessingInstruction_Target(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomProcessingInstruction_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomProcessingInstruction_SetData(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#nodeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ## Returns:
    ///
    /// ` qdom_enums.NodeType `
    ///
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomProcessingInstruction_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` other: QtC.QDomNode `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` refChild: QtC.QDomNode `
    ///
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` oldChild: QtC.QDomNode `
    ///
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` newChild: QtC.QDomNode `
    ///
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` feature: []const u8 `
    ///
    /// ` version: []const u8 `
    ///
    pub fn IsSupported(self: ?*anyopaque, feature: []const u8, version: []const u8) bool {
        const feature_str = qtc.libqt_string{
            .len = feature.len,
            .data = feature.ptr,
        };
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        return qtc.QDomNode_IsSupported(@ptrCast(self), feature_str, version_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeName(@ptrCast(self));
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
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
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
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_LocalName(@ptrCast(self));
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
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_NodeValue(@ptrCast(self));
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
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDomNode_Prefix(@ptrCast(self));
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
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` pre: []const u8 `
    ///
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` deep: bool `
    ///
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` param1: QtC.QTextStream `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: qdom_enums.EncodingPolicy `
    ///
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn FirstChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_FirstChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn LastChildElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_LastChildElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn PreviousSiblingElement2(self: ?*anyopaque, tagName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement2(@ptrCast(self), tagName_str, namespaceURI_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` taName: []const u8 `
    ///
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    /// ` taName: []const u8 `
    ///
    /// ` namespaceURI: []const u8 `
    ///
    pub fn NextSiblingElement2(self: ?*anyopaque, taName: []const u8, namespaceURI: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        const namespaceURI_str = qtc.libqt_string{
            .len = namespaceURI.len,
            .data = namespaceURI.ptr,
        };
        return qtc.QDomNode_NextSiblingElement2(@ptrCast(self), taName_str, namespaceURI_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#dtor.QDomProcessingInstruction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomProcessingInstruction `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomProcessingInstruction_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html)
pub const qdomdocument__parseresult = struct {
    /// New constructs a new QDomDocument::ParseResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QDomDocument__ParseResult `
    ///
    pub fn New(param1: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument__ParseResult_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorMessage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var errorMessage_str = qtc.QDomDocument__ParseResult_ErrorMessage(@ptrCast(self));
        defer qtc.libqt_string_free(&errorMessage_str);
        const errorMessage_ret = allocator.alloc(u8, errorMessage_str.len) catch @panic("qdomdocument__parseresult.ErrorMessage: Memory allocation failed");
        @memcpy(errorMessage_ret, errorMessage_str.data[0..errorMessage_str.len]);
        return errorMessage_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    /// ` errorMessage: []const u8 `
    ///
    pub fn SetErrorMessage(self: ?*anyopaque, errorMessage: []const u8) void {
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        qtc.QDomDocument__ParseResult_SetErrorMessage(@ptrCast(self), errorMessage_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    pub fn ErrorLine(self: ?*anyopaque) i64 {
        return qtc.QDomDocument__ParseResult_ErrorLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    /// ` errorLine: i64 `
    ///
    pub fn SetErrorLine(self: ?*anyopaque, errorLine: i64) void {
        qtc.QDomDocument__ParseResult_SetErrorLine(@ptrCast(self), @intCast(errorLine));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    pub fn ErrorColumn(self: ?*anyopaque) i64 {
        return qtc.QDomDocument__ParseResult_ErrorColumn(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    /// ` errorColumn: i64 `
    ///
    pub fn SetErrorColumn(self: ?*anyopaque, errorColumn: i64) void {
        qtc.QDomDocument__ParseResult_SetErrorColumn(@ptrCast(self), @intCast(errorColumn));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QDomDocument__ParseResult_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    /// ` param1: QtC.QDomDocument__ParseResult `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDomDocument__ParseResult_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDomDocument__ParseResult `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocument__ParseResult_Delete(@ptrCast(self));
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
