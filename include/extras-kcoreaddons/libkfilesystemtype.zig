const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfilesystemtype_enums = enums;
const std = @import("std");

/// https://api.kde.org/kfilesystemtype.html
pub const kfilesystemtype = struct {
    /// [Qt documentation](https://api.kde.org/kfilesystemtype.html#fileSystemType)
    ///
    /// ``` param1: []const u8 ```
    ///
    /// Returns: ``` kfilesystemtype_enums.Type ```
    pub fn FileSystemType(param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KFileSystemType_FileSystemType(param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kfilesystemtype.html#fileSystemName)
    ///
    /// ``` param1: kfilesystemtype_enums.Type, allocator: std.mem.Allocator ```
    pub fn FileSystemName(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileSystemType_FileSystemName(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilesystemtype.FileSystemName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// https://api.kde.org/kfilesystemtype.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const Unknown: i32 = 0;
        pub const Nfs: i32 = 1;
        pub const Smb: i32 = 2;
        pub const Fat: i32 = 3;
        pub const Ramfs: i32 = 4;
        pub const Other: i32 = 5;
        pub const Ntfs: i32 = 6;
        pub const Exfat: i32 = 7;
        pub const Fuse: i32 = 8;
    };
};
