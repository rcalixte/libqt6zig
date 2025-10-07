const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcrash_enums = enums;
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://api.kde.org/kcrash.html
pub const kcrash = struct {
    /// [Qt documentation](https://api.kde.org/kcrash.html#initialize)
    ///
    ///
    pub fn Initialize() void {
        qtc.KCrash_Initialize();
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#defaultCrashHandler)
    ///
    /// ``` param1: i32 ```
    pub fn DefaultCrashHandler(param1: i32) void {
        qtc.KCrash_DefaultCrashHandler(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#setFlags)
    ///
    /// ``` param1: flag of kcrash_enums.CrashFlag ```
    pub fn SetFlags(param1: i32) void {
        qtc.KCrash_SetFlags(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#setDrKonqiEnabled)
    ///
    /// ``` param1: bool ```
    pub fn SetDrKonqiEnabled(param1: bool) void {
        qtc.KCrash_SetDrKonqiEnabled(param1);
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#isDrKonqiEnabled)
    ///
    ///
    pub fn IsDrKonqiEnabled() bool {
        return qtc.KCrash_IsDrKonqiEnabled();
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#setErrorMessage)
    ///
    /// ``` param1: []const u8 ```
    pub fn SetErrorMessage(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KCrash_SetErrorMessage(param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#setErrorTags)
    ///
    /// ``` param1: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn SetErrorTags(param1: map_constu8_constu8, allocator: std.mem.Allocator) void {
        const param1_keys = allocator.alloc(qtc.libqt_string, param1.count()) catch @panic("kcrash.SetErrorTags: Memory allocation failed");
        defer allocator.free(param1_keys);
        const param1_values = allocator.alloc([]const u8, param1.count()) catch @panic("kcrash.SetErrorTags: Memory allocation failed");
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
        qtc.KCrash_SetErrorTags(param1_map);
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#setErrorExtraData)
    ///
    /// ``` param1: map_constu8_constu8, allocator: std.mem.Allocator ```
    pub fn SetErrorExtraData(param1: map_constu8_constu8, allocator: std.mem.Allocator) void {
        const param1_keys = allocator.alloc(qtc.libqt_string, param1.count()) catch @panic("kcrash.SetErrorExtraData: Memory allocation failed");
        defer allocator.free(param1_keys);
        const param1_values = allocator.alloc([]const u8, param1.count()) catch @panic("kcrash.SetErrorExtraData: Memory allocation failed");
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
        qtc.KCrash_SetErrorExtraData(param1_map);
    }

    /// [Qt documentation](https://api.kde.org/kcrash.html#setGPUData)
    ///
    /// ``` param1: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetGPUData(param1: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const param1_keys = allocator.alloc(qtc.libqt_string, param1.count()) catch @panic("kcrash.SetGPUData: Memory allocation failed");
        defer allocator.free(param1_keys);
        const param1_values = allocator.alloc(QtC.QVariant, param1.count()) catch @panic("kcrash.SetGPUData: Memory allocation failed");
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
        qtc.KCrash_SetGPUData(param1_map);
    }
};

/// https://api.kde.org/kcrash.html#types
pub const enums = struct {
    pub const CrashFlag = enum {
        pub const KeepFDs: i32 = 1;
        pub const SaferDialog: i32 = 2;
        pub const AlwaysDirectly: i32 = 4;
        pub const AutoRestart: i32 = 8;
    };
};
