const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html)
pub const QSysInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSysInfo,

    pub const _is_QSysInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSysInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSysInfo `
    ///
    pub fn new(other: anytype) QSysInfo {
        comptime _ = @TypeOf(other)._is_QSysInfo;
        return .{ .ptr = qtc.QSysInfo_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSysInfo object and invalidate the source QSysInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSysInfo `
    ///
    pub fn new2(other: anytype) QSysInfo {
        comptime _ = @TypeOf(other)._is_QSysInfo;
        return .{ .ptr = qtc.QSysInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSysInfo `
    ///
    /// ` other: QSysInfo `
    ///
    pub fn copyAssign(self: QSysInfo, other: QSysInfo) void {
        qtc.QSysInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QSysInfo `
    ///
    /// ` other: QSysInfo `
    ///
    pub fn moveAssign(self: QSysInfo, other: QSysInfo) void {
        qtc.QSysInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `buildCpuArchitecture` instead
    ///
    pub const BuildCpuArchitecture = buildCpuArchitecture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#buildCpuArchitecture)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn buildCpuArchitecture(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_BuildCpuArchitecture();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.buildCpuArchitecture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentCpuArchitecture` instead
    ///
    pub const CurrentCpuArchitecture = currentCpuArchitecture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#currentCpuArchitecture)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentCpuArchitecture(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_CurrentCpuArchitecture();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.currentCpuArchitecture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `buildAbi` instead
    ///
    pub const BuildAbi = buildAbi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#buildAbi)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn buildAbi(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_BuildAbi();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.buildAbi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `kernelType` instead
    ///
    pub const KernelType = kernelType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#kernelType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn kernelType(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_KernelType();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.kernelType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `kernelVersion` instead
    ///
    pub const KernelVersion = kernelVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#kernelVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn kernelVersion(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_KernelVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.kernelVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `productType` instead
    ///
    pub const ProductType = productType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#productType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn productType(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_ProductType();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.productType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `productVersion` instead
    ///
    pub const ProductVersion = productVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#productVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn productVersion(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_ProductVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.productVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `prettyProductName` instead
    ///
    pub const PrettyProductName = prettyProductName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#prettyProductName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prettyProductName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_PrettyProductName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.prettyProductName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `machineHostName` instead
    ///
    pub const MachineHostName = machineHostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#machineHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn machineHostName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_MachineHostName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSysInfo.machineHostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `machineUniqueId` instead
    ///
    pub const MachineUniqueId = machineUniqueId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#machineUniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn machineUniqueId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSysInfo_MachineUniqueId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSysInfo.machineUniqueId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bootUniqueId` instead
    ///
    pub const BootUniqueId = bootUniqueId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#bootUniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bootUniqueId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSysInfo_BootUniqueId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSysInfo.bootUniqueId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#dtor.QSysInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSysInfo `
    ///
    pub fn delete(self: QSysInfo) void {
        qtc.QSysInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#public-types)
pub const enums = struct {
    pub const Sizes = enum(i32) {
        pub const WordSize: i32 = 64;
    };

    pub const Endian = enum(i32) {
        pub const BigEndian: i32 = 0;
        pub const LittleEndian: i32 = 1;
        pub const ByteOrder: i32 = 1;
    };
};
