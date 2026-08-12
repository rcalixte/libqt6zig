const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kmountpoint_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kmountpoint.html)
pub const KMountPoint = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMountPoint,

    pub const _is_KMountPoint = {};
    pub const _is_QSharedData = {};

    /// ### DEPRECATED: Use `possibleMountPoints` instead
    ///
    pub const PossibleMountPoints = possibleMountPoints;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#possibleMountPoints)
    ///
    pub fn possibleMountPoints() KMountPoint__List {
        return .{ .ptr = qtc.KMountPoint_PossibleMountPoints() };
    }

    /// ### DEPRECATED: Use `currentMountPoints` instead
    ///
    pub const CurrentMountPoints = currentMountPoints;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#currentMountPoints)
    ///
    pub fn currentMountPoints() KMountPoint__List {
        return .{ .ptr = qtc.KMountPoint_CurrentMountPoints() };
    }

    /// ### DEPRECATED: Use `mountedFrom` instead
    ///
    pub const MountedFrom = mountedFrom;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#mountedFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mountedFrom(self: KMountPoint, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMountPoint_MountedFrom(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMountPoint.mountedFrom: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isOnNetwork` instead
    ///
    pub const IsOnNetwork = isOnNetwork;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#isOnNetwork)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    pub fn isOnNetwork(self: KMountPoint) bool {
        return qtc.KMountPoint_IsOnNetwork(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deviceId` instead
    ///
    pub const DeviceId = deviceId;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#deviceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    pub fn deviceId(self: KMountPoint) u64 {
        return @bitCast(qtc.KMountPoint_DeviceId(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `realDeviceName` instead
    ///
    pub const RealDeviceName = realDeviceName;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#realDeviceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn realDeviceName(self: KMountPoint, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMountPoint_RealDeviceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMountPoint.realDeviceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mountPoint` instead
    ///
    pub const MountPoint = mountPoint;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#mountPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mountPoint(self: KMountPoint, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMountPoint_MountPoint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMountPoint.mountPoint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mountType` instead
    ///
    pub const MountType = mountType;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#mountType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mountType(self: KMountPoint, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KMountPoint_MountType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KMountPoint.mountType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mountOptions` instead
    ///
    pub const MountOptions = mountOptions;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#mountOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mountOptions(self: KMountPoint, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KMountPoint_MountOptions(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KMountPoint.mountOptions: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KMountPoint.mountOptions: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `probablySlow` instead
    ///
    pub const ProbablySlow = probablySlow;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#probablySlow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    pub fn probablySlow(self: KMountPoint) bool {
        return qtc.KMountPoint_ProbablySlow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `testFileSystemFlag` instead
    ///
    pub const TestFileSystemFlag = testFileSystemFlag;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#testFileSystemFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMountPoint `
    ///
    /// ` flag: kmountpoint_enums.FileSystemFlag `
    ///
    pub fn testFileSystemFlag(self: KMountPoint, flag: i32) bool {
        return qtc.KMountPoint_TestFileSystemFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `possibleMountPoints1` instead
    ///
    pub const PossibleMountPoints1 = possibleMountPoints1;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#possibleMountPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` infoNeeded: flag of kmountpoint_enums.DetailsNeededFlag `
    ///
    pub fn possibleMountPoints1(infoNeeded: i32) KMountPoint__List {
        return .{ .ptr = qtc.KMountPoint_PossibleMountPoints1(@bitCast(infoNeeded)) };
    }

    /// ### DEPRECATED: Use `currentMountPoints1` instead
    ///
    pub const CurrentMountPoints1 = currentMountPoints1;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#currentMountPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` infoNeeded: flag of kmountpoint_enums.DetailsNeededFlag `
    ///
    pub fn currentMountPoints1(infoNeeded: i32) KMountPoint__List {
        return .{ .ptr = qtc.KMountPoint_CurrentMountPoints1(@bitCast(infoNeeded)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kmountpoint.html#dtor.KMountPoint)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KMountPoint `
    ///
    pub fn delete(self: KMountPoint) void {
        qtc.KMountPoint_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<Ptr>

/// ### [Upstream resources](https://api.kde.org/kmountpoint-list.html)
pub const KMountPoint__List = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmountpoint-list.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMountPoint__List,

    pub const _is_KMountPoint__List = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KMountPoint::List object in C++ memory
    ///
    pub fn new() KMountPoint__List {
        return .{ .ptr = qtc.KMountPoint__List_new() };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KMountPoint__List `
    ///
    pub fn delete(self: KMountPoint__List) void {
        qtc.KMountPoint__List_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kmountpoint.html#public-types)
pub const enums = struct {
    pub const DetailsNeededFlag = enum(i32) {
        pub const BasicInfoNeeded: i32 = 0;
        pub const NeedMountOptions: i32 = 1;
        pub const NeedRealDeviceName: i32 = 2;
    };

    pub const FileSystemFlag = enum(i32) {
        pub const SupportsChmod: i32 = 0;
        pub const SupportsChown: i32 = 1;
        pub const SupportsUTime: i32 = 2;
        pub const SupportsSymlinks: i32 = 3;
        pub const CaseInsensitive: i32 = 4;
    };
};
