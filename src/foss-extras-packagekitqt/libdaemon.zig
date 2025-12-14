const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const daemon_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const transaction_enums = @import("libtransaction_1.zig").enums;

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const packagekit__daemon = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.PackageKit__Daemon_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.PackageKit__Daemon_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.PackageKit__Daemon_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn Global() QtC.PackageKit__Daemon {
        return qtc.PackageKit__Daemon_Global();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn IsRunning() bool {
        return qtc.PackageKit__Daemon_IsRunning();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn Roles() QtC.PackageKit__Bitfield {
        return qtc.PackageKit__Daemon_Roles();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BackendName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_BackendName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.BackendName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BackendDescription(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_BackendDescription();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.BackendDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BackendAuthor(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_BackendAuthor();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.BackendAuthor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Returns:
    ///
    /// ` flag of transaction_enums.Filter `
    ///
    pub fn Filters() i32 {
        return qtc.PackageKit__Daemon_Filters();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn Groups() QtC.PackageKit__Bitfield {
        return qtc.PackageKit__Daemon_Groups();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn Locked() bool {
        return qtc.PackageKit__Daemon_Locked();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.PackageKit__Daemon_MimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("packagekit::daemon.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("packagekit::daemon.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Returns:
    ///
    /// ` daemon_enums.Network `
    ///
    pub fn NetworkState() i32 {
        return qtc.PackageKit__Daemon_NetworkState();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DistroID(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Daemon_DistroID();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.DistroID: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn VersionMajor() u32 {
        return qtc.PackageKit__Daemon_VersionMajor();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn VersionMinor() u32 {
        return qtc.PackageKit__Daemon_VersionMinor();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn VersionMicro() u32 {
        return qtc.PackageKit__Daemon_VersionMicro();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` hints: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetHints(hints: [][]const u8, allocator: std.mem.Allocator) void {
        var hints_arr = allocator.alloc(qtc.libqt_string, hints.len) catch @panic("packagekit::daemon.SetHints: Memory allocation failed");
        defer allocator.free(hints_arr);
        for (hints, 0..hints.len) |item, i| {
            hints_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const hints_list = qtc.libqt_list{
            .len = hints.len,
            .data = hints_arr.ptr,
        };
        qtc.PackageKit__Daemon_SetHints(hints_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` hints: []const u8 `
    ///
    pub fn SetHints2(hints: []const u8) void {
        const hints_str = qtc.libqt_string{
            .len = hints.len,
            .data = hints.ptr,
        };
        qtc.PackageKit__Daemon_SetHints2(hints_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Hints(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.PackageKit__Daemon_Hints();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("packagekit::daemon.Hints: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("packagekit::daemon.Hints: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn Offline(self: ?*anyopaque) QtC.PackageKit__Offline {
        return qtc.PackageKit__Daemon_Offline(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageName(packageID: []const u8, allocator: std.mem.Allocator) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageName(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.PackageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageVersion(packageID: []const u8, allocator: std.mem.Allocator) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageVersion(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.PackageVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageArch(packageID: []const u8, allocator: std.mem.Allocator) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageArch(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.PackageArch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PackageData(packageID: []const u8, allocator: std.mem.Allocator) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Daemon_PackageData(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.PackageData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` metaObject: QtC.QMetaObject `
    ///
    /// ` value: i32 `
    ///
    /// ` enumName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EnumToString(metaObject: ?*anyopaque, value: i32, enumName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const enumName_Cstring = enumName.ptr;
        var _str = qtc.PackageKit__Daemon_EnumToString(@ptrCast(metaObject), @intCast(value), enumName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.EnumToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` metaObject: QtC.QMetaObject `
    ///
    /// ` str: []const u8 `
    ///
    /// ` enumName: []const u8 `
    ///
    pub fn EnumFromString(metaObject: ?*anyopaque, str: []const u8, enumName: []const u8) i32 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        const enumName_Cstring = enumName.ptr;
        return qtc.PackageKit__Daemon_EnumFromString(@ptrCast(metaObject), str_str, enumName_Cstring);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` eulaID: []const u8 `
    ///
    pub fn AcceptEula(eulaID: []const u8) QtC.PackageKit__Transaction {
        const eulaID_str = qtc.libqt_string{
            .len = eulaID.len,
            .data = eulaID.ptr,
        };
        return qtc.PackageKit__Daemon_AcceptEula(eulaID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadPackages(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.DownloadPackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_DownloadPackages(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn DownloadPackage(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_DownloadPackage(packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn GetCategories() QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetCategories();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DependsOn(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.DependsOn: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_DependsOn(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn DependsOn2(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_DependsOn2(packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetDetails(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.GetDetails: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_GetDetails(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn GetDetails2(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_GetDetails2(packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` files: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetDetailsLocal(files: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("packagekit::daemon.GetDetailsLocal: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return qtc.PackageKit__Daemon_GetDetailsLocal(files_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn GetDetailsLocal2(file: []const u8) QtC.PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.PackageKit__Daemon_GetDetailsLocal2(file_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetFiles(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.GetFiles: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_GetFiles(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: []const u8 `
    ///
    pub fn GetFiles2(packageIDs: []const u8) QtC.PackageKit__Transaction {
        const packageIDs_str = qtc.libqt_string{
            .len = packageIDs.len,
            .data = packageIDs.ptr,
        };
        return qtc.PackageKit__Daemon_GetFiles2(packageIDs_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` files: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetFilesLocal(files: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("packagekit::daemon.GetFilesLocal: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return qtc.PackageKit__Daemon_GetFilesLocal(files_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn GetFilesLocal2(file: []const u8) QtC.PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.PackageKit__Daemon_GetFilesLocal2(file_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` number: u32 `
    ///
    pub fn GetOldTransactions(number: u32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetOldTransactions(@intCast(number));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn GetPackages() QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetPackages();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn GetRepoList() QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetRepoList();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RequiredBy(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.RequiredBy: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_RequiredBy(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn RequiredBy2(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_RequiredBy2(packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetUpdatesDetails(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.GetUpdatesDetails: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_GetUpdatesDetails(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn GetUpdateDetail(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_GetUpdateDetail(packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn GetUpdates() QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetUpdates();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn GetDistroUpgrades() QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetDistroUpgrades();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` distroId: []const u8 `
    ///
    /// ` kind: transaction_enums.UpgradeKind `
    ///
    pub fn UpgradeSystem(distroId: []const u8, kind: i32) QtC.PackageKit__Transaction {
        const distroId_str = qtc.libqt_string{
            .len = distroId.len,
            .data = distroId.ptr,
        };
        return qtc.PackageKit__Daemon_UpgradeSystem(distroId_str, @intCast(kind));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` files: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstallFiles(files: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("packagekit::daemon.InstallFiles: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return qtc.PackageKit__Daemon_InstallFiles(files_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    pub fn InstallFile(file: []const u8) QtC.PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.PackageKit__Daemon_InstallFile(file_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstallPackages(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.InstallPackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_InstallPackages(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn InstallPackage(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_InstallPackage(packageID_str);
    }

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
    pub fn InstallSignature(typeVal: i32, keyID: []const u8, packageID: []const u8) QtC.PackageKit__Transaction {
        const keyID_str = qtc.libqt_string{
            .len = keyID.len,
            .data = keyID.ptr,
        };
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_InstallSignature(@intCast(typeVal), keyID_str, packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` force: bool `
    ///
    pub fn RefreshCache(force: bool) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_RefreshCache(force);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RemovePackages(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.RemovePackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackages(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn RemovePackage(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackage(packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    pub fn RepairSystem() QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_RepairSystem();
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    pub fn RepoEnable(repoId: []const u8) QtC.PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return qtc.PackageKit__Daemon_RepoEnable(repoId_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` autoremove: bool `
    ///
    pub fn RepoRemove(repoId: []const u8, autoremove: bool) QtC.PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return qtc.PackageKit__Daemon_RepoRemove(repoId_str, autoremove);
    }

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
    pub fn RepoSetData(repoId: []const u8, parameter: []const u8, value: []const u8) QtC.PackageKit__Transaction {
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
        return qtc.PackageKit__Daemon_RepoSetData(repoId_str, parameter_str, value_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageNames: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Resolve(packageNames: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageNames_arr = allocator.alloc(qtc.libqt_string, packageNames.len) catch @panic("packagekit::daemon.Resolve: Memory allocation failed");
        defer allocator.free(packageNames_arr);
        for (packageNames, 0..packageNames.len) |item, i| {
            packageNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageNames_list = qtc.libqt_list{
            .len = packageNames.len,
            .data = packageNames_arr.ptr,
        };
        return qtc.PackageKit__Daemon_Resolve(packageNames_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageName: []const u8 `
    ///
    pub fn Resolve2(packageName: []const u8) QtC.PackageKit__Transaction {
        const packageName_str = qtc.libqt_string{
            .len = packageName.len,
            .data = packageName.ptr,
        };
        return qtc.PackageKit__Daemon_Resolve2(packageName_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchFiles(search: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.SearchFiles: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchFiles(search_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn SearchFiles2(search: []const u8) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_SearchFiles2(search_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchDetails(search: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.SearchDetails: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchDetails(search_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn SearchDetails2(search: []const u8) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_SearchDetails2(search_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` groups: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchGroups(groups: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var groups_arr = allocator.alloc(qtc.libqt_string, groups.len) catch @panic("packagekit::daemon.SearchGroups: Memory allocation failed");
        defer allocator.free(groups_arr);
        for (groups, 0..groups.len) |item, i| {
            groups_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const groups_list = qtc.libqt_list{
            .len = groups.len,
            .data = groups_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchGroups(groups_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: []const u8 `
    ///
    pub fn SearchGroup(group: []const u8) QtC.PackageKit__Transaction {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.PackageKit__Daemon_SearchGroup(group_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: transaction_enums.Group `
    ///
    pub fn SearchGroup2(group: i32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_SearchGroup2(@intCast(group));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: QtC.PackageKit__Bitfield `
    ///
    pub fn SearchGroups2(group: QtC.PackageKit__Bitfield) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_SearchGroups2(@ptrCast(group));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchNames(search: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.SearchNames: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchNames(search_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn SearchNames2(search: []const u8) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_SearchNames2(search_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UpdatePackages(packageIDs: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.UpdatePackages: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_UpdatePackages(packageIDs_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn UpdatePackage(packageID: []const u8) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_UpdatePackage(packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatProvides(search: [][]const u8, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.WhatProvides: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_WhatProvides(search_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    pub fn WhatProvides2(search: []const u8) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_WhatProvides2(search_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn IsRunningChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_IsRunningChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnIsRunningChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_IsRunningChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn NetworkStateChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_NetworkStateChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnNetworkStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_NetworkStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn Changed(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_Changed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_Changed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn RepoListChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_RepoListChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnRepoListChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_RepoListChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn RestartScheduled(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_RestartScheduled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnRestartScheduled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_RestartScheduled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` tids: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TransactionListChanged(self: ?*anyopaque, tids: [][]const u8, allocator: std.mem.Allocator) void {
        var tids_arr = allocator.alloc(qtc.libqt_string, tids.len) catch @panic("packagekit::daemon.TransactionListChanged: Memory allocation failed");
        defer allocator.free(tids_arr);
        for (tids, 0..tids.len) |item, i| {
            tids_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const tids_list = qtc.libqt_list{
            .len = tids.len,
            .data = tids_arr.ptr,
        };
        qtc.PackageKit__Daemon_TransactionListChanged(@ptrCast(self), tids_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemontids: [*][*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTransactionListChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_TransactionListChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn UpdatesChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_UpdatesChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnUpdatesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_UpdatesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn DaemonQuit(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_DaemonQuit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnDaemonQuit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Daemon_Connect_DaemonQuit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` storeInCache: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadPackages2(packageIDs: [][]const u8, storeInCache: bool, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.DownloadPackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_DownloadPackages2(packageIDs_list, storeInCache);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` storeInCache: bool `
    ///
    pub fn DownloadPackage2(packageID: []const u8, storeInCache: bool) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_DownloadPackage2(packageID_str, storeInCache);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DependsOn22(packageIDs: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.DependsOn22: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_DependsOn22(packageIDs_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DependsOn3(packageIDs: [][]const u8, filters: i32, recursive: bool, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.DependsOn3: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_DependsOn3(packageIDs_list, @intCast(filters), recursive);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn DependsOn23(packageID: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_DependsOn23(packageID_str, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    pub fn DependsOn32(packageID: []const u8, filters: i32, recursive: bool) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_DependsOn32(packageID_str, @intCast(filters), recursive);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn GetPackages1(filters: i32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetPackages1(@intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn GetRepoList1(filters: i32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetRepoList1(@intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RequiredBy22(packageIDs: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.RequiredBy22: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_RequiredBy22(packageIDs_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RequiredBy3(packageIDs: [][]const u8, filters: i32, recursive: bool, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.RequiredBy3: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_RequiredBy3(packageIDs_list, @intCast(filters), recursive);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn RequiredBy23(packageID: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_RequiredBy23(packageID_str, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` recursive: bool `
    ///
    pub fn RequiredBy32(packageID: []const u8, filters: i32, recursive: bool) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_RequiredBy32(packageID_str, @intCast(filters), recursive);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn GetUpdates1(filters: i32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_GetUpdates1(@intCast(filters));
    }

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
    pub fn UpgradeSystem3(distroId: []const u8, kind: i32, flags: i32) QtC.PackageKit__Transaction {
        const distroId_str = qtc.libqt_string{
            .len = distroId.len,
            .data = distroId.ptr,
        };
        return qtc.PackageKit__Daemon_UpgradeSystem3(distroId_str, @intCast(kind), @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` files: [][]const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstallFiles2(files: [][]const u8, flags: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("packagekit::daemon.InstallFiles2: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        return qtc.PackageKit__Daemon_InstallFiles2(files_list, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn InstallFile2(file: []const u8, flags: i32) QtC.PackageKit__Transaction {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        return qtc.PackageKit__Daemon_InstallFile2(file_str, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstallPackages2(packageIDs: [][]const u8, flags: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.InstallPackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_InstallPackages2(packageIDs_list, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn InstallPackage2(packageID: []const u8, flags: i32) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_InstallPackage2(packageID_str, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RemovePackages2(packageIDs: [][]const u8, allowDeps: bool, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.RemovePackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackages2(packageIDs_list, allowDeps);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    /// ` autoRemove: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RemovePackages3(packageIDs: [][]const u8, allowDeps: bool, autoRemove: bool, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.RemovePackages3: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackages3(packageIDs_list, allowDeps, autoRemove);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    /// ` autoRemove: bool `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RemovePackages4(packageIDs: [][]const u8, allowDeps: bool, autoRemove: bool, flags: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.RemovePackages4: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackages4(packageIDs_list, allowDeps, autoRemove, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` allowDeps: bool `
    ///
    pub fn RemovePackage2(packageID: []const u8, allowDeps: bool) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackage2(packageID_str, allowDeps);
    }

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
    pub fn RemovePackage3(packageID: []const u8, allowDeps: bool, autoRemove: bool) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackage3(packageID_str, allowDeps, autoRemove);
    }

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
    pub fn RemovePackage4(packageID: []const u8, allowDeps: bool, autoRemove: bool, flags: i32) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_RemovePackage4(packageID_str, allowDeps, autoRemove, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn RepairSystem1(flags: i32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_RepairSystem1(@intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` enable: bool `
    ///
    pub fn RepoEnable2(repoId: []const u8, enable: bool) QtC.PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return qtc.PackageKit__Daemon_RepoEnable2(repoId_str, enable);
    }

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
    pub fn RepoRemove3(repoId: []const u8, autoremove: bool, flags: i32) QtC.PackageKit__Transaction {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        return qtc.PackageKit__Daemon_RepoRemove3(repoId_str, autoremove, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageNames: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Resolve22(packageNames: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageNames_arr = allocator.alloc(qtc.libqt_string, packageNames.len) catch @panic("packagekit::daemon.Resolve22: Memory allocation failed");
        defer allocator.free(packageNames_arr);
        for (packageNames, 0..packageNames.len) |item, i| {
            packageNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageNames_list = qtc.libqt_list{
            .len = packageNames.len,
            .data = packageNames_arr.ptr,
        };
        return qtc.PackageKit__Daemon_Resolve22(packageNames_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageName: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn Resolve23(packageName: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const packageName_str = qtc.libqt_string{
            .len = packageName.len,
            .data = packageName.ptr,
        };
        return qtc.PackageKit__Daemon_Resolve23(packageName_str, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchFiles22(search: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.SearchFiles22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchFiles22(search_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn SearchFiles23(search: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_SearchFiles23(search_str, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchDetails22(search: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.SearchDetails22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchDetails22(search_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn SearchDetails23(search: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_SearchDetails23(search_str, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` groups: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchGroups22(groups: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var groups_arr = allocator.alloc(qtc.libqt_string, groups.len) catch @panic("packagekit::daemon.SearchGroups22: Memory allocation failed");
        defer allocator.free(groups_arr);
        for (groups, 0..groups.len) |item, i| {
            groups_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const groups_list = qtc.libqt_list{
            .len = groups.len,
            .data = groups_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchGroups22(groups_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn SearchGroup22(group: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.PackageKit__Daemon_SearchGroup22(group_str, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: transaction_enums.Group `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn SearchGroup23(group: i32, filters: i32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_SearchGroup23(@intCast(group), @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: QtC.PackageKit__Bitfield `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn SearchGroups23(group: QtC.PackageKit__Bitfield, filters: i32) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Daemon_SearchGroups23(@ptrCast(group), @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchNames22(search: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.SearchNames22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_SearchNames22(search_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn SearchNames23(search: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_SearchNames23(search_str, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageIDs: [][]const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UpdatePackages2(packageIDs: [][]const u8, flags: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var packageIDs_arr = allocator.alloc(qtc.libqt_string, packageIDs.len) catch @panic("packagekit::daemon.UpdatePackages2: Memory allocation failed");
        defer allocator.free(packageIDs_arr);
        for (packageIDs, 0..packageIDs.len) |item, i| {
            packageIDs_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const packageIDs_list = qtc.libqt_list{
            .len = packageIDs.len,
            .data = packageIDs_arr.ptr,
        };
        return qtc.PackageKit__Daemon_UpdatePackages2(packageIDs_list, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` flags: flag of transaction_enums.TransactionFlag `
    ///
    pub fn UpdatePackage2(packageID: []const u8, flags: i32) QtC.PackageKit__Transaction {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        return qtc.PackageKit__Daemon_UpdatePackage2(packageID_str, @intCast(flags));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: [][]const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatProvides22(search: [][]const u8, filters: i32, allocator: std.mem.Allocator) QtC.PackageKit__Transaction {
        var search_arr = allocator.alloc(qtc.libqt_string, search.len) catch @panic("packagekit::daemon.WhatProvides22: Memory allocation failed");
        defer allocator.free(search_arr);
        for (search, 0..search.len) |item, i| {
            search_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const search_list = qtc.libqt_list{
            .len = search.len,
            .data = search_arr.ptr,
        };
        return qtc.PackageKit__Daemon_WhatProvides22(search_list, @intCast(filters));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` search: []const u8 `
    ///
    /// ` filters: flag of transaction_enums.Filter `
    ///
    pub fn WhatProvides23(search: []const u8, filters: i32) QtC.PackageKit__Transaction {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        return qtc.PackageKit__Daemon_WhatProvides23(search_str, @intCast(filters));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit::daemon.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("packagekit::daemon.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("packagekit::daemon.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("packagekit::daemon.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemon) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` classname: []const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Daemonparam1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__DaemonobjectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.PackageKit__Daemon `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.PackageKit__Daemon_Delete(@ptrCast(self));
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
