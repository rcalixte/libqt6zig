const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const arraymap_constu8_constu8 = std.StringArrayHashMapUnmanaged([]const u8);
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://api.kde.org/kio-metadata.html)
pub const kio__metadata = struct {
    /// New constructs a new KIO::MetaData object.
    ///
    pub fn New() QtC.KIO__MetaData {
        return qtc.KIO__MetaData_new();
    }

    /// New2 constructs a new KIO::MetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` metaData: arraymap_constu8_constu8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New2(metaData: arraymap_constu8_constu8, allocator: std.mem.Allocator) QtC.KIO__MetaData {
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

        return qtc.KIO__MetaData_new2(metaData_map);
    }

    /// New3 constructs a new KIO::MetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New3(param1: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.KIO__MetaData {
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
            param1_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const param1_map = qtc.libqt_map{
            .len = param1_count,
            .keys = @ptrCast(param1_keys.ptr),
            .values = @ptrCast(param1_values.ptr),
        };

        return qtc.KIO__MetaData_new3(param1_map);
    }

    /// New4 constructs a new KIO::MetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KIO__MetaData `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__MetaData_new4(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MetaData `
    ///
    /// ` metaData: arraymap_constu8_constu8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, metaData: arraymap_constu8_constu8, allocator: std.mem.Allocator) QtC.KIO__MetaData {
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
        return qtc.KIO__MetaData_OperatorPlusAssign(@ptrCast(self), metaData_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MetaData `
    ///
    /// ` metaData: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OperatorPlusAssign2(self: ?*anyopaque, metaData: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.KIO__MetaData {
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
            metaData_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        return qtc.KIO__MetaData_OperatorPlusAssign2(@ptrCast(self), metaData_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MetaData `
    ///
    /// ` metaData: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, metaData: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
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
            metaData_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData_count,
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        qtc.KIO__MetaData_OperatorAssign(@ptrCast(self), metaData_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MetaData `
    ///
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.KIO__MetaData_ToVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-metadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MetaData `
    ///
    /// ` param1: QtC.KIO__MetaData `
    ///
    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KIO__MetaData_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KIO__MetaData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KIO__MetaData_Delete(@ptrCast(self));
    }
};
