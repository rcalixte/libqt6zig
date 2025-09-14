const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const dropjob_enums = @import("libdropjob.zig").enums;
const qfiledevice_enums = @import("../libqfiledevice.zig").enums;
const std = @import("std");

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#convertSize)
    ///
    /// ``` param1: u64, allocator: std.mem.Allocator ```
    pub fn ConvertSize(param1: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_ConvertSize(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.ConvertSize: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#number)
    ///
    /// ``` param1: u64, allocator: std.mem.Allocator ```
    pub fn Number(param1: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_Number(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.Number: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#convertSizeFromKiB)
    ///
    /// ``` param1: u64, allocator: std.mem.Allocator ```
    pub fn ConvertSizeFromKiB(param1: u64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_ConvertSizeFromKiB(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.ConvertSizeFromKiB: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#calculateRemainingSeconds)
    ///
    /// ``` param1: u64, param2: u64, param3: u64 ```
    pub fn CalculateRemainingSeconds(param1: u64, param2: u64, param3: u64) u32 {
        return qtc.KIO_CalculateRemainingSeconds(@intCast(param1), @intCast(param2), @intCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#convertSeconds)
    ///
    /// ``` param1: u32, allocator: std.mem.Allocator ```
    pub fn ConvertSeconds(param1: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_ConvertSeconds(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.ConvertSeconds: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#itemsSummaryString)
    ///
    /// ``` param1: u32, param2: u32, param3: u32, param4: u64, param5: bool, allocator: std.mem.Allocator ```
    pub fn ItemsSummaryString(param1: u32, param2: u32, param3: u32, param4: u64, param5: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_ItemsSummaryString(@intCast(param1), @intCast(param2), @intCast(param3), @intCast(param4), param5);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.ItemsSummaryString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#encodeFileName)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn EncodeFileName(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KIO_EncodeFileName(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.EncodeFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#decodeFileName)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn DecodeFileName(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KIO_DecodeFileName(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.DecodeFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#parseCacheControl)
    ///
    /// ``` param1: []const u8 ```
    ///
    /// Returns: ``` dropjob_enums.CacheControl ```
    pub fn ParseCacheControl(param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KIO_ParseCacheControl(param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kio.html#getCacheControlString)
    ///
    /// ``` param1: dropjob_enums.CacheControl, allocator: std.mem.Allocator ```
    pub fn GetCacheControlString(param1: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_GetCacheControlString(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.GetCacheControlString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#favIconForUrl)
    ///
    /// ``` param1: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn FavIconForUrl(param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_FavIconForUrl(@ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.FavIconForUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#convertPermissions)
    ///
    /// ``` param1: i32 ```
    ///
    /// Returns: ``` flag of qfiledevice_enums.Permission ```
    pub fn ConvertPermissions(param1: i32) i32 {
        return qtc.KIO_ConvertPermissions(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kio.html#iconNameForUrl)
    ///
    /// ``` param1: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn IconNameForUrl(param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO_IconNameForUrl(@ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio.IconNameForUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio.html#upUrl)
    ///
    /// ``` param1: QtC.QUrl ```
    pub fn UpUrl(param1: ?*anyopaque) QtC.QUrl {
        return qtc.KIO_UpUrl(@ptrCast(param1));
    }
};

/// https://api.kde.org/kio-global.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const ERR_CANNOT_OPEN_FOR_READING: i32 = 101;
        pub const ERR_CANNOT_OPEN_FOR_WRITING: i32 = 102;
        pub const ERR_CANNOT_LAUNCH_PROCESS: i32 = 103;
        pub const ERR_INTERNAL: i32 = 104;
        pub const ERR_MALFORMED_URL: i32 = 105;
        pub const ERR_UNSUPPORTED_PROTOCOL: i32 = 106;
        pub const ERR_NO_SOURCE_PROTOCOL: i32 = 107;
        pub const ERR_UNSUPPORTED_ACTION: i32 = 108;
        pub const ERR_IS_DIRECTORY: i32 = 109;
        pub const ERR_IS_FILE: i32 = 110;
        pub const ERR_DOES_NOT_EXIST: i32 = 111;
        pub const ERR_FILE_ALREADY_EXIST: i32 = 112;
        pub const ERR_DIR_ALREADY_EXIST: i32 = 113;
        pub const ERR_UNKNOWN_HOST: i32 = 114;
        pub const ERR_ACCESS_DENIED: i32 = 115;
        pub const ERR_WRITE_ACCESS_DENIED: i32 = 116;
        pub const ERR_CANNOT_ENTER_DIRECTORY: i32 = 117;
        pub const ERR_PROTOCOL_IS_NOT_A_FILESYSTEM: i32 = 118;
        pub const ERR_CYCLIC_LINK: i32 = 119;
        pub const ERR_USER_CANCELED: i32 = 1;
        pub const ERR_CYCLIC_COPY: i32 = 121;
        pub const ERR_CANNOT_CREATE_SOCKET: i32 = 122;
        pub const ERR_CANNOT_CONNECT: i32 = 123;
        pub const ERR_CONNECTION_BROKEN: i32 = 124;
        pub const ERR_NOT_FILTER_PROTOCOL: i32 = 125;
        pub const ERR_CANNOT_MOUNT: i32 = 126;
        pub const ERR_CANNOT_UNMOUNT: i32 = 127;
        pub const ERR_CANNOT_READ: i32 = 128;
        pub const ERR_CANNOT_WRITE: i32 = 129;
        pub const ERR_CANNOT_BIND: i32 = 130;
        pub const ERR_CANNOT_LISTEN: i32 = 131;
        pub const ERR_CANNOT_ACCEPT: i32 = 132;
        pub const ERR_CANNOT_LOGIN: i32 = 133;
        pub const ERR_CANNOT_STAT: i32 = 134;
        pub const ERR_CANNOT_CLOSEDIR: i32 = 135;
        pub const ERR_CANNOT_MKDIR: i32 = 137;
        pub const ERR_CANNOT_RMDIR: i32 = 138;
        pub const ERR_CANNOT_RESUME: i32 = 139;
        pub const ERR_CANNOT_RENAME: i32 = 140;
        pub const ERR_CANNOT_CHMOD: i32 = 141;
        pub const ERR_CANNOT_DELETE: i32 = 142;
        pub const ERR_WORKER_DIED: i32 = 143;
        pub const ERR_OUT_OF_MEMORY: i32 = 144;
        pub const ERR_UNKNOWN_PROXY_HOST: i32 = 145;
        pub const ERR_CANNOT_AUTHENTICATE: i32 = 146;
        pub const ERR_ABORTED: i32 = 147;
        pub const ERR_INTERNAL_SERVER: i32 = 148;
        pub const ERR_SERVER_TIMEOUT: i32 = 149;
        pub const ERR_SERVICE_NOT_AVAILABLE: i32 = 150;
        pub const ERR_UNKNOWN: i32 = 151;
        pub const ERR_UNKNOWN_INTERRUPT: i32 = 153;
        pub const ERR_CANNOT_DELETE_ORIGINAL: i32 = 154;
        pub const ERR_CANNOT_DELETE_PARTIAL: i32 = 155;
        pub const ERR_CANNOT_RENAME_ORIGINAL: i32 = 156;
        pub const ERR_CANNOT_RENAME_PARTIAL: i32 = 157;
        pub const ERR_NEED_PASSWD: i32 = 158;
        pub const ERR_CANNOT_SYMLINK: i32 = 159;
        pub const ERR_NO_CONTENT: i32 = 160;
        pub const ERR_DISK_FULL: i32 = 161;
        pub const ERR_IDENTICAL_FILES: i32 = 162;
        pub const ERR_WORKER_DEFINED: i32 = 163;
        pub const ERR_UPGRADE_REQUIRED: i32 = 164;
        pub const ERR_POST_DENIED: i32 = 165;
        pub const ERR_CANNOT_SEEK: i32 = 166;
        pub const ERR_CANNOT_SETTIME: i32 = 167;
        pub const ERR_CANNOT_CHOWN: i32 = 168;
        pub const ERR_POST_NO_SIZE: i32 = 169;
        pub const ERR_DROP_ON_ITSELF: i32 = 170;
        pub const ERR_CANNOT_MOVE_INTO_ITSELF: i32 = 171;
        pub const ERR_PASSWD_SERVER: i32 = 172;
        pub const ERR_CANNOT_CREATE_WORKER: i32 = 173;
        pub const ERR_FILE_TOO_LARGE_FOR_FAT32: i32 = 174;
        pub const ERR_OWNER_DIED: i32 = 175;
        pub const ERR_PRIVILEGE_NOT_REQUIRED: i32 = 176;
        pub const ERR_CANNOT_TRUNCATE: i32 = 177;
        pub const ERR_SYMLINKS_NOT_SUPPORTED: i32 = 178;
        pub const ERR_TRASH_FILE_TOO_LARGE: i32 = 179;
    };

    pub const CacheControl = enum {
        pub const CC_CacheOnly: i32 = 0;
        pub const CC_Cache: i32 = 1;
        pub const CC_Verify: i32 = 2;
        pub const CC_Refresh: i32 = 3;
        pub const CC_Reload: i32 = 4;
    };

    pub const PrivilegeOperationStatus = enum {
        pub const OperationAllowed: i32 = 1;
        pub const OperationCanceled: i32 = 2;
        pub const OperationNotAllowed: i32 = 3;
    };

    pub const StatDetail = enum {
        pub const StatNoDetails: i32 = 0;
        pub const StatBasic: i32 = 1;
        pub const StatUser: i32 = 2;
        pub const StatTime: i32 = 4;
        pub const StatResolveSymlink: i32 = 8;
        pub const StatAcl: i32 = 16;
        pub const StatInode: i32 = 32;
        pub const StatRecursiveSize: i32 = 64;
        pub const StatMimeType: i32 = 128;
        pub const StatDefaultDetails: i32 = 31;
    };
};
