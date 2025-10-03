const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/kparts-openurlarguments.html
pub const kparts__openurlarguments = struct {
    /// New constructs a new KParts::OpenUrlArguments object.
    ///
    ///
    pub fn New() QtC.KParts__OpenUrlArguments {
        return qtc.KParts__OpenUrlArguments_new();
    }

    /// New2 constructs a new KParts::OpenUrlArguments object.
    ///
    /// ``` other: QtC.KParts__OpenUrlArguments ```
    pub fn New2(other: ?*anyopaque) QtC.KParts__OpenUrlArguments {
        return qtc.KParts__OpenUrlArguments_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#operator-eq)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, other: QtC.KParts__OpenUrlArguments ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KParts__OpenUrlArguments_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#reload)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments ```
    pub fn Reload(self: ?*anyopaque) bool {
        return qtc.KParts__OpenUrlArguments_Reload(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setReload)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, b: bool ```
    pub fn SetReload(self: ?*anyopaque, b: bool) void {
        qtc.KParts__OpenUrlArguments_SetReload(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#xOffset)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments ```
    pub fn XOffset(self: ?*anyopaque) i32 {
        return qtc.KParts__OpenUrlArguments_XOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setXOffset)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, x: i32 ```
    pub fn SetXOffset(self: ?*anyopaque, x: i32) void {
        qtc.KParts__OpenUrlArguments_SetXOffset(@ptrCast(self), @intCast(x));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#yOffset)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments ```
    pub fn YOffset(self: ?*anyopaque) i32 {
        return qtc.KParts__OpenUrlArguments_YOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setYOffset)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, y: i32 ```
    pub fn SetYOffset(self: ?*anyopaque, y: i32) void {
        qtc.KParts__OpenUrlArguments_SetYOffset(@ptrCast(self), @intCast(y));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#mimeType)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, allocator: std.mem.Allocator ```
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__OpenUrlArguments_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::openurlarguments.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setMimeType)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, mime: []const u8 ```
    pub fn SetMimeType(self: ?*anyopaque, mime: []const u8) void {
        const mime_str = qtc.libqt_string{
            .len = mime.len,
            .data = mime.ptr,
        };
        qtc.KParts__OpenUrlArguments_SetMimeType(@ptrCast(self), mime_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#actionRequestedByUser)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments ```
    pub fn ActionRequestedByUser(self: ?*anyopaque) bool {
        return qtc.KParts__OpenUrlArguments_ActionRequestedByUser(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setActionRequestedByUser)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, userRequested: bool ```
    pub fn SetActionRequestedByUser(self: ?*anyopaque, userRequested: bool) void {
        qtc.KParts__OpenUrlArguments_SetActionRequestedByUser(@ptrCast(self), userRequested);
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#metaData)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, allocator: std.mem.Allocator ```
    pub fn MetaData(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KParts__OpenUrlArguments_MetaData(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("kparts::openurlarguments.MetaData: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#metaData)
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments, allocator: std.mem.Allocator ```
    pub fn MetaData2(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KParts__OpenUrlArguments_MetaData2(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("kparts::openurlarguments.MetaData2: Memory allocation failed");
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__OpenUrlArguments ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__OpenUrlArguments_Delete(@ptrCast(self));
    }
};
