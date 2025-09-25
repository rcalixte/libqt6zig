const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const metadata_enums = enums;
const std = @import("std");
pub const struct_u8_u8 = extern struct { first: []u8, second: []u8 };

/// https://api.kde.org/attica-metadata.html
pub const attica__metadata = struct {
    /// New constructs a new Attica::Metadata object.
    ///
    ///
    pub fn New() QtC.Attica__Metadata {
        return qtc.Attica__Metadata_new();
    }

    /// New2 constructs a new Attica::Metadata object.
    ///
    /// ``` other: QtC.Attica__Metadata ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Metadata {
        return qtc.Attica__Metadata_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Metadata, other: QtC.Attica__Metadata ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Metadata_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#error)
    ///
    /// ``` self: QtC.Attica__Metadata ```
    ///
    /// Returns: ``` metadata_enums.Error ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.Attica__Metadata_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#setError)
    ///
    /// ``` self: QtC.Attica__Metadata, errorVal: metadata_enums.Error ```
    pub fn SetError(self: ?*anyopaque, errorVal: i32) void {
        qtc.Attica__Metadata_SetError(@ptrCast(self), @intCast(errorVal));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#statusCode)
    ///
    /// ``` self: QtC.Attica__Metadata ```
    pub fn StatusCode(self: ?*anyopaque) i32 {
        return qtc.Attica__Metadata_StatusCode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#setStatusCode)
    ///
    /// ``` self: QtC.Attica__Metadata, code: i32 ```
    pub fn SetStatusCode(self: ?*anyopaque, code: i32) void {
        qtc.Attica__Metadata_SetStatusCode(@ptrCast(self), @intCast(code));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#statusString)
    ///
    /// ``` self: QtC.Attica__Metadata, allocator: std.mem.Allocator ```
    pub fn StatusString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Metadata_StatusString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::metadata.StatusString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#setStatusString)
    ///
    /// ``` self: QtC.Attica__Metadata, status: []const u8 ```
    pub fn SetStatusString(self: ?*anyopaque, status: []const u8) void {
        const status_str = qtc.libqt_string{
            .len = status.len,
            .data = status.ptr,
        };
        qtc.Attica__Metadata_SetStatusString(@ptrCast(self), status_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#message)
    ///
    /// ``` self: QtC.Attica__Metadata, allocator: std.mem.Allocator ```
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Metadata_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::metadata.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#setMessage)
    ///
    /// ``` self: QtC.Attica__Metadata, message: []const u8 ```
    pub fn SetMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.Attica__Metadata_SetMessage(@ptrCast(self), message_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#totalItems)
    ///
    /// ``` self: QtC.Attica__Metadata ```
    pub fn TotalItems(self: ?*anyopaque) i32 {
        return qtc.Attica__Metadata_TotalItems(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#setTotalItems)
    ///
    /// ``` self: QtC.Attica__Metadata, items: i32 ```
    pub fn SetTotalItems(self: ?*anyopaque, items: i32) void {
        qtc.Attica__Metadata_SetTotalItems(@ptrCast(self), @intCast(items));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#itemsPerPage)
    ///
    /// ``` self: QtC.Attica__Metadata ```
    pub fn ItemsPerPage(self: ?*anyopaque) i32 {
        return qtc.Attica__Metadata_ItemsPerPage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#setItemsPerPage)
    ///
    /// ``` self: QtC.Attica__Metadata, itemsPerPage: i32 ```
    pub fn SetItemsPerPage(self: ?*anyopaque, itemsPerPage: i32) void {
        qtc.Attica__Metadata_SetItemsPerPage(@ptrCast(self), @intCast(itemsPerPage));
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#resultingId)
    ///
    /// ``` self: QtC.Attica__Metadata, allocator: std.mem.Allocator ```
    pub fn ResultingId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Metadata_ResultingId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::metadata.ResultingId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#setResultingId)
    ///
    /// ``` self: QtC.Attica__Metadata, id: []const u8 ```
    pub fn SetResultingId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Metadata_SetResultingId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-metadata.html#headers)
    ///
    /// ``` self: QtC.Attica__Metadata, allocator: std.mem.Allocator ```
    pub fn Headers(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Metadata_Headers(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_pair[i].first));
                qtc.libqt_free(_pair[i].first);

                qtc.libqt_string_free(@ptrCast(&_pair[i].second));
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_u8_u8, _arr.len) catch @panic("attica::metadata.Headers: Memory allocation failed");
        const _data: [*]struct_u8_u8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Metadata ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Metadata_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-metadata.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const NetworkError: i32 = 1;
        pub const OcsError: i32 = 2;
    };
};
