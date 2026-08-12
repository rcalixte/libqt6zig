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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Metadata object in C++ memory
    ///
    pub fn new() Attica__Metadata {
        return .{ .ptr = qtc.Attica__Metadata_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Metadata object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Metadata `
    ///
    pub fn new2(other: anytype) Attica__Metadata {
        comptime _ = @TypeOf(other)._is_Attica__Metadata;
        return .{ .ptr = qtc.Attica__Metadata_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` other: Attica__Metadata `
    ///
    pub fn operatorAssign(self: Attica__Metadata, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Metadata;
        qtc.Attica__Metadata_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` errorVal: metadata_enums.Error `
    ///
    pub fn setError(self: Attica__Metadata, errorVal: i32) void {
        qtc.Attica__Metadata_SetError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `statusCode` instead
    ///
    pub const StatusCode = statusCode;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#statusCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn statusCode(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_StatusCode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatusCode` instead
    ///
    pub const SetStatusCode = setStatusCode;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setStatusCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` code: i32 `
    ///
    pub fn setStatusCode(self: Attica__Metadata, code: i32) void {
        qtc.Attica__Metadata_SetStatusCode(@ptrCast(self.ptr), @bitCast(code));
    }

    /// ### DEPRECATED: Use `statusString` instead
    ///
    pub const StatusString = statusString;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#statusString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusString(self: Attica__Metadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Metadata_StatusString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Metadata.statusString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusString` instead
    ///
    pub const SetStatusString = setStatusString;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setStatusString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` status: []const u8 `
    ///
    pub fn setStatusString(self: Attica__Metadata, status: []const u8) void {
        const status_str = qtc.libqt_string{
            .len = status.len,
            .data = status.ptr,
        };
        qtc.Attica__Metadata_SetStatusString(@ptrCast(self.ptr), status_str);
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: Attica__Metadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Metadata_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Metadata.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMessage` instead
    ///
    pub const SetMessage = setMessage;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn setMessage(self: Attica__Metadata, _message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        qtc.Attica__Metadata_SetMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `totalItems` instead
    ///
    pub const TotalItems = totalItems;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#totalItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn totalItems(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_TotalItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTotalItems` instead
    ///
    pub const SetTotalItems = setTotalItems;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setTotalItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` items: i32 `
    ///
    pub fn setTotalItems(self: Attica__Metadata, items: i32) void {
        qtc.Attica__Metadata_SetTotalItems(@ptrCast(self.ptr), @bitCast(items));
    }

    /// ### DEPRECATED: Use `itemsPerPage` instead
    ///
    pub const ItemsPerPage = itemsPerPage;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#itemsPerPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn itemsPerPage(self: Attica__Metadata) i32 {
        return qtc.Attica__Metadata_ItemsPerPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItemsPerPage` instead
    ///
    pub const SetItemsPerPage = setItemsPerPage;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setItemsPerPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` _itemsPerPage: i32 `
    ///
    pub fn setItemsPerPage(self: Attica__Metadata, _itemsPerPage: i32) void {
        qtc.Attica__Metadata_SetItemsPerPage(@ptrCast(self.ptr), @bitCast(_itemsPerPage));
    }

    /// ### DEPRECATED: Use `resultingId` instead
    ///
    pub const ResultingId = resultingId;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#resultingId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resultingId(self: Attica__Metadata, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Metadata_ResultingId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Metadata.resultingId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setResultingId` instead
    ///
    pub const SetResultingId = setResultingId;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setResultingId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` id: []const u8 `
    ///
    pub fn setResultingId(self: Attica__Metadata, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Metadata_SetResultingId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `headers` instead
    ///
    pub const Headers = headers;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn headers(self: Attica__Metadata, allocator: std.mem.Allocator) []Struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Metadata_Headers(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_u8_u8, _arr.len) catch @panic("Attica__Metadata.headers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("Attica__Metadata.headers: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("Attica__Metadata.headers: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_u8_u8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setHeaders` instead
    ///
    pub const SetHeaders = setHeaders;

    /// ### [Upstream resources](https://api.kde.org/attica-metadata.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Metadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _headers: []Struct_u8_u8 `
    ///
    pub fn setHeaders(self: Attica__Metadata, allocator: std.mem.Allocator, _headers: []Struct_u8_u8) void {
        const headers_pairs = allocator.alloc(qtc.libqt_pair, _headers.len) catch @panic("Attica__Metadata.setHeaders: Memory allocation failed");
        defer allocator.free(headers_pairs);
        const headers_str = allocator.alloc(qtc.libqt_string, _headers.len * 2) catch @panic("Attica__Metadata.setHeaders: Memory allocation failed");
        defer allocator.free(headers_str);
        for (_headers, 0..) |headers_item, i| {
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
            .len = _headers.len,
            .data = @ptrCast(headers_pairs.ptr),
        };
        qtc.Attica__Metadata_SetHeaders(@ptrCast(self.ptr), headers_list);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Metadata `
    ///
    pub fn delete(self: Attica__Metadata) void {
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
