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

    /// New constructs a new KParts::OpenUrlArguments object.
    ///
    pub fn New() KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__OpenUrlArguments_new() };
    }

    /// New2 constructs a new KParts::OpenUrlArguments object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KParts__OpenUrlArguments `
    ///
    pub fn New2(other: anytype) KParts__OpenUrlArguments {
        comptime _ = @TypeOf(other)._is_KParts__OpenUrlArguments;
        return .{ .ptr = qtc.KParts__OpenUrlArguments_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` other: KParts__OpenUrlArguments `
    ///
    pub fn OperatorAssign(self: KParts__OpenUrlArguments, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KParts__OpenUrlArguments;
        qtc.KParts__OpenUrlArguments_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#reload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn Reload(self: KParts__OpenUrlArguments) bool {
        return qtc.KParts__OpenUrlArguments_Reload(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` b: bool `
    ///
    pub fn SetReload(self: KParts__OpenUrlArguments, b: bool) void {
        qtc.KParts__OpenUrlArguments_SetReload(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#xOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn XOffset(self: KParts__OpenUrlArguments) i32 {
        return qtc.KParts__OpenUrlArguments_XOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setXOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` x: i32 `
    ///
    pub fn SetXOffset(self: KParts__OpenUrlArguments, x: i32) void {
        qtc.KParts__OpenUrlArguments_SetXOffset(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#yOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn YOffset(self: KParts__OpenUrlArguments) i32 {
        return qtc.KParts__OpenUrlArguments_YOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setYOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` y: i32 `
    ///
    pub fn SetYOffset(self: KParts__OpenUrlArguments, y: i32) void {
        qtc.KParts__OpenUrlArguments_SetYOffset(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: KParts__OpenUrlArguments, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__OpenUrlArguments_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__openurlarguments.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` mime: []const u8 `
    ///
    pub fn SetMimeType(self: KParts__OpenUrlArguments, mime: []const u8) void {
        const mime_str = qtc.libqt_string{
            .len = mime.len,
            .data = mime.ptr,
        };
        qtc.KParts__OpenUrlArguments_SetMimeType(@ptrCast(self.ptr), mime_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#actionRequestedByUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn ActionRequestedByUser(self: KParts__OpenUrlArguments) bool {
        return qtc.KParts__OpenUrlArguments_ActionRequestedByUser(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#setActionRequestedByUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` userRequested: bool `
    ///
    pub fn SetActionRequestedByUser(self: KParts__OpenUrlArguments, userRequested: bool) void {
        qtc.KParts__OpenUrlArguments_SetActionRequestedByUser(@ptrCast(self.ptr), userRequested);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MetaData(self: KParts__OpenUrlArguments, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KParts__OpenUrlArguments_MetaData(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kparts__openurlarguments.MetaData: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kparts__openurlarguments.MetaData: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kparts__openurlarguments.MetaData: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlarguments.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MetaData2(self: KParts__OpenUrlArguments, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.KParts__OpenUrlArguments_MetaData2(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kparts__openurlarguments.MetaData2: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kparts__openurlarguments.MetaData2: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kparts__openurlarguments.MetaData2: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__OpenUrlArguments `
    ///
    pub fn Delete(self: KParts__OpenUrlArguments) void {
        qtc.KParts__OpenUrlArguments_Delete(@ptrCast(self.ptr));
    }
};
