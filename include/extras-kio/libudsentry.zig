const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-udsentry.html)
pub const KIO__UDSEntry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__UDSEntry,

    pub const _is_KIO__UDSEntry = {};

    /// New constructs a new KIO::UDSEntry object.
    ///
    pub fn New() KIO__UDSEntry {
        return .{ .ptr = qtc.KIO__UDSEntry_new() };
    }

    /// New2 constructs a new KIO::UDSEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__UDSEntry `
    ///
    pub fn New2(param1: anytype) KIO__UDSEntry {
        comptime _ = @TypeOf(param1)._is_KIO__UDSEntry;
        return .{ .ptr = qtc.KIO__UDSEntry_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` param1: KIO__UDSEntry `
    ///
    pub fn OperatorAssign(self: KIO__UDSEntry, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__UDSEntry;
        qtc.KIO__UDSEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#stringValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` field: u32 `
    ///
    pub fn StringValue(self: KIO__UDSEntry, allocator: std.mem.Allocator, field: u32) []const u8 {
        var _str = qtc.KIO__UDSEntry_StringValue(@ptrCast(self.ptr), @bitCast(field));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__udsentry.StringValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#numberValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` field: u32 `
    ///
    pub fn NumberValue(self: KIO__UDSEntry, field: u32) isize {
        return qtc.KIO__UDSEntry_NumberValue(@ptrCast(self.ptr), @bitCast(field));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    pub fn IsDir(self: KIO__UDSEntry) bool {
        return qtc.KIO__UDSEntry_IsDir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#isLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    pub fn IsLink(self: KIO__UDSEntry) bool {
        return qtc.KIO__UDSEntry_IsLink(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#reserve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` size: i32 `
    ///
    pub fn Reserve(self: KIO__UDSEntry, size: i32) void {
        qtc.KIO__UDSEntry_Reserve(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#fastInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` field: u32 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn FastInsert(self: KIO__UDSEntry, field: u32, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__UDSEntry_FastInsert(@ptrCast(self.ptr), @bitCast(field), value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#fastInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` field: u32 `
    ///
    /// ` l: isize `
    ///
    pub fn FastInsert2(self: KIO__UDSEntry, field: u32, l: isize) void {
        qtc.KIO__UDSEntry_FastInsert2(@ptrCast(self.ptr), @bitCast(field), @bitCast(l));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    pub fn Count(self: KIO__UDSEntry) i32 {
        return qtc.KIO__UDSEntry_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` field: u32 `
    ///
    pub fn Contains(self: KIO__UDSEntry, field: u32) bool {
        return qtc.KIO__UDSEntry_Contains(@ptrCast(self.ptr), @bitCast(field));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#fields)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Fields(self: KIO__UDSEntry, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.KIO__UDSEntry_Fields(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("kio__udsentry.Fields: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    pub fn Clear(self: KIO__UDSEntry) void {
        qtc.KIO__UDSEntry_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` field: u32 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn Replace(self: KIO__UDSEntry, field: u32, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__UDSEntry_Replace(@ptrCast(self.ptr), @bitCast(field), value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` field: u32 `
    ///
    /// ` l: isize `
    ///
    pub fn Replace2(self: KIO__UDSEntry, field: u32, l: isize) void {
        qtc.KIO__UDSEntry_Replace2(@ptrCast(self.ptr), @bitCast(field), @bitCast(l));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#numberValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__UDSEntry `
    ///
    /// ` field: u32 `
    ///
    /// ` defaultValue: isize `
    ///
    pub fn NumberValue2(self: KIO__UDSEntry, field: u32, defaultValue: isize) isize {
        return qtc.KIO__UDSEntry_NumberValue2(@ptrCast(self.ptr), @bitCast(field), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__UDSEntry `
    ///
    pub fn Delete(self: KIO__UDSEntry) void {
        qtc.KIO__UDSEntry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-udsentry.html#public-types)
pub const enums = struct {
    pub const ItemTypes = enum(i32) {
        pub const UDS_STRING: i32 = 16777216;
        pub const UDS_NUMBER: i32 = 33554432;
        pub const UDS_TIME: i32 = 100663296;
    };

    pub const StandardFieldTypes = enum(i32) {
        pub const UDS_SIZE: i32 = 33554433;
        pub const UDS_SIZE_LARGE: i32 = 33554434;
        pub const UDS_USER: i32 = 16777219;
        pub const UDS_ICON_NAME: i32 = 16777220;
        pub const UDS_GROUP: i32 = 16777221;
        pub const UDS_NAME: i32 = 16777222;
        pub const UDS_LOCAL_PATH: i32 = 16777223;
        pub const UDS_HIDDEN: i32 = 33554440;
        pub const UDS_ACCESS: i32 = 33554441;
        pub const UDS_MODIFICATION_TIME: i32 = 100663306;
        pub const UDS_ACCESS_TIME: i32 = 100663307;
        pub const UDS_CREATION_TIME: i32 = 100663308;
        pub const UDS_FILE_TYPE: i32 = 33554445;
        pub const UDS_LINK_DEST: i32 = 16777230;
        pub const UDS_URL: i32 = 16777231;
        pub const UDS_MIME_TYPE: i32 = 16777232;
        pub const UDS_GUESSED_MIME_TYPE: i32 = 16777233;
        pub const UDS_XML_PROPERTIES: i32 = 16777234;
        pub const UDS_EXTENDED_ACL: i32 = 33554451;
        pub const UDS_ACL_STRING: i32 = 16777236;
        pub const UDS_DEFAULT_ACL_STRING: i32 = 16777237;
        pub const UDS_DISPLAY_NAME: i32 = 16777238;
        pub const UDS_TARGET_URL: i32 = 16777239;
        pub const UDS_DISPLAY_TYPE: i32 = 16777240;
        pub const UDS_ICON_OVERLAY_NAMES: i32 = 16777241;
        pub const UDS_COMMENT: i32 = 16777242;
        pub const UDS_DEVICE_ID: i32 = 33554459;
        pub const UDS_INODE: i32 = 33554460;
        pub const UDS_RECURSIVE_SIZE: i32 = 33554461;
        pub const UDS_LOCAL_USER_ID: i32 = 33554462;
        pub const UDS_LOCAL_GROUP_ID: i32 = 33554463;
        pub const UDS_EXTRA: i32 = 16777316;
        pub const UDS_EXTRA_END: i32 = 16777356;
    };
};
