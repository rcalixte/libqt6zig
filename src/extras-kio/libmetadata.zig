const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://api.kde.org/kio-metadata.html
pub const kio__metadata = struct {
    /// New constructs a new KIO::MetaData object.
    ///
    ///
    pub fn New() QtC.KIO__MetaData {
        return qtc.KIO__MetaData_new();
    }

    /// New2 constructs a new KIO::MetaData object.
    ///
    /// ``` metaData: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn New2(metaData: map_constu8_constu8, allocator: std.mem.Allocator) QtC.KIO__MetaData {
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData.count()) catch @panic("kio::metadata.: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc([]const u8, metaData.count()) catch @panic("kio::metadata.: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |entry| {
            const key = entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            metaData_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData.count(),
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };

        return qtc.KIO__MetaData_new2(metaData_map);
    }

    /// New3 constructs a new KIO::MetaData object.
    ///
    /// ``` param1: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn New3(param1: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.KIO__MetaData {
        const param1_keys = allocator.alloc(qtc.libqt_string, param1.count()) catch @panic("kio::metadata.: Memory allocation failed");
        defer allocator.free(param1_keys);
        const param1_values = allocator.alloc(QtC.QVariant, param1.count()) catch @panic("kio::metadata.: Memory allocation failed");
        defer allocator.free(param1_values);
        var i: usize = 0;
        var param1_it = param1.iterator();
        while (param1_it.next()) |entry| {
            const key = entry.key_ptr.*;
            param1_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            param1_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const param1_map = qtc.libqt_map{
            .len = param1.count(),
            .keys = @ptrCast(param1_keys.ptr),
            .values = @ptrCast(param1_values.ptr),
        };

        return qtc.KIO__MetaData_new3(param1_map);
    }

    /// New4 constructs a new KIO::MetaData object.
    ///
    /// ``` param1: QtC.KIO__MetaData ```
    pub fn New4(param1: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__MetaData_new4(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kio-metadata.html#operator-2b-eq)
    ///
    /// ``` self: QtC.KIO__MetaData, metaData: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, metaData: map_constu8_constu8, allocator: std.mem.Allocator) QtC.KIO__MetaData {
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData.count()) catch @panic("kio::metadata.OperatorPlusAssign: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc([]const u8, metaData.count()) catch @panic("kio::metadata.OperatorPlusAssign: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |entry| {
            const key = entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            metaData_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData.count(),
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        return qtc.KIO__MetaData_OperatorPlusAssign(@ptrCast(self), metaData_map);
    }

    /// [Qt documentation](https://api.kde.org/kio-metadata.html#operator-2b-eq)
    ///
    /// ``` self: QtC.KIO__MetaData, metaData: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn OperatorPlusAssign2(self: ?*anyopaque, metaData: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.KIO__MetaData {
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData.count()) catch @panic("kio::metadata.OperatorPlusAssign2: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(QtC.QVariant, metaData.count()) catch @panic("kio::metadata.OperatorPlusAssign2: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |entry| {
            const key = entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            metaData_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData.count(),
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        return qtc.KIO__MetaData_OperatorPlusAssign2(@ptrCast(self), metaData_map);
    }

    /// [Qt documentation](https://api.kde.org/kio-metadata.html#operator-eq)
    ///
    /// ``` self: QtC.KIO__MetaData, metaData: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn OperatorAssign(self: ?*anyopaque, metaData: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const metaData_keys = allocator.alloc(qtc.libqt_string, metaData.count()) catch @panic("kio::metadata.OperatorAssign: Memory allocation failed");
        defer allocator.free(metaData_keys);
        const metaData_values = allocator.alloc(QtC.QVariant, metaData.count()) catch @panic("kio::metadata.OperatorAssign: Memory allocation failed");
        defer allocator.free(metaData_values);
        var i: usize = 0;
        var metaData_it = metaData.iterator();
        while (metaData_it.next()) |entry| {
            const key = entry.key_ptr.*;
            metaData_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            metaData_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const metaData_map = qtc.libqt_map{
            .len = metaData.count(),
            .keys = @ptrCast(metaData_keys.ptr),
            .values = @ptrCast(metaData_values.ptr),
        };
        qtc.KIO__MetaData_OperatorAssign(@ptrCast(self), metaData_map);
    }

    /// [Qt documentation](https://api.kde.org/kio-metadata.html#toVariant)
    ///
    /// ``` self: QtC.KIO__MetaData ```
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.KIO__MetaData_ToVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-metadata.html#operator-eq)
    ///
    /// ``` self: QtC.KIO__MetaData, param1: QtC.KIO__MetaData ```
    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KIO__MetaData_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__MetaData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__MetaData_Delete(@ptrCast(self));
    }
};
