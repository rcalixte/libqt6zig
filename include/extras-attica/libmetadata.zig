const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const metadata_enums = enums;
const std = @import("std");
const Struct_u8_u8 = struct { first: []u8, second: []u8 };

/// ### [Upstream resources](https://api.kde.org/attica-metadata.html)
pub const Attica__Metadata = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Metadata,

    pub const _is_Attica__Metadata = {};

    /// New constructs a new Attica::Metadata object.
    ///
    pub fn New() Attica__Metadata {
        return .{ .ptr = qtc.Attica__Metadata_new() };
    }

    /// New2 constructs a new Attica::Metadata object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Metadata `
    ///
    pub fn New2(other: anytype) Attica__Metadata {
        comptime _ = @TypeOf(other)._is_Attica__Metadata;
        return .{ .ptr = qtc.Attica__Metadata_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` other: Attica__Metadata `
    ///
    pub fn OperatorAssign(self: Attica__Metadata, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Metadata;
        qtc.Attica__Metadata_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ## Returns:
    ///
    /// ` metadata_enums.Error `
    ///
    pub fn Error(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` errorVal: metadata_enums.Error `
    ///
    pub fn SetError(self: Attica__Metadata, errorVal: i32) void {
        qtc.Attica__Metadata_SetError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#statusCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn StatusCode(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_StatusCode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setStatusCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` code: i32 `
    ///
    pub fn SetStatusCode(self: Attica__Metadata, code: i32) void {
        qtc.Attica__Metadata_SetStatusCode(@ptrCast(self.ptr), @bitCast(code));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#statusString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusString(self: Attica__Metadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Metadata_StatusString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__metadata.StatusString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setStatusString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` status: []const u8 `
    ///
    pub fn SetStatusString(self: Attica__Metadata, status: []const u8) void {
        const status_str = qtc.libqt_string{
            .len = status.len,
            .data = status.ptr,
        };
        qtc.Attica__Metadata_SetStatusString(@ptrCast(self.ptr), status_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: Attica__Metadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Metadata_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__metadata.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SetMessage(self: Attica__Metadata, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.Attica__Metadata_SetMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#totalItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn TotalItems(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_TotalItems(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setTotalItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` items: i32 `
    ///
    pub fn SetTotalItems(self: Attica__Metadata, items: i32) void {
        qtc.Attica__Metadata_SetTotalItems(@ptrCast(self.ptr), @bitCast(items));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#itemsPerPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn ItemsPerPage(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_ItemsPerPage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setItemsPerPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` itemsPerPage: i32 `
    ///
    pub fn SetItemsPerPage(self: Attica__Metadata, itemsPerPage: i32) void {
        qtc.Attica__Metadata_SetItemsPerPage(@ptrCast(self.ptr), @bitCast(itemsPerPage));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#resultingId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResultingId(self: Attica__Metadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Metadata_ResultingId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__metadata.ResultingId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setResultingId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetResultingId(self: Attica__Metadata, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Metadata_SetResultingId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Headers(self: Attica__Metadata, allocator: std.mem.Allocator) []Struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Metadata_Headers(@ptrCast(self.ptr));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_u8_u8, _arr.len) catch @panic("attica__metadata.Headers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("attica__metadata.Headers: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("attica__metadata.Headers: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_u8_u8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headers: []Struct_u8_u8 `
    ///
    pub fn SetHeaders(self: Attica__Metadata, allocator: std.mem.Allocator, headers: []Struct_u8_u8) void {
        const headers_pairs = allocator.alloc(qtc.libqt_pair, headers.len) catch @panic("attica__metadata.SetHeaders: Memory allocation failed");
        defer allocator.free(headers_pairs);
        const headers_str = allocator.alloc(qtc.libqt_string, headers.len * 2) catch @panic("attica__metadata.SetHeaders: Memory allocation failed");
        defer allocator.free(headers_str);
        for (headers, 0..) |headers_item, i| {
            headers_str[i * 2] = qtc.libqt_string{
                .len = headers_item.first.len,
                .data = headers_item.first.ptr,
            };
            headers_str[i * 2 + 1] = qtc.libqt_string{
                .len = headers_item.second.len,
                .data = headers_item.second.ptr,
            };
            headers_pairs[i] = qtc.libqt_pair{
                .first = @ptrCast(&headers_str[i * 2]),
                .second = @ptrCast(&headers_str[i * 2 + 1]),
            };
        }
        const headers_list = qtc.libqt_list{
            .len = headers.len,
            .data = @ptrCast(headers_pairs.ptr),
        };
        qtc.Attica__Metadata_SetHeaders(@ptrCast(self.ptr), headers_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn Delete(self: Attica__Metadata) void {
        qtc.Attica__Metadata_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-metadata.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const NetworkError: i32 = 1;
        pub const OcsError: i32 = 2;
    };
};
