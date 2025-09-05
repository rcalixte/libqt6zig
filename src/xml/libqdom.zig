const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdom_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdomimplementation.html
pub const qdomimplementation = struct {
    /// New constructs a new QDomImplementation object.
    ///
    ///
    pub fn New() QtC.QDomImplementation {
        return qtc.QDomImplementation_new();
    }

    /// New2 constructs a new QDomImplementation object.
    ///
    /// ``` implementation: QtC.QDomImplementation ```
    pub fn New2(implementation: ?*anyopaque) QtC.QDomImplementation {
        return qtc.QDomImplementation_new2(@ptrCast(implementation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq)
    ///
    /// ``` self: QtC.QDomImplementation, other: QtC.QDomImplementation ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomImplementation_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomImplementation, other: QtC.QDomImplementation ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomImplementation_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomImplementation, other: QtC.QDomImplementation ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomImplementation_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#hasFeature)
    ///
    /// ``` self: QtC.QDomImplementation, feature: []const u8, version: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#createDocumentType)
    ///
    /// ``` self: QtC.QDomImplementation, qName: []const u8, publicId: []const u8, systemId: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#createDocument)
    ///
    /// ``` self: QtC.QDomImplementation, nsURI: []const u8, qName: []const u8, doctype: QtC.QDomDocumentType ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#invalidDataPolicy)
    ///
    ///
    ///
    /// Returns: ``` qdom_enums.InvalidDataPolicy ```
    pub fn InvalidDataPolicy() i32 {
        return qtc.QDomImplementation_InvalidDataPolicy();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#setInvalidDataPolicy)
    ///
    /// ``` policy: qdom_enums.InvalidDataPolicy ```
    pub fn SetInvalidDataPolicy(policy: i32) void {
        qtc.QDomImplementation_SetInvalidDataPolicy(@intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#isNull)
    ///
    /// ``` self: QtC.QDomImplementation ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomImplementation_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomimplementation.html#dtor.QDomImplementation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomImplementation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomImplementation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnode.html
pub const qdomnode = struct {
    /// New constructs a new QDomNode object.
    ///
    ///
    pub fn New() QtC.QDomNode {
        return qtc.QDomNode_new();
    }

    /// New2 constructs a new QDomNode object.
    ///
    /// ``` node: QtC.QDomNode ```
    pub fn New2(node: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_new2(@ptrCast(node));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq)
    ///
    /// ``` self: QtC.QDomNode, other: QtC.QDomNode ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNode_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomNode, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomNode, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomNode, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomNode, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomNode, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomNode, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomNode, feature: []const u8, version: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomNode, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeType)
    ///
    /// ``` self: QtC.QDomNode ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomNode_NodeType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomNode, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomNode, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomNode, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomNode, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomNode, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnode.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomNode, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomNode, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomNode, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomNode, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomNode, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomNode, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomNode, tagName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomNode, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomNode, tagName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomNode, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomNode, tagName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomNode, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomNode, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#dtor.QDomNode)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomNode ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNode_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnodelist.html
pub const qdomnodelist = struct {
    /// New constructs a new QDomNodeList object.
    ///
    ///
    pub fn New() QtC.QDomNodeList {
        return qtc.QDomNodeList_new();
    }

    /// New2 constructs a new QDomNodeList object.
    ///
    /// ``` nodeList: QtC.QDomNodeList ```
    pub fn New2(nodeList: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNodeList_new2(@ptrCast(nodeList));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq)
    ///
    /// ``` self: QtC.QDomNodeList, other: QtC.QDomNodeList ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNodeList_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomNodeList, other: QtC.QDomNodeList ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNodeList_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomNodeList, other: QtC.QDomNodeList ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNodeList_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#item)
    ///
    /// ``` self: QtC.QDomNodeList, index: i32 ```
    pub fn Item(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNodeList_Item(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#at)
    ///
    /// ``` self: QtC.QDomNodeList, index: i32 ```
    pub fn At(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNodeList_At(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#length)
    ///
    /// ``` self: QtC.QDomNodeList ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomNodeList_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#count)
    ///
    /// ``` self: QtC.QDomNodeList ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDomNodeList_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#size)
    ///
    /// ``` self: QtC.QDomNodeList ```
    pub fn Size(self: ?*anyopaque) i32 {
        return qtc.QDomNodeList_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#isEmpty)
    ///
    /// ``` self: QtC.QDomNodeList ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QDomNodeList_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnodelist.html#dtor.QDomNodeList)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomNodeList ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNodeList_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocumenttype.html
pub const qdomdocumenttype = struct {
    /// New constructs a new QDomDocumentType object.
    ///
    ///
    pub fn New() QtC.QDomDocumentType {
        return qtc.QDomDocumentType_new();
    }

    /// New2 constructs a new QDomDocumentType object.
    ///
    /// ``` documentType: QtC.QDomDocumentType ```
    pub fn New2(documentType: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomDocumentType_new2(@ptrCast(documentType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#operator-eq)
    ///
    /// ``` self: QtC.QDomDocumentType, other: QtC.QDomDocumentType ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocumentType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#name)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#entities)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn Entities(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomDocumentType_Entities(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#notations)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn Notations(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomDocumentType_Notations(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#publicId)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn PublicId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_PublicId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#systemId)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn SystemId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_SystemId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#internalSubset)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn InternalSubset(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocumentType_InternalSubset(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.InternalSubset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#nodeType)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomDocumentType_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomDocumentType, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomDocumentType, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomDocumentType, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomDocumentType, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomDocumentType, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomDocumentType, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomDocumentType, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomDocumentType, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomDocumentType, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomDocumentType, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumenttype.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomDocumentType, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomDocumentType, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomDocumentType, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomDocumentType, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomDocumentType, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocumentType, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocumentType, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocumentType, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocumentType, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentType, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentType, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentType, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentType, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumenttype.html#dtor.QDomDocumentType)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomDocumentType ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocumentType_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocument.html
pub const qdomdocument = struct {
    /// New constructs a new QDomDocument object.
    ///
    ///
    pub fn New() QtC.QDomDocument {
        return qtc.QDomDocument_new();
    }

    /// New2 constructs a new QDomDocument object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) QtC.QDomDocument {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDomDocument_new2(name_str);
    }

    /// New3 constructs a new QDomDocument object.
    ///
    /// ``` doctype: QtC.QDomDocumentType ```
    pub fn New3(doctype: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomDocument_new3(@ptrCast(doctype));
    }

    /// New4 constructs a new QDomDocument object.
    ///
    /// ``` document: QtC.QDomDocument ```
    pub fn New4(document: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomDocument_new4(@ptrCast(document));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#operator-eq)
    ///
    /// ``` self: QtC.QDomDocument, other: QtC.QDomDocument ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocument_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createElement)
    ///
    /// ``` self: QtC.QDomDocument, tagName: []const u8 ```
    pub fn CreateElement(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomDocument_CreateElement(@ptrCast(self), tagName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createDocumentFragment)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn CreateDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomDocument_CreateDocumentFragment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createTextNode)
    ///
    /// ``` self: QtC.QDomDocument, data: []const u8 ```
    pub fn CreateTextNode(self: ?*anyopaque, data: []const u8) QtC.QDomText {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_CreateTextNode(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createComment)
    ///
    /// ``` self: QtC.QDomDocument, data: []const u8 ```
    pub fn CreateComment(self: ?*anyopaque, data: []const u8) QtC.QDomComment {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_CreateComment(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createCDATASection)
    ///
    /// ``` self: QtC.QDomDocument, data: []const u8 ```
    pub fn CreateCDATASection(self: ?*anyopaque, data: []const u8) QtC.QDomCDATASection {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_CreateCDATASection(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createProcessingInstruction)
    ///
    /// ``` self: QtC.QDomDocument, target: []const u8, data: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createAttribute)
    ///
    /// ``` self: QtC.QDomDocument, name: []const u8 ```
    pub fn CreateAttribute(self: ?*anyopaque, name: []const u8) QtC.QDomAttr {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomDocument_CreateAttribute(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createEntityReference)
    ///
    /// ``` self: QtC.QDomDocument, name: []const u8 ```
    pub fn CreateEntityReference(self: ?*anyopaque, name: []const u8) QtC.QDomEntityReference {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomDocument_CreateEntityReference(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagName)
    ///
    /// ``` self: QtC.QDomDocument, tagname: []const u8 ```
    pub fn ElementsByTagName(self: ?*anyopaque, tagname: []const u8) QtC.QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return qtc.QDomDocument_ElementsByTagName(@ptrCast(self), tagname_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#importNode)
    ///
    /// ``` self: QtC.QDomDocument, importedNode: QtC.QDomNode, deep: bool ```
    pub fn ImportNode(self: ?*anyopaque, importedNode: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomDocument_ImportNode(@ptrCast(self), @ptrCast(importedNode), deep);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createElementNS)
    ///
    /// ``` self: QtC.QDomDocument, nsURI: []const u8, qName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#createAttributeNS)
    ///
    /// ``` self: QtC.QDomDocument, nsURI: []const u8, qName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#elementsByTagNameNS)
    ///
    /// ``` self: QtC.QDomDocument, nsURI: []const u8, localName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#elementById)
    ///
    /// ``` self: QtC.QDomDocument, elementId: []const u8 ```
    pub fn ElementById(self: ?*anyopaque, elementId: []const u8) QtC.QDomElement {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.QDomDocument_ElementById(@ptrCast(self), elementId_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#doctype)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn Doctype(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomDocument_Doctype(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#implementation)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn Implementation(self: ?*anyopaque) QtC.QDomImplementation {
        return qtc.QDomDocument_Implementation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#documentElement)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn DocumentElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomDocument_DocumentElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#nodeType)
    ///
    /// ``` self: QtC.QDomDocument ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomDocument_NodeType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, text: []u8, namespaceProcessing: bool ```
    pub fn SetContent(self: ?*anyopaque, text: []u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent(@ptrCast(self), text_str, namespaceProcessing);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, text: []const u8, namespaceProcessing: bool ```
    pub fn SetContent2(self: ?*anyopaque, text: []const u8, namespaceProcessing: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDomDocument_SetContent2(@ptrCast(self), text_str, namespaceProcessing);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, dev: QtC.QIODevice, namespaceProcessing: bool ```
    pub fn SetContent3(self: ?*anyopaque, dev: ?*anyopaque, namespaceProcessing: bool) bool {
        return qtc.QDomDocument_SetContent3(@ptrCast(self), @ptrCast(dev), namespaceProcessing);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, reader: QtC.QXmlStreamReader, namespaceProcessing: bool ```
    pub fn SetContent7(self: ?*anyopaque, reader: ?*anyopaque, namespaceProcessing: bool) bool {
        return qtc.QDomDocument_SetContent7(@ptrCast(self), @ptrCast(reader), namespaceProcessing);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, data: []const u8 ```
    pub fn SetContent8(self: ?*anyopaque, data: []const u8) QtC.QDomDocument__ParseResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_SetContent8(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, device: QtC.QIODevice ```
    pub fn SetContent9(self: ?*anyopaque, device: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent9(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, reader: QtC.QXmlStreamReader ```
    pub fn SetContent10(self: ?*anyopaque, reader: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent10(@ptrCast(self), @ptrCast(reader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toString)
    ///
    /// ``` self: QtC.QDomDocument, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocument_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
    ///
    /// ``` self: QtC.QDomDocument, allocator: std.mem.Allocator ```
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdomdocument.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, data: []const u8, options: flag of qdom_enums.ParseOption ```
    pub fn SetContent22(self: ?*anyopaque, data: []const u8, options: i32) QtC.QDomDocument__ParseResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QDomDocument_SetContent22(@ptrCast(self), data_str, @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, device: QtC.QIODevice, options: flag of qdom_enums.ParseOption ```
    pub fn SetContent23(self: ?*anyopaque, device: ?*anyopaque, options: i32) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent23(@ptrCast(self), @ptrCast(device), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#setContent)
    ///
    /// ``` self: QtC.QDomDocument, reader: QtC.QXmlStreamReader, options: flag of qdom_enums.ParseOption ```
    pub fn SetContent24(self: ?*anyopaque, reader: ?*anyopaque, options: i32) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument_SetContent24(@ptrCast(self), @ptrCast(reader), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toString)
    ///
    /// ``` self: QtC.QDomDocument, indent: i32, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, indent: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomDocument_ToString1(@ptrCast(self), @intCast(indent));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#toByteArray)
    ///
    /// ``` self: QtC.QDomDocument, indent: i32, allocator: std.mem.Allocator ```
    pub fn ToByteArray1(self: ?*anyopaque, indent: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDomDocument_ToByteArray1(@ptrCast(self), @intCast(indent));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdomdocument.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomDocument, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomDocument, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomDocument, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomDocument, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomDocument, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomDocument, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomDocument, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomDocument, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomDocument, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomDocument, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomDocument, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomDocument, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomDocument, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomDocument, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocument.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomDocument, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomDocument, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomDocument, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomDocument, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomDocument, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocument, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocument, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocument, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocument, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocument, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocument, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocument, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocument, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument.html#dtor.QDomDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomDocument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnamednodemap.html
pub const qdomnamednodemap = struct {
    /// New constructs a new QDomNamedNodeMap object.
    ///
    ///
    pub fn New() QtC.QDomNamedNodeMap {
        return qtc.QDomNamedNodeMap_new();
    }

    /// New2 constructs a new QDomNamedNodeMap object.
    ///
    /// ``` namedNodeMap: QtC.QDomNamedNodeMap ```
    pub fn New2(namedNodeMap: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNamedNodeMap_new2(@ptrCast(namedNodeMap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, other: QtC.QDomNamedNodeMap ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNamedNodeMap_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, other: QtC.QDomNamedNodeMap ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, other: QtC.QDomNamedNodeMap ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItem)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNamedNodeMap_NamedItem(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItem)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, newNode: QtC.QDomNode ```
    pub fn SetNamedItem(self: ?*anyopaque, newNode: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_SetNamedItem(@ptrCast(self), @ptrCast(newNode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItem)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, name: []const u8 ```
    pub fn RemoveNamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNamedNodeMap_RemoveNamedItem(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#item)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, index: i32 ```
    pub fn Item(self: ?*anyopaque, index: i32) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_Item(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#namedItemNS)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, nsURI: []const u8, localName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#setNamedItemNS)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, newNode: QtC.QDomNode ```
    pub fn SetNamedItemNS(self: ?*anyopaque, newNode: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNamedNodeMap_SetNamedItemNS(@ptrCast(self), @ptrCast(newNode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#removeNamedItemNS)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, nsURI: []const u8, localName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#length)
    ///
    /// ``` self: QtC.QDomNamedNodeMap ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomNamedNodeMap_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#count)
    ///
    /// ``` self: QtC.QDomNamedNodeMap ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDomNamedNodeMap_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#size)
    ///
    /// ``` self: QtC.QDomNamedNodeMap ```
    pub fn Size(self: ?*anyopaque) i32 {
        return qtc.QDomNamedNodeMap_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#isEmpty)
    ///
    /// ``` self: QtC.QDomNamedNodeMap ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QDomNamedNodeMap_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#contains)
    ///
    /// ``` self: QtC.QDomNamedNodeMap, name: []const u8 ```
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNamedNodeMap_Contains(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnamednodemap.html#dtor.QDomNamedNodeMap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomNamedNodeMap ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNamedNodeMap_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocumentfragment.html
pub const qdomdocumentfragment = struct {
    /// New constructs a new QDomDocumentFragment object.
    ///
    ///
    pub fn New() QtC.QDomDocumentFragment {
        return qtc.QDomDocumentFragment_new();
    }

    /// New2 constructs a new QDomDocumentFragment object.
    ///
    /// ``` documentFragment: QtC.QDomDocumentFragment ```
    pub fn New2(documentFragment: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomDocumentFragment_new2(@ptrCast(documentFragment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumentfragment.html#operator-eq)
    ///
    /// ``` self: QtC.QDomDocumentFragment, other: QtC.QDomDocumentFragment ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomDocumentFragment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumentfragment.html#nodeType)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomDocumentFragment_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomDocumentFragment, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomDocumentFragment, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomDocumentFragment, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomDocumentFragment, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomDocumentFragment, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomDocumentFragment, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomDocumentFragment, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomDocumentFragment, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomDocumentFragment, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomDocumentFragment, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomDocumentFragment, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomDocumentFragment, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomDocumentFragment, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomDocumentFragment, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomdocumentfragment.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomDocumentFragment, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomDocumentFragment, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomDocumentFragment, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomDocumentFragment, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomDocumentFragment, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomDocumentFragment, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocumentfragment.html#dtor.QDomDocumentFragment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomDocumentFragment ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocumentFragment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomcharacterdata.html
pub const qdomcharacterdata = struct {
    /// New constructs a new QDomCharacterData object.
    ///
    ///
    pub fn New() QtC.QDomCharacterData {
        return qtc.QDomCharacterData_new();
    }

    /// New2 constructs a new QDomCharacterData object.
    ///
    /// ``` characterData: QtC.QDomCharacterData ```
    pub fn New2(characterData: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomCharacterData_new2(@ptrCast(characterData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#operator-eq)
    ///
    /// ``` self: QtC.QDomCharacterData, other: QtC.QDomCharacterData ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomCharacterData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ``` self: QtC.QDomCharacterData, offset: u64, count: u64, allocator: std.mem.Allocator ```
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ``` self: QtC.QDomCharacterData, arg: []const u8 ```
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ``` self: QtC.QDomCharacterData, offset: u64, arg: []const u8 ```
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ``` self: QtC.QDomCharacterData, offset: u64, count: u64 ```
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ``` self: QtC.QDomCharacterData, offset: u64, count: u64, arg: []const u8 ```
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ``` self: QtC.QDomCharacterData, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ``` self: QtC.QDomCharacterData, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#nodeType)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomCharacterData, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomCharacterData, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomCharacterData, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomCharacterData, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomCharacterData, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomCharacterData, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomCharacterData, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomCharacterData, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomCharacterData, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomCharacterData, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomCharacterData, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomCharacterData, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomCharacterData, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomCharacterData, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcharacterdata.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomCharacterData, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomCharacterData, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomCharacterData, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomCharacterData, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomCharacterData, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomCharacterData, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomCharacterData, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomCharacterData, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomCharacterData, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomCharacterData, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomCharacterData, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomCharacterData, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomCharacterData, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#dtor.QDomCharacterData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomCharacterData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomCharacterData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomattr.html
pub const qdomattr = struct {
    /// New constructs a new QDomAttr object.
    ///
    ///
    pub fn New() QtC.QDomAttr {
        return qtc.QDomAttr_new();
    }

    /// New2 constructs a new QDomAttr object.
    ///
    /// ``` attr: QtC.QDomAttr ```
    pub fn New2(attr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomAttr_new2(@ptrCast(attr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#operator-eq)
    ///
    /// ``` self: QtC.QDomAttr, other: QtC.QDomAttr ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomAttr_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#name)
    ///
    /// ``` self: QtC.QDomAttr, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomAttr_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#specified)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn Specified(self: ?*anyopaque) bool {
        return qtc.QDomAttr_Specified(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#ownerElement)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn OwnerElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomAttr_OwnerElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#value)
    ///
    /// ``` self: QtC.QDomAttr, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomAttr_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#setValue)
    ///
    /// ``` self: QtC.QDomAttr, value: []const u8 ```
    pub fn SetValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomAttr_SetValue(@ptrCast(self), value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#nodeType)
    ///
    /// ``` self: QtC.QDomAttr ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomAttr_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomAttr, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomAttr, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomAttr, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomAttr, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomAttr, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomAttr, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomAttr, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomAttr, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomAttr, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomAttr, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomAttr, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomAttr, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomAttr, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomAttr, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomattr.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomAttr, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomAttr, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomAttr, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomAttr, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomAttr, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomAttr, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomAttr, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomAttr, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomAttr, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomAttr, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomAttr, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomAttr, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomAttr, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomattr.html#dtor.QDomAttr)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomAttr ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomAttr_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomelement.html
pub const qdomelement = struct {
    /// New constructs a new QDomElement object.
    ///
    ///
    pub fn New() QtC.QDomElement {
        return qtc.QDomElement_new();
    }

    /// New2 constructs a new QDomElement object.
    ///
    /// ``` element: QtC.QDomElement ```
    pub fn New2(element: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomElement_new2(@ptrCast(element));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#operator-eq)
    ///
    /// ``` self: QtC.QDomElement, other: QtC.QDomElement ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomElement_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Attribute(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QDomElement_Attribute(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, value: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, value: i64 ```
    pub fn SetAttribute2(self: ?*anyopaque, name: []const u8, value: i64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute2(@ptrCast(self), name_str, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, value: u64 ```
    pub fn SetAttribute3(self: ?*anyopaque, name: []const u8, value: u64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute3(@ptrCast(self), name_str, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, value: i32 ```
    pub fn SetAttribute4(self: ?*anyopaque, name: []const u8, value: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute4(@ptrCast(self), name_str, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, value: u32 ```
    pub fn SetAttribute5(self: ?*anyopaque, name: []const u8, value: u32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute5(@ptrCast(self), name_str, @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, value: f32 ```
    pub fn SetAttribute6(self: ?*anyopaque, name: []const u8, value: f32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute6(@ptrCast(self), name_str, @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, value: f64 ```
    pub fn SetAttribute7(self: ?*anyopaque, name: []const u8, value: f64) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetAttribute7(@ptrCast(self), name_str, @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#removeAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8 ```
    pub fn RemoveAttribute(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_RemoveAttribute(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNode)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8 ```
    pub fn AttributeNode(self: ?*anyopaque, name: []const u8) QtC.QDomAttr {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomElement_AttributeNode(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNode)
    ///
    /// ``` self: QtC.QDomElement, newAttr: QtC.QDomAttr ```
    pub fn SetAttributeNode(self: ?*anyopaque, newAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_SetAttributeNode(@ptrCast(self), @ptrCast(newAttr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNode)
    ///
    /// ``` self: QtC.QDomElement, oldAttr: QtC.QDomAttr ```
    pub fn RemoveAttributeNode(self: ?*anyopaque, oldAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_RemoveAttributeNode(@ptrCast(self), @ptrCast(oldAttr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagName)
    ///
    /// ``` self: QtC.QDomElement, tagname: []const u8 ```
    pub fn ElementsByTagName(self: ?*anyopaque, tagname: []const u8) QtC.QDomNodeList {
        const tagname_str = qtc.libqt_string{
            .len = tagname.len,
            .data = tagname.ptr,
        };
        return qtc.QDomElement_ElementsByTagName(@ptrCast(self), tagname_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#hasAttribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8 ```
    pub fn HasAttribute(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomElement_HasAttribute(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, localName: []const u8, allocator: std.mem.Allocator ```
    pub fn AttributeNS(self: ?*anyopaque, nsURI: []const u8, localName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const nsURI_str = qtc.libqt_string{
            .len = nsURI.len,
            .data = nsURI.ptr,
        };
        const localName_str = qtc.libqt_string{
            .len = localName.len,
            .data = localName.ptr,
        };
        const _str = qtc.QDomElement_AttributeNS(@ptrCast(self), nsURI_str, localName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.AttributeNS: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, qName: []const u8, value: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, qName: []const u8, value: i32 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, qName: []const u8, value: u32 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, qName: []const u8, value: i64 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, qName: []const u8, value: u64 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, qName: []const u8, value: f64 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#removeAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, localName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNodeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, localName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setAttributeNodeNS)
    ///
    /// ``` self: QtC.QDomElement, newAttr: QtC.QDomAttr ```
    pub fn SetAttributeNodeNS(self: ?*anyopaque, newAttr: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomElement_SetAttributeNodeNS(@ptrCast(self), @ptrCast(newAttr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#elementsByTagNameNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, localName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#hasAttributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, localName: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#tagName)
    ///
    /// ``` self: QtC.QDomElement, allocator: std.mem.Allocator ```
    pub fn TagName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomElement_TagName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.TagName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#setTagName)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8 ```
    pub fn SetTagName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDomElement_SetTagName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributes)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomElement_Attributes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#nodeType)
    ///
    /// ``` self: QtC.QDomElement ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomElement_NodeType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#text)
    ///
    /// ``` self: QtC.QDomElement, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomElement_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attribute)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8, defValue: []const u8, allocator: std.mem.Allocator ```
    pub fn Attribute2(self: ?*anyopaque, name: []const u8, defValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const defValue_str = qtc.libqt_string{
            .len = defValue.len,
            .data = defValue.ptr,
        };
        const _str = qtc.QDomElement_Attribute2(@ptrCast(self), name_str, defValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Attribute2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#attributeNS)
    ///
    /// ``` self: QtC.QDomElement, nsURI: []const u8, localName: []const u8, defValue: []const u8, allocator: std.mem.Allocator ```
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
        const _str = qtc.QDomElement_AttributeNS3(@ptrCast(self), nsURI_str, localName_str, defValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.AttributeNS3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomElement, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomElement, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomElement, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomElement, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomElement, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomElement, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomElement, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomElement, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomElement, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomElement, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomElement, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomElement, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomElement, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomElement, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomelement.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomElement, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomElement, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomElement, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomElement, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomElement, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomElement, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomElement, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomElement, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomElement, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomElement, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomElement, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomElement, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomElement, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomelement.html#dtor.QDomElement)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomElement ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomElement_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomtext.html
pub const qdomtext = struct {
    /// New constructs a new QDomText object.
    ///
    ///
    pub fn New() QtC.QDomText {
        return qtc.QDomText_new();
    }

    /// New2 constructs a new QDomText object.
    ///
    /// ``` text: QtC.QDomText ```
    pub fn New2(text: ?*anyopaque) QtC.QDomText {
        return qtc.QDomText_new2(@ptrCast(text));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#operator-eq)
    ///
    /// ``` self: QtC.QDomText, other: QtC.QDomText ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomText_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#splitText)
    ///
    /// ``` self: QtC.QDomText, offset: i32 ```
    pub fn SplitText(self: ?*anyopaque, offset: i32) QtC.QDomText {
        return qtc.QDomText_SplitText(@ptrCast(self), @intCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#nodeType)
    ///
    /// ``` self: QtC.QDomText ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomText_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ``` self: QtC.QDomText, offset: u64, count: u64, allocator: std.mem.Allocator ```
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ``` self: QtC.QDomText, arg: []const u8 ```
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ``` self: QtC.QDomText, offset: u64, arg: []const u8 ```
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ``` self: QtC.QDomText, offset: u64, count: u64 ```
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ``` self: QtC.QDomText, offset: u64, count: u64, arg: []const u8 ```
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ``` self: QtC.QDomText, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ``` self: QtC.QDomText, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomText, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomText, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomText, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomText, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomText, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomText, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomText, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomText, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomText, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomText, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomText, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomText, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomText, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomText, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomtext.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomText, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomText, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomText, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomText ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomText, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomText, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomText, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomText, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomText, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomText, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomText, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomText, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomText, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomText, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#dtor.QDomText)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomText ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomText_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomcomment.html
pub const qdomcomment = struct {
    /// New constructs a new QDomComment object.
    ///
    ///
    pub fn New() QtC.QDomComment {
        return qtc.QDomComment_new();
    }

    /// New2 constructs a new QDomComment object.
    ///
    /// ``` comment: QtC.QDomComment ```
    pub fn New2(comment: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomComment_new2(@ptrCast(comment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcomment.html#operator-eq)
    ///
    /// ``` self: QtC.QDomComment, other: QtC.QDomComment ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomComment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcomment.html#nodeType)
    ///
    /// ``` self: QtC.QDomComment ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomComment_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ``` self: QtC.QDomComment, offset: u64, count: u64, allocator: std.mem.Allocator ```
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ``` self: QtC.QDomComment, arg: []const u8 ```
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ``` self: QtC.QDomComment, offset: u64, arg: []const u8 ```
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ``` self: QtC.QDomComment, offset: u64, count: u64 ```
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ``` self: QtC.QDomComment, offset: u64, count: u64, arg: []const u8 ```
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ``` self: QtC.QDomComment, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ``` self: QtC.QDomComment, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomComment, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomComment, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomComment, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomComment, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomComment, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomComment, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomComment, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomComment, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomComment, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomComment, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomComment, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomComment, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomComment, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomComment, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcomment.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomComment, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomComment, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomComment, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomComment, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomComment, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomComment, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomComment, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomComment, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomComment, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomComment, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomComment, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomComment, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomComment, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcomment.html#dtor.QDomComment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomComment ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomComment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomcdatasection.html
pub const qdomcdatasection = struct {
    /// New constructs a new QDomCDATASection object.
    ///
    ///
    pub fn New() QtC.QDomCDATASection {
        return qtc.QDomCDATASection_new();
    }

    /// New2 constructs a new QDomCDATASection object.
    ///
    /// ``` cdataSection: QtC.QDomCDATASection ```
    pub fn New2(cdataSection: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomCDATASection_new2(@ptrCast(cdataSection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcdatasection.html#operator-eq)
    ///
    /// ``` self: QtC.QDomCDATASection, other: QtC.QDomCDATASection ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomCDATASection_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcdatasection.html#nodeType)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomCDATASection_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomText
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomtext.html#splitText)
    ///
    /// ``` self: QtC.QDomCDATASection, offset: i32 ```
    pub fn SplitText(self: ?*anyopaque, offset: i32) QtC.QDomText {
        return qtc.QDomText_SplitText(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#substringData)
    ///
    /// ``` self: QtC.QDomCDATASection, offset: u64, count: u64, allocator: std.mem.Allocator ```
    pub fn SubstringData(self: ?*anyopaque, offset: u64, count: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_SubstringData(@ptrCast(self), @intCast(offset), @intCast(count));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.SubstringData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#appendData)
    ///
    /// ``` self: QtC.QDomCDATASection, arg: []const u8 ```
    pub fn AppendData(self: ?*anyopaque, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_AppendData(@ptrCast(self), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#insertData)
    ///
    /// ``` self: QtC.QDomCDATASection, offset: u64, arg: []const u8 ```
    pub fn InsertData(self: ?*anyopaque, offset: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_InsertData(@ptrCast(self), @intCast(offset), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#deleteData)
    ///
    /// ``` self: QtC.QDomCDATASection, offset: u64, count: u64 ```
    pub fn DeleteData(self: ?*anyopaque, offset: u64, count: u64) void {
        qtc.QDomCharacterData_DeleteData(@ptrCast(self), @intCast(offset), @intCast(count));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#replaceData)
    ///
    /// ``` self: QtC.QDomCDATASection, offset: u64, count: u64, arg: []const u8 ```
    pub fn ReplaceData(self: ?*anyopaque, offset: u64, count: u64, arg: []const u8) void {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        qtc.QDomCharacterData_ReplaceData(@ptrCast(self), @intCast(offset), @intCast(count), arg_str);
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#length)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QDomCharacterData_Length(@ptrCast(self));
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#data)
    ///
    /// ``` self: QtC.QDomCDATASection, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomCharacterData_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomCharacterData
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcharacterdata.html#setData)
    ///
    /// ``` self: QtC.QDomCDATASection, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomCharacterData_SetData(@ptrCast(self), data_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomCDATASection, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomCDATASection, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomCDATASection, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomCDATASection, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomCDATASection, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomCDATASection, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomCDATASection, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomCDATASection, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomCDATASection, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomCDATASection, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomCDATASection, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomCDATASection, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomCDATASection, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomCDATASection, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomcdatasection.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomCDATASection, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomCDATASection, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomCDATASection, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomCDATASection, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomCDATASection, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomCDATASection, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomCDATASection, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomCDATASection, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomCDATASection, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomCDATASection, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomCDATASection, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomCDATASection, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomCDATASection, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomcdatasection.html#dtor.QDomCDATASection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomCDATASection ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomCDATASection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomnotation.html
pub const qdomnotation = struct {
    /// New constructs a new QDomNotation object.
    ///
    ///
    pub fn New() QtC.QDomNotation {
        return qtc.QDomNotation_new();
    }

    /// New2 constructs a new QDomNotation object.
    ///
    /// ``` notation: QtC.QDomNotation ```
    pub fn New2(notation: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNotation_new2(@ptrCast(notation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#operator-eq)
    ///
    /// ``` self: QtC.QDomNotation, other: QtC.QDomNotation ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomNotation_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#publicId)
    ///
    /// ``` self: QtC.QDomNotation, allocator: std.mem.Allocator ```
    pub fn PublicId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNotation_PublicId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#systemId)
    ///
    /// ``` self: QtC.QDomNotation, allocator: std.mem.Allocator ```
    pub fn SystemId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNotation_SystemId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#nodeType)
    ///
    /// ``` self: QtC.QDomNotation ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomNotation_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomNotation, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomNotation, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomNotation, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomNotation, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomNotation, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomNotation, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomNotation, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomNotation, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomNotation, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomNotation, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomNotation, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomNotation, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomNotation, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomNotation, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomnotation.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomNotation, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomNotation, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomNotation, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomNotation, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomNotation, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomNotation, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomNotation, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomNotation, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomNotation, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomNotation, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomNotation, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomNotation, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomNotation, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnotation.html#dtor.QDomNotation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomNotation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomNotation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomentity.html
pub const qdomentity = struct {
    /// New constructs a new QDomEntity object.
    ///
    ///
    pub fn New() QtC.QDomEntity {
        return qtc.QDomEntity_new();
    }

    /// New2 constructs a new QDomEntity object.
    ///
    /// ``` entity: QtC.QDomEntity ```
    pub fn New2(entity: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomEntity_new2(@ptrCast(entity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#operator-eq)
    ///
    /// ``` self: QtC.QDomEntity, other: QtC.QDomEntity ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomEntity_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#publicId)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn PublicId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomEntity_PublicId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.PublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#systemId)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn SystemId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomEntity_SystemId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.SystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#notationName)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn NotationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomEntity_NotationName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NotationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#nodeType)
    ///
    /// ``` self: QtC.QDomEntity ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomEntity_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomEntity, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomEntity, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomEntity, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomEntity, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomEntity, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomEntity, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomEntity, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomEntity, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomEntity, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomEntity, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentity.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomEntity, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomEntity, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomEntity, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomEntity, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomEntity, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomEntity, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomEntity, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomEntity, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomEntity, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomEntity, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomEntity, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomEntity, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomEntity, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentity.html#dtor.QDomEntity)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomEntity ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomEntity_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomentityreference.html
pub const qdomentityreference = struct {
    /// New constructs a new QDomEntityReference object.
    ///
    ///
    pub fn New() QtC.QDomEntityReference {
        return qtc.QDomEntityReference_new();
    }

    /// New2 constructs a new QDomEntityReference object.
    ///
    /// ``` entityReference: QtC.QDomEntityReference ```
    pub fn New2(entityReference: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomEntityReference_new2(@ptrCast(entityReference));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentityreference.html#operator-eq)
    ///
    /// ``` self: QtC.QDomEntityReference, other: QtC.QDomEntityReference ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomEntityReference_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentityreference.html#nodeType)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomEntityReference_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomEntityReference, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomEntityReference, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomEntityReference, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomEntityReference, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomEntityReference, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomEntityReference, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomEntityReference, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomEntityReference, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomEntityReference, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomEntityReference, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomEntityReference, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomEntityReference, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomEntityReference, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomEntityReference, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomentityreference.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomEntityReference, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomEntityReference, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomEntityReference, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomEntityReference, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomEntityReference, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomEntityReference, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomEntityReference, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomEntityReference, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomEntityReference, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomEntityReference, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomEntityReference, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomEntityReference, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomEntityReference, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomentityreference.html#dtor.QDomEntityReference)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomEntityReference ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomEntityReference_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomprocessinginstruction.html
pub const qdomprocessinginstruction = struct {
    /// New constructs a new QDomProcessingInstruction object.
    ///
    ///
    pub fn New() QtC.QDomProcessingInstruction {
        return qtc.QDomProcessingInstruction_new();
    }

    /// New2 constructs a new QDomProcessingInstruction object.
    ///
    /// ``` processingInstruction: QtC.QDomProcessingInstruction ```
    pub fn New2(processingInstruction: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomProcessingInstruction_new2(@ptrCast(processingInstruction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#operator-eq)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, other: QtC.QDomProcessingInstruction ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDomProcessingInstruction_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#target)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, allocator: std.mem.Allocator ```
    pub fn Target(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomProcessingInstruction_Target(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Target: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#data)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomProcessingInstruction_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#setData)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QDomProcessingInstruction_SetData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#nodeType)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    ///
    /// Returns: ``` qdom_enums.NodeType ```
    pub fn NodeType(self: ?*anyopaque) i32 {
        return qtc.QDomProcessingInstruction_NodeType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, other: QtC.QDomNode ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#operator-not-eq)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, other: QtC.QDomNode ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QDomNode_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertBefore)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertBefore(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertBefore(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#insertAfter)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, newChild: QtC.QDomNode, refChild: QtC.QDomNode ```
    pub fn InsertAfter(self: ?*anyopaque, newChild: ?*anyopaque, refChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_InsertAfter(@ptrCast(self), @ptrCast(newChild), @ptrCast(refChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#replaceChild)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, newChild: QtC.QDomNode, oldChild: QtC.QDomNode ```
    pub fn ReplaceChild(self: ?*anyopaque, newChild: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ReplaceChild(@ptrCast(self), @ptrCast(newChild), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#removeChild)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, oldChild: QtC.QDomNode ```
    pub fn RemoveChild(self: ?*anyopaque, oldChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_RemoveChild(@ptrCast(self), @ptrCast(oldChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#appendChild)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, newChild: QtC.QDomNode ```
    pub fn AppendChild(self: ?*anyopaque, newChild: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_AppendChild(@ptrCast(self), @ptrCast(newChild));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasChildNodes)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn HasChildNodes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn CloneNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_CloneNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#normalize)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn Normalize(self: ?*anyopaque) void {
        qtc.QDomNode_Normalize(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isSupported)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, feature: []const u8, version: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeName)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, allocator: std.mem.Allocator ```
    pub fn NodeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.NodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#parentNode)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ParentNode(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_ParentNode(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#childNodes)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ChildNodes(self: ?*anyopaque) QtC.QDomNodeList {
        return qtc.QDomNode_ChildNodes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChild)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn FirstChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_FirstChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChild)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn LastChild(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_LastChild(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSibling)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn PreviousSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_PreviousSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSibling)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn NextSibling(self: ?*anyopaque) QtC.QDomNode {
        return qtc.QDomNode_NextSibling(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#attributes)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn Attributes(self: ?*anyopaque) QtC.QDomNamedNodeMap {
        return qtc.QDomNode_Attributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#ownerDocument)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn OwnerDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_OwnerDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namespaceURI)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, allocator: std.mem.Allocator ```
    pub fn NamespaceURI(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NamespaceURI(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.NamespaceURI: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#localName)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, allocator: std.mem.Allocator ```
    pub fn LocalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_LocalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#hasAttributes)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn HasAttributes(self: ?*anyopaque) bool {
        return qtc.QDomNode_HasAttributes(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nodeValue)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, allocator: std.mem.Allocator ```
    pub fn NodeValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_NodeValue(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.NodeValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setNodeValue)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, value: []const u8 ```
    pub fn SetNodeValue(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QDomNode_SetNodeValue(@ptrCast(self), value_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#prefix)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDomNode_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdomprocessinginstruction.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#setPrefix)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, pre: []const u8 ```
    pub fn SetPrefix(self: ?*anyopaque, pre: []const u8) void {
        const pre_str = qtc.libqt_string{
            .len = pre.len,
            .data = pre.ptr,
        };
        qtc.QDomNode_SetPrefix(@ptrCast(self), pre_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isAttr)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsAttr(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCDATASection)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsCDATASection(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentFragment)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsDocumentFragment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocument)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsDocument(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isDocumentType)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsDocumentType(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsElement(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntityReference)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isText)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsText(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isEntity)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsEntity(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNotation)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsNotation(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isCharacterData)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsCharacterData(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isComment)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#namedItem)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, name: []const u8 ```
    pub fn NamedItem(self: ?*anyopaque, name: []const u8) QtC.QDomNode {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDomNode_NamedItem(@ptrCast(self), name_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#isNull)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QDomNode_IsNull(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#clear)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QDomNode_Clear(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toAttr)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToAttr(self: ?*anyopaque) QtC.QDomAttr {
        return qtc.QDomNode_ToAttr(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCDATASection)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToCDATASection(self: ?*anyopaque) QtC.QDomCDATASection {
        return qtc.QDomNode_ToCDATASection(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentFragment)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToDocumentFragment(self: ?*anyopaque) QtC.QDomDocumentFragment {
        return qtc.QDomNode_ToDocumentFragment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocument)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.QDomNode_ToDocument(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toDocumentType)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToDocumentType(self: ?*anyopaque) QtC.QDomDocumentType {
        return qtc.QDomNode_ToDocumentType(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_ToElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntityReference)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToEntityReference(self: ?*anyopaque) QtC.QDomEntityReference {
        return qtc.QDomNode_ToEntityReference(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toText)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToText(self: ?*anyopaque) QtC.QDomText {
        return qtc.QDomNode_ToText(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toEntity)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToEntity(self: ?*anyopaque) QtC.QDomEntity {
        return qtc.QDomNode_ToEntity(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toNotation)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToNotation(self: ?*anyopaque) QtC.QDomNotation {
        return qtc.QDomNode_ToNotation(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toProcessingInstruction)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToProcessingInstruction(self: ?*anyopaque) QtC.QDomProcessingInstruction {
        return qtc.QDomNode_ToProcessingInstruction(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toCharacterData)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToCharacterData(self: ?*anyopaque) QtC.QDomCharacterData {
        return qtc.QDomNode_ToCharacterData(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#toComment)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ToComment(self: ?*anyopaque) QtC.QDomComment {
        return qtc.QDomNode_ToComment(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, param1: QtC.QTextStream, param2: i32 ```
    pub fn Save(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.QDomNode_Save(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn FirstChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_FirstChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn LastChildElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_LastChildElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn PreviousSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_PreviousSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn NextSiblingElement(self: ?*anyopaque) QtC.QDomElement {
        return qtc.QDomNode_NextSiblingElement(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lineNumber)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_LineNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#columnNumber)
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return qtc.QDomNode_ColumnNumber(@ptrCast(self));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#cloneNode)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, deep: bool ```
    pub fn CloneNode1(self: ?*anyopaque, deep: bool) QtC.QDomNode {
        return qtc.QDomNode_CloneNode1(@ptrCast(self), deep);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#save)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, param1: QtC.QTextStream, param2: i32, param3: qdom_enums.EncodingPolicy ```
    pub fn Save3(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.QDomNode_Save3(@ptrCast(self), @ptrCast(param1), @intCast(param2), @intCast(param3));
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, tagName: []const u8 ```
    pub fn FirstChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_FirstChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#firstChildElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, tagName: []const u8 ```
    pub fn LastChildElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_LastChildElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#lastChildElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, tagName: []const u8 ```
    pub fn PreviousSiblingElement1(self: ?*anyopaque, tagName: []const u8) QtC.QDomElement {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        return qtc.QDomNode_PreviousSiblingElement1(@ptrCast(self), tagName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#previousSiblingElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, tagName: []const u8, namespaceURI: []const u8 ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, taName: []const u8 ```
    pub fn NextSiblingElement1(self: ?*anyopaque, taName: []const u8) QtC.QDomElement {
        const taName_str = qtc.libqt_string{
            .len = taName.len,
            .data = taName.ptr,
        };
        return qtc.QDomNode_NextSiblingElement1(@ptrCast(self), taName_str);
    }

    /// Inherited from QDomNode
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdomnode.html#nextSiblingElement)
    ///
    /// ``` self: QtC.QDomProcessingInstruction, taName: []const u8, namespaceURI: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomprocessinginstruction.html#dtor.QDomProcessingInstruction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomProcessingInstruction ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomProcessingInstruction_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdomdocument-parseresult.html
pub const qdomdocument__parseresult = struct {
    /// New constructs a new QDomDocument::ParseResult object.
    ///
    /// ``` param1: QtC.QDomDocument__ParseResult ```
    pub fn New(param1: ?*anyopaque) QtC.QDomDocument__ParseResult {
        return qtc.QDomDocument__ParseResult_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult, allocator: std.mem.Allocator ```
    pub fn ErrorMessage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const errorMessage_str = qtc.QDomDocument__ParseResult_ErrorMessage(@ptrCast(self));
        defer qtc.libqt_string_free(&errorMessage_str);
        const errorMessage_ret = allocator.alloc(u8, errorMessage_str.len) catch @panic("qdomdocument::parseresult.ErrorMessage: Memory allocation failed");
        @memcpy(errorMessage_ret, errorMessage_str.data[0..errorMessage_str.len]);
        return errorMessage_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorMessage-var)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult, errorMessage: []const u8 ```
    pub fn SetErrorMessage(self: ?*anyopaque, errorMessage: []const u8) void {
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        qtc.QDomDocument__ParseResult_SetErrorMessage(@ptrCast(self), errorMessage_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult ```
    pub fn ErrorLine(self: ?*anyopaque) i64 {
        return qtc.QDomDocument__ParseResult_ErrorLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorLine-var)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult, errorLine: i64 ```
    pub fn SetErrorLine(self: ?*anyopaque, errorLine: i64) void {
        qtc.QDomDocument__ParseResult_SetErrorLine(@ptrCast(self), @intCast(errorLine));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult ```
    pub fn ErrorColumn(self: ?*anyopaque) i64 {
        return qtc.QDomDocument__ParseResult_ErrorColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#errorColumn-var)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult, errorColumn: i64 ```
    pub fn SetErrorColumn(self: ?*anyopaque, errorColumn: i64) void {
        qtc.QDomDocument__ParseResult_SetErrorColumn(@ptrCast(self), @intCast(errorColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult ```
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QDomDocument__ParseResult_ToBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdomdocument-parseresult.html#operator-eq)
    ///
    /// ``` self: QtC.QDomDocument__ParseResult, param1: QtC.QDomDocument__ParseResult ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDomDocument__ParseResult_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDomDocument__ParseResult ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDomDocument__ParseResult_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdom.html#types
pub const enums = struct {
    pub const InvalidDataPolicy = enum {
        pub const AcceptInvalidChars: i32 = 0;
        pub const DropInvalidChars: i32 = 1;
        pub const ReturnNullNode: i32 = 2;
    };

    pub const NodeType = enum {
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

    pub const EncodingPolicy = enum {
        pub const EncodingFromDocument: i32 = 1;
        pub const EncodingFromTextStream: i32 = 2;
    };

    pub const ParseOption = enum {
        pub const Default: i32 = 0;
        pub const UseNamespaceProcessing: i32 = 1;
        pub const PreserveSpacingOnlyNodes: i32 = 2;
    };
};
