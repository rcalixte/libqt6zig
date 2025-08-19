const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qxmlstream_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qxmlstreamattribute.html
pub const qxmlstreamattribute = struct {
    /// New constructs a new QXmlStreamAttribute object.
    ///
    ///
    pub fn New() QtC.QXmlStreamAttribute {
        return qtc.QXmlStreamAttribute_new();
    }

    /// New2 constructs a new QXmlStreamAttribute object.
    ///
    /// ``` qualifiedName: []const u8, value: []const u8 ```
    pub fn New2(qualifiedName: []const u8, value: []const u8) QtC.QXmlStreamAttribute {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };

        return qtc.QXmlStreamAttribute_new2(qualifiedName_str, value_str);
    }

    /// New3 constructs a new QXmlStreamAttribute object.
    ///
    /// ``` namespaceUri: []const u8, name: []const u8, value: []const u8 ```
    pub fn New3(namespaceUri: []const u8, name: []const u8, value: []const u8) QtC.QXmlStreamAttribute {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };

        return qtc.QXmlStreamAttribute_new3(namespaceUri_str, name_str, value_str);
    }

    /// New4 constructs a new QXmlStreamAttribute object.
    ///
    /// ``` param1: QtC.QXmlStreamAttribute ```
    pub fn New4(param1: ?*anyopaque) QtC.QXmlStreamAttribute {
        return qtc.QXmlStreamAttribute_new4(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
    ///
    /// ``` self: QtC.QXmlStreamAttribute ```
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.QXmlStreamAttribute_IsDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattribute.html#dtor.QXmlStreamAttribute)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamAttribute ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamAttribute_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<QXmlStreamAttribute>

/// https://doc.qt.io/qt-6/qxmlstreamattributes.html
pub const qxmlstreamattributes = struct {
    /// New constructs a new QXmlStreamAttributes object.
    ///
    ///
    pub fn New() QtC.QXmlStreamAttributes {
        return qtc.QXmlStreamAttributes_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ``` self: QtC.QXmlStreamAttributes, namespaceUri: []const u8, name: []const u8, value: []const u8 ```
    pub fn Append(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8, value: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QXmlStreamAttributes_Append(@ptrCast(self), namespaceUri_str, name_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ``` self: QtC.QXmlStreamAttributes, qualifiedName: []const u8, value: []const u8 ```
    pub fn Append2(self: ?*anyopaque, qualifiedName: []const u8, value: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QXmlStreamAttributes_Append2(@ptrCast(self), qualifiedName_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ``` self: QtC.QXmlStreamAttributes, qualifiedName: []const u8 ```
    pub fn HasAttribute(self: ?*anyopaque, qualifiedName: []const u8) bool {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        return qtc.QXmlStreamAttributes_HasAttribute(@ptrCast(self), qualifiedName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ``` self: QtC.QXmlStreamAttributes, namespaceUri: []const u8, name: []const u8 ```
    pub fn HasAttribute2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8) bool {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QXmlStreamAttributes_HasAttribute2(@ptrCast(self), namespaceUri_str, name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamattributes.html#dtor.QXmlStreamAttributes)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamAttributes ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamAttributes_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html
pub const qxmlstreamnamespacedeclaration = struct {
    /// New constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    ///
    pub fn New() QtC.QXmlStreamNamespaceDeclaration {
        return qtc.QXmlStreamNamespaceDeclaration_new();
    }

    /// New2 constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    /// ``` prefix: []const u8, namespaceUri: []const u8 ```
    pub fn New2(prefix: []const u8, namespaceUri: []const u8) QtC.QXmlStreamNamespaceDeclaration {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };

        return qtc.QXmlStreamNamespaceDeclaration_new2(prefix_str, namespaceUri_str);
    }

    /// New3 constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    /// ``` param1: QtC.QXmlStreamNamespaceDeclaration ```
    pub fn New3(param1: ?*anyopaque) QtC.QXmlStreamNamespaceDeclaration {
        return qtc.QXmlStreamNamespaceDeclaration_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#dtor.QXmlStreamNamespaceDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamNamespaceDeclaration ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamNamespaceDeclaration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html
pub const qxmlstreamnotationdeclaration = struct {
    /// New constructs a new QXmlStreamNotationDeclaration object.
    ///
    ///
    pub fn New() QtC.QXmlStreamNotationDeclaration {
        return qtc.QXmlStreamNotationDeclaration_new();
    }

    /// New2 constructs a new QXmlStreamNotationDeclaration object.
    ///
    /// ``` param1: QtC.QXmlStreamNotationDeclaration ```
    pub fn New2(param1: ?*anyopaque) QtC.QXmlStreamNotationDeclaration {
        return qtc.QXmlStreamNotationDeclaration_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#dtor.QXmlStreamNotationDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamNotationDeclaration ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamNotationDeclaration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html
pub const qxmlstreamentitydeclaration = struct {
    /// New constructs a new QXmlStreamEntityDeclaration object.
    ///
    ///
    pub fn New() QtC.QXmlStreamEntityDeclaration {
        return qtc.QXmlStreamEntityDeclaration_new();
    }

    /// New2 constructs a new QXmlStreamEntityDeclaration object.
    ///
    /// ``` param1: QtC.QXmlStreamEntityDeclaration ```
    pub fn New2(param1: ?*anyopaque) QtC.QXmlStreamEntityDeclaration {
        return qtc.QXmlStreamEntityDeclaration_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#dtor.QXmlStreamEntityDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamEntityDeclaration ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamEntityDeclaration_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamentityresolver.html
pub const qxmlstreamentityresolver = struct {
    /// New constructs a new QXmlStreamEntityResolver object.
    ///
    ///
    pub fn New() QtC.QXmlStreamEntityResolver {
        return qtc.QXmlStreamEntityResolver_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// ``` self: QtC.QXmlStreamEntityResolver, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator ```
    pub fn ResolveEntity(self: ?*anyopaque, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = publicId.len,
            .data = publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = systemId.len,
            .data = systemId.ptr,
        };
        const _str = qtc.QXmlStreamEntityResolver_ResolveEntity(@ptrCast(self), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QXmlStreamEntityResolver, slot: fn (self: QtC.QXmlStreamEntityResolver, publicId: []const u8, systemId: []const u8) callconv(.c) []const u8 ```
    pub fn OnResolveEntity(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, []const u8) callconv(.c) []const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveEntity(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QXmlStreamEntityResolver, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator ```
    pub fn QBaseResolveEntity(self: ?*anyopaque, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = publicId.len,
            .data = publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = systemId.len,
            .data = systemId.ptr,
        };
        const _str = qtc.QXmlStreamEntityResolver_QBaseResolveEntity(@ptrCast(self), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// ``` self: QtC.QXmlStreamEntityResolver, name: []const u8, allocator: std.mem.Allocator ```
    pub fn ResolveUndeclaredEntity(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QXmlStreamEntityResolver_ResolveUndeclaredEntity(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QXmlStreamEntityResolver, slot: fn (self: QtC.QXmlStreamEntityResolver, name: []const u8) callconv(.c) []const u8 ```
    pub fn OnResolveUndeclaredEntity(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) []const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveUndeclaredEntity(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QXmlStreamEntityResolver, name: []const u8, allocator: std.mem.Allocator ```
    pub fn QBaseResolveUndeclaredEntity(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QXmlStreamEntityResolver_QBaseResolveUndeclaredEntity(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#dtor.QXmlStreamEntityResolver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamEntityResolver ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamEntityResolver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamreader.html
pub const qxmlstreamreader = struct {
    /// New constructs a new QXmlStreamReader object.
    ///
    ///
    pub fn New() QtC.QXmlStreamReader {
        return qtc.QXmlStreamReader_new();
    }

    /// New2 constructs a new QXmlStreamReader object.
    ///
    /// ``` device: QtC.QIODevice ```
    pub fn New2(device: ?*anyopaque) QtC.QXmlStreamReader {
        return qtc.QXmlStreamReader_new2(@ptrCast(device));
    }

    /// New3 constructs a new QXmlStreamReader object.
    ///
    /// ``` data: []const u8 ```
    pub fn New3(data: []const u8) QtC.QXmlStreamReader {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QXmlStreamReader_new3(data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
    ///
    /// ``` self: QtC.QXmlStreamReader, device: QtC.QIODevice ```
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QXmlStreamReader_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QXmlStreamReader_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
    ///
    /// ``` self: QtC.QXmlStreamReader, data: []const u8 ```
    pub fn AddData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QXmlStreamReader_AddData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNext)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    ///
    /// Returns: ``` qxmlstream_enums.TokenType ```
    pub fn ReadNext(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_ReadNext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNextStartElement)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn ReadNextStartElement(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_ReadNextStartElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#skipCurrentElement)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn SkipCurrentElement(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_SkipCurrentElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenType)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    ///
    /// Returns: ``` qxmlstream_enums.TokenType ```
    pub fn TokenType(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_TokenType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
    ///
    /// ``` self: QtC.QXmlStreamReader, allocator: std.mem.Allocator ```
    pub fn TokenString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_TokenString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.TokenString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
    ///
    /// ``` self: QtC.QXmlStreamReader, namespaceProcessing: bool ```
    pub fn SetNamespaceProcessing(self: ?*anyopaque, namespaceProcessing: bool) void {
        qtc.QXmlStreamReader_SetNamespaceProcessing(@ptrCast(self), namespaceProcessing);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn NamespaceProcessing(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_NamespaceProcessing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsStartDocument(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsStartDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsEndDocument(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsEndDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsStartElement(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsStartElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsEndElement(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsEndElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsCharacters(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsCharacters(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsWhitespace(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsWhitespace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsCDATA(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsCDATA(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsComment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsDTD(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsDTD(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsEntityReference(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsProcessingInstruction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn IsStandaloneDocument(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsStandaloneDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasStandaloneDeclaration)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn HasStandaloneDeclaration(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_HasStandaloneDeclaration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn LineNumber(self: ?*anyopaque) i64 {
        return qtc.QXmlStreamReader_LineNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn ColumnNumber(self: ?*anyopaque) i64 {
        return qtc.QXmlStreamReader_ColumnNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn CharacterOffset(self: ?*anyopaque) i64 {
        return qtc.QXmlStreamReader_CharacterOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#attributes)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn Attributes(self: ?*anyopaque) QtC.QXmlStreamAttributes {
        return qtc.QXmlStreamReader_Attributes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
    ///
    /// ``` self: QtC.QXmlStreamReader, allocator: std.mem.Allocator ```
    pub fn ReadElementText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_ReadElementText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
    ///
    /// ``` self: QtC.QXmlStreamReader, allocator: std.mem.Allocator ```
    pub fn NamespaceDeclarations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QXmlStreamNamespaceDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NamespaceDeclarations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QXmlStreamNamespaceDeclaration, _arr.len) catch @panic("qxmlstreamreader.NamespaceDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamNamespaceDeclaration = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
    ///
    /// ``` self: QtC.QXmlStreamReader, extraNamespaceDeclaraction: QtC.QXmlStreamNamespaceDeclaration ```
    pub fn AddExtraNamespaceDeclaration(self: ?*anyopaque, extraNamespaceDeclaraction: ?*anyopaque) void {
        qtc.QXmlStreamReader_AddExtraNamespaceDeclaration(@ptrCast(self), @ptrCast(extraNamespaceDeclaraction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
    ///
    /// ``` self: QtC.QXmlStreamReader, extraNamespaceDeclaractions: []QtC.QXmlStreamNamespaceDeclaration ```
    pub fn AddExtraNamespaceDeclarations(self: ?*anyopaque, extraNamespaceDeclaractions: []QtC.QXmlStreamNamespaceDeclaration) void {
        const extraNamespaceDeclaractions_list = qtc.libqt_list{
            .len = extraNamespaceDeclaractions.len,
            .data = @ptrCast(extraNamespaceDeclaractions.ptr),
        };
        qtc.QXmlStreamReader_AddExtraNamespaceDeclarations(@ptrCast(self), extraNamespaceDeclaractions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
    ///
    /// ``` self: QtC.QXmlStreamReader, allocator: std.mem.Allocator ```
    pub fn NotationDeclarations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QXmlStreamNotationDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NotationDeclarations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QXmlStreamNotationDeclaration, _arr.len) catch @panic("qxmlstreamreader.NotationDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamNotationDeclaration = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
    ///
    /// ``` self: QtC.QXmlStreamReader, allocator: std.mem.Allocator ```
    pub fn EntityDeclarations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QXmlStreamEntityDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_EntityDeclarations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QXmlStreamEntityDeclaration, _arr.len) catch @panic("qxmlstreamreader.EntityDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamEntityDeclaration = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn EntityExpansionLimit(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_EntityExpansionLimit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityExpansionLimit)
    ///
    /// ``` self: QtC.QXmlStreamReader, limit: i32 ```
    pub fn SetEntityExpansionLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QXmlStreamReader_SetEntityExpansionLimit(@ptrCast(self), @intCast(limit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn RaiseError(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_RaiseError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#errorString)
    ///
    /// ``` self: QtC.QXmlStreamReader, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#error)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    ///
    /// Returns: ``` qxmlstream_enums.Error ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_HasError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
    ///
    /// ``` self: QtC.QXmlStreamReader, resolver: QtC.QXmlStreamEntityResolver ```
    pub fn SetEntityResolver(self: ?*anyopaque, resolver: ?*anyopaque) void {
        qtc.QXmlStreamReader_SetEntityResolver(@ptrCast(self), @ptrCast(resolver));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn EntityResolver(self: ?*anyopaque) QtC.QXmlStreamEntityResolver {
        return qtc.QXmlStreamReader_EntityResolver(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
    ///
    /// ``` self: QtC.QXmlStreamReader, behaviour: qxmlstream_enums.ReadElementTextBehaviour, allocator: std.mem.Allocator ```
    pub fn ReadElementText1(self: ?*anyopaque, behaviour: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QXmlStreamReader_ReadElementText1(@ptrCast(self), @intCast(behaviour));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ``` self: QtC.QXmlStreamReader, message: []const u8 ```
    pub fn RaiseError1(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QXmlStreamReader_RaiseError1(@ptrCast(self), message_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtor.QXmlStreamReader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamReader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstreamwriter.html
pub const qxmlstreamwriter = struct {
    /// New constructs a new QXmlStreamWriter object.
    ///
    ///
    pub fn New() QtC.QXmlStreamWriter {
        return qtc.QXmlStreamWriter_new();
    }

    /// New2 constructs a new QXmlStreamWriter object.
    ///
    /// ``` device: QtC.QIODevice ```
    pub fn New2(device: ?*anyopaque) QtC.QXmlStreamWriter {
        return qtc.QXmlStreamWriter_new2(@ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setDevice)
    ///
    /// ``` self: QtC.QXmlStreamWriter, device: QtC.QIODevice ```
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QXmlStreamWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#device)
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QXmlStreamWriter_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
    ///
    /// ``` self: QtC.QXmlStreamWriter, autoFormatting: bool ```
    pub fn SetAutoFormatting(self: ?*anyopaque, autoFormatting: bool) void {
        qtc.QXmlStreamWriter_SetAutoFormatting(@ptrCast(self), autoFormatting);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn AutoFormatting(self: ?*anyopaque) bool {
        return qtc.QXmlStreamWriter_AutoFormatting(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
    ///
    /// ``` self: QtC.QXmlStreamWriter, spacesOrTabs: i32 ```
    pub fn SetAutoFormattingIndent(self: ?*anyopaque, spacesOrTabs: i32) void {
        qtc.QXmlStreamWriter_SetAutoFormattingIndent(@ptrCast(self), @intCast(spacesOrTabs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn AutoFormattingIndent(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamWriter_AutoFormattingIndent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ``` self: QtC.QXmlStreamWriter, qualifiedName: []const u8, value: []const u8 ```
    pub fn WriteAttribute(self: ?*anyopaque, qualifiedName: []const u8, value: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QXmlStreamWriter_WriteAttribute(@ptrCast(self), qualifiedName_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ``` self: QtC.QXmlStreamWriter, namespaceUri: []const u8, name: []const u8, value: []const u8 ```
    pub fn WriteAttribute2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8, value: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QXmlStreamWriter_WriteAttribute2(@ptrCast(self), namespaceUri_str, name_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ``` self: QtC.QXmlStreamWriter, attribute: QtC.QXmlStreamAttribute ```
    pub fn WriteAttribute3(self: ?*anyopaque, attribute: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteAttribute3(@ptrCast(self), @ptrCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttributes)
    ///
    /// ``` self: QtC.QXmlStreamWriter, attributes: QtC.QXmlStreamAttributes ```
    pub fn WriteAttributes(self: ?*anyopaque, attributes: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteAttributes(@ptrCast(self), @ptrCast(attributes));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
    ///
    /// ``` self: QtC.QXmlStreamWriter, text: []const u8 ```
    pub fn WriteCDATA(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QXmlStreamWriter_WriteCDATA(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
    ///
    /// ``` self: QtC.QXmlStreamWriter, text: []const u8 ```
    pub fn WriteCharacters(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QXmlStreamWriter_WriteCharacters(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
    ///
    /// ``` self: QtC.QXmlStreamWriter, text: []const u8 ```
    pub fn WriteComment(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QXmlStreamWriter_WriteComment(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
    ///
    /// ``` self: QtC.QXmlStreamWriter, dtd: []const u8 ```
    pub fn WriteDTD(self: ?*anyopaque, dtd: []const u8) void {
        const dtd_str = qtc.libqt_string{
            .len = dtd.len,
            .data = dtd.ptr,
        };
        qtc.QXmlStreamWriter_WriteDTD(@ptrCast(self), dtd_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ``` self: QtC.QXmlStreamWriter, qualifiedName: []const u8 ```
    pub fn WriteEmptyElement(self: ?*anyopaque, qualifiedName: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        qtc.QXmlStreamWriter_WriteEmptyElement(@ptrCast(self), qualifiedName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ``` self: QtC.QXmlStreamWriter, namespaceUri: []const u8, name: []const u8 ```
    pub fn WriteEmptyElement2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QXmlStreamWriter_WriteEmptyElement2(@ptrCast(self), namespaceUri_str, name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ``` self: QtC.QXmlStreamWriter, qualifiedName: []const u8, text: []const u8 ```
    pub fn WriteTextElement(self: ?*anyopaque, qualifiedName: []const u8, text: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QXmlStreamWriter_WriteTextElement(@ptrCast(self), qualifiedName_str, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ``` self: QtC.QXmlStreamWriter, namespaceUri: []const u8, name: []const u8, text: []const u8 ```
    pub fn WriteTextElement2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8, text: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QXmlStreamWriter_WriteTextElement2(@ptrCast(self), namespaceUri_str, name_str, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndDocument)
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn WriteEndDocument(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteEndDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndElement)
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn WriteEndElement(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteEndElement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEntityReference)
    ///
    /// ``` self: QtC.QXmlStreamWriter, name: []const u8 ```
    pub fn WriteEntityReference(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QXmlStreamWriter_WriteEntityReference(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ``` self: QtC.QXmlStreamWriter, namespaceUri: []const u8 ```
    pub fn WriteNamespace(self: ?*anyopaque, namespaceUri: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        qtc.QXmlStreamWriter_WriteNamespace(@ptrCast(self), namespaceUri_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
    ///
    /// ``` self: QtC.QXmlStreamWriter, namespaceUri: []const u8 ```
    pub fn WriteDefaultNamespace(self: ?*anyopaque, namespaceUri: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        qtc.QXmlStreamWriter_WriteDefaultNamespace(@ptrCast(self), namespaceUri_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
    ///
    /// ``` self: QtC.QXmlStreamWriter, target: []const u8 ```
    pub fn WriteProcessingInstruction(self: ?*anyopaque, target: []const u8) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        qtc.QXmlStreamWriter_WriteProcessingInstruction(@ptrCast(self), target_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn WriteStartDocument(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteStartDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ``` self: QtC.QXmlStreamWriter, version: []const u8 ```
    pub fn WriteStartDocument2(self: ?*anyopaque, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartDocument2(@ptrCast(self), version_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ``` self: QtC.QXmlStreamWriter, version: []const u8, standalone: bool ```
    pub fn WriteStartDocument3(self: ?*anyopaque, version: []const u8, standalone: bool) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartDocument3(@ptrCast(self), version_str, standalone);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ``` self: QtC.QXmlStreamWriter, qualifiedName: []const u8 ```
    pub fn WriteStartElement(self: ?*anyopaque, qualifiedName: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartElement(@ptrCast(self), qualifiedName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ``` self: QtC.QXmlStreamWriter, namespaceUri: []const u8, name: []const u8 ```
    pub fn WriteStartElement2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartElement2(@ptrCast(self), namespaceUri_str, name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
    ///
    /// ``` self: QtC.QXmlStreamWriter, reader: QtC.QXmlStreamReader ```
    pub fn WriteCurrentToken(self: ?*anyopaque, reader: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteCurrentToken(@ptrCast(self), @ptrCast(reader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QXmlStreamWriter_HasError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ``` self: QtC.QXmlStreamWriter, namespaceUri: []const u8, prefix: []const u8 ```
    pub fn WriteNamespace2(self: ?*anyopaque, namespaceUri: []const u8, prefix: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QXmlStreamWriter_WriteNamespace2(@ptrCast(self), namespaceUri_str, prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
    ///
    /// ``` self: QtC.QXmlStreamWriter, target: []const u8, data: []const u8 ```
    pub fn WriteProcessingInstruction2(self: ?*anyopaque, target: []const u8, data: []const u8) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QXmlStreamWriter_WriteProcessingInstruction2(@ptrCast(self), target_str, data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qxmlstreamwriter.html#dtor.QXmlStreamWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QXmlStreamWriter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qxmlstream.html#types
pub const enums = struct {
    pub const TokenType = enum {
        pub const NoToken: i32 = 0;
        pub const Invalid: i32 = 1;
        pub const StartDocument: i32 = 2;
        pub const EndDocument: i32 = 3;
        pub const StartElement: i32 = 4;
        pub const EndElement: i32 = 5;
        pub const Characters: i32 = 6;
        pub const Comment: i32 = 7;
        pub const DTD: i32 = 8;
        pub const EntityReference: i32 = 9;
        pub const ProcessingInstruction: i32 = 10;
    };

    pub const ReadElementTextBehaviour = enum {
        pub const ErrorOnUnexpectedElement: i32 = 0;
        pub const IncludeChildElements: i32 = 1;
        pub const SkipChildElements: i32 = 2;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const UnexpectedElementError: i32 = 1;
        pub const CustomError: i32 = 2;
        pub const NotWellFormedError: i32 = 3;
        pub const PrematureEndOfDocumentError: i32 = 4;
    };
};
