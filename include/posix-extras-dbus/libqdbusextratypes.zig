const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html)
pub const QDBusObjectPath = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusObjectPath,

    pub const _is_QDBusObjectPath = {};

    /// New constructs a new QDBusObjectPath object.
    ///
    pub fn New() QDBusObjectPath {
        return .{ .ptr = qtc.QDBusObjectPath_new() };
    }

    /// New2 constructs a new QDBusObjectPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: [:0]const u8 `
    ///
    pub fn New2(path: [:0]const u8) QDBusObjectPath {
        const path_Cstring = path.ptr;
        return .{ .ptr = qtc.QDBusObjectPath_new2(path_Cstring) };
    }

    /// New3 constructs a new QDBusObjectPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn New3(path: []const u8) QDBusObjectPath {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDBusObjectPath_new3(path_str) };
    }

    /// New4 constructs a new QDBusObjectPath object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusObjectPath `
    ///
    pub fn New4(param1: anytype) QDBusObjectPath {
        comptime _ = @TypeOf(param1)._is_QDBusObjectPath;
        return .{ .ptr = qtc.QDBusObjectPath_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    /// ` other: QDBusObjectPath `
    ///
    pub fn Swap(self: QDBusObjectPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusObjectPath;
        qtc.QDBusObjectPath_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPath(self: QDBusObjectPath, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusObjectPath_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QDBusObjectPath, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusObjectPath_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusobjectpath.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    pub fn ToQVariant(self: QDBusObjectPath) QVariant {
        return .{ .ptr = qtc.QDBusObjectPath_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#dtor.QDBusObjectPath)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusObjectPath `
    ///
    pub fn Delete(self: QDBusObjectPath) void {
        qtc.QDBusObjectPath_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html)
pub const QDBusSignature = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusSignature,

    pub const _is_QDBusSignature = {};

    /// New constructs a new QDBusSignature object.
    ///
    pub fn New() QDBusSignature {
        return .{ .ptr = qtc.QDBusSignature_new() };
    }

    /// New2 constructs a new QDBusSignature object.
    ///
    /// ## Parameter(s):
    ///
    /// ` signature: [:0]const u8 `
    ///
    pub fn New2(signature: [:0]const u8) QDBusSignature {
        const signature_Cstring = signature.ptr;
        return .{ .ptr = qtc.QDBusSignature_new2(signature_Cstring) };
    }

    /// New3 constructs a new QDBusSignature object.
    ///
    /// ## Parameter(s):
    ///
    /// ` signature: []const u8 `
    ///
    pub fn New3(signature: []const u8) QDBusSignature {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        return .{ .ptr = qtc.QDBusSignature_new3(signature_str) };
    }

    /// New4 constructs a new QDBusSignature object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusSignature `
    ///
    pub fn New4(param1: anytype) QDBusSignature {
        comptime _ = @TypeOf(param1)._is_QDBusSignature;
        return .{ .ptr = qtc.QDBusSignature_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusSignature `
    ///
    /// ` other: QDBusSignature `
    ///
    pub fn Swap(self: QDBusSignature, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusSignature;
        qtc.QDBusSignature_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#setSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusSignature `
    ///
    /// ` signature: []const u8 `
    ///
    pub fn SetSignature(self: QDBusSignature, signature: []const u8) void {
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        qtc.QDBusSignature_SetSignature(@ptrCast(self.ptr), signature_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Signature(self: QDBusSignature, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusSignature_Signature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbussignature.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#dtor.QDBusSignature)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusSignature `
    ///
    pub fn Delete(self: QDBusSignature) void {
        qtc.QDBusSignature_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html)
pub const QDBusVariant = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusVariant,

    pub const _is_QDBusVariant = {};

    /// New constructs a new QDBusVariant object.
    ///
    pub fn New() QDBusVariant {
        return .{ .ptr = qtc.QDBusVariant_new() };
    }

    /// New2 constructs a new QDBusVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn New2(variant: anytype) QDBusVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QDBusVariant_new2(@ptrCast(variant.ptr)) };
    }

    /// New3 constructs a new QDBusVariant object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusVariant `
    ///
    pub fn New3(param1: anytype) QDBusVariant {
        comptime _ = @TypeOf(param1)._is_QDBusVariant;
        return .{ .ptr = qtc.QDBusVariant_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    /// ` other: QDBusVariant `
    ///
    pub fn Swap(self: QDBusVariant, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusVariant;
        qtc.QDBusVariant_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#setVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SetVariant(self: QDBusVariant, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QDBusVariant_SetVariant(@ptrCast(self.ptr), @ptrCast(variant.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    pub fn Variant(self: QDBusVariant) QVariant {
        return .{ .ptr = qtc.QDBusVariant_Variant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    /// ` param1: QDBusVariant `
    ///
    pub fn OperatorAssign(self: QDBusVariant, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDBusVariant;
        qtc.QDBusVariant_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#dtor.QDBusVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusVariant `
    ///
    pub fn Delete(self: QDBusVariant) void {
        qtc.QDBusVariant_Delete(@ptrCast(self.ptr));
    }
};
