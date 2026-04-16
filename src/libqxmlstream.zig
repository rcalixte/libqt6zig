const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const qxmlstream_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html)
pub const QXmlStreamAttribute = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamAttribute,

    pub const _is_QXmlStreamAttribute = {};

    /// New constructs a new QXmlStreamAttribute object.
    ///
    pub fn New() QXmlStreamAttribute {
        return .{ .ptr = qtc.QXmlStreamAttribute_new() };
    }

    /// New2 constructs a new QXmlStreamAttribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn New2(qualifiedName: []const u8, value: []const u8) QXmlStreamAttribute {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.QXmlStreamAttribute_new2(qualifiedName_str, value_str) };
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
    pub fn New3(namespaceUri: []const u8, name: []const u8, value: []const u8) QXmlStreamAttribute {
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
        return .{ .ptr = qtc.QXmlStreamAttribute_new3(namespaceUri_str, name_str, value_str) };
    }

    /// New4 constructs a new QXmlStreamAttribute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamAttribute `
    ///
    pub fn New4(param1: anytype) QXmlStreamAttribute {
        comptime _ = @TypeOf(param1)._is_QXmlStreamAttribute;
        return .{ .ptr = qtc.QXmlStreamAttribute_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    pub fn IsDefault(self: QXmlStreamAttribute) bool {
        return qtc.QXmlStreamAttribute_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#dtor.QXmlStreamAttribute)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    pub fn Delete(self: QXmlStreamAttribute) void {
        qtc.QXmlStreamAttribute_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<QXmlStreamAttribute>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html)
pub const QXmlStreamAttributes = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamAttributes,

    pub const _is_QXmlStreamAttributes = {};

    /// New constructs a new QXmlStreamAttributes object.
    ///
    pub fn New() QXmlStreamAttributes {
        return .{ .ptr = qtc.QXmlStreamAttributes_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn Append(self: QXmlStreamAttributes, namespaceUri: []const u8, name: []const u8, value: []const u8) void {
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
        qtc.QXmlStreamAttributes_Append(@ptrCast(self.ptr), namespaceUri_str, name_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn Append2(self: QXmlStreamAttributes, qualifiedName: []const u8, value: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = qualifiedName.len,
            .data = qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QXmlStreamAttributes_Append2(@ptrCast(self.ptr), qualifiedName_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    pub fn HasAttribute(self: QXmlStreamAttributes, qualifiedName: []const u8) bool {
        return qtc.QXmlStreamAttributes_HasAttribute(@ptrCast(self.ptr), qualifiedName.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasAttribute2(self: QXmlStreamAttributes, namespaceUri: []const u8, name: []const u8) bool {
        return qtc.QXmlStreamAttributes_HasAttribute2(@ptrCast(self.ptr), namespaceUri.ptr, name.ptr);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#dtor.QXmlStreamAttributes)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    pub fn Delete(self: QXmlStreamAttributes) void {
        qtc.QXmlStreamAttributes_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html)
pub const QXmlStreamNamespaceDeclaration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamNamespaceDeclaration,

    pub const _is_QXmlStreamNamespaceDeclaration = {};

    /// New constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    pub fn New() QXmlStreamNamespaceDeclaration {
        return .{ .ptr = qtc.QXmlStreamNamespaceDeclaration_new() };
    }

    /// New2 constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    pub fn New2(prefix: []const u8, namespaceUri: []const u8) QXmlStreamNamespaceDeclaration {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        const namespaceUri_str = qtc.libqt_string{
            .len = namespaceUri.len,
            .data = namespaceUri.ptr,
        };
        return .{ .ptr = qtc.QXmlStreamNamespaceDeclaration_new2(prefix_str, namespaceUri_str) };
    }

    /// New3 constructs a new QXmlStreamNamespaceDeclaration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamNamespaceDeclaration `
    ///
    pub fn New3(param1: anytype) QXmlStreamNamespaceDeclaration {
        comptime _ = @TypeOf(param1)._is_QXmlStreamNamespaceDeclaration;
        return .{ .ptr = qtc.QXmlStreamNamespaceDeclaration_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#dtor.QXmlStreamNamespaceDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamNamespaceDeclaration `
    ///
    pub fn Delete(self: QXmlStreamNamespaceDeclaration) void {
        qtc.QXmlStreamNamespaceDeclaration_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html)
pub const QXmlStreamNotationDeclaration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamNotationDeclaration,

    pub const _is_QXmlStreamNotationDeclaration = {};

    /// New constructs a new QXmlStreamNotationDeclaration object.
    ///
    pub fn New() QXmlStreamNotationDeclaration {
        return .{ .ptr = qtc.QXmlStreamNotationDeclaration_new() };
    }

    /// New2 constructs a new QXmlStreamNotationDeclaration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamNotationDeclaration `
    ///
    pub fn New2(param1: anytype) QXmlStreamNotationDeclaration {
        comptime _ = @TypeOf(param1)._is_QXmlStreamNotationDeclaration;
        return .{ .ptr = qtc.QXmlStreamNotationDeclaration_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#dtor.QXmlStreamNotationDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamNotationDeclaration `
    ///
    pub fn Delete(self: QXmlStreamNotationDeclaration) void {
        qtc.QXmlStreamNotationDeclaration_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html)
pub const QXmlStreamEntityDeclaration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamEntityDeclaration,

    pub const _is_QXmlStreamEntityDeclaration = {};

    /// New constructs a new QXmlStreamEntityDeclaration object.
    ///
    pub fn New() QXmlStreamEntityDeclaration {
        return .{ .ptr = qtc.QXmlStreamEntityDeclaration_new() };
    }

    /// New2 constructs a new QXmlStreamEntityDeclaration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamEntityDeclaration `
    ///
    pub fn New2(param1: anytype) QXmlStreamEntityDeclaration {
        comptime _ = @TypeOf(param1)._is_QXmlStreamEntityDeclaration;
        return .{ .ptr = qtc.QXmlStreamEntityDeclaration_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#dtor.QXmlStreamEntityDeclaration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamEntityDeclaration `
    ///
    pub fn Delete(self: QXmlStreamEntityDeclaration) void {
        qtc.QXmlStreamEntityDeclaration_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html)
pub const QXmlStreamEntityResolver = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamEntityResolver,

    pub const _is_QXmlStreamEntityResolver = {};

    /// New constructs a new QXmlStreamEntityResolver object.
    ///
    pub fn New() QXmlStreamEntityResolver {
        return .{ .ptr = qtc.QXmlStreamEntityResolver_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` publicId: []const u8 `
    ///
    /// ` systemId: []const u8 `
    ///
    pub fn ResolveEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, publicId: []const u8, systemId: []const u8) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = publicId.len,
            .data = publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = systemId.len,
            .data = systemId.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_ResolveEntity(@ptrCast(self.ptr), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` callback: *const fn (self: QXmlStreamEntityResolver, publicId: [*:0]const u8, systemId: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnResolveEntity(self: QXmlStreamEntityResolver, callback: *const fn (QXmlStreamEntityResolver, [*:0]const u8, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveEntity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResolveEntity` instead
    ///
    pub const QBaseResolveEntity = SuperResolveEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` publicId: []const u8 `
    ///
    /// ` systemId: []const u8 `
    ///
    pub fn SuperResolveEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, publicId: []const u8, systemId: []const u8) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = publicId.len,
            .data = publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = systemId.len,
            .data = systemId.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_SuperResolveEntity(@ptrCast(self.ptr), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ResolveUndeclaredEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_ResolveUndeclaredEntity(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` callback: *const fn (self: QXmlStreamEntityResolver, name: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnResolveUndeclaredEntity(self: QXmlStreamEntityResolver, callback: *const fn (QXmlStreamEntityResolver, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveUndeclaredEntity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResolveUndeclaredEntity` instead
    ///
    pub const QBaseResolveUndeclaredEntity = SuperResolveUndeclaredEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperResolveUndeclaredEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_SuperResolveUndeclaredEntity(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamentityresolver.ResolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#dtor.QXmlStreamEntityResolver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    pub fn Delete(self: QXmlStreamEntityResolver) void {
        qtc.QXmlStreamEntityResolver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html)
pub const QXmlStreamReader = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamReader,

    pub const _is_QXmlStreamReader = {};

    /// New constructs a new QXmlStreamReader object.
    ///
    pub fn New() QXmlStreamReader {
        return .{ .ptr = qtc.QXmlStreamReader_new() };
    }

    /// New2 constructs a new QXmlStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New2(device: anytype) QXmlStreamReader {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QXmlStreamReader_new2(@ptrCast(device.ptr)) };
    }

    /// New3 constructs a new QXmlStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []const u8 `
    ///
    pub fn New3(data: []const u8) QXmlStreamReader {
        return .{ .ptr = qtc.QXmlStreamReader_new3(data.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QXmlStreamReader, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QXmlStreamReader_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn Device(self: QXmlStreamReader) QIODevice {
        return .{ .ptr = qtc.QXmlStreamReader_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` data: []const u8 `
    ///
    pub fn AddData(self: QXmlStreamReader, data: []const u8) void {
        qtc.QXmlStreamReader_AddData(@ptrCast(self.ptr), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn Clear(self: QXmlStreamReader) void {
        qtc.QXmlStreamReader_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn AtEnd(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_AtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qxmlstream_enums.TokenType `
    ///
    pub fn ReadNext(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_ReadNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNextStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn ReadNextStartElement(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_ReadNextStartElement(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#skipCurrentElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn SkipCurrentElement(self: QXmlStreamReader) void {
        qtc.QXmlStreamReader_SkipCurrentElement(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qxmlstream_enums.TokenType `
    ///
    pub fn TokenType(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_TokenType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TokenString(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_TokenString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.TokenString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` namespaceProcessing: bool `
    ///
    pub fn SetNamespaceProcessing(self: QXmlStreamReader, namespaceProcessing: bool) void {
        qtc.QXmlStreamReader_SetNamespaceProcessing(@ptrCast(self.ptr), namespaceProcessing);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn NamespaceProcessing(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_NamespaceProcessing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsStartDocument(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsStartDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsEndDocument(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsEndDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsStartElement(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsStartElement(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsEndElement(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsEndElement(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsCharacters(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsCharacters(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsWhitespace(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsWhitespace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsCDATA(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsCDATA(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsComment(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsComment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsDTD(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsDTD(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsEntityReference(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsProcessingInstruction(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn IsStandaloneDocument(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsStandaloneDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasStandaloneDeclaration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn HasStandaloneDeclaration(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_HasStandaloneDeclaration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn LineNumber(self: QXmlStreamReader) i64 {
        return qtc.QXmlStreamReader_LineNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn ColumnNumber(self: QXmlStreamReader) i64 {
        return qtc.QXmlStreamReader_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn CharacterOffset(self: QXmlStreamReader) i64 {
        return qtc.QXmlStreamReader_CharacterOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn Attributes(self: QXmlStreamReader) QXmlStreamAttributes {
        return .{ .ptr = qtc.QXmlStreamReader_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadElementText(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ReadElementText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NamespaceDeclarations(self: QXmlStreamReader, allocator: std.mem.Allocator) []QXmlStreamNamespaceDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NamespaceDeclarations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QXmlStreamNamespaceDeclaration, _arr.len) catch @panic("qxmlstreamreader.NamespaceDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamNamespaceDeclaration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` extraNamespaceDeclaraction: QXmlStreamNamespaceDeclaration `
    ///
    pub fn AddExtraNamespaceDeclaration(self: QXmlStreamReader, extraNamespaceDeclaraction: anytype) void {
        comptime _ = @TypeOf(extraNamespaceDeclaraction)._is_QXmlStreamNamespaceDeclaration;
        qtc.QXmlStreamReader_AddExtraNamespaceDeclaration(@ptrCast(self.ptr), @ptrCast(extraNamespaceDeclaraction.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` extraNamespaceDeclaractions: []QXmlStreamNamespaceDeclaration `
    ///
    pub fn AddExtraNamespaceDeclarations(self: QXmlStreamReader, extraNamespaceDeclaractions: []QXmlStreamNamespaceDeclaration) void {
        const extraNamespaceDeclaractions_list = qtc.libqt_list{
            .len = extraNamespaceDeclaractions.len,
            .data = @ptrCast(extraNamespaceDeclaractions.ptr),
        };
        qtc.QXmlStreamReader_AddExtraNamespaceDeclarations(@ptrCast(self.ptr), extraNamespaceDeclaractions_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NotationDeclarations(self: QXmlStreamReader, allocator: std.mem.Allocator) []QXmlStreamNotationDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NotationDeclarations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QXmlStreamNotationDeclaration, _arr.len) catch @panic("qxmlstreamreader.NotationDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamNotationDeclaration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntityDeclarations(self: QXmlStreamReader, allocator: std.mem.Allocator) []QXmlStreamEntityDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_EntityDeclarations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QXmlStreamEntityDeclaration, _arr.len) catch @panic("qxmlstreamreader.EntityDeclarations: Memory allocation failed");
        const _data: [*]QtC.QXmlStreamEntityDeclaration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn EntityExpansionLimit(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_EntityExpansionLimit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityExpansionLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetEntityExpansionLimit(self: QXmlStreamReader, limit: i32) void {
        qtc.QXmlStreamReader_SetEntityExpansionLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn RaiseError(self: QXmlStreamReader) void {
        qtc.QXmlStreamReader_RaiseError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qxmlstream_enums.Error `
    ///
    pub fn Error(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn HasError(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_HasError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` resolver: QXmlStreamEntityResolver `
    ///
    pub fn SetEntityResolver(self: QXmlStreamReader, resolver: anytype) void {
        comptime _ = @TypeOf(resolver)._is_QXmlStreamEntityResolver;
        qtc.QXmlStreamReader_SetEntityResolver(@ptrCast(self.ptr), @ptrCast(resolver.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn EntityResolver(self: QXmlStreamReader) QXmlStreamEntityResolver {
        return .{ .ptr = qtc.QXmlStreamReader_EntityResolver(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` behaviour: qxmlstream_enums.ReadElementTextBehaviour `
    ///
    pub fn ReadElementText1(self: QXmlStreamReader, allocator: std.mem.Allocator, behaviour: i32) []const u8 {
        var _str = qtc.QXmlStreamReader_ReadElementText1(@ptrCast(self.ptr), @bitCast(behaviour));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qxmlstreamreader.ReadElementText1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` message: []const u8 `
    ///
    pub fn RaiseError1(self: QXmlStreamReader, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QXmlStreamReader_RaiseError1(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtor.QXmlStreamReader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn Delete(self: QXmlStreamReader) void {
        qtc.QXmlStreamReader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html)
pub const QXmlStreamWriter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QXmlStreamWriter,

    pub const _is_QXmlStreamWriter = {};

    /// New constructs a new QXmlStreamWriter object.
    ///
    pub fn New() QXmlStreamWriter {
        return .{ .ptr = qtc.QXmlStreamWriter_new() };
    }

    /// New2 constructs a new QXmlStreamWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New2(device: anytype) QXmlStreamWriter {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QXmlStreamWriter_new2(@ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QXmlStreamWriter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QXmlStreamWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn Device(self: QXmlStreamWriter) QIODevice {
        return .{ .ptr = qtc.QXmlStreamWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` autoFormatting: bool `
    ///
    pub fn SetAutoFormatting(self: QXmlStreamWriter, autoFormatting: bool) void {
        qtc.QXmlStreamWriter_SetAutoFormatting(@ptrCast(self.ptr), autoFormatting);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn AutoFormatting(self: QXmlStreamWriter) bool {
        return qtc.QXmlStreamWriter_AutoFormatting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` spacesOrTabs: i32 `
    ///
    pub fn SetAutoFormattingIndent(self: QXmlStreamWriter, spacesOrTabs: i32) void {
        qtc.QXmlStreamWriter_SetAutoFormattingIndent(@ptrCast(self.ptr), @bitCast(spacesOrTabs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn AutoFormattingIndent(self: QXmlStreamWriter) i32 {
        return qtc.QXmlStreamWriter_AutoFormattingIndent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn WriteAttribute(self: QXmlStreamWriter, qualifiedName: []const u8, value: []const u8) void {
        qtc.QXmlStreamWriter_WriteAttribute(@ptrCast(self.ptr), qualifiedName.ptr, value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn WriteAttribute2(self: QXmlStreamWriter, namespaceUri: []const u8, name: []const u8, value: []const u8) void {
        qtc.QXmlStreamWriter_WriteAttribute2(@ptrCast(self.ptr), namespaceUri.ptr, name.ptr, value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` attribute: QXmlStreamAttribute `
    ///
    pub fn WriteAttribute3(self: QXmlStreamWriter, attribute: anytype) void {
        comptime _ = @TypeOf(attribute)._is_QXmlStreamAttribute;
        qtc.QXmlStreamWriter_WriteAttribute3(@ptrCast(self.ptr), @ptrCast(attribute.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` attributes: QXmlStreamAttributes `
    ///
    pub fn WriteAttributes(self: QXmlStreamWriter, attributes: anytype) void {
        comptime _ = @TypeOf(attributes)._is_QXmlStreamAttributes;
        qtc.QXmlStreamWriter_WriteAttributes(@ptrCast(self.ptr), @ptrCast(attributes.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteCDATA(self: QXmlStreamWriter, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteCDATA(@ptrCast(self.ptr), text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteCharacters(self: QXmlStreamWriter, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteCharacters(@ptrCast(self.ptr), text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteComment(self: QXmlStreamWriter, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteComment(@ptrCast(self.ptr), text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` dtd: []const u8 `
    ///
    pub fn WriteDTD(self: QXmlStreamWriter, dtd: []const u8) void {
        qtc.QXmlStreamWriter_WriteDTD(@ptrCast(self.ptr), dtd.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    pub fn WriteEmptyElement(self: QXmlStreamWriter, qualifiedName: []const u8) void {
        qtc.QXmlStreamWriter_WriteEmptyElement(@ptrCast(self.ptr), qualifiedName.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteEmptyElement2(self: QXmlStreamWriter, namespaceUri: []const u8, name: []const u8) void {
        qtc.QXmlStreamWriter_WriteEmptyElement2(@ptrCast(self.ptr), namespaceUri.ptr, name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteTextElement(self: QXmlStreamWriter, qualifiedName: []const u8, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteTextElement(@ptrCast(self.ptr), qualifiedName.ptr, text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn WriteTextElement2(self: QXmlStreamWriter, namespaceUri: []const u8, name: []const u8, text: []const u8) void {
        qtc.QXmlStreamWriter_WriteTextElement2(@ptrCast(self.ptr), namespaceUri.ptr, name.ptr, text.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn WriteEndDocument(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_WriteEndDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn WriteEndElement(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_WriteEndElement(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteEntityReference(self: QXmlStreamWriter, name: []const u8) void {
        qtc.QXmlStreamWriter_WriteEntityReference(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    pub fn WriteNamespace(self: QXmlStreamWriter, namespaceUri: []const u8) void {
        qtc.QXmlStreamWriter_WriteNamespace(@ptrCast(self.ptr), namespaceUri.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    pub fn WriteDefaultNamespace(self: QXmlStreamWriter, namespaceUri: []const u8) void {
        qtc.QXmlStreamWriter_WriteDefaultNamespace(@ptrCast(self.ptr), namespaceUri.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` target: []const u8 `
    ///
    pub fn WriteProcessingInstruction(self: QXmlStreamWriter, target: []const u8) void {
        qtc.QXmlStreamWriter_WriteProcessingInstruction(@ptrCast(self.ptr), target.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn WriteStartDocument(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_WriteStartDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` version: []const u8 `
    ///
    pub fn WriteStartDocument2(self: QXmlStreamWriter, version: []const u8) void {
        qtc.QXmlStreamWriter_WriteStartDocument2(@ptrCast(self.ptr), version.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` version: []const u8 `
    ///
    /// ` standalone: bool `
    ///
    pub fn WriteStartDocument3(self: QXmlStreamWriter, version: []const u8, standalone: bool) void {
        qtc.QXmlStreamWriter_WriteStartDocument3(@ptrCast(self.ptr), version.ptr, standalone);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` qualifiedName: []const u8 `
    ///
    pub fn WriteStartElement(self: QXmlStreamWriter, qualifiedName: []const u8) void {
        qtc.QXmlStreamWriter_WriteStartElement(@ptrCast(self.ptr), qualifiedName.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn WriteStartElement2(self: QXmlStreamWriter, namespaceUri: []const u8, name: []const u8) void {
        qtc.QXmlStreamWriter_WriteStartElement2(@ptrCast(self.ptr), namespaceUri.ptr, name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    pub fn WriteCurrentToken(self: QXmlStreamWriter, reader: anytype) void {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        qtc.QXmlStreamWriter_WriteCurrentToken(@ptrCast(self.ptr), @ptrCast(reader.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn HasError(self: QXmlStreamWriter) bool {
        return qtc.QXmlStreamWriter_HasError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` namespaceUri: []const u8 `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn WriteNamespace2(self: QXmlStreamWriter, namespaceUri: []const u8, prefix: []const u8) void {
        qtc.QXmlStreamWriter_WriteNamespace2(@ptrCast(self.ptr), namespaceUri.ptr, prefix.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` target: []const u8 `
    ///
    /// ` data: []const u8 `
    ///
    pub fn WriteProcessingInstruction2(self: QXmlStreamWriter, target: []const u8, data: []const u8) void {
        qtc.QXmlStreamWriter_WriteProcessingInstruction2(@ptrCast(self.ptr), target.ptr, data.ptr);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#dtor.QXmlStreamWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn Delete(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_Delete(@ptrCast(self.ptr));
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
