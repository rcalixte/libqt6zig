const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const kcrash_enums = enums;
const std = @import("std");
const Map_constu8_QVariant = std.StringHashMapUnmanaged(QVariant);
const Map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// ### [Upstream resources](https://api.kde.org/kcrash.html)
pub const KCrash = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcrash.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCrash,

    pub const _is_KCrash = {};

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#initialize)
    ///
    pub fn initialize() void {
        qtc.KCrash_Initialize();
    }

    /// ### DEPRECATED: Use `defaultCrashHandler` instead
    ///
    pub const DefaultCrashHandler = defaultCrashHandler;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#defaultCrashHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` signal: i32 `
    ///
    pub fn defaultCrashHandler(signal: i32) void {
        qtc.KCrash_DefaultCrashHandler(@bitCast(signal));
    }

    /// ### DEPRECATED: Use `setCrashHandler` instead
    ///
    pub const SetCrashHandler = setCrashHandler;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setCrashHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` handler: *const fn (funcparam1: i32) callconv(.c) void `
    ///
    pub fn setCrashHandler(handler: *const fn (i32) callconv(.c) void) void {
        qtc.KCrash_SetCrashHandler(@bitCast(@intFromPtr(handler)));
    }

    /// ### DEPRECATED: Use `crashHandler` instead
    ///
    pub const CrashHandler = crashHandler;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#crashHandler)
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: i32) callconv(.c) void `
    ///
    pub fn crashHandler() ?*const fn (i32) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.KCrash_CrashHandler())));
    }

    /// ### DEPRECATED: Use `setEmergencySaveFunction` instead
    ///
    pub const SetEmergencySaveFunction = setEmergencySaveFunction;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setEmergencySaveFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` saveFunction: *const fn (funcparam1: i32) callconv(.c) void `
    ///
    pub fn setEmergencySaveFunction(saveFunction: *const fn (i32) callconv(.c) void) void {
        qtc.KCrash_SetEmergencySaveFunction(@bitCast(@intFromPtr(saveFunction)));
    }

    /// ### DEPRECATED: Use `emergencySaveFunction` instead
    ///
    pub const EmergencySaveFunction = emergencySaveFunction;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#emergencySaveFunction)
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn (funcparam1: i32) callconv(.c) void `
    ///
    pub fn emergencySaveFunction() ?*const fn (i32) callconv(.c) void {
        return @ptrFromInt(@as(usize, @bitCast(qtc.KCrash_EmergencySaveFunction())));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of kcrash_enums.CrashFlag `
    ///
    pub fn setFlags(flags: i32) void {
        qtc.KCrash_SetFlags(@bitCast(flags));
    }

    /// ### DEPRECATED: Use `setDrKonqiEnabled` instead
    ///
    pub const SetDrKonqiEnabled = setDrKonqiEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setDrKonqiEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` enabled: bool `
    ///
    pub fn setDrKonqiEnabled(enabled: bool) void {
        qtc.KCrash_SetDrKonqiEnabled(enabled);
    }

    /// ### DEPRECATED: Use `isDrKonqiEnabled` instead
    ///
    pub const IsDrKonqiEnabled = isDrKonqiEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#isDrKonqiEnabled)
    ///
    pub fn isDrKonqiEnabled() bool {
        return qtc.KCrash_IsDrKonqiEnabled();
    }

    /// ### DEPRECATED: Use `setErrorMessage` instead
    ///
    pub const SetErrorMessage = setErrorMessage;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setErrorMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` message: []const u8 `
    ///
    pub fn setErrorMessage(message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KCrash_SetErrorMessage(message_str);
    }

    /// ### DEPRECATED: Use `setErrorTags` instead
    ///
    pub const SetErrorTags = setErrorTags;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setErrorTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` details: Map_constu8_constu8 `
    ///
    pub fn setErrorTags(allocator: std.mem.Allocator, details: Map_constu8_constu8) void {
        const details_count = details.count();
        const details_keys = allocator.alloc(qtc.libqt_string, details_count) catch @panic("KCrash.setErrorTags: Memory allocation failed");
        defer allocator.free(details_keys);
        const details_values = allocator.alloc(qtc.libqt_string, details_count) catch @panic("KCrash.setErrorTags: Memory allocation failed");
        defer allocator.free(details_values);
        var i: usize = 0;
        var details_it = details.iterator();
        while (details_it.next()) |it_entry| : (i += 1) {
            const details_key = it_entry.key_ptr.*;
            details_keys[i] = qtc.libqt_string{
                .len = details_key.len,
                .data = details_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            details_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const details_map = qtc.libqt_map{
            .len = details_count,
            .keys = @ptrCast(details_keys.ptr),
            .values = @ptrCast(details_values.ptr),
        };
        qtc.KCrash_SetErrorTags(details_map);
    }

    /// ### DEPRECATED: Use `setErrorExtraData` instead
    ///
    pub const SetErrorExtraData = setErrorExtraData;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setErrorExtraData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` details: Map_constu8_constu8 `
    ///
    pub fn setErrorExtraData(allocator: std.mem.Allocator, details: Map_constu8_constu8) void {
        const details_count = details.count();
        const details_keys = allocator.alloc(qtc.libqt_string, details_count) catch @panic("KCrash.setErrorExtraData: Memory allocation failed");
        defer allocator.free(details_keys);
        const details_values = allocator.alloc(qtc.libqt_string, details_count) catch @panic("KCrash.setErrorExtraData: Memory allocation failed");
        defer allocator.free(details_values);
        var i: usize = 0;
        var details_it = details.iterator();
        while (details_it.next()) |it_entry| : (i += 1) {
            const details_key = it_entry.key_ptr.*;
            details_keys[i] = qtc.libqt_string{
                .len = details_key.len,
                .data = details_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            details_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const details_map = qtc.libqt_map{
            .len = details_count,
            .keys = @ptrCast(details_keys.ptr),
            .values = @ptrCast(details_values.ptr),
        };
        qtc.KCrash_SetErrorExtraData(details_map);
    }

    /// ### DEPRECATED: Use `setGPUData` instead
    ///
    pub const SetGPUData = setGPUData;

    /// ### [Upstream resources](https://api.kde.org/kcrash.html#setGPUData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: Map_constu8_QVariant `
    ///
    pub fn setGPUData(allocator: std.mem.Allocator, data: Map_constu8_QVariant) void {
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("KCrash.setGPUData: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("KCrash.setGPUData: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |it_entry| : (i += 1) {
            const data_key = it_entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = data_key.len,
                .data = data_key.ptr,
            };
            data_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const data_map = qtc.libqt_map{
            .len = data_count,
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };
        qtc.KCrash_SetGPUData(data_map);
    }
};

/// ### [Upstream resources](https://api.kde.org/kcrash.html#public-types)
pub const enums = struct {
    pub const CrashFlag = enum(i32) {
        pub const KeepFDs: i32 = 1;
        pub const SaferDialog: i32 = 2;
        pub const AlwaysDirectly: i32 = 4;
        pub const AutoRestart: i32 = 8;
    };
};
