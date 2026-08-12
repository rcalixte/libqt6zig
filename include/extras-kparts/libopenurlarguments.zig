const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html)
pub const KParts__OpenUrlArguments = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__OpenUrlArguments,

    pub const _is_KParts__OpenUrlArguments = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::OpenUrlArguments object in C++ memory
    ///
    pub fn new() KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__OpenUrlArguments_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KParts::OpenUrlArguments object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KParts__OpenUrlArguments `
    ///
    pub fn new2(other: anytype) KParts__OpenUrlArguments {
        comptime _ = @TypeOf(other)._is_KParts__OpenUrlArguments;
        return .{ .ptr = qtc.KParts__OpenUrlArguments_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` other: KParts__OpenUrlArguments `
    ///
    pub fn operatorAssign(self: KParts__OpenUrlArguments, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KParts__OpenUrlArguments;
        qtc.KParts__OpenUrlArguments_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `reload` instead
    ///
    pub const Reload = reload;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#reload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn reload(self: KParts__OpenUrlArguments) bool {
        return qtc.KParts__OpenUrlArguments_Reload(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReload` instead
    ///
    pub const SetReload = setReload;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` b: bool `
    ///
    pub fn setReload(self: KParts__OpenUrlArguments, b: bool) void {
        qtc.KParts__OpenUrlArguments_SetReload(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `xOffset` instead
    ///
    pub const XOffset = xOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#xOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn xOffset(self: KParts__OpenUrlArguments) i32 {
        return qtc.KParts__OpenUrlArguments_XOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setXOffset` instead
    ///
    pub const SetXOffset = setXOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setXOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` x: i32 `
    ///
    pub fn setXOffset(self: KParts__OpenUrlArguments, x: i32) void {
        qtc.KParts__OpenUrlArguments_SetXOffset(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### DEPRECATED: Use `yOffset` instead
    ///
    pub const YOffset = yOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#yOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn yOffset(self: KParts__OpenUrlArguments) i32 {
        return qtc.KParts__OpenUrlArguments_YOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setYOffset` instead
    ///
    pub const SetYOffset = setYOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setYOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` y: i32 `
    ///
    pub fn setYOffset(self: KParts__OpenUrlArguments, y: i32) void {
        qtc.KParts__OpenUrlArguments_SetYOffset(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: KParts__OpenUrlArguments, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__OpenUrlArguments_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__OpenUrlArguments.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMimeType` instead
    ///
    pub const SetMimeType = setMimeType;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` mime: []const u8 `
    ///
    pub fn setMimeType(self: KParts__OpenUrlArguments, mime: []const u8) void {
        const mime_str = qtc.libqt_string{
            .len = mime.len,
            .data = mime.ptr,
        };
        qtc.KParts__OpenUrlArguments_SetMimeType(@ptrCast(self.ptr), mime_str);
    }

    /// ### DEPRECATED: Use `actionRequestedByUser` instead
    ///
    pub const ActionRequestedByUser = actionRequestedByUser;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#actionRequestedByUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn actionRequestedByUser(self: KParts__OpenUrlArguments) bool {
        return qtc.KParts__OpenUrlArguments_ActionRequestedByUser(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActionRequestedByUser` instead
    ///
    pub const SetActionRequestedByUser = setActionRequestedByUser;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setActionRequestedByUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` userRequested: bool `
    ///
    pub fn setActionRequestedByUser(self: KParts__OpenUrlArguments, userRequested: bool) void {
        qtc.KParts__OpenUrlArguments_SetActionRequestedByUser(@ptrCast(self.ptr), userRequested);
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn metaData(self: KParts__OpenUrlArguments, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KParts__OpenUrlArguments_MetaData(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KParts__OpenUrlArguments.metaData: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KParts__OpenUrlArguments.metaData: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KParts__OpenUrlArguments.metaData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `metaData2` instead
    ///
    pub const MetaData2 = metaData2;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn metaData2(self: KParts__OpenUrlArguments, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KParts__OpenUrlArguments_MetaData2(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KParts__OpenUrlArguments.metaData2: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KParts__OpenUrlArguments.metaData2: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KParts__OpenUrlArguments.metaData2: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn delete(self: KParts__OpenUrlArguments) void {
        qtc.KParts__OpenUrlArguments_Delete(@ptrCast(self.ptr));
    }
};
