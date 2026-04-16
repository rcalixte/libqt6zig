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

    /// New constructs a new QSysInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSysInfo `
    ///
    pub fn New(other: anytype) QSysInfo {
        comptime _ = @TypeOf(other)._is_QSysInfo;
        return .{ .ptr = qtc.QSysInfo_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QSysInfo object and invalidates the source QSysInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSysInfo `
    ///
    pub fn New2(other: anytype) QSysInfo {
        comptime _ = @TypeOf(other)._is_QSysInfo;
        return .{ .ptr = qtc.QSysInfo_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSysInfo `
    ///
    /// ` other: QSysInfo `
    ///
    pub fn CopyAssign(self: QSysInfo, other: QSysInfo) void {
        qtc.QSysInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSysInfo `
    ///
    /// ` other: QSysInfo `
    ///
    pub fn MoveAssign(self: QSysInfo, other: QSysInfo) void {
        qtc.QSysInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#buildCpuArchitecture)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BuildCpuArchitecture(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_BuildCpuArchitecture();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.BuildCpuArchitecture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#currentCpuArchitecture)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentCpuArchitecture(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_CurrentCpuArchitecture();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.CurrentCpuArchitecture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#buildAbi)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BuildAbi(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_BuildAbi();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.BuildAbi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#kernelType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KernelType(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_KernelType();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.KernelType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#kernelVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KernelVersion(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_KernelVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.KernelVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#productType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProductType(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_ProductType();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.ProductType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#productVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProductVersion(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_ProductVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.ProductVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#prettyProductName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrettyProductName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_PrettyProductName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.PrettyProductName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#machineHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MachineHostName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSysInfo_MachineHostName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.MachineHostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#machineUniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MachineUniqueId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSysInfo_MachineUniqueId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsysinfo.MachineUniqueId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#bootUniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BootUniqueId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSysInfo_BootUniqueId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsysinfo.BootUniqueId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#dtor.QSysInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSysInfo `
    ///
    pub fn Delete(self: QSysInfo) void {
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
