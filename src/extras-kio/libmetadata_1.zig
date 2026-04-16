const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

// Also inherits unprojectable QMap<QString, QString>

/// ### [Upstream resources](https://api.kde.org/kio-metadata.html)
pub const KIO__MetaData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__MetaData,

    pub const _is_KIO__MetaData = {};

    /// New constructs a new KIO::MetaData object.
    ///
    pub fn New() KIO__MetaData {
        return .{ .ptr = qtc.KIO__MetaData_new() };
    }

    /// New2 constructs a new KIO::MetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` metaData: ArrayMap_constu8_constu8 `
    ///
    pub fn New2(allocator: std.mem.Allocator, metaData: ArrayMap_constu8_constu8) KIO__MetaData {
        const metaData_count = metaData.count();
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kio__metadata.New2: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kio__metadata.New2: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |it_entry| : (i += 1) {
            const metaData_key = it_entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = metaData_key.len,
                .data = metaData_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            metaData_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        return .{ .ptr = qtc.KIO__MetaData_new2(metaData_map) };
    }

    /// New3 constructs a new KIO::MetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: ArrayMap_constu8_QVariant `
    ///
    pub fn New3(allocator: std.mem.Allocator, param1: ArrayMap_constu8_QVariant) KIO__MetaData {
        const param1_count = param1.count();
        const param1_keys = allocator.alloc(qtc.libqt_string, param1_count) catch @panic("kio__metadata.New3: Memory allocation failed");
        defer allocator.free(param1_keys);
        const param1_values = allocator.alloc(QtC.QVariant, param1_count) catch @panic("kio__metadata.New3: Memory allocation failed");
        defer allocator.free(param1_values);
        var i: usize = 0;
        var param1_it = param1.iterator();
        while (param1_it.next()) |it_entry| : (i += 1) {
            const param1_key = it_entry.key_ptr.*;
            param1_keys[i] = qtc.libqt_string{
                .len = param1_key.len,
                .data = param1_key.ptr,
            };
            param1_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const param1_map = qtc.libqt_map{
            .len = param1_count,
            .keys = @ptrCast(param1_keys.ptr),
            .values = @ptrCast(param1_values.ptr),
        };
        return .{ .ptr = qtc.KIO__MetaData_new3(param1_map) };
    }

    /// New4 constructs a new KIO::MetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__MetaData `
    ///
    pub fn New4(param1: anytype) KIO__MetaData {
        comptime _ = @TypeOf(param1)._is_KIO__MetaData;
        return .{ .ptr = qtc.KIO__MetaData_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` metaData: ArrayMap_constu8_constu8 `
    ///
    pub fn OperatorPlusAssign(self: KIO__MetaData, allocator: std.mem.Allocator, metaData: ArrayMap_constu8_constu8) KIO__MetaData {
        const metaData_count = metaData.count();
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kio__metadata.OperatorPlusAssign: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kio__metadata.OperatorPlusAssign: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |it_entry| : (i += 1) {
            const metaData_key = it_entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = metaData_key.len,
                .data = metaData_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            metaData_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        return .{ .ptr = qtc.KIO__MetaData_OperatorPlusAssign(@ptrCast(self.ptr), metaData_map) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` metaData: ArrayMap_constu8_QVariant `
    ///
    pub fn OperatorPlusAssign2(self: KIO__MetaData, allocator: std.mem.Allocator, metaData: ArrayMap_constu8_QVariant) KIO__MetaData {
        const metaData_count = metaData.count();
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kio__metadata.OperatorPlusAssign2: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(QtC.QVariant, metaData_count) catch @panic("kio__metadata.OperatorPlusAssign2: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |it_entry| : (i += 1) {
            const metaData_key = it_entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = metaData_key.len,
                .data = metaData_key.ptr,
            };
            metaData_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        return .{ .ptr = qtc.KIO__MetaData_OperatorPlusAssign2(@ptrCast(self.ptr), metaData_map) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` metaData: ArrayMap_constu8_QVariant `
    ///
    pub fn OperatorAssign(self: KIO__MetaData, allocator: std.mem.Allocator, metaData: ArrayMap_constu8_QVariant) void {
        const metaData_count = metaData.count();
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData_count) catch @panic("kio__metadata.OperatorAssign: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(QtC.QVariant, metaData_count) catch @panic("kio__metadata.OperatorAssign: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |it_entry| : (i += 1) {
            const metaData_key = it_entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = metaData_key.len,
                .data = metaData_key.ptr,
            };
            metaData_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        qtc.KIO__MetaData_OperatorAssign(@ptrCast(self.ptr), metaData_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MetaData `
    ///
    pub fn ToVariant(self: KIO__MetaData) QVariant {
        return .{ .ptr = qtc.KIO__MetaData_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MetaData `
    ///
    /// ` param1: KIO__MetaData `
    ///
    pub fn OperatorAssign2(self: KIO__MetaData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__MetaData;
        qtc.KIO__MetaData_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__MetaData `
    ///
    pub fn Delete(self: KIO__MetaData) void {
        qtc.KIO__MetaData_Delete(@ptrCast(self.ptr));
    }
};
