const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qxmlstream_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html)
pub const qxmlstreamattribute = struct {
    /// New constructs a new QXmlStreamAttribute object.
    ///
    pub fn New() QtC.QXmlStreamAttribute {
        return qtc.QXmlStreamAttribute_new();
    }

    /// New2 constructs a new QXmlStreamAttribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
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
    /// ## Parameter(s):
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
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
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QXmlStreamAttribute `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QXmlStreamAttribute {
        return qtc.QXmlStreamAttribute_new4(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamAttribute `
    ///
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.QXmlStreamAttribute_IsDefault(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#dtor.QXmlStreamAttribute)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamAttribute `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamAttribute_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<QXmlStreamAttribute>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html)
pub const qxmlstreamattributes = struct {
    /// New constructs a new QXmlStreamAttributes object.
    ///
    pub fn New() QtC.QXmlStreamAttributes {
        return qtc.QXmlStreamAttributes_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamAttributes `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamAttributes `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamAttributes `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    pub fn HasAttribute(self: ?*anyopaque, qualifiedName: []const u8) bool {
        return qtc.QXmlStreamAttributes_HasAttribute(@ptrCast(self), qualifiedName.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamAttributes `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasAttribute2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8) bool {
        return qtc.QXmlStreamAttributes_HasAttribute2(@ptrCast(self), namespaceUri.ptr, name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#dtor.QXmlStreamAttributes)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamAttributes `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamAttributes_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html)
pub const qxmlstreamnamespacedeclaration = struct {
    /// New constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    pub fn New() QtC.QXmlStreamNamespaceDeclaration {
        return qtc.QXmlStreamNamespaceDeclaration_new();
    }

    /// New2 constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` namespaceUri: []const u8 `
    ///
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
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QXmlStreamNamespaceDeclaration `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QXmlStreamNamespaceDeclaration {
        return qtc.QXmlStreamNamespaceDeclaration_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#dtor.QXmlStreamNamespaceDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamNamespaceDeclaration `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamNamespaceDeclaration_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html)
pub const qxmlstreamnotationdeclaration = struct {
    /// New constructs a new QXmlStreamNotationDeclaration object.
    ///
    pub fn New() QtC.QXmlStreamNotationDeclaration {
        return qtc.QXmlStreamNotationDeclaration_new();
    }

    /// New2 constructs a new QXmlStreamNotationDeclaration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QXmlStreamNotationDeclaration `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QXmlStreamNotationDeclaration {
        return qtc.QXmlStreamNotationDeclaration_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#dtor.QXmlStreamNotationDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamNotationDeclaration `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamNotationDeclaration_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html)
pub const qxmlstreamentitydeclaration = struct {
    /// New constructs a new QXmlStreamEntityDeclaration object.
    ///
    pub fn New() QtC.QXmlStreamEntityDeclaration {
        return qtc.QXmlStreamEntityDeclaration_new();
    }

    /// New2 constructs a new QXmlStreamEntityDeclaration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QXmlStreamEntityDeclaration `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QXmlStreamEntityDeclaration {
        return qtc.QXmlStreamEntityDeclaration_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#dtor.QXmlStreamEntityDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamEntityDeclaration `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamEntityDeclaration_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html)
pub const qxmlstreamentityresolver = struct {
    /// New constructs a new QXmlStreamEntityResolver object.
    ///
    pub fn New() QtC.QXmlStreamEntityResolver {
        return qtc.QXmlStreamEntityResolver_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamEntityResolver `
    ///
    /// ` publicId: []const u8 `
    ///
    /// ` systemId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResolveEntity(self: ?*anyopaque, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = publicId.len,
            .data = publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = systemId.len,
            .data = systemId.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_ResolveEntity(@ptrCast(self), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXmlStreamEntityResolver `
    ///
    /// ` callback: *const fn (self: QtC.QXmlStreamEntityResolver, publicId: [*:0]const u8, systemId: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnResolveEntity(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveEntity(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamEntityResolver `
    ///
    /// ` publicId: []const u8 `
    ///
    /// ` systemId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseResolveEntity(self: ?*anyopaque, publicId: []const u8, systemId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = publicId.len,
            .data = publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = systemId.len,
            .data = systemId.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_QBaseResolveEntity(@ptrCast(self), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamEntityResolver `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResolveUndeclaredEntity(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_ResolveUndeclaredEntity(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QXmlStreamEntityResolver `
    ///
    /// ` callback: *const fn (self: QtC.QXmlStreamEntityResolver, name: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnResolveUndeclaredEntity(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveUndeclaredEntity(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamEntityResolver `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseResolveUndeclaredEntity(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_QBaseResolveUndeclaredEntity(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#dtor.QXmlStreamEntityResolver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamEntityResolver `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamEntityResolver_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html)
pub const qxmlstreamreader = struct {
    /// New constructs a new QXmlStreamReader object.
    ///
    pub fn New() QtC.QXmlStreamReader {
        return qtc.QXmlStreamReader_new();
    }

    /// New2 constructs a new QXmlStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn New2(device: ?*anyopaque) QtC.QXmlStreamReader {
        return qtc.QXmlStreamReader_new2(@ptrCast(device));
    }

    /// New3 constructs a new QXmlStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []const u8 `
    ///
    pub fn New3(data: []const u8) QtC.QXmlStreamReader {
        return qtc.QXmlStreamReader_new3(data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QXmlStreamReader_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QXmlStreamReader_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` data: []const u8 `
    ///
    pub fn AddData(self: ?*anyopaque, data: []const u8) void {
        qtc.QXmlStreamReader_AddData(@ptrCast(self), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_AtEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qxmlstream_enums.TokenType `
    ///
    pub fn ReadNext(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_ReadNext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNextStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn ReadNextStartElement(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_ReadNextStartElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#skipCurrentElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn SkipCurrentElement(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_SkipCurrentElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qxmlstream_enums.TokenType `
    ///
    pub fn TokenType(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_TokenType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TokenString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_TokenString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.TokenString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetNamespaceProcessing(self: ?*anyopaque, namespaceProcessing: bool) void {
        qtc.QXmlStreamReader_SetNamespaceProcessing(@ptrCast(self), namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn NamespaceProcessing(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_NamespaceProcessing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsStartDocument(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsStartDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsEndDocument(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsEndDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsStartElement(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsStartElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsEndElement(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsEndElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsCharacters(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsCharacters(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsWhitespace(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsWhitespace(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsCDATA(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsCDATA(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsComment(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsComment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsDTD(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsDTD(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsEntityReference(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsEntityReference(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsProcessingInstruction(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsProcessingInstruction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn IsStandaloneDocument(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_IsStandaloneDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasStandaloneDeclaration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn HasStandaloneDeclaration(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_HasStandaloneDeclaration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn LineNumber(self: ?*anyopaque) i64 {
        return qtc.QXmlStreamReader_LineNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn ColumnNumber(self: ?*anyopaque) i64 {
        return qtc.QXmlStreamReader_ColumnNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn CharacterOffset(self: ?*anyopaque) i64 {
        return qtc.QXmlStreamReader_CharacterOffset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn Attributes(self: ?*anyopaque) QtC.QXmlStreamAttributes {
        return qtc.QXmlStreamReader_Attributes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadElementText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ReadElementText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceDeclarations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QXmlStreamNamespaceDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NamespaceDeclarations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QXmlStreamNamespaceDeclaration, _arr.len) catch @panic("qxmlstreamreader.NamespaceDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamNamespaceDeclaration = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` extraNamespaceDeclaraction: QtC.QXmlStreamNamespaceDeclaration `
    ///
    pub fn AddExtraNamespaceDeclaration(self: ?*anyopaque, extraNamespaceDeclaraction: ?*anyopaque) void {
        qtc.QXmlStreamReader_AddExtraNamespaceDeclaration(@ptrCast(self), @ptrCast(extraNamespaceDeclaraction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` extraNamespaceDeclaractions: []QtC.QXmlStreamNamespaceDeclaration `
    ///
    pub fn AddExtraNamespaceDeclarations(self: ?*anyopaque, extraNamespaceDeclaractions: []QtC.QXmlStreamNamespaceDeclaration) void {
        const extraNamespaceDeclaractions_list = qtc.libqt_list{
            .len = extraNamespaceDeclaractions.len,
            .data = @ptrCast(extraNamespaceDeclaractions.ptr),
        };
        qtc.QXmlStreamReader_AddExtraNamespaceDeclarations(@ptrCast(self), extraNamespaceDeclaractions_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NotationDeclarations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QXmlStreamNotationDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NotationDeclarations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QXmlStreamNotationDeclaration, _arr.len) catch @panic("qxmlstreamreader.NotationDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamNotationDeclaration = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntityDeclarations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QXmlStreamEntityDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_EntityDeclarations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QXmlStreamEntityDeclaration, _arr.len) catch @panic("qxmlstreamreader.EntityDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamEntityDeclaration = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn EntityExpansionLimit(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_EntityExpansionLimit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityExpansionLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetEntityExpansionLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QXmlStreamReader_SetEntityExpansionLimit(@ptrCast(self), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn RaiseError(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_RaiseError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qxmlstream_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamReader_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QXmlStreamReader_HasError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` resolver: QtC.QXmlStreamEntityResolver `
    ///
    pub fn SetEntityResolver(self: ?*anyopaque, resolver: ?*anyopaque) void {
        qtc.QXmlStreamReader_SetEntityResolver(@ptrCast(self), @ptrCast(resolver));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn EntityResolver(self: ?*anyopaque) QtC.QXmlStreamEntityResolver {
        return qtc.QXmlStreamReader_EntityResolver(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` behaviour: qxmlstream_enums.ReadElementTextBehaviour `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadElementText1(self: ?*anyopaque, behaviour: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ReadElementText1(@ptrCast(self), @bitCast(behaviour));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    /// ` message: []const u8 `
    ///
    pub fn RaiseError1(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QXmlStreamReader_RaiseError1(@ptrCast(self), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtor.QXmlStreamReader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamReader `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamReader_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html)
pub const qxmlstreamwriter = struct {
    /// New constructs a new QXmlStreamWriter object.
    ///
    pub fn New() QtC.QXmlStreamWriter {
        return qtc.QXmlStreamWriter_new();
    }

    /// New2 constructs a new QXmlStreamWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn New2(device: ?*anyopaque) QtC.QXmlStreamWriter {
        return qtc.QXmlStreamWriter_new2(@ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QXmlStreamWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QXmlStreamWriter_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` autoFormatting: bool `
    ///
    pub fn SetAutoFormatting(self: ?*anyopaque, autoFormatting: bool) void {
        qtc.QXmlStreamWriter_SetAutoFormatting(@ptrCast(self), autoFormatting);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn AutoFormatting(self: ?*anyopaque) bool {
        return qtc.QXmlStreamWriter_AutoFormatting(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` spacesOrTabs: i32 `
    ///
    pub fn SetAutoFormattingIndent(self: ?*anyopaque, spacesOrTabs: i32) void {
        qtc.QXmlStreamWriter_SetAutoFormattingIndent(@ptrCast(self), @bitCast(spacesOrTabs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn AutoFormattingIndent(self: ?*anyopaque) i32 {
        return qtc.QXmlStreamWriter_AutoFormattingIndent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn WriteAttribute(self: ?*anyopaque, qualifiedName: []const u8, value: []const u8) void {
        qtc.QXmlStreamWriter_WriteAttribute(@ptrCast(self), qualifiedName.ptr, value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn WriteAttribute2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8, value: []const u8) void {
        qtc.QXmlStreamWriter_WriteAttribute2(@ptrCast(self), namespaceUri.ptr, name.ptr, value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` attribute: QtC.QXmlStreamAttribute `
    ///
    pub fn WriteAttribute3(self: ?*anyopaque, attribute: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteAttribute3(@ptrCast(self), @ptrCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` attributes: QtC.QXmlStreamAttributes `
    ///
    pub fn WriteAttributes(self: ?*anyopaque, attributes: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteAttributes(@ptrCast(self), @ptrCast(attributes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteCDATA(self: ?*anyopaque, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteCDATA(@ptrCast(self), text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteCharacters(self: ?*anyopaque, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteCharacters(@ptrCast(self), text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteComment(self: ?*anyopaque, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteComment(@ptrCast(self), text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` dtd: []const u8 `
    ///
    pub fn WriteDTD(self: ?*anyopaque, dtd: []const u8) void {
        qtc.QXmlStreamWriter_WriteDTD(@ptrCast(self), dtd.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    pub fn WriteEmptyElement(self: ?*anyopaque, qualifiedName: []const u8) void {
        qtc.QXmlStreamWriter_WriteEmptyElement(@ptrCast(self), qualifiedName.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteEmptyElement2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8) void {
        qtc.QXmlStreamWriter_WriteEmptyElement2(@ptrCast(self), namespaceUri.ptr, name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteTextElement(self: ?*anyopaque, qualifiedName: []const u8, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteTextElement(@ptrCast(self), qualifiedName.ptr, text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteTextElement2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteTextElement2(@ptrCast(self), namespaceUri.ptr, name.ptr, text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn WriteEndDocument(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteEndDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn WriteEndElement(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteEndElement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteEntityReference(self: ?*anyopaque, name: []const u8) void {
        qtc.QXmlStreamWriter_WriteEntityReference(@ptrCast(self), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    pub fn WriteNamespace(self: ?*anyopaque, namespaceUri: []const u8) void {
        qtc.QXmlStreamWriter_WriteNamespace(@ptrCast(self), namespaceUri.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    pub fn WriteDefaultNamespace(self: ?*anyopaque, namespaceUri: []const u8) void {
        qtc.QXmlStreamWriter_WriteDefaultNamespace(@ptrCast(self), namespaceUri.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` target: []const u8 `
    ///
    pub fn WriteProcessingInstruction(self: ?*anyopaque, target: []const u8) void {
        qtc.QXmlStreamWriter_WriteProcessingInstruction(@ptrCast(self), target.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn WriteStartDocument(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteStartDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` version: []const u8 `
    ///
    pub fn WriteStartDocument2(self: ?*anyopaque, version: []const u8) void {
        qtc.QXmlStreamWriter_WriteStartDocument2(@ptrCast(self), version.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` version: []const u8 `
    ///
    /// ` standalone: bool `
    ///
    pub fn WriteStartDocument3(self: ?*anyopaque, version: []const u8, standalone: bool) void {
        qtc.QXmlStreamWriter_WriteStartDocument3(@ptrCast(self), version.ptr, standalone);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    pub fn WriteStartElement(self: ?*anyopaque, qualifiedName: []const u8) void {
        qtc.QXmlStreamWriter_WriteStartElement(@ptrCast(self), qualifiedName.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteStartElement2(self: ?*anyopaque, namespaceUri: []const u8, name: []const u8) void {
        qtc.QXmlStreamWriter_WriteStartElement2(@ptrCast(self), namespaceUri.ptr, name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` reader: QtC.QXmlStreamReader `
    ///
    pub fn WriteCurrentToken(self: ?*anyopaque, reader: ?*anyopaque) void {
        qtc.QXmlStreamWriter_WriteCurrentToken(@ptrCast(self), @ptrCast(reader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QXmlStreamWriter_HasError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn WriteNamespace2(self: ?*anyopaque, namespaceUri: []const u8, prefix: []const u8) void {
        qtc.QXmlStreamWriter_WriteNamespace2(@ptrCast(self), namespaceUri.ptr, prefix.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    /// ` target: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    pub fn WriteProcessingInstruction2(self: ?*anyopaque, target: []const u8, data: []const u8) void {
        qtc.QXmlStreamWriter_WriteProcessingInstruction2(@ptrCast(self), target.ptr, data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#dtor.QXmlStreamWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QXmlStreamWriter `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QXmlStreamWriter_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstream.html#public-types)
pub const enums = struct {
    pub const TokenType = enum(i32) {
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

    pub const ReadElementTextBehaviour = enum(i32) {
        pub const ErrorOnUnexpectedElement: i32 = 0;
        pub const IncludeChildElements: i32 = 1;
        pub const SkipChildElements: i32 = 2;
    };

    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const UnexpectedElementError: i32 = 1;
        pub const CustomError: i32 = 2;
        pub const NotWellFormedError: i32 = 3;
        pub const PrematureEndOfDocumentError: i32 = 4;
    };
};
