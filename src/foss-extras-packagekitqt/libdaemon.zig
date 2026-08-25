const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const PackageKit__Bitfield = @import("libqt6").PackageKit__Bitfield;
const PackageKit__Offline = @import("libqt6").PackageKit__Offline;
const PackageKit__Transaction = @import("libqt6").PackageKit__Transaction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const daemon_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const transaction_enums = @import("libtransaction_1.zig").enums;

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const PackageKit__Daemon = extern struct {
    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.PackageKit__Daemon,

    pub const _is_PackageKit__Daemon = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn metaObject(self: PackageKit__Daemon) QMetaObject {
        return .{ .ptr = qtc.PackageKit__Daemon_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: PackageKit__Daemon, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.PackageKit__Daemon_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: PackageKit__Daemon, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.PackageKit__Daemon_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `global` instead
    ///
    pub const Global = global;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn global() PackageKit__Daemon {
        return .{ .ptr = qtc.PackageKit__Daemon_Global() };
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn isRunning() bool {
        return qtc.PackageKit__Daemon_IsRunning();
    }

    /// ### DEPRECATED: Use `roles` instead
    ///
    pub const Roles = roles;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn roles() PackageKit__Bitfield {
        return .{ .ptr = qtc.PackageKit__Daemon_Roles() };
    }

    /// ### DEPRECATED: Use `backendName` instead
    ///
    pub const BackendName = backendName;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn backendName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_BackendName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.backendName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `backendDescription` instead
    ///
    pub const BackendDescription = backendDescription;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn backendDescription(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_BackendDescription();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.backendDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `backendAuthor` instead
    ///
    pub const BackendAuthor = backendAuthor;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn backendAuthor(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_BackendAuthor();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.backendAuthor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filters` instead
    ///
    pub const Filters = filters;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Returns:
    ///
    /// ` flag of transaction_enums.Filter `
    ///
    pub fn filters() i32 {
        return qtc.PackageKit__Daemon_Filters();
    }

    /// ### DEPRECATED: Use `groups` instead
    ///
    pub const Groups = groups;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn groups() PackageKit__Bitfield {
        return .{ .ptr = qtc.PackageKit__Daemon_Groups() };
    }

    /// ### DEPRECATED: Use `locked` instead
    ///
    pub const Locked = locked;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn locked() bool {
        return qtc.PackageKit__Daemon_Locked();
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.PackageKit__Daemon_MimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("PackageKit__Daemon.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("PackageKit__Daemon.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `networkState` instead
    ///
    pub const NetworkState = networkState;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Returns:
    ///
    /// ` daemon_enums.Network `
    ///
    pub fn networkState() i32 {
        return qtc.PackageKit__Daemon_NetworkState();
    }

    /// ### DEPRECATED: Use `distroID` instead
    ///
    pub const DistroID = distroID;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn distroID(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_DistroID();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.distroID: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `versionMajor` instead
    ///
    pub const VersionMajor = versionMajor;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn versionMajor() u32 {
        return qtc.PackageKit__Daemon_VersionMajor();
    }

    /// ### DEPRECATED: Use `versionMinor` instead
    ///
    pub const VersionMinor = versionMinor;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn versionMinor() u32 {
        return qtc.PackageKit__Daemon_VersionMinor();
    }

    /// ### DEPRECATED: Use `versionMicro` instead
    ///
    pub const VersionMicro = versionMicro;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn versionMicro() u32 {
        return qtc.PackageKit__Daemon_VersionMicro();
    }

    /// ### DEPRECATED: Use `setHints` instead
    ///
    pub const SetHints = setHints;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _hints: []const []const u8 `
    ///
    pub fn setHints(allocator: std.mem.Allocator, _hints: []const []const u8) void {
        const hints_arr = allocator.alloc(qtc.libqt_string, _hints.len) catch @panic("PackageKit__Daemon.setHints: Memory allocation failed");
        defer allocator.free(hints_arr);
        for (_hints, 0.._hints.len) |str_item, i|
            hints_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const hints_list = qtc.libqt_list{
            .len = _hints.len,
            .data = hints_arr.ptr,
        };
        qtc.PackageKit__Daemon_SetHints(hints_list);
    }

    /// ### DEPRECATED: Use `setHints2` instead
    ///
    pub const SetHints2 = setHints2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` _hints: []const u8 `
    ///
    pub fn setHints2(_hints: []const u8) void {
        const hints_str = qtc.libqt_string{
            .len = _hints.len,
            .data = _hints.ptr,
        };
        qtc.PackageKit__Daemon_SetHints2(hints_str);
    }

    /// ### DEPRECATED: Use `hints` instead
    ///
    pub const Hints = hints;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hints(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.PackageKit__Daemon_Hints();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("PackageKit__Daemon.hints: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("PackageKit__Daemon.hints: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `offline` instead
    ///
    pub const Offline = offline;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn offline(self: PackageKit__Daemon) PackageKit__Offline {
        return .{ .ptr = qtc.PackageKit__Daemon_Offline(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `packageName` instead
    ///
    pub const PackageName = packageName;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn packageName(allocator: std.mem.Allocator, packageID: []const u8) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageName(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.packageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `packageVersion` instead
    ///
    pub const PackageVersion = packageVersion;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn packageVersion(allocator: std.mem.Allocator, packageID: []const u8) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageVersion(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.packageVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `packageArch` instead
    ///
    pub const PackageArch = packageArch;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn packageArch(allocator: std.mem.Allocator, packageID: []const u8) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageArch(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.packageArch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `packageData` instead
    ///
    pub const PackageData = packageData;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn packageData(allocator: std.mem.Allocator, packageID: []const u8) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageData(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.packageData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `enumToString` instead
    ///
    pub const EnumToString = enumToString;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _metaObject: QMetaObject `
    ///
    /// ` value: i32 `
    ///
    /// ` enumName: [:0]const u8 `
    ///
    pub fn enumToString(allocator: std.mem.Allocator, _metaObject: anytype, value: i32, enumName: [:0]const u8) []const u8 {
        comptime _ = @TypeOf(_metaObject)._is_QMetaObject;
        const enumName_Cstring = enumName.ptr;
        var _str = qtc.PackageKit__Daemon_EnumToString(@ptrCast(_metaObject.ptr), @bitCast(value), enumName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.enumToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `enumFromString` instead
    ///
    pub const EnumFromString = enumFromString;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metaObject: QMetaObject `
    ///
    /// ` str: []const u8 `
    ///
    /// ` enumName: [:0]const u8 `
    ///
    pub fn enumFromString(_metaObject: anytype, str: []const u8, enumName: [:0]const u8) i32 {
        comptime _ = @TypeOf(_metaObject)._is_QMetaObject;
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const enumName_Cstring = enumName.ptr;
        return qtc.PackageKit__Daemon_EnumFromString(@ptrCast(_metaObject.ptr), str_str, enumName_Cstring);
    }

    /// ### DEPRECATED: Use `acceptEula` instead
    ///
    pub const AcceptEula = acceptEula;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` eulaID: []const u8 `
    ///
    pub fn acceptEula(eulaID: []const u8) PackageKit__Transaction {
        const eulaID_str = qtc.libqt_string{
            .len = eulaID.len,
            .data = eulaID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_AcceptEula(eulaID_str) };
    }

    /// ### DEPRECATED: Use `downloadPackages` instead
    ///
    pub const DownloadPackages = downloadPackages;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn downloadPackages(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.downloadPackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DownloadPackages(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `downloadPackage` instead
    ///
    pub const DownloadPackage = downloadPackage;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn downloadPackage(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DownloadPackage(packageID_str) };
    }

    /// ### DEPRECATED: Use `getCategories` instead
    ///
    pub const GetCategories = getCategories;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn getCategories() PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetCategories() };
    }

    /// ### DEPRECATED: Use `dependsOn` instead
    ///
    pub const DependsOn = dependsOn;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn dependsOn(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.dependsOn: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DependsOn(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `dependsOn2` instead
    ///
    pub const DependsOn2 = dependsOn2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn dependsOn2(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DependsOn2(packageID_str) };
    }

    /// ### DEPRECATED: Use `getDetails` instead
    ///
    pub const GetDetails = getDetails;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn getDetails(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.getDetails: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetDetails(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `getDetails2` instead
    ///
    pub const GetDetails2 = getDetails2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn getDetails2(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetDetails2(packageID_str) };
    }

    /// ### DEPRECATED: Use `getDetailsLocal` instead
    ///
    pub const GetDetailsLocal = getDetailsLocal;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    pub fn getDetailsLocal(allocator: std.mem.Allocator, files: []const []const u8) PackageKit__Transaction {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("PackageKit__Daemon.getDetailsLocal: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetDetailsLocal(files_list) };
    }

    /// ### DEPRECATED: Use `getDetailsLocal2` instead
    ///
    pub const GetDetailsLocal2 = getDetailsLocal2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn getDetailsLocal2(file: []const u8) PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetDetailsLocal2(file_str) };
    }

    /// ### DEPRECATED: Use `getFiles` instead
    ///
    pub const GetFiles = getFiles;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn getFiles(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.getFiles: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetFiles(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `getFiles2` instead
    ///
    pub const GetFiles2 = getFiles2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: []const u8 `
    ///
    pub fn getFiles2(packageIDs: []const u8) PackageKit__Transaction {
        const packageIDs_str = qtc.libqt_string{
            .len = packageIDs.len,
            .data = packageIDs.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetFiles2(packageIDs_str) };
    }

    /// ### DEPRECATED: Use `getFilesLocal` instead
    ///
    pub const GetFilesLocal = getFilesLocal;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    pub fn getFilesLocal(allocator: std.mem.Allocator, files: []const []const u8) PackageKit__Transaction {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("PackageKit__Daemon.getFilesLocal: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetFilesLocal(files_list) };
    }

    /// ### DEPRECATED: Use `getFilesLocal2` instead
    ///
    pub const GetFilesLocal2 = getFilesLocal2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn getFilesLocal2(file: []const u8) PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetFilesLocal2(file_str) };
    }

    /// ### DEPRECATED: Use `getOldTransactions` instead
    ///
    pub const GetOldTransactions = getOldTransactions;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` number: u32 `
    ///
    pub fn getOldTransactions(number: u32) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetOldTransactions(@bitCast(number)) };
    }

    /// ### DEPRECATED: Use `getPackages` instead
    ///
    pub const GetPackages = getPackages;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn getPackages() PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetPackages() };
    }

    /// ### DEPRECATED: Use `getRepoList` instead
    ///
    pub const GetRepoList = getRepoList;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn getRepoList() PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetRepoList() };
    }

    /// ### DEPRECATED: Use `requiredBy` instead
    ///
    pub const RequiredBy = requiredBy;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn requiredBy(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.requiredBy: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RequiredBy(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `requiredBy2` instead
    ///
    pub const RequiredBy2 = requiredBy2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn requiredBy2(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RequiredBy2(packageID_str) };
    }

    /// ### DEPRECATED: Use `getUpdatesDetails` instead
    ///
    pub const GetUpdatesDetails = getUpdatesDetails;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn getUpdatesDetails(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.getUpdatesDetails: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetUpdatesDetails(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `getUpdateDetail` instead
    ///
    pub const GetUpdateDetail = getUpdateDetail;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn getUpdateDetail(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_GetUpdateDetail(packageID_str) };
    }

    /// ### DEPRECATED: Use `getUpdates` instead
    ///
    pub const GetUpdates = getUpdates;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn getUpdates() PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetUpdates() };
    }

    /// ### DEPRECATED: Use `getDistroUpgrades` instead
    ///
    pub const GetDistroUpgrades = getDistroUpgrades;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn getDistroUpgrades() PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetDistroUpgrades() };
    }

    /// ### DEPRECATED: Use `upgradeSystem` instead
    ///
    pub const UpgradeSystem = upgradeSystem;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` distroId: []const u8 `
    ///
    /// ` kind: transaction_enums.UpgradeKind `
    ///
    pub fn upgradeSystem(distroId: []const u8, kind: i32) PackageKit__Transaction {
        const distroId_str = qtc.libqt_string{
            .len = distroId.len,
            .data = distroId.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_UpgradeSystem(distroId_str, @bitCast(kind)) };
    }

    /// ### DEPRECATED: Use `installFiles` instead
    ///
    pub const InstallFiles = installFiles;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    pub fn installFiles(allocator: std.mem.Allocator, files: []const []const u8) PackageKit__Transaction {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("PackageKit__Daemon.installFiles: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallFiles(files_list) };
    }

    /// ### DEPRECATED: Use `installFile` instead
    ///
    pub const InstallFile = installFile;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn installFile(file: []const u8) PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallFile(file_str) };
    }

    /// ### DEPRECATED: Use `installPackages` instead
    ///
    pub const InstallPackages = installPackages;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn installPackages(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.installPackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallPackages(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `installPackage` instead
    ///
    pub const InstallPackage = installPackage;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn installPackage(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallPackage(packageID_str) };
    }

    /// ### DEPRECATED: Use `installSignature` instead
    ///
    pub const InstallSignature = installSignature;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: transaction_enums.SigType `
    ///
    /// ` keyID: []const u8 `
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn installSignature(typeVal: i32, keyID: []const u8, packageID: []const u8) PackageKit__Transaction {
        const keyID_str = qtc.libqt_string{
            .len = keyID.len,
            .data = keyID.ptr,
        };
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallSignature(@bitCast(typeVal), keyID_str, packageID_str) };
    }

    /// ### DEPRECATED: Use `refreshCache` instead
    ///
    pub const RefreshCache = refreshCache;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` force: bool `
    ///
    pub fn refreshCache(force: bool) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_RefreshCache(force) };
    }

    /// ### DEPRECATED: Use `removePackages` instead
    ///
    pub const RemovePackages = removePackages;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn removePackages(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.removePackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackages(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `removePackage` instead
    ///
    pub const RemovePackage = removePackage;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn removePackage(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackage(packageID_str) };
    }

    /// ### DEPRECATED: Use `repairSystem` instead
    ///
    pub const RepairSystem = repairSystem;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn repairSystem() PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_RepairSystem() };
    }

    /// ### DEPRECATED: Use `repoEnable` instead
    ///
    pub const RepoEnable = repoEnable;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    pub fn repoEnable(repoId: []const u8) PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RepoEnable(repoId_str) };
    }

    /// ### DEPRECATED: Use `repoRemove` instead
    ///
    pub const RepoRemove = repoRemove;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` autoremove: bool `
    ///
    pub fn repoRemove(repoId: []const u8, autoremove: bool) PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RepoRemove(repoId_str, autoremove) };
    }

    /// ### DEPRECATED: Use `repoSetData` instead
    ///
    pub const RepoSetData = repoSetData;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` parameter: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn repoSetData(repoId: []const u8, parameter: []const u8, value: []const u8) PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        const parameter_str = qtc.libqt_string{
            .len = parameter.len,
            .data = parameter.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RepoSetData(repoId_str, parameter_str, value_str) };
    }

    /// ### DEPRECATED: Use `resolve` instead
    ///
    pub const Resolve = resolve;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageNames: []const []const u8 `
    ///
    pub fn resolve(allocator: std.mem.Allocator, packageNames: []const []const u8) PackageKit__Transaction {
        const packageNames_arr = allocator.alloc(qtc.libqt_string, packageNames.len) catch @panic("PackageKit__Daemon.resolve: Memory allocation failed");
        defer allocator.free(packageNames_arr);
        for (packageNames, 0..packageNames.len) |str_item, i|
            packageNames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageNames_list = qtc.libqt_list{
            .len = packageNames.len,
            .data = packageNames_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_Resolve(packageNames_list) };
    }

    /// ### DEPRECATED: Use `resolve2` instead
    ///
    pub const Resolve2 = resolve2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` _packageName: []const u8 `
    ///
    pub fn resolve2(_packageName: []const u8) PackageKit__Transaction {
        const packageName_str = qtc.libqt_string{
            .len = _packageName.len,
            .data = _packageName.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_Resolve2(packageName_str) };
    }

    /// ### DEPRECATED: Use `searchFiles` instead
    ///
    pub const SearchFiles = searchFiles;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    pub fn searchFiles(allocator: std.mem.Allocator, search: []const []const u8) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.searchFiles: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchFiles(search_list) };
    }

    /// ### DEPRECATED: Use `searchFiles2` instead
    ///
    pub const SearchFiles2 = searchFiles2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn searchFiles2(search: []const u8) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchFiles2(search_str) };
    }

    /// ### DEPRECATED: Use `searchDetails` instead
    ///
    pub const SearchDetails = searchDetails;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    pub fn searchDetails(allocator: std.mem.Allocator, search: []const []const u8) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.searchDetails: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchDetails(search_list) };
    }

    /// ### DEPRECATED: Use `searchDetails2` instead
    ///
    pub const SearchDetails2 = searchDetails2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn searchDetails2(search: []const u8) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchDetails2(search_str) };
    }

    /// ### DEPRECATED: Use `searchGroups` instead
    ///
    pub const SearchGroups = searchGroups;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _groups: []const []const u8 `
    ///
    pub fn searchGroups(allocator: std.mem.Allocator, _groups: []const []const u8) PackageKit__Transaction {
        const groups_arr = allocator.alloc(qtc.libqt_string, _groups.len) catch @panic("PackageKit__Daemon.searchGroups: Memory allocation failed");
        defer allocator.free(groups_arr);
        for (_groups, 0.._groups.len) |str_item, i|
            groups_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const groups_list = qtc.libqt_list{
            .len = _groups.len,
            .data = groups_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroups(groups_list) };
    }

    /// ### DEPRECATED: Use `searchGroup` instead
    ///
    pub const SearchGroup = searchGroup;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: []const u8 `
    ///
    pub fn searchGroup(group: []const u8) PackageKit__Transaction {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroup(group_str) };
    }

    /// ### DEPRECATED: Use `searchGroup2` instead
    ///
    pub const SearchGroup2 = searchGroup2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: transaction_enums.Group `
    ///
    pub fn searchGroup2(group: i32) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroup2(@bitCast(group)) };
    }

    /// ### DEPRECATED: Use `searchGroups2` instead
    ///
    pub const SearchGroups2 = searchGroups2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: PackageKit__Bitfield `
    ///
    pub fn searchGroups2(group: anytype) PackageKit__Transaction {
        comptime _ = @TypeOf(group)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroups2(@ptrCast(group.ptr)) };
    }

    /// ### DEPRECATED: Use `searchNames` instead
    ///
    pub const SearchNames = searchNames;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    pub fn searchNames(allocator: std.mem.Allocator, search: []const []const u8) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.searchNames: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchNames(search_list) };
    }

    /// ### DEPRECATED: Use `searchNames2` instead
    ///
    pub const SearchNames2 = searchNames2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn searchNames2(search: []const u8) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchNames2(search_str) };
    }

    /// ### DEPRECATED: Use `updatePackages` instead
    ///
    pub const UpdatePackages = updatePackages;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    pub fn updatePackages(allocator: std.mem.Allocator, packageIDs: []const []const u8) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.updatePackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_UpdatePackages(packageIDs_list) };
    }

    /// ### DEPRECATED: Use `updatePackage` instead
    ///
    pub const UpdatePackage = updatePackage;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn updatePackage(packageID: []const u8) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_UpdatePackage(packageID_str) };
    }

    /// ### DEPRECATED: Use `whatProvides` instead
    ///
    pub const WhatProvides = whatProvides;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    pub fn whatProvides(allocator: std.mem.Allocator, search: []const []const u8) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.whatProvides: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_WhatProvides(search_list) };
    }

    /// ### DEPRECATED: Use `whatProvides2` instead
    ///
    pub const WhatProvides2 = whatProvides2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn whatProvides2(search: []const u8) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_WhatProvides2(search_str) };
    }

    /// ### DEPRECATED: Use `isRunningChanged` instead
    ///
    pub const IsRunningChanged = isRunningChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn isRunningChanged(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_IsRunningChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsRunningChanged` instead
    ///
    pub const OnIsRunningChanged = onIsRunningChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onIsRunningChanged(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_IsRunningChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `networkStateChanged` instead
    ///
    pub const NetworkStateChanged = networkStateChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn networkStateChanged(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_NetworkStateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNetworkStateChanged` instead
    ///
    pub const OnNetworkStateChanged = onNetworkStateChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onNetworkStateChanged(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_NetworkStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn changed(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onChanged(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `repoListChanged` instead
    ///
    pub const RepoListChanged = repoListChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn repoListChanged(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_RepoListChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRepoListChanged` instead
    ///
    pub const OnRepoListChanged = onRepoListChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onRepoListChanged(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_RepoListChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `restartScheduled` instead
    ///
    pub const RestartScheduled = restartScheduled;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn restartScheduled(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_RestartScheduled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRestartScheduled` instead
    ///
    pub const OnRestartScheduled = onRestartScheduled;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onRestartScheduled(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_RestartScheduled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transactionListChanged` instead
    ///
    pub const TransactionListChanged = transactionListChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tids: []const []const u8 `
    ///
    pub fn transactionListChanged(self: PackageKit__Daemon, allocator: std.mem.Allocator, tids: []const []const u8) void {
        const tids_arr = allocator.alloc(qtc.libqt_string, tids.len) catch @panic("PackageKit__Daemon.transactionListChanged: Memory allocation failed");
        defer allocator.free(tids_arr);
        for (tids, 0..tids.len) |str_item, i|
            tids_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const tids_list = qtc.libqt_list{
            .len = tids.len,
            .data = tids_arr.ptr,
        };
        qtc.PackageKit__Daemon_TransactionListChanged(@ptrCast(self.ptr), tids_list);
    }

    /// ### DEPRECATED: Use `onTransactionListChanged` instead
    ///
    pub const OnTransactionListChanged = onTransactionListChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon, tids: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onTransactionListChanged(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_TransactionListChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updatesChanged` instead
    ///
    pub const UpdatesChanged = updatesChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn updatesChanged(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_UpdatesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdatesChanged` instead
    ///
    pub const OnUpdatesChanged = onUpdatesChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onUpdatesChanged(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_UpdatesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `daemonQuit` instead
    ///
    pub const DaemonQuit = daemonQuit;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn daemonQuit(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_DaemonQuit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDaemonQuit` instead
    ///
    pub const OnDaemonQuit = onDaemonQuit;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onDaemonQuit(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_DaemonQuit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `downloadPackages2` instead
    ///
    pub const DownloadPackages2 = downloadPackages2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` storeInCache: bool `
    ///
    pub fn downloadPackages2(allocator: std.mem.Allocator, packageIDs: []const []const u8, storeInCache: bool) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.downloadPackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DownloadPackages2(packageIDs_list, storeInCache) };
    }

    /// ### DEPRECATED: Use `downloadPackage2` instead
    ///
    pub const DownloadPackage2 = downloadPackage2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` storeInCache: bool `
    ///
    pub fn downloadPackage2(packageID: []const u8, storeInCache: bool) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DownloadPackage2(packageID_str, storeInCache) };
    }

    /// ### DEPRECATED: Use `dependsOn22` instead
    ///
    pub const DependsOn22 = dependsOn22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn dependsOn22(allocator: std.mem.Allocator, packageIDs: []const []const u8, _filters: i32) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.dependsOn22: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DependsOn22(packageIDs_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `dependsOn3` instead
    ///
    pub const DependsOn3 = dependsOn3;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    pub fn dependsOn3(allocator: std.mem.Allocator, packageIDs: []const []const u8, _filters: i32, recursive: bool) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.dependsOn3: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DependsOn3(packageIDs_list, @bitCast(_filters), recursive) };
    }

    /// ### DEPRECATED: Use `dependsOn23` instead
    ///
    pub const DependsOn23 = dependsOn23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn dependsOn23(packageID: []const u8, _filters: i32) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DependsOn23(packageID_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `dependsOn32` instead
    ///
    pub const DependsOn32 = dependsOn32;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    pub fn dependsOn32(packageID: []const u8, _filters: i32, recursive: bool) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_DependsOn32(packageID_str, @bitCast(_filters), recursive) };
    }

    /// ### DEPRECATED: Use `getPackages1` instead
    ///
    pub const GetPackages1 = getPackages1;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn getPackages1(_filters: i32) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetPackages1(@bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `getRepoList1` instead
    ///
    pub const GetRepoList1 = getRepoList1;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn getRepoList1(_filters: i32) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetRepoList1(@bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `requiredBy22` instead
    ///
    pub const RequiredBy22 = requiredBy22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn requiredBy22(allocator: std.mem.Allocator, packageIDs: []const []const u8, _filters: i32) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.requiredBy22: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RequiredBy22(packageIDs_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `requiredBy3` instead
    ///
    pub const RequiredBy3 = requiredBy3;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    pub fn requiredBy3(allocator: std.mem.Allocator, packageIDs: []const []const u8, _filters: i32, recursive: bool) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.requiredBy3: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RequiredBy3(packageIDs_list, @bitCast(_filters), recursive) };
    }

    /// ### DEPRECATED: Use `requiredBy23` instead
    ///
    pub const RequiredBy23 = requiredBy23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn requiredBy23(packageID: []const u8, _filters: i32) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RequiredBy23(packageID_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `requiredBy32` instead
    ///
    pub const RequiredBy32 = requiredBy32;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    pub fn requiredBy32(packageID: []const u8, _filters: i32, recursive: bool) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RequiredBy32(packageID_str, @bitCast(_filters), recursive) };
    }

    /// ### DEPRECATED: Use `getUpdates1` instead
    ///
    pub const GetUpdates1 = getUpdates1;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn getUpdates1(_filters: i32) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_GetUpdates1(@bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `upgradeSystem3` instead
    ///
    pub const UpgradeSystem3 = upgradeSystem3;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` distroId: []const u8 `
    ///
    /// ` kind: transaction_enums.UpgradeKind `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn upgradeSystem3(distroId: []const u8, kind: i32, flags: i32) PackageKit__Transaction {
        const distroId_str = qtc.libqt_string{
            .len = distroId.len,
            .data = distroId.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_UpgradeSystem3(distroId_str, @bitCast(kind), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `installFiles2` instead
    ///
    pub const InstallFiles2 = installFiles2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn installFiles2(allocator: std.mem.Allocator, files: []const []const u8, flags: i32) PackageKit__Transaction {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("PackageKit__Daemon.installFiles2: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallFiles2(files_list, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `installFile2` instead
    ///
    pub const InstallFile2 = installFile2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn installFile2(file: []const u8, flags: i32) PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallFile2(file_str, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `installPackages2` instead
    ///
    pub const InstallPackages2 = installPackages2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn installPackages2(allocator: std.mem.Allocator, packageIDs: []const []const u8, flags: i32) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.installPackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallPackages2(packageIDs_list, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `installPackage2` instead
    ///
    pub const InstallPackage2 = installPackage2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn installPackage2(packageID: []const u8, flags: i32) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_InstallPackage2(packageID_str, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `removePackages2` instead
    ///
    pub const RemovePackages2 = removePackages2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    pub fn removePackages2(allocator: std.mem.Allocator, packageIDs: []const []const u8, allowDeps: bool) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.removePackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackages2(packageIDs_list, allowDeps) };
    }

    /// ### DEPRECATED: Use `removePackages3` instead
    ///
    pub const RemovePackages3 = removePackages3;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    /// ` autoRemove: bool `
    ///
    pub fn removePackages3(allocator: std.mem.Allocator, packageIDs: []const []const u8, allowDeps: bool, autoRemove: bool) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.removePackages3: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackages3(packageIDs_list, allowDeps, autoRemove) };
    }

    /// ### DEPRECATED: Use `removePackages4` instead
    ///
    pub const RemovePackages4 = removePackages4;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    /// ` autoRemove: bool `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn removePackages4(allocator: std.mem.Allocator, packageIDs: []const []const u8, allowDeps: bool, autoRemove: bool, flags: i32) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.removePackages4: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackages4(packageIDs_list, allowDeps, autoRemove, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `removePackage2` instead
    ///
    pub const RemovePackage2 = removePackage2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    pub fn removePackage2(packageID: []const u8, allowDeps: bool) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackage2(packageID_str, allowDeps) };
    }

    /// ### DEPRECATED: Use `removePackage3` instead
    ///
    pub const RemovePackage3 = removePackage3;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    /// ` autoRemove: bool `
    ///
    pub fn removePackage3(packageID: []const u8, allowDeps: bool, autoRemove: bool) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackage3(packageID_str, allowDeps, autoRemove) };
    }

    /// ### DEPRECATED: Use `removePackage4` instead
    ///
    pub const RemovePackage4 = removePackage4;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    /// ` autoRemove: bool `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn removePackage4(packageID: []const u8, allowDeps: bool, autoRemove: bool, flags: i32) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RemovePackage4(packageID_str, allowDeps, autoRemove, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `repairSystem1` instead
    ///
    pub const RepairSystem1 = repairSystem1;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn repairSystem1(flags: i32) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_RepairSystem1(@bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `repoEnable2` instead
    ///
    pub const RepoEnable2 = repoEnable2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` enable: bool `
    ///
    pub fn repoEnable2(repoId: []const u8, enable: bool) PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RepoEnable2(repoId_str, enable) };
    }

    /// ### DEPRECATED: Use `repoRemove3` instead
    ///
    pub const RepoRemove3 = repoRemove3;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` autoremove: bool `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn repoRemove3(repoId: []const u8, autoremove: bool, flags: i32) PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_RepoRemove3(repoId_str, autoremove, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `resolve22` instead
    ///
    pub const Resolve22 = resolve22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageNames: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn resolve22(allocator: std.mem.Allocator, packageNames: []const []const u8, _filters: i32) PackageKit__Transaction {
        const packageNames_arr = allocator.alloc(qtc.libqt_string, packageNames.len) catch @panic("PackageKit__Daemon.resolve22: Memory allocation failed");
        defer allocator.free(packageNames_arr);
        for (packageNames, 0..packageNames.len) |str_item, i|
            packageNames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageNames_list = qtc.libqt_list{
            .len = packageNames.len,
            .data = packageNames_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_Resolve22(packageNames_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `resolve23` instead
    ///
    pub const Resolve23 = resolve23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` _packageName: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn resolve23(_packageName: []const u8, _filters: i32) PackageKit__Transaction {
        const packageName_str = qtc.libqt_string{
            .len = _packageName.len,
            .data = _packageName.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_Resolve23(packageName_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchFiles22` instead
    ///
    pub const SearchFiles22 = searchFiles22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchFiles22(allocator: std.mem.Allocator, search: []const []const u8, _filters: i32) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.searchFiles22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchFiles22(search_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchFiles23` instead
    ///
    pub const SearchFiles23 = searchFiles23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchFiles23(search: []const u8, _filters: i32) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchFiles23(search_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchDetails22` instead
    ///
    pub const SearchDetails22 = searchDetails22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchDetails22(allocator: std.mem.Allocator, search: []const []const u8, _filters: i32) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.searchDetails22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchDetails22(search_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchDetails23` instead
    ///
    pub const SearchDetails23 = searchDetails23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchDetails23(search: []const u8, _filters: i32) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchDetails23(search_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchGroups22` instead
    ///
    pub const SearchGroups22 = searchGroups22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _groups: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchGroups22(allocator: std.mem.Allocator, _groups: []const []const u8, _filters: i32) PackageKit__Transaction {
        const groups_arr = allocator.alloc(qtc.libqt_string, _groups.len) catch @panic("PackageKit__Daemon.searchGroups22: Memory allocation failed");
        defer allocator.free(groups_arr);
        for (_groups, 0.._groups.len) |str_item, i|
            groups_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const groups_list = qtc.libqt_list{
            .len = _groups.len,
            .data = groups_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroups22(groups_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchGroup22` instead
    ///
    pub const SearchGroup22 = searchGroup22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchGroup22(group: []const u8, _filters: i32) PackageKit__Transaction {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroup22(group_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchGroup23` instead
    ///
    pub const SearchGroup23 = searchGroup23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: transaction_enums.Group `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchGroup23(group: i32, _filters: i32) PackageKit__Transaction {
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroup23(@bitCast(group), @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchGroups23` instead
    ///
    pub const SearchGroups23 = searchGroups23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: PackageKit__Bitfield `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchGroups23(group: anytype, _filters: i32) PackageKit__Transaction {
        comptime _ = @TypeOf(group)._is_PackageKit__Bitfield;
        return .{ .ptr = qtc.PackageKit__Daemon_SearchGroups23(@ptrCast(group.ptr), @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchNames22` instead
    ///
    pub const SearchNames22 = searchNames22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchNames22(allocator: std.mem.Allocator, search: []const []const u8, _filters: i32) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.searchNames22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchNames22(search_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `searchNames23` instead
    ///
    pub const SearchNames23 = searchNames23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn searchNames23(search: []const u8, _filters: i32) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_SearchNames23(search_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `updatePackages2` instead
    ///
    pub const UpdatePackages2 = updatePackages2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageIDs: []const []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn updatePackages2(allocator: std.mem.Allocator, packageIDs: []const []const u8, flags: i32) PackageKit__Transaction {
        const packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("PackageKit__Daemon.updatePackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |str_item, i|
            packageIDs_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_UpdatePackages2(packageIDs_list, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `updatePackage2` instead
    ///
    pub const UpdatePackage2 = updatePackage2;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn updatePackage2(packageID: []const u8, flags: i32) PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_UpdatePackage2(packageID_str, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `whatProvides22` instead
    ///
    pub const WhatProvides22 = whatProvides22;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` search: []const []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn whatProvides22(allocator: std.mem.Allocator, search: []const []const u8, _filters: i32) PackageKit__Transaction {
        const search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("PackageKit__Daemon.whatProvides22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |str_item, i|
            search_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_WhatProvides22(search_list, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `whatProvides23` instead
    ///
    pub const WhatProvides23 = whatProvides23;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` _filters: flag of transaction_enums.Filter `
    ///
    pub fn whatProvides23(search: []const u8, _filters: i32) PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return .{ .ptr = qtc.PackageKit__Daemon_WhatProvides23(search_str, @bitCast(_filters)) };
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: PackageKit__Daemon, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: PackageKit__Daemon, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: PackageKit__Daemon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Daemon.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: PackageKit__Daemon, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn isWidgetType(self: PackageKit__Daemon) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn isWindowType(self: PackageKit__Daemon) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn isQuickItemType(self: PackageKit__Daemon) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn signalsBlocked(self: PackageKit__Daemon) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: PackageKit__Daemon, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn thread(self: PackageKit__Daemon) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: PackageKit__Daemon, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: PackageKit__Daemon, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: PackageKit__Daemon, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: PackageKit__Daemon, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: PackageKit__Daemon, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: PackageKit__Daemon, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("PackageKit__Daemon.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: PackageKit__Daemon, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: PackageKit__Daemon, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: PackageKit__Daemon, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: PackageKit__Daemon, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn disconnect3(self: PackageKit__Daemon) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: PackageKit__Daemon, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn dumpObjectTree(self: PackageKit__Daemon) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn dumpObjectInfo(self: PackageKit__Daemon) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: PackageKit__Daemon, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: PackageKit__Daemon, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: PackageKit__Daemon, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("PackageKit__Daemon.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("PackageKit__Daemon.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn bindingStorage(self: PackageKit__Daemon) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn bindingStorage2(self: PackageKit__Daemon) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn destroyed(self: PackageKit__Daemon) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn onDestroyed(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn parent(self: PackageKit__Daemon) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: PackageKit__Daemon, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn deleteLater(self: PackageKit__Daemon) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: PackageKit__Daemon, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: PackageKit__Daemon, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: PackageKit__Daemon, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: PackageKit__Daemon, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: PackageKit__Daemon, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: PackageKit__Daemon, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: PackageKit__Daemon, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: PackageKit__Daemon, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: PackageKit__Daemon, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: PackageKit__Daemon, callback: *const fn (PackageKit__Daemon, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: PackageKit__Daemon `
    ///
    pub fn delete(self: PackageKit__Daemon) void {
        qtc.PackageKit__Daemon_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const enums = struct {
    pub const Network = enum {
        pub const NetworkUnknown: i32 = 0;
        pub const NetworkOffline: i32 = 1;
        pub const NetworkOnline: i32 = 2;
        pub const NetworkWired: i32 = 3;
        pub const NetworkWifi: i32 = 4;
        pub const NetworkMobile: i32 = 5;
    };

    pub const Authorize = enum {
        pub const AuthorizeUnknown: i32 = 0;
        pub const AuthorizeYes: i32 = 1;
        pub const AuthorizeNo: i32 = 2;
        pub const AuthorizeInteractive: i32 = 3;
    };
};
