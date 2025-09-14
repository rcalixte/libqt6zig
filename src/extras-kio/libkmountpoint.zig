const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kmountpoint_enums = enums;
const std = @import("std");

/// https://api.kde.org/kmountpoint.html
pub const kmountpoint = struct {
    /// [Qt documentation](https://api.kde.org/kmountpoint.html#possibleMountPoints)
    ///
    ///
    pub fn PossibleMountPoints() QtC.KMountPoint__List {
        return qtc.KMountPoint_PossibleMountPoints();
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#currentMountPoints)
    ///
    ///
    pub fn CurrentMountPoints() QtC.KMountPoint__List {
        return qtc.KMountPoint_CurrentMountPoints();
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#mountedFrom)
    ///
    /// ``` self: QtC.KMountPoint, allocator: std.mem.Allocator ```
    pub fn MountedFrom(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMountPoint_MountedFrom(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmountpoint.MountedFrom: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#isOnNetwork)
    ///
    /// ``` self: QtC.KMountPoint ```
    pub fn IsOnNetwork(self: ?*anyopaque) bool {
        return qtc.KMountPoint_IsOnNetwork(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#deviceId)
    ///
    /// ``` self: QtC.KMountPoint ```
    pub fn DeviceId(self: ?*anyopaque) u32 {
        return @intCast(qtc.KMountPoint_DeviceId(@ptrCast(self)));
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#realDeviceName)
    ///
    /// ``` self: QtC.KMountPoint, allocator: std.mem.Allocator ```
    pub fn RealDeviceName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMountPoint_RealDeviceName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmountpoint.RealDeviceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#mountPoint)
    ///
    /// ``` self: QtC.KMountPoint, allocator: std.mem.Allocator ```
    pub fn MountPoint(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMountPoint_MountPoint(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmountpoint.MountPoint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#mountType)
    ///
    /// ``` self: QtC.KMountPoint, allocator: std.mem.Allocator ```
    pub fn MountType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMountPoint_MountType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmountpoint.MountType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#mountOptions)
    ///
    /// ``` self: QtC.KMountPoint, allocator: std.mem.Allocator ```
    pub fn MountOptions(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KMountPoint_MountOptions(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kmountpoint.MountOptions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kmountpoint.MountOptions: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#probablySlow)
    ///
    /// ``` self: QtC.KMountPoint ```
    pub fn ProbablySlow(self: ?*anyopaque) bool {
        return qtc.KMountPoint_ProbablySlow(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#testFileSystemFlag)
    ///
    /// ``` self: QtC.KMountPoint, flag: kmountpoint_enums.FileSystemFlag ```
    pub fn TestFileSystemFlag(self: ?*anyopaque, flag: i32) bool {
        return qtc.KMountPoint_TestFileSystemFlag(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#possibleMountPoints)
    ///
    /// ``` infoNeeded: flag of kmountpoint_enums.DetailsNeededFlag ```
    pub fn PossibleMountPoints1(infoNeeded: i32) QtC.KMountPoint__List {
        return qtc.KMountPoint_PossibleMountPoints1(@intCast(infoNeeded));
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#currentMountPoints)
    ///
    /// ``` infoNeeded: flag of kmountpoint_enums.DetailsNeededFlag ```
    pub fn CurrentMountPoints1(infoNeeded: i32) QtC.KMountPoint__List {
        return qtc.KMountPoint_CurrentMountPoints1(@intCast(infoNeeded));
    }

    /// [Qt documentation](https://api.kde.org/kmountpoint.html#dtor.KMountPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KMountPoint ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KMountPoint_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<Ptr>

/// https://api.kde.org/kmountpoint-list.html
pub const kmountpoint__list = struct {
    /// New constructs a new KMountPoint::List object.
    ///
    ///
    pub fn New() QtC.KMountPoint__List {
        return qtc.KMountPoint__List_new();
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KMountPoint__List ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KMountPoint__List_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kmountpoint.html#types
pub const enums = struct {
    pub const DetailsNeededFlag = enum {
        pub const BasicInfoNeeded: i32 = 0;
        pub const NeedMountOptions: i32 = 1;
        pub const NeedRealDeviceName: i32 = 2;
    };

    pub const FileSystemFlag = enum {
        pub const SupportsChmod: i32 = 0;
        pub const SupportsChown: i32 = 1;
        pub const SupportsUTime: i32 = 2;
        pub const SupportsSymlinks: i32 = 3;
        pub const CaseInsensitive: i32 = 4;
    };
};
