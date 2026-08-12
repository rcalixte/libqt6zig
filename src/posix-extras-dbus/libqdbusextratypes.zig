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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusObjectPath object in C++ memory
    ///
    pub fn new() QDBusObjectPath {
        return .{ .ptr = qtc.QDBusObjectPath_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusObjectPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: [:0]const u8 `
    ///
    pub fn new2(_path: [:0]const u8) QDBusObjectPath {
        const path_Cstring = _path.ptr;
        return .{ .ptr = qtc.QDBusObjectPath_new2(path_Cstring) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDBusObjectPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []u8 `
    ///
    pub fn new3(_path: []u8) QDBusObjectPath {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDBusObjectPath_new3(path_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDBusObjectPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _path: []const u8 `
    ///
    pub fn new4(_path: []const u8) QDBusObjectPath {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDBusObjectPath_new4(path_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDBusObjectPath object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusObjectPath `
    ///
    pub fn new5(param1: anytype) QDBusObjectPath {
        comptime _ = @TypeOf(param1)._is_QDBusObjectPath;
        return .{ .ptr = qtc.QDBusObjectPath_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    /// ` other: QDBusObjectPath `
    ///
    pub fn swap(self: QDBusObjectPath, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusObjectPath;
        qtc.QDBusObjectPath_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    /// ` _path: []const u8 `
    ///
    pub fn setPath(self: QDBusObjectPath, _path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        qtc.QDBusObjectPath_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QDBusObjectPath, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusObjectPath_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusObjectPath.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusObjectPath `
    ///
    pub fn toQVariant(self: QDBusObjectPath) QVariant {
        return .{ .ptr = qtc.QDBusObjectPath_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#dtor.QDBusObjectPath)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusObjectPath `
    ///
    pub fn delete(self: QDBusObjectPath) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusSignature object in C++ memory
    ///
    pub fn new() QDBusSignature {
        return .{ .ptr = qtc.QDBusSignature_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusSignature object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _signature: [:0]const u8 `
    ///
    pub fn new2(_signature: [:0]const u8) QDBusSignature {
        const signature_Cstring = _signature.ptr;
        return .{ .ptr = qtc.QDBusSignature_new2(signature_Cstring) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDBusSignature object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _signature: []u8 `
    ///
    pub fn new3(_signature: []u8) QDBusSignature {
        const signature_str = qtc.libqt_string{
            .len = _signature.len,
            .data = _signature.ptr,
        };
        return .{ .ptr = qtc.QDBusSignature_new3(signature_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDBusSignature object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _signature: []const u8 `
    ///
    pub fn new4(_signature: []const u8) QDBusSignature {
        const signature_str = qtc.libqt_string{
            .len = _signature.len,
            .data = _signature.ptr,
        };
        return .{ .ptr = qtc.QDBusSignature_new4(signature_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDBusSignature object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusSignature `
    ///
    pub fn new5(param1: anytype) QDBusSignature {
        comptime _ = @TypeOf(param1)._is_QDBusSignature;
        return .{ .ptr = qtc.QDBusSignature_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusSignature `
    ///
    /// ` other: QDBusSignature `
    ///
    pub fn swap(self: QDBusSignature, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusSignature;
        qtc.QDBusSignature_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setSignature` instead
    ///
    pub const SetSignature = setSignature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#setSignature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusSignature `
    ///
    /// ` _signature: []const u8 `
    ///
    pub fn setSignature(self: QDBusSignature, _signature: []const u8) void {
        const signature_str = qtc.libqt_string{
            .len = _signature.len,
            .data = _signature.ptr,
        };
        qtc.QDBusSignature_SetSignature(@ptrCast(self.ptr), signature_str);
    }

    /// ### DEPRECATED: Use `signature` instead
    ///
    pub const Signature = signature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signature(self: QDBusSignature, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusSignature_Signature(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusSignature.signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#dtor.QDBusSignature)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusSignature `
    ///
    pub fn delete(self: QDBusSignature) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusVariant object in C++ memory
    ///
    pub fn new() QDBusVariant {
        return .{ .ptr = qtc.QDBusVariant_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _variant: QVariant `
    ///
    pub fn new2(_variant: anytype) QDBusVariant {
        comptime _ = @TypeOf(_variant)._is_QVariant;
        return .{ .ptr = qtc.QDBusVariant_new2(@ptrCast(_variant.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDBusVariant object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QDBusVariant `
    ///
    pub fn new3(param1: anytype) QDBusVariant {
        comptime _ = @TypeOf(param1)._is_QDBusVariant;
        return .{ .ptr = qtc.QDBusVariant_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    /// ` other: QDBusVariant `
    ///
    pub fn swap(self: QDBusVariant, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusVariant;
        qtc.QDBusVariant_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setVariant` instead
    ///
    pub const SetVariant = setVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#setVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    /// ` _variant: QVariant `
    ///
    pub fn setVariant(self: QDBusVariant, _variant: anytype) void {
        comptime _ = @TypeOf(_variant)._is_QVariant;
        qtc.QDBusVariant_SetVariant(@ptrCast(self.ptr), @ptrCast(_variant.ptr));
    }

    /// ### DEPRECATED: Use `variant` instead
    ///
    pub const Variant = variant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    pub fn variant(self: QDBusVariant) QVariant {
        return .{ .ptr = qtc.QDBusVariant_Variant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusVariant `
    ///
    /// ` param1: QDBusVariant `
    ///
    pub fn operatorAssign(self: QDBusVariant, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDBusVariant;
        qtc.QDBusVariant_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#dtor.QDBusVariant)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusVariant `
    ///
    pub fn delete(self: QDBusVariant) void {
        qtc.QDBusVariant_Delete(@ptrCast(self.ptr));
    }
};
