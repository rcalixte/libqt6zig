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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamAttribute object in C++ memory
    ///
    pub fn new() QXmlStreamAttribute {
        return .{ .ptr = qtc.QXmlStreamAttribute_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QXmlStreamAttribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn new2(_qualifiedName: []const u8, _value: []const u8) QXmlStreamAttribute {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return .{ .ptr = qtc.QXmlStreamAttribute_new2(qualifiedName_str, value_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QXmlStreamAttribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn new3(_namespaceUri: []const u8, _name: []const u8, _value: []const u8) QXmlStreamAttribute {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return .{ .ptr = qtc.QXmlStreamAttribute_new3(namespaceUri_str, name_str, value_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QXmlStreamAttribute object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamAttribute `
    ///
    pub fn new4(param1: anytype) QXmlStreamAttribute {
        comptime _ = @TypeOf(param1)._is_QXmlStreamAttribute;
        return .{ .ptr = qtc.QXmlStreamAttribute_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `namespaceUri` instead
    ///
    pub const NamespaceUri = namespaceUri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#namespaceUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn namespaceUri(self: QXmlStreamAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamAttribute_NamespaceUri(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamAttribute.namespaceUri: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QXmlStreamAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamAttribute_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamAttribute.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qualifiedName` instead
    ///
    pub const QualifiedName = qualifiedName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#qualifiedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn qualifiedName(self: QXmlStreamAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamAttribute_QualifiedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamAttribute.qualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prefix(self: QXmlStreamAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamAttribute_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamAttribute.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QXmlStreamAttribute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamAttribute_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamAttribute.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    pub fn isDefault(self: QXmlStreamAttribute) bool {
        return qtc.QXmlStreamAttribute_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattribute.html#dtor.QXmlStreamAttribute)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamAttribute `
    ///
    pub fn delete(self: QXmlStreamAttribute) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamAttributes object in C++ memory
    ///
    pub fn new() QXmlStreamAttributes {
        return .{ .ptr = qtc.QXmlStreamAttributes_new() };
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn value(self: QXmlStreamAttributes, allocator: std.mem.Allocator, _namespaceUri: []const u8, _name: []const u8) []const u8 {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.QXmlStreamAttributes_Value(@ptrCast(self.ptr), namespaceUri_str, name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamAttributes.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    pub fn value2(self: QXmlStreamAttributes, allocator: std.mem.Allocator, _qualifiedName: []const u8) []const u8 {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        var _str = qtc.QXmlStreamAttributes_Value2(@ptrCast(self.ptr), qualifiedName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamAttributes.value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn append(self: QXmlStreamAttributes, _namespaceUri: []const u8, _name: []const u8, _value: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QXmlStreamAttributes_Append(@ptrCast(self.ptr), namespaceUri_str, name_str, value_str);
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn append2(self: QXmlStreamAttributes, _qualifiedName: []const u8, _value: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QXmlStreamAttributes_Append2(@ptrCast(self.ptr), qualifiedName_str, value_str);
    }

    /// ### DEPRECATED: Use `hasAttribute` instead
    ///
    pub const HasAttribute = hasAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    pub fn hasAttribute(self: QXmlStreamAttributes, _qualifiedName: []const u8) bool {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        return qtc.QXmlStreamAttributes_HasAttribute(@ptrCast(self.ptr), qualifiedName_str);
    }

    /// ### DEPRECATED: Use `hasAttribute2` instead
    ///
    pub const HasAttribute2 = hasAttribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn hasAttribute2(self: QXmlStreamAttributes, _namespaceUri: []const u8, _name: []const u8) bool {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QXmlStreamAttributes_HasAttribute2(@ptrCast(self.ptr), namespaceUri_str, name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamattributes.html#dtor.QXmlStreamAttributes)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamAttributes `
    ///
    pub fn delete(self: QXmlStreamAttributes) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamNamespaceDeclaration object in C++ memory
    ///
    pub fn new() QXmlStreamNamespaceDeclaration {
        return .{ .ptr = qtc.QXmlStreamNamespaceDeclaration_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QXmlStreamNamespaceDeclaration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _prefix: []const u8 `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    pub fn new2(_prefix: []const u8, _namespaceUri: []const u8) QXmlStreamNamespaceDeclaration {
        const prefix_str = qtc.libqt_string{
            .len = _prefix.len,
            .data = _prefix.ptr,
        };
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        return .{ .ptr = qtc.QXmlStreamNamespaceDeclaration_new2(prefix_str, namespaceUri_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QXmlStreamNamespaceDeclaration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamNamespaceDeclaration `
    ///
    pub fn new3(param1: anytype) QXmlStreamNamespaceDeclaration {
        comptime _ = @TypeOf(param1)._is_QXmlStreamNamespaceDeclaration;
        return .{ .ptr = qtc.QXmlStreamNamespaceDeclaration_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamNamespaceDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prefix(self: QXmlStreamNamespaceDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamNamespaceDeclaration_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamNamespaceDeclaration.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `namespaceUri` instead
    ///
    pub const NamespaceUri = namespaceUri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#namespaceUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamNamespaceDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn namespaceUri(self: QXmlStreamNamespaceDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamNamespaceDeclaration_NamespaceUri(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamNamespaceDeclaration.namespaceUri: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnamespacedeclaration.html#dtor.QXmlStreamNamespaceDeclaration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamNamespaceDeclaration `
    ///
    pub fn delete(self: QXmlStreamNamespaceDeclaration) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamNotationDeclaration object in C++ memory
    ///
    pub fn new() QXmlStreamNotationDeclaration {
        return .{ .ptr = qtc.QXmlStreamNotationDeclaration_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QXmlStreamNotationDeclaration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamNotationDeclaration `
    ///
    pub fn new2(param1: anytype) QXmlStreamNotationDeclaration {
        comptime _ = @TypeOf(param1)._is_QXmlStreamNotationDeclaration;
        return .{ .ptr = qtc.QXmlStreamNotationDeclaration_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamNotationDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QXmlStreamNotationDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamNotationDeclaration_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamNotationDeclaration.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `systemId` instead
    ///
    pub const SystemId = systemId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamNotationDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemId(self: QXmlStreamNotationDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamNotationDeclaration_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamNotationDeclaration.systemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `publicId` instead
    ///
    pub const PublicId = publicId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamNotationDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn publicId(self: QXmlStreamNotationDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamNotationDeclaration_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamNotationDeclaration.publicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamnotationdeclaration.html#dtor.QXmlStreamNotationDeclaration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamNotationDeclaration `
    ///
    pub fn delete(self: QXmlStreamNotationDeclaration) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamEntityDeclaration object in C++ memory
    ///
    pub fn new() QXmlStreamEntityDeclaration {
        return .{ .ptr = qtc.QXmlStreamEntityDeclaration_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QXmlStreamEntityDeclaration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QXmlStreamEntityDeclaration `
    ///
    pub fn new2(param1: anytype) QXmlStreamEntityDeclaration {
        comptime _ = @TypeOf(param1)._is_QXmlStreamEntityDeclaration;
        return .{ .ptr = qtc.QXmlStreamEntityDeclaration_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QXmlStreamEntityDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamEntityDeclaration_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityDeclaration.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `notationName` instead
    ///
    pub const NotationName = notationName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#notationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn notationName(self: QXmlStreamEntityDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamEntityDeclaration_NotationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityDeclaration.notationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `systemId` instead
    ///
    pub const SystemId = systemId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemId(self: QXmlStreamEntityDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamEntityDeclaration_SystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityDeclaration.systemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `publicId` instead
    ///
    pub const PublicId = publicId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#publicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn publicId(self: QXmlStreamEntityDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamEntityDeclaration_PublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityDeclaration.publicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityDeclaration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QXmlStreamEntityDeclaration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamEntityDeclaration_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityDeclaration.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentitydeclaration.html#dtor.QXmlStreamEntityDeclaration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamEntityDeclaration `
    ///
    pub fn delete(self: QXmlStreamEntityDeclaration) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamEntityResolver object in C++ memory
    ///
    pub fn new() QXmlStreamEntityResolver {
        return .{ .ptr = qtc.QXmlStreamEntityResolver_new() };
    }

    /// ### DEPRECATED: Use `resolveEntity` instead
    ///
    pub const ResolveEntity = resolveEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _publicId: []const u8 `
    ///
    /// ` _systemId: []const u8 `
    ///
    pub fn resolveEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, _publicId: []const u8, _systemId: []const u8) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = _publicId.len,
            .data = _publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = _systemId.len,
            .data = _systemId.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_ResolveEntity(@ptrCast(self.ptr), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityResolver.resolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onResolveEntity` instead
    ///
    pub const OnResolveEntity = onResolveEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` callback: *const fn (self: QXmlStreamEntityResolver, publicId: [*:0]const u8, systemId: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onResolveEntity(self: QXmlStreamEntityResolver, callback: *const fn (QXmlStreamEntityResolver, [*:0]const u8, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveEntity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResolveEntity` instead
    ///
    pub const SuperResolveEntity = superResolveEntity;

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
    /// ` _publicId: []const u8 `
    ///
    /// ` _systemId: []const u8 `
    ///
    pub fn superResolveEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, _publicId: []const u8, _systemId: []const u8) []const u8 {
        const publicId_str = qtc.libqt_string{
            .len = _publicId.len,
            .data = _publicId.ptr,
        };
        const systemId_str = qtc.libqt_string{
            .len = _systemId.len,
            .data = _systemId.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_SuperResolveEntity(@ptrCast(self.ptr), publicId_str, systemId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityResolver.resolveEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resolveUndeclaredEntity` instead
    ///
    pub const ResolveUndeclaredEntity = resolveUndeclaredEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn resolveUndeclaredEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, _name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_ResolveUndeclaredEntity(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityResolver.resolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onResolveUndeclaredEntity` instead
    ///
    pub const OnResolveUndeclaredEntity = onResolveUndeclaredEntity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#resolveUndeclaredEntity)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    /// ` callback: *const fn (self: QXmlStreamEntityResolver, name: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onResolveUndeclaredEntity(self: QXmlStreamEntityResolver, callback: *const fn (QXmlStreamEntityResolver, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QXmlStreamEntityResolver_OnResolveUndeclaredEntity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResolveUndeclaredEntity` instead
    ///
    pub const SuperResolveUndeclaredEntity = superResolveUndeclaredEntity;

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
    /// ` _name: []const u8 `
    ///
    pub fn superResolveUndeclaredEntity(self: QXmlStreamEntityResolver, allocator: std.mem.Allocator, _name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.QXmlStreamEntityResolver_SuperResolveUndeclaredEntity(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamEntityResolver.resolveUndeclaredEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamentityresolver.html#dtor.QXmlStreamEntityResolver)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamEntityResolver `
    ///
    pub fn delete(self: QXmlStreamEntityResolver) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamReader object in C++ memory
    ///
    pub fn new() QXmlStreamReader {
        return .{ .ptr = qtc.QXmlStreamReader_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QXmlStreamReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    pub fn new2(_device: anytype) QXmlStreamReader {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        return .{ .ptr = qtc.QXmlStreamReader_new2(@ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QXmlStreamReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []const u8 `
    ///
    pub fn new3(data: []const u8) QXmlStreamReader {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QXmlStreamReader_new3(data_str) };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QXmlStreamReader, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QXmlStreamReader_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn device(self: QXmlStreamReader) QIODevice {
        return .{ .ptr = qtc.QXmlStreamReader_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addData` instead
    ///
    pub const AddData = addData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` data: []const u8 `
    ///
    pub fn addData(self: QXmlStreamReader, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QXmlStreamReader_AddData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn clear(self: QXmlStreamReader) void {
        qtc.QXmlStreamReader_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn atEnd(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readNext` instead
    ///
    pub const ReadNext = readNext;

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
    pub fn readNext(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_ReadNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readNextStartElement` instead
    ///
    pub const ReadNextStartElement = readNextStartElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readNextStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn readNextStartElement(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_ReadNextStartElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `skipCurrentElement` instead
    ///
    pub const SkipCurrentElement = skipCurrentElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#skipCurrentElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn skipCurrentElement(self: QXmlStreamReader) void {
        qtc.QXmlStreamReader_SkipCurrentElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tokenType` instead
    ///
    pub const TokenType = tokenType;

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
    pub fn tokenType(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_TokenType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tokenString` instead
    ///
    pub const TokenString = tokenString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#tokenString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tokenString(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_TokenString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.tokenString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNamespaceProcessing` instead
    ///
    pub const SetNamespaceProcessing = setNamespaceProcessing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setNamespaceProcessing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` _namespaceProcessing: bool `
    ///
    pub fn setNamespaceProcessing(self: QXmlStreamReader, _namespaceProcessing: bool) void {
        qtc.QXmlStreamReader_SetNamespaceProcessing(@ptrCast(self.ptr), _namespaceProcessing);
    }

    /// ### DEPRECATED: Use `namespaceProcessing` instead
    ///
    pub const NamespaceProcessing = namespaceProcessing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceProcessing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn namespaceProcessing(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_NamespaceProcessing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStartDocument` instead
    ///
    pub const IsStartDocument = isStartDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isStartDocument(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsStartDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEndDocument` instead
    ///
    pub const IsEndDocument = isEndDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isEndDocument(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsEndDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStartElement` instead
    ///
    pub const IsStartElement = isStartElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isStartElement(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsStartElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEndElement` instead
    ///
    pub const IsEndElement = isEndElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEndElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isEndElement(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsEndElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharacters` instead
    ///
    pub const IsCharacters = isCharacters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isCharacters(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsCharacters(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWhitespace` instead
    ///
    pub const IsWhitespace = isWhitespace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isWhitespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isWhitespace(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsWhitespace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCDATA` instead
    ///
    pub const IsCDATA = isCDATA;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isCDATA)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isCDATA(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsCDATA(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComment` instead
    ///
    pub const IsComment = isComment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isComment(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsComment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDTD` instead
    ///
    pub const IsDTD = isDTD;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isDTD)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isDTD(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsDTD(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEntityReference` instead
    ///
    pub const IsEntityReference = isEntityReference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isEntityReference(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsEntityReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProcessingInstruction` instead
    ///
    pub const IsProcessingInstruction = isProcessingInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isProcessingInstruction(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsProcessingInstruction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStandaloneDocument` instead
    ///
    pub const IsStandaloneDocument = isStandaloneDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#isStandaloneDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn isStandaloneDocument(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_IsStandaloneDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasStandaloneDeclaration` instead
    ///
    pub const HasStandaloneDeclaration = hasStandaloneDeclaration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasStandaloneDeclaration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn hasStandaloneDeclaration(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_HasStandaloneDeclaration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentVersion` instead
    ///
    pub const DocumentVersion = documentVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#documentVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentVersion(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_DocumentVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.documentVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `documentEncoding` instead
    ///
    pub const DocumentEncoding = documentEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#documentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentEncoding(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_DocumentEncoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.documentEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn lineNumber(self: QXmlStreamReader) i64 {
        return qtc.QXmlStreamReader_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnNumber` instead
    ///
    pub const ColumnNumber = columnNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#columnNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn columnNumber(self: QXmlStreamReader) i64 {
        return qtc.QXmlStreamReader_ColumnNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `characterOffset` instead
    ///
    pub const CharacterOffset = characterOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#characterOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn characterOffset(self: QXmlStreamReader) i64 {
        return qtc.QXmlStreamReader_CharacterOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn attributes(self: QXmlStreamReader) QXmlStreamAttributes {
        return .{ .ptr = qtc.QXmlStreamReader_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readElementText` instead
    ///
    pub const ReadElementText = readElementText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#readElementText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readElementText(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ReadElementText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.readElementText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `namespaceUri` instead
    ///
    pub const NamespaceUri = namespaceUri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn namespaceUri(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_NamespaceUri(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.namespaceUri: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qualifiedName` instead
    ///
    pub const QualifiedName = qualifiedName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#qualifiedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn qualifiedName(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_QualifiedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.qualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `prefix` instead
    ///
    pub const Prefix = prefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prefix(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `processingInstructionTarget` instead
    ///
    pub const ProcessingInstructionTarget = processingInstructionTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#processingInstructionTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn processingInstructionTarget(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ProcessingInstructionTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.processingInstructionTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `processingInstructionData` instead
    ///
    pub const ProcessingInstructionData = processingInstructionData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#processingInstructionData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn processingInstructionData(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ProcessingInstructionData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.processingInstructionData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `namespaceDeclarations` instead
    ///
    pub const NamespaceDeclarations = namespaceDeclarations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#namespaceDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn namespaceDeclarations(self: QXmlStreamReader, allocator: std.mem.Allocator) []QXmlStreamNamespaceDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NamespaceDeclarations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QXmlStreamNamespaceDeclaration, _arr.len) catch @panic("QXmlStreamReader.namespaceDeclarations: Memory allocation failed");
        const _data_val: [*]QtC.QXmlStreamNamespaceDeclaration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addExtraNamespaceDeclaration` instead
    ///
    pub const AddExtraNamespaceDeclaration = addExtraNamespaceDeclaration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclaration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` extraNamespaceDeclaraction: QXmlStreamNamespaceDeclaration `
    ///
    pub fn addExtraNamespaceDeclaration(self: QXmlStreamReader, extraNamespaceDeclaraction: anytype) void {
        comptime _ = @TypeOf(extraNamespaceDeclaraction)._is_QXmlStreamNamespaceDeclaration;
        qtc.QXmlStreamReader_AddExtraNamespaceDeclaration(@ptrCast(self.ptr), @ptrCast(extraNamespaceDeclaraction.ptr));
    }

    /// ### DEPRECATED: Use `addExtraNamespaceDeclarations` instead
    ///
    pub const AddExtraNamespaceDeclarations = addExtraNamespaceDeclarations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#addExtraNamespaceDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` extraNamespaceDeclaractions: []QXmlStreamNamespaceDeclaration `
    ///
    pub fn addExtraNamespaceDeclarations(self: QXmlStreamReader, extraNamespaceDeclaractions: []QXmlStreamNamespaceDeclaration) void {
        const extraNamespaceDeclaractions_list = qtc.libqt_list{
            .len = extraNamespaceDeclaractions.len,
            .data = @ptrCast(extraNamespaceDeclaractions.ptr),
        };
        qtc.QXmlStreamReader_AddExtraNamespaceDeclarations(@ptrCast(self.ptr), extraNamespaceDeclaractions_list);
    }

    /// ### DEPRECATED: Use `notationDeclarations` instead
    ///
    pub const NotationDeclarations = notationDeclarations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#notationDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn notationDeclarations(self: QXmlStreamReader, allocator: std.mem.Allocator) []QXmlStreamNotationDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_NotationDeclarations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QXmlStreamNotationDeclaration, _arr.len) catch @panic("QXmlStreamReader.notationDeclarations: Memory allocation failed");
        const _data_val: [*]QtC.QXmlStreamNotationDeclaration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `entityDeclarations` instead
    ///
    pub const EntityDeclarations = entityDeclarations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityDeclarations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn entityDeclarations(self: QXmlStreamReader, allocator: std.mem.Allocator) []QXmlStreamEntityDeclaration {
        const _arr: qtc.libqt_list = qtc.QXmlStreamReader_EntityDeclarations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QXmlStreamEntityDeclaration, _arr.len) catch @panic("QXmlStreamReader.entityDeclarations: Memory allocation failed");
        const _data_val: [*]QtC.QXmlStreamEntityDeclaration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `dtdName` instead
    ///
    pub const DtdName = dtdName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtdName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dtdName(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_DtdName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.dtdName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dtdPublicId` instead
    ///
    pub const DtdPublicId = dtdPublicId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtdPublicId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dtdPublicId(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_DtdPublicId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.dtdPublicId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dtdSystemId` instead
    ///
    pub const DtdSystemId = dtdSystemId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtdSystemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dtdSystemId(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_DtdSystemId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.dtdSystemId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `entityExpansionLimit` instead
    ///
    pub const EntityExpansionLimit = entityExpansionLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityExpansionLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn entityExpansionLimit(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_EntityExpansionLimit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEntityExpansionLimit` instead
    ///
    pub const SetEntityExpansionLimit = setEntityExpansionLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityExpansionLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` limit: i32 `
    ///
    pub fn setEntityExpansionLimit(self: QXmlStreamReader, limit: i32) void {
        qtc.QXmlStreamReader_SetEntityExpansionLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### DEPRECATED: Use `raiseError` instead
    ///
    pub const RaiseError = raiseError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn raiseError(self: QXmlStreamReader) void {
        qtc.QXmlStreamReader_RaiseError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QXmlStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXmlStreamReader_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QXmlStreamReader) i32 {
        return qtc.QXmlStreamReader_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn hasError(self: QXmlStreamReader) bool {
        return qtc.QXmlStreamReader_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEntityResolver` instead
    ///
    pub const SetEntityResolver = setEntityResolver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#setEntityResolver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` resolver: QXmlStreamEntityResolver `
    ///
    pub fn setEntityResolver(self: QXmlStreamReader, resolver: anytype) void {
        comptime _ = @TypeOf(resolver)._is_QXmlStreamEntityResolver;
        qtc.QXmlStreamReader_SetEntityResolver(@ptrCast(self.ptr), @ptrCast(resolver.ptr));
    }

    /// ### DEPRECATED: Use `entityResolver` instead
    ///
    pub const EntityResolver = entityResolver;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#entityResolver)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn entityResolver(self: QXmlStreamReader) QXmlStreamEntityResolver {
        return .{ .ptr = qtc.QXmlStreamReader_EntityResolver(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readElementText1` instead
    ///
    pub const ReadElementText1 = readElementText1;

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
    pub fn readElementText1(self: QXmlStreamReader, allocator: std.mem.Allocator, behaviour: i32) []const u8 {
        var _str = qtc.QXmlStreamReader_ReadElementText1(@ptrCast(self.ptr), @bitCast(behaviour));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QXmlStreamReader.readElementText1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `raiseError1` instead
    ///
    pub const RaiseError1 = raiseError1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#raiseError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamReader `
    ///
    /// ` message: []const u8 `
    ///
    pub fn raiseError1(self: QXmlStreamReader, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QXmlStreamReader_RaiseError1(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamreader.html#dtor.QXmlStreamReader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamReader `
    ///
    pub fn delete(self: QXmlStreamReader) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QXmlStreamWriter object in C++ memory
    ///
    pub fn new() QXmlStreamWriter {
        return .{ .ptr = qtc.QXmlStreamWriter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QXmlStreamWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    pub fn new2(_device: anytype) QXmlStreamWriter {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        return .{ .ptr = qtc.QXmlStreamWriter_new2(@ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QXmlStreamWriter, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QXmlStreamWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn device(self: QXmlStreamWriter) QIODevice {
        return .{ .ptr = qtc.QXmlStreamWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoFormatting` instead
    ///
    pub const SetAutoFormatting = setAutoFormatting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _autoFormatting: bool `
    ///
    pub fn setAutoFormatting(self: QXmlStreamWriter, _autoFormatting: bool) void {
        qtc.QXmlStreamWriter_SetAutoFormatting(@ptrCast(self.ptr), _autoFormatting);
    }

    /// ### DEPRECATED: Use `autoFormatting` instead
    ///
    pub const AutoFormatting = autoFormatting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn autoFormatting(self: QXmlStreamWriter) bool {
        return qtc.QXmlStreamWriter_AutoFormatting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFormattingIndent` instead
    ///
    pub const SetAutoFormattingIndent = setAutoFormattingIndent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#setAutoFormattingIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` spacesOrTabs: i32 `
    ///
    pub fn setAutoFormattingIndent(self: QXmlStreamWriter, spacesOrTabs: i32) void {
        qtc.QXmlStreamWriter_SetAutoFormattingIndent(@ptrCast(self.ptr), @bitCast(spacesOrTabs));
    }

    /// ### DEPRECATED: Use `autoFormattingIndent` instead
    ///
    pub const AutoFormattingIndent = autoFormattingIndent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#autoFormattingIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn autoFormattingIndent(self: QXmlStreamWriter) i32 {
        return qtc.QXmlStreamWriter_AutoFormattingIndent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeAttribute` instead
    ///
    pub const WriteAttribute = writeAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn writeAttribute(self: QXmlStreamWriter, _qualifiedName: []const u8, _value: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QXmlStreamWriter_WriteAttribute(@ptrCast(self.ptr), qualifiedName_str, value_str);
    }

    /// ### DEPRECATED: Use `writeAttribute2` instead
    ///
    pub const WriteAttribute2 = writeAttribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn writeAttribute2(self: QXmlStreamWriter, _namespaceUri: []const u8, _name: []const u8, _value: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QXmlStreamWriter_WriteAttribute2(@ptrCast(self.ptr), namespaceUri_str, name_str, value_str);
    }

    /// ### DEPRECATED: Use `writeAttribute3` instead
    ///
    pub const WriteAttribute3 = writeAttribute3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` attribute: QXmlStreamAttribute `
    ///
    pub fn writeAttribute3(self: QXmlStreamWriter, attribute: anytype) void {
        comptime _ = @TypeOf(attribute)._is_QXmlStreamAttribute;
        qtc.QXmlStreamWriter_WriteAttribute3(@ptrCast(self.ptr), @ptrCast(attribute.ptr));
    }

    /// ### DEPRECATED: Use `writeAttributes` instead
    ///
    pub const WriteAttributes = writeAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _attributes: QXmlStreamAttributes `
    ///
    pub fn writeAttributes(self: QXmlStreamWriter, _attributes: anytype) void {
        comptime _ = @TypeOf(_attributes)._is_QXmlStreamAttributes;
        qtc.QXmlStreamWriter_WriteAttributes(@ptrCast(self.ptr), @ptrCast(_attributes.ptr));
    }

    /// ### DEPRECATED: Use `writeCDATA` instead
    ///
    pub const WriteCDATA = writeCDATA;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCDATA)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn writeCDATA(self: QXmlStreamWriter, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QXmlStreamWriter_WriteCDATA(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `writeCharacters` instead
    ///
    pub const WriteCharacters = writeCharacters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn writeCharacters(self: QXmlStreamWriter, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QXmlStreamWriter_WriteCharacters(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `writeComment` instead
    ///
    pub const WriteComment = writeComment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn writeComment(self: QXmlStreamWriter, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QXmlStreamWriter_WriteComment(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `writeDTD` instead
    ///
    pub const WriteDTD = writeDTD;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDTD)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` dtd: []const u8 `
    ///
    pub fn writeDTD(self: QXmlStreamWriter, dtd: []const u8) void {
        const dtd_str = qtc.libqt_string{
            .len = dtd.len,
            .data = dtd.ptr,
        };
        qtc.QXmlStreamWriter_WriteDTD(@ptrCast(self.ptr), dtd_str);
    }

    /// ### DEPRECATED: Use `writeEmptyElement` instead
    ///
    pub const WriteEmptyElement = writeEmptyElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    pub fn writeEmptyElement(self: QXmlStreamWriter, _qualifiedName: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        qtc.QXmlStreamWriter_WriteEmptyElement(@ptrCast(self.ptr), qualifiedName_str);
    }

    /// ### DEPRECATED: Use `writeEmptyElement2` instead
    ///
    pub const WriteEmptyElement2 = writeEmptyElement2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEmptyElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn writeEmptyElement2(self: QXmlStreamWriter, _namespaceUri: []const u8, _name: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QXmlStreamWriter_WriteEmptyElement2(@ptrCast(self.ptr), namespaceUri_str, name_str);
    }

    /// ### DEPRECATED: Use `writeTextElement` instead
    ///
    pub const WriteTextElement = writeTextElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn writeTextElement(self: QXmlStreamWriter, _qualifiedName: []const u8, _text: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QXmlStreamWriter_WriteTextElement(@ptrCast(self.ptr), qualifiedName_str, text_str);
    }

    /// ### DEPRECATED: Use `writeTextElement2` instead
    ///
    pub const WriteTextElement2 = writeTextElement2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeTextElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn writeTextElement2(self: QXmlStreamWriter, _namespaceUri: []const u8, _name: []const u8, _text: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QXmlStreamWriter_WriteTextElement2(@ptrCast(self.ptr), namespaceUri_str, name_str, text_str);
    }

    /// ### DEPRECATED: Use `writeEndDocument` instead
    ///
    pub const WriteEndDocument = writeEndDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn writeEndDocument(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_WriteEndDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeEndElement` instead
    ///
    pub const WriteEndElement = writeEndElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEndElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn writeEndElement(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_WriteEndElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeEntityReference` instead
    ///
    pub const WriteEntityReference = writeEntityReference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeEntityReference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn writeEntityReference(self: QXmlStreamWriter, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QXmlStreamWriter_WriteEntityReference(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `writeNamespace` instead
    ///
    pub const WriteNamespace = writeNamespace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    pub fn writeNamespace(self: QXmlStreamWriter, _namespaceUri: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        qtc.QXmlStreamWriter_WriteNamespace(@ptrCast(self.ptr), namespaceUri_str);
    }

    /// ### DEPRECATED: Use `writeDefaultNamespace` instead
    ///
    pub const WriteDefaultNamespace = writeDefaultNamespace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeDefaultNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    pub fn writeDefaultNamespace(self: QXmlStreamWriter, _namespaceUri: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        qtc.QXmlStreamWriter_WriteDefaultNamespace(@ptrCast(self.ptr), namespaceUri_str);
    }

    /// ### DEPRECATED: Use `writeProcessingInstruction` instead
    ///
    pub const WriteProcessingInstruction = writeProcessingInstruction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeProcessingInstruction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` target: []const u8 `
    ///
    pub fn writeProcessingInstruction(self: QXmlStreamWriter, target: []const u8) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        qtc.QXmlStreamWriter_WriteProcessingInstruction(@ptrCast(self.ptr), target_str);
    }

    /// ### DEPRECATED: Use `writeStartDocument` instead
    ///
    pub const WriteStartDocument = writeStartDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn writeStartDocument(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_WriteStartDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeStartDocument2` instead
    ///
    pub const WriteStartDocument2 = writeStartDocument2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` version: []const u8 `
    ///
    pub fn writeStartDocument2(self: QXmlStreamWriter, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartDocument2(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `writeStartDocument3` instead
    ///
    pub const WriteStartDocument3 = writeStartDocument3;

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
    pub fn writeStartDocument3(self: QXmlStreamWriter, version: []const u8, standalone: bool) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartDocument3(@ptrCast(self.ptr), version_str, standalone);
    }

    /// ### DEPRECATED: Use `writeStartElement` instead
    ///
    pub const WriteStartElement = writeStartElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _qualifiedName: []const u8 `
    ///
    pub fn writeStartElement(self: QXmlStreamWriter, _qualifiedName: []const u8) void {
        const qualifiedName_str = qtc.libqt_string{
            .len = _qualifiedName.len,
            .data = _qualifiedName.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartElement(@ptrCast(self.ptr), qualifiedName_str);
    }

    /// ### DEPRECATED: Use `writeStartElement2` instead
    ///
    pub const WriteStartElement2 = writeStartElement2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeStartElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn writeStartElement2(self: QXmlStreamWriter, _namespaceUri: []const u8, _name: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QXmlStreamWriter_WriteStartElement2(@ptrCast(self.ptr), namespaceUri_str, name_str);
    }

    /// ### DEPRECATED: Use `writeCurrentToken` instead
    ///
    pub const WriteCurrentToken = writeCurrentToken;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeCurrentToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    pub fn writeCurrentToken(self: QXmlStreamWriter, reader: anytype) void {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        qtc.QXmlStreamWriter_WriteCurrentToken(@ptrCast(self.ptr), @ptrCast(reader.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn hasError(self: QXmlStreamWriter) bool {
        return qtc.QXmlStreamWriter_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeNamespace2` instead
    ///
    pub const WriteNamespace2 = writeNamespace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#writeNamespace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QXmlStreamWriter `
    ///
    /// ` _namespaceUri: []const u8 `
    ///
    /// ` _prefix: []const u8 `
    ///
    pub fn writeNamespace2(self: QXmlStreamWriter, _namespaceUri: []const u8, _prefix: []const u8) void {
        const namespaceUri_str = qtc.libqt_string{
            .len = _namespaceUri.len,
            .data = _namespaceUri.ptr,
        };
        const prefix_str = qtc.libqt_string{
            .len = _prefix.len,
            .data = _prefix.ptr,
        };
        qtc.QXmlStreamWriter_WriteNamespace2(@ptrCast(self.ptr), namespaceUri_str, prefix_str);
    }

    /// ### DEPRECATED: Use `writeProcessingInstruction2` instead
    ///
    pub const WriteProcessingInstruction2 = writeProcessingInstruction2;

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
    pub fn writeProcessingInstruction2(self: QXmlStreamWriter, target: []const u8, data: []const u8) void {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QXmlStreamWriter_WriteProcessingInstruction2(@ptrCast(self.ptr), target_str, data_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstreamwriter.html#dtor.QXmlStreamWriter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QXmlStreamWriter `
    ///
    pub fn delete(self: QXmlStreamWriter) void {
        qtc.QXmlStreamWriter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qxmlstream.html#public-types)
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
