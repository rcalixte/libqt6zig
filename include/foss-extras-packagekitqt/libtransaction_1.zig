const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const transaction_enums = enums;

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const packagekit__transaction = struct {
    /// New constructs a new PackageKit::Transaction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` tid: QtC.QDBusObjectPath `
    ///
    pub fn New(tid: ?*anyopaque) QtC.PackageKit__Transaction {
        return qtc.PackageKit__Transaction_new(@ptrCast(tid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.PackageKit__Transaction_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.PackageKit__Transaction_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.PackageKit__Transaction_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.PackageKit__Transaction_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.PackageKit__Transaction_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.PackageKit__Transaction_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Tid(self: ?*anyopaque) QtC.QDBusObjectPath {
        return qtc.PackageKit__Transaction_Tid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn AllowCancel(self: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_AllowCancel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn IsCallerActive(self: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_IsCallerActive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LastPackage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_LastPackage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.LastPackage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Percentage(self: ?*anyopaque) u32 {
        return qtc.PackageKit__Transaction_Percentage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn ElapsedTime(self: ?*anyopaque) u32 {
        return qtc.PackageKit__Transaction_ElapsedTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn RemainingTime(self: ?*anyopaque) u32 {
        return qtc.PackageKit__Transaction_RemainingTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Speed(self: ?*anyopaque) u32 {
        return qtc.PackageKit__Transaction_Speed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn DownloadSizeRemaining(self: ?*anyopaque) u64 {
        return qtc.PackageKit__Transaction_DownloadSizeRemaining(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.Role `
    ///
    pub fn Role(self: ?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_Role(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.Status `
    ///
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_Status(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ## Returns:
    ///
    /// ` flag of transaction_enums.TransactionFlag `
    ///
    pub fn TransactionFlags(self: ?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_TransactionFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Timespec(self: ?*anyopaque) QtC.QDateTime {
        return qtc.PackageKit__Transaction_Timespec(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Succeeded(self: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_Succeeded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Duration(self: ?*anyopaque) u32 {
        return qtc.PackageKit__Transaction_Duration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Uid(self: ?*anyopaque) u32 {
        return qtc.PackageKit__Transaction_Uid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SenderName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_SenderName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.SenderName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Cmdline(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_Cmdline(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.Cmdline: Memory allocation failed");
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
    pub fn PackageName(packageID: []const u8, allocator: std.mem.Allocator) []const u8 {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        var _str = qtc.PackageKit__Transaction_PackageName(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.PackageName: Memory allocation failed");
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
        var _str = qtc.PackageKit__Transaction_PackageVersion(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.PackageVersion: Memory allocation failed");
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
        var _str = qtc.PackageKit__Transaction_PackageArch(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.PackageArch: Memory allocation failed");
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
        var _str = qtc.PackageKit__Transaction_PackageData(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.PackageData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn AllowCancelChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_AllowCancelChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnAllowCancelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_AllowCancelChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn IsCallerActiveChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_IsCallerActiveChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnIsCallerActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_IsCallerActiveChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn DownloadSizeRemainingChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_DownloadSizeRemainingChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnDownloadSizeRemainingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_DownloadSizeRemainingChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn ElapsedTimeChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_ElapsedTimeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnElapsedTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_ElapsedTimeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn LastPackageChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_LastPackageChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnLastPackageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_LastPackageChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn PercentageChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_PercentageChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnPercentageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_PercentageChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn RemainingTimeChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_RemainingTimeChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnRemainingTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RemainingTimeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn RoleChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_RoleChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnRoleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RoleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn SpeedChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_SpeedChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnSpeedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_SpeedChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn StatusChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_StatusChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnStatusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_StatusChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn TransactionFlagsChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_TransactionFlagsChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnTransactionFlagsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_TransactionFlagsChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn UidChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_UidChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnUidChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_UidChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn SenderNameChanged(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_SenderNameChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnSenderNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_SenderNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` parentId: []const u8 `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` summary: []const u8 `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn Category(self: ?*anyopaque, parentId: []const u8, categoryId: []const u8, name: []const u8, summary: []const u8, icon: []const u8) void {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.PackageKit__Transaction_Category(@ptrCast(self), parentId_str, categoryId_str, name_str, summary_str, icon_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, parentId: [*:0]const u8, categoryId: [*:0]const u8, name: [*:0]const u8, summary: [*:0]const u8, icon: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategory(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Category(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` typeVal: transaction_enums.DistroUpgrade `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn DistroUpgrade(self: ?*anyopaque, typeVal: i32, name: []const u8, description: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.PackageKit__Transaction_DistroUpgrade(@ptrCast(self), @bitCast(typeVal), name_str, description_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, typeVal: transaction_enums.DistroUpgrade, name: [*:0]const u8, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDistroUpgrade(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_DistroUpgrade(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` errorVal: transaction_enums.Error `
    ///
    /// ` details: []const u8 `
    ///
    pub fn ErrorCode(self: ?*anyopaque, errorVal: i32, details: []const u8) void {
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        qtc.PackageKit__Transaction_ErrorCode(@ptrCast(self), @bitCast(errorVal), details_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, errorVal: transaction_enums.Error, details: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorCode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_ErrorCode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` eulaID: []const u8 `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` vendor: []const u8 `
    ///
    /// ` licenseAgreement: []const u8 `
    ///
    pub fn EulaRequired(self: ?*anyopaque, eulaID: []const u8, packageID: []const u8, vendor: []const u8, licenseAgreement: []const u8) void {
        const eulaID_str = qtc.libqt_string{
            .len = eulaID.len,
            .data = eulaID.ptr,
        };
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const vendor_str = qtc.libqt_string{
            .len = vendor.len,
            .data = vendor.ptr,
        };
        const licenseAgreement_str = qtc.libqt_string{
            .len = licenseAgreement.len,
            .data = licenseAgreement.ptr,
        };
        qtc.PackageKit__Transaction_EulaRequired(@ptrCast(self), eulaID_str, packageID_str, vendor_str, licenseAgreement_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, eulaID: [*:0]const u8, packageID: [*:0]const u8, vendor: [*:0]const u8, licenseAgreement: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnEulaRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_EulaRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` typeVal: transaction_enums.MediaType `
    ///
    /// ` id: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn MediaChangeRequired(self: ?*anyopaque, typeVal: i32, id: []const u8, text: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.PackageKit__Transaction_MediaChangeRequired(@ptrCast(self), @bitCast(typeVal), id_str, text_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, typeVal: transaction_enums.MediaType, id: [*:0]const u8, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnMediaChangeRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_MediaChangeRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` itemID: []const u8 `
    ///
    /// ` status: transaction_enums.Status `
    ///
    /// ` percentage: u32 `
    ///
    pub fn ItemProgress(self: ?*anyopaque, itemID: []const u8, status: i32, percentage: u32) void {
        const itemID_str = qtc.libqt_string{
            .len = itemID.len,
            .data = itemID.ptr,
        };
        qtc.PackageKit__Transaction_ItemProgress(@ptrCast(self), itemID_str, @bitCast(status), @bitCast(percentage));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, itemID: [*:0]const u8, status: transaction_enums.Status, percentage: u32) callconv(.c) void `
    ///
    pub fn OnItemProgress(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32, u32) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_ItemProgress(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` filenames: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Files(self: ?*anyopaque, packageID: []const u8, filenames: []const []const u8, allocator: std.mem.Allocator) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const filenames_arr = allocator.alloc(qtc.libqt_string, filenames.len) catch @panic("packagekit__transaction.Files: Memory allocation failed");
        defer allocator.free(filenames_arr);
        for (filenames, 0..filenames.len) |item, i| {
            filenames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filenames_list = qtc.libqt_list{
            .len = filenames.len,
            .data = filenames_arr.ptr,
        };
        qtc.PackageKit__Transaction_Files(@ptrCast(self), packageID_str, filenames_list);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, packageID: [*:0]const u8, filenames: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFiles(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Files(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` status: transaction_enums.Exit `
    ///
    /// ` runtime: u32 `
    ///
    pub fn Finished(self: ?*anyopaque, status: i32, runtime: u32) void {
        qtc.PackageKit__Transaction_Finished(@ptrCast(self), @bitCast(status), @bitCast(runtime));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, status: transaction_enums.Exit, runtime: u32) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, u32) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Finished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` info: transaction_enums.Info `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` summary: []const u8 `
    ///
    pub fn Package(self: ?*anyopaque, info: i32, packageID: []const u8, summary: []const u8) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.PackageKit__Transaction_Package(@ptrCast(self), @bitCast(info), packageID_str, summary_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, info: transaction_enums.Info, packageID: [*:0]const u8, summary: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPackage(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Package(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` values: QtC.PackageKit__Details `
    ///
    pub fn Details(self: ?*anyopaque, values: ?*anyopaque) void {
        qtc.PackageKit__Transaction_Details(@ptrCast(self), @ptrCast(values));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, values: QtC.PackageKit__Details) callconv(.c) void `
    ///
    pub fn OnDetails(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Details(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` updates: []const []const u8 `
    ///
    /// ` obsoletes: []const []const u8 `
    ///
    /// ` vendorUrls: []const []const u8 `
    ///
    /// ` bugzillaUrls: []const []const u8 `
    ///
    /// ` cveUrls: []const []const u8 `
    ///
    /// ` restart: transaction_enums.Restart `
    ///
    /// ` updateText: []const u8 `
    ///
    /// ` changelog: []const u8 `
    ///
    /// ` state: transaction_enums.UpdateState `
    ///
    /// ` issued: QtC.QDateTime `
    ///
    /// ` updated: QtC.QDateTime `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UpdateDetail(self: ?*anyopaque, packageID: []const u8, updates: []const []const u8, obsoletes: []const []const u8, vendorUrls: []const []const u8, bugzillaUrls: []const []const u8, cveUrls: []const []const u8, restart: i32, updateText: []const u8, changelog: []const u8, state: i32, issued: ?*anyopaque, updated: ?*anyopaque, allocator: std.mem.Allocator) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const updates_arr = allocator.alloc(qtc.libqt_string, updates.len) catch @panic("packagekit__transaction.UpdateDetail: Memory allocation failed");
        defer allocator.free(updates_arr);
        for (updates, 0..updates.len) |item, i| {
            updates_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const updates_list = qtc.libqt_list{
            .len = updates.len,
            .data = updates_arr.ptr,
        };
        const obsoletes_arr = allocator.alloc(qtc.libqt_string, obsoletes.len) catch @panic("packagekit__transaction.UpdateDetail: Memory allocation failed");
        defer allocator.free(obsoletes_arr);
        for (obsoletes, 0..obsoletes.len) |item, i| {
            obsoletes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const obsoletes_list = qtc.libqt_list{
            .len = obsoletes.len,
            .data = obsoletes_arr.ptr,
        };
        const vendorUrls_arr = allocator.alloc(qtc.libqt_string, vendorUrls.len) catch @panic("packagekit__transaction.UpdateDetail: Memory allocation failed");
        defer allocator.free(vendorUrls_arr);
        for (vendorUrls, 0..vendorUrls.len) |item, i| {
            vendorUrls_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const vendorUrls_list = qtc.libqt_list{
            .len = vendorUrls.len,
            .data = vendorUrls_arr.ptr,
        };
        const bugzillaUrls_arr = allocator.alloc(qtc.libqt_string, bugzillaUrls.len) catch @panic("packagekit__transaction.UpdateDetail: Memory allocation failed");
        defer allocator.free(bugzillaUrls_arr);
        for (bugzillaUrls, 0..bugzillaUrls.len) |item, i| {
            bugzillaUrls_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const bugzillaUrls_list = qtc.libqt_list{
            .len = bugzillaUrls.len,
            .data = bugzillaUrls_arr.ptr,
        };
        const cveUrls_arr = allocator.alloc(qtc.libqt_string, cveUrls.len) catch @panic("packagekit__transaction.UpdateDetail: Memory allocation failed");
        defer allocator.free(cveUrls_arr);
        for (cveUrls, 0..cveUrls.len) |item, i| {
            cveUrls_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const cveUrls_list = qtc.libqt_list{
            .len = cveUrls.len,
            .data = cveUrls_arr.ptr,
        };
        const updateText_str = qtc.libqt_string{
            .len = updateText.len,
            .data = updateText.ptr,
        };
        const changelog_str = qtc.libqt_string{
            .len = changelog.len,
            .data = changelog.ptr,
        };
        qtc.PackageKit__Transaction_UpdateDetail(@ptrCast(self), packageID_str, updates_list, obsoletes_list, vendorUrls_list, bugzillaUrls_list, cveUrls_list, @bitCast(restart), updateText_str, changelog_str, @bitCast(state), @ptrCast(issued), @ptrCast(updated));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, packageID: [*:0]const u8, updates: ?[*:null]?[*:0]const u8, obsoletes: ?[*:null]?[*:0]const u8, vendorUrls: ?[*:null]?[*:0]const u8, bugzillaUrls: ?[*:null]?[*:0]const u8, cveUrls: ?[*:null]?[*:0]const u8, restart: transaction_enums.Restart, updateText: [*:0]const u8, changelog: [*:0]const u8, state: transaction_enums.UpdateState, issued: QtC.QDateTime, updated: QtC.QDateTime) callconv(.c) void `
    ///
    pub fn OnUpdateDetail(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, i32, [*:0]const u8, [*:0]const u8, i32, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_UpdateDetail(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` enabled: bool `
    ///
    pub fn RepoDetail(self: ?*anyopaque, repoId: []const u8, description: []const u8, enabled: bool) void {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.PackageKit__Transaction_RepoDetail(@ptrCast(self), repoId_str, description_str, enabled);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, repoId: [*:0]const u8, description: [*:0]const u8, enabled: bool) callconv(.c) void `
    ///
    pub fn OnRepoDetail(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RepoDetail(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` repoName: []const u8 `
    ///
    /// ` keyUrl: []const u8 `
    ///
    /// ` keyUserid: []const u8 `
    ///
    /// ` keyId: []const u8 `
    ///
    /// ` keyFingerprint: []const u8 `
    ///
    /// ` keyTimestamp: []const u8 `
    ///
    /// ` typeVal: transaction_enums.SigType `
    ///
    pub fn RepoSignatureRequired(self: ?*anyopaque, packageID: []const u8, repoName: []const u8, keyUrl: []const u8, keyUserid: []const u8, keyId: []const u8, keyFingerprint: []const u8, keyTimestamp: []const u8, typeVal: i32) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const repoName_str = qtc.libqt_string{
            .len = repoName.len,
            .data = repoName.ptr,
        };
        const keyUrl_str = qtc.libqt_string{
            .len = keyUrl.len,
            .data = keyUrl.ptr,
        };
        const keyUserid_str = qtc.libqt_string{
            .len = keyUserid.len,
            .data = keyUserid.ptr,
        };
        const keyId_str = qtc.libqt_string{
            .len = keyId.len,
            .data = keyId.ptr,
        };
        const keyFingerprint_str = qtc.libqt_string{
            .len = keyFingerprint.len,
            .data = keyFingerprint.ptr,
        };
        const keyTimestamp_str = qtc.libqt_string{
            .len = keyTimestamp.len,
            .data = keyTimestamp.ptr,
        };
        qtc.PackageKit__Transaction_RepoSignatureRequired(@ptrCast(self), packageID_str, repoName_str, keyUrl_str, keyUserid_str, keyId_str, keyFingerprint_str, keyTimestamp_str, @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, packageID: [*:0]const u8, repoName: [*:0]const u8, keyUrl: [*:0]const u8, keyUserid: [*:0]const u8, keyId: [*:0]const u8, keyFingerprint: [*:0]const u8, keyTimestamp: [*:0]const u8, typeVal: transaction_enums.SigType) callconv(.c) void `
    ///
    pub fn OnRepoSignatureRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RepoSignatureRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` typeVal: transaction_enums.Restart `
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn RequireRestart(self: ?*anyopaque, typeVal: i32, packageID: []const u8) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        qtc.PackageKit__Transaction_RequireRestart(@ptrCast(self), @bitCast(typeVal), packageID_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, typeVal: transaction_enums.Restart, packageID: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRequireRestart(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RequireRestart(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` transaction: QtC.PackageKit__Transaction `
    ///
    pub fn Transaction(self: ?*anyopaque, transaction: ?*anyopaque) void {
        qtc.PackageKit__Transaction_Transaction(@ptrCast(self), @ptrCast(transaction));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, transaction: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnTransaction(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Transaction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` errorName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.InternalError `
    ///
    pub fn ParseError(self: ?*anyopaque, errorName: []const u8) i32 {
        const errorName_str = qtc.libqt_string{
            .len = errorName.len,
            .data = errorName.ptr,
        };
        return qtc.PackageKit__Transaction_ParseError(@ptrCast(self), errorName_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, errorName: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnParseError(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnParseError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParseError` instead
    ///
    pub const QBaseParseError = SuperParseError;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` errorName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.InternalError `
    ///
    pub fn SuperParseError(self: ?*anyopaque, errorName: []const u8) i32 {
        const errorName_str = qtc.libqt_string{
            .len = errorName.len,
            .data = errorName.ptr,
        };
        return qtc.PackageKit__Transaction_SuperParseError(@ptrCast(self), errorName_str);
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.PackageKit__Transaction_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.PackageKit__Transaction_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.PackageKit__Transaction_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.PackageKit__Transaction_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("packagekit__transaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("packagekit__transaction.Children: Memory allocation failed");
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("packagekit__transaction.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("packagekit__transaction.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
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
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
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
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.PackageKit__Transaction_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.PackageKit__Transaction_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.PackageKit__Transaction_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.PackageKit__Transaction_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.PackageKit__Transaction_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.PackageKit__Transaction_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.PackageKit__Transaction_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.PackageKit__Transaction_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.PackageKit__Transaction_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.PackageKit__Transaction_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.PackageKit__Transaction_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.PackageKit__Transaction_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.PackageKit__Transaction_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.PackageKit__Transaction_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.PackageKit__Transaction_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: QtC.PackageKit__Transaction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.PackageKit__Transaction `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.PackageKit__Transaction_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const enums = struct {
    pub const InternalError = enum(i32) {
        pub const InternalErrorNone: i32 = 0;
        pub const InternalErrorUnkown: i32 = 1;
        pub const InternalErrorFailed: i32 = 2;
        pub const InternalErrorFailedAuth: i32 = 3;
        pub const InternalErrorNoTid: i32 = 4;
        pub const InternalErrorAlreadyTid: i32 = 5;
        pub const InternalErrorRoleUnkown: i32 = 6;
        pub const InternalErrorCannotStartDaemon: i32 = 7;
        pub const InternalErrorInvalidInput: i32 = 8;
        pub const InternalErrorInvalidFile: i32 = 9;
        pub const InternalErrorFunctionNotSupported: i32 = 10;
        pub const InternalErrorDaemonUnreachable: i32 = 11;
    };

    pub const Role = enum(i32) {
        pub const RoleUnknown: i32 = 0;
        pub const RoleCancel: i32 = 1;
        pub const RoleDependsOn: i32 = 2;
        pub const RoleGetDetails: i32 = 3;
        pub const RoleGetFiles: i32 = 4;
        pub const RoleGetPackages: i32 = 5;
        pub const RoleGetRepoList: i32 = 6;
        pub const RoleRequiredBy: i32 = 7;
        pub const RoleGetUpdateDetail: i32 = 8;
        pub const RoleGetUpdates: i32 = 9;
        pub const RoleInstallFiles: i32 = 10;
        pub const RoleInstallPackages: i32 = 11;
        pub const RoleInstallSignature: i32 = 12;
        pub const RoleRefreshCache: i32 = 13;
        pub const RoleRemovePackages: i32 = 14;
        pub const RoleRepoEnable: i32 = 15;
        pub const RoleRepoSetData: i32 = 16;
        pub const RoleResolve: i32 = 17;
        pub const RoleSearchDetails: i32 = 18;
        pub const RoleSearchFile: i32 = 19;
        pub const RoleSearchGroup: i32 = 20;
        pub const RoleSearchName: i32 = 21;
        pub const RoleUpdatePackages: i32 = 22;
        pub const RoleWhatProvides: i32 = 23;
        pub const RoleAcceptEula: i32 = 24;
        pub const RoleDownloadPackages: i32 = 25;
        pub const RoleGetDistroUpgrades: i32 = 26;
        pub const RoleGetCategories: i32 = 27;
        pub const RoleGetOldTransactions: i32 = 28;
        pub const RoleRepairSystem: i32 = 29;
        pub const RoleGetDetailsLocal: i32 = 30;
        pub const RoleGetFilesLocal: i32 = 31;
        pub const RoleRepoRemove: i32 = 32;
        pub const RoleUpgradeSystem: i32 = 33;
    };

    pub const Error = enum(i32) {
        pub const ErrorUnknown: i32 = 0;
        pub const ErrorOom: i32 = 1;
        pub const ErrorNoNetwork: i32 = 2;
        pub const ErrorNotSupported: i32 = 3;
        pub const ErrorInternalError: i32 = 4;
        pub const ErrorGpgFailure: i32 = 5;
        pub const ErrorPackageIdInvalid: i32 = 6;
        pub const ErrorPackageNotInstalled: i32 = 7;
        pub const ErrorPackageNotFound: i32 = 8;
        pub const ErrorPackageAlreadyInstalled: i32 = 9;
        pub const ErrorPackageDownloadFailed: i32 = 10;
        pub const ErrorGroupNotFound: i32 = 11;
        pub const ErrorGroupListInvalid: i32 = 12;
        pub const ErrorDepResolutionFailed: i32 = 13;
        pub const ErrorFilterInvalid: i32 = 14;
        pub const ErrorCreateThreadFailed: i32 = 15;
        pub const ErrorTransactionError: i32 = 16;
        pub const ErrorTransactionCancelled: i32 = 17;
        pub const ErrorNoCache: i32 = 18;
        pub const ErrorRepoNotFound: i32 = 19;
        pub const ErrorCannotRemoveSystemPackage: i32 = 20;
        pub const ErrorProcessKill: i32 = 21;
        pub const ErrorFailedInitialization: i32 = 22;
        pub const ErrorFailedFinalise: i32 = 23;
        pub const ErrorFailedConfigParsing: i32 = 24;
        pub const ErrorCannotCancel: i32 = 25;
        pub const ErrorCannotGetLock: i32 = 26;
        pub const ErrorNoPackagesToUpdate: i32 = 27;
        pub const ErrorCannotWriteRepoConfig: i32 = 28;
        pub const ErrorLocalInstallFailed: i32 = 29;
        pub const ErrorBadGpgSignature: i32 = 30;
        pub const ErrorMissingGpgSignature: i32 = 31;
        pub const ErrorCannotInstallSourcePackage: i32 = 32;
        pub const ErrorRepoConfigurationError: i32 = 33;
        pub const ErrorNoLicenseAgreement: i32 = 34;
        pub const ErrorFileConflicts: i32 = 35;
        pub const ErrorPackageConflicts: i32 = 36;
        pub const ErrorRepoNotAvailable: i32 = 37;
        pub const ErrorInvalidPackageFile: i32 = 38;
        pub const ErrorPackageInstallBlocked: i32 = 39;
        pub const ErrorPackageCorrupt: i32 = 40;
        pub const ErrorAllPackagesAlreadyInstalled: i32 = 41;
        pub const ErrorFileNotFound: i32 = 42;
        pub const ErrorNoMoreMirrorsToTry: i32 = 43;
        pub const ErrorNoDistroUpgradeData: i32 = 44;
        pub const ErrorIncompatibleArchitecture: i32 = 45;
        pub const ErrorNoSpaceOnDevice: i32 = 46;
        pub const ErrorMediaChangeRequired: i32 = 47;
        pub const ErrorNotAuthorized: i32 = 48;
        pub const ErrorUpdateNotFound: i32 = 49;
        pub const ErrorCannotInstallRepoUnsigned: i32 = 50;
        pub const ErrorCannotUpdateRepoUnsigned: i32 = 51;
        pub const ErrorCannotGetFilelist: i32 = 52;
        pub const ErrorCannotGetRequires: i32 = 53;
        pub const ErrorCannotDisableRepository: i32 = 54;
        pub const ErrorRestrictedDownload: i32 = 55;
        pub const ErrorPackageFailedToConfigure: i32 = 56;
        pub const ErrorPackageFailedToBuild: i32 = 57;
        pub const ErrorPackageFailedToInstall: i32 = 58;
        pub const ErrorPackageFailedToRemove: i32 = 59;
        pub const ErrorUpdateFailedDueToRunningProcess: i32 = 60;
        pub const ErrorPackageDatabaseChanged: i32 = 61;
        pub const ErrorProvideTypeNotSupported: i32 = 62;
        pub const ErrorInstallRootInvalid: i32 = 63;
        pub const ErrorCannotFetchSources: i32 = 64;
        pub const ErrorCancelledPriority: i32 = 65;
        pub const ErrorUnfinishedTransaction: i32 = 66;
        pub const ErrorLockRequired: i32 = 67;
    };

    pub const Exit = enum(i32) {
        pub const ExitUnknown: i32 = 0;
        pub const ExitSuccess: i32 = 1;
        pub const ExitFailed: i32 = 2;
        pub const ExitCancelled: i32 = 3;
        pub const ExitKeyRequired: i32 = 4;
        pub const ExitEulaRequired: i32 = 5;
        pub const ExitKilled: i32 = 6;
        pub const ExitMediaChangeRequired: i32 = 7;
        pub const ExitNeedUntrusted: i32 = 8;
        pub const ExitCancelledPriority: i32 = 9;
        pub const ExitRepairRequired: i32 = 10;
    };

    pub const Filter = enum(i32) {
        pub const FilterUnknown: i32 = 1;
        pub const FilterNone: i32 = 2;
        pub const FilterInstalled: i32 = 4;
        pub const FilterNotInstalled: i32 = 8;
        pub const FilterDevel: i32 = 16;
        pub const FilterNotDevel: i32 = 32;
        pub const FilterGui: i32 = 64;
        pub const FilterNotGui: i32 = 128;
        pub const FilterFree: i32 = 256;
        pub const FilterNotFree: i32 = 512;
        pub const FilterVisible: i32 = 1024;
        pub const FilterNotVisible: i32 = 2048;
        pub const FilterSupported: i32 = 4096;
        pub const FilterNotSupported: i32 = 8192;
        pub const FilterBasename: i32 = 16384;
        pub const FilterNotBasename: i32 = 32768;
        pub const FilterNewest: i32 = 65536;
        pub const FilterNotNewest: i32 = 131072;
        pub const FilterArch: i32 = 262144;
        pub const FilterNotArch: i32 = 524288;
        pub const FilterSource: i32 = 1048576;
        pub const FilterNotSource: i32 = 2097152;
        pub const FilterCollections: i32 = 4194304;
        pub const FilterNotCollections: i32 = 8388608;
        pub const FilterApplication: i32 = 16777216;
        pub const FilterNotApplication: i32 = 33554432;
        pub const FilterDownloaded: i32 = 67108864;
        pub const FilterNotDownloaded: i32 = 134217728;
        pub const FilterLast: i32 = 268435456;
    };

    pub const Status = enum(i32) {
        pub const StatusUnknown: i32 = 0;
        pub const StatusWait: i32 = 1;
        pub const StatusSetup: i32 = 2;
        pub const StatusRunning: i32 = 3;
        pub const StatusQuery: i32 = 4;
        pub const StatusInfo: i32 = 5;
        pub const StatusRemove: i32 = 6;
        pub const StatusRefreshCache: i32 = 7;
        pub const StatusDownload: i32 = 8;
        pub const StatusInstall: i32 = 9;
        pub const StatusUpdate: i32 = 10;
        pub const StatusCleanup: i32 = 11;
        pub const StatusObsolete: i32 = 12;
        pub const StatusDepResolve: i32 = 13;
        pub const StatusSigCheck: i32 = 14;
        pub const StatusTestCommit: i32 = 15;
        pub const StatusCommit: i32 = 16;
        pub const StatusRequest: i32 = 17;
        pub const StatusFinished: i32 = 18;
        pub const StatusCancel: i32 = 19;
        pub const StatusDownloadRepository: i32 = 20;
        pub const StatusDownloadPackagelist: i32 = 21;
        pub const StatusDownloadFilelist: i32 = 22;
        pub const StatusDownloadChangelog: i32 = 23;
        pub const StatusDownloadGroup: i32 = 24;
        pub const StatusDownloadUpdateinfo: i32 = 25;
        pub const StatusRepackaging: i32 = 26;
        pub const StatusLoadingCache: i32 = 27;
        pub const StatusScanApplications: i32 = 28;
        pub const StatusGeneratePackageList: i32 = 29;
        pub const StatusWaitingForLock: i32 = 30;
        pub const StatusWaitingForAuth: i32 = 31;
        pub const StatusScanProcessList: i32 = 32;
        pub const StatusCheckExecutableFiles: i32 = 33;
        pub const StatusCheckLibraries: i32 = 34;
        pub const StatusCopyFiles: i32 = 35;
        pub const StatusRunHook: i32 = 36;
    };

    pub const MediaType = enum(i32) {
        pub const MediaTypeUnknown: i32 = 0;
        pub const MediaTypeCd: i32 = 1;
        pub const MediaTypeDvd: i32 = 2;
        pub const MediaTypeDisc: i32 = 3;
    };

    pub const DistroUpgrade = enum(i32) {
        pub const DistroUpgradeUnknown: i32 = 0;
        pub const DistroUpgradeStable: i32 = 1;
        pub const DistroUpgradeUnstable: i32 = 2;
    };

    pub const UpgradeKind = enum(i32) {
        pub const UpgradeKindUnknown: i32 = 0;
        pub const UpgradeKindMinimal: i32 = 1;
        pub const UpgradeKindDefault: i32 = 2;
        pub const UpgradeKindComplete: i32 = 3;
    };

    pub const TransactionFlag = enum(i32) {
        pub const TransactionFlagNone: i32 = 1;
        pub const TransactionFlagOnlyTrusted: i32 = 2;
        pub const TransactionFlagSimulate: i32 = 4;
        pub const TransactionFlagOnlyDownload: i32 = 8;
        pub const TransactionFlagAllowReinstall: i32 = 16;
        pub const TransactionFlagJustReinstall: i32 = 32;
        pub const TransactionFlagAllowDowngrade: i32 = 64;
    };

    pub const Restart = enum(i32) {
        pub const RestartUnknown: i32 = 0;
        pub const RestartNone: i32 = 1;
        pub const RestartApplication: i32 = 2;
        pub const RestartSession: i32 = 3;
        pub const RestartSystem: i32 = 4;
        pub const RestartSecuritySession: i32 = 5;
        pub const RestartSecuritySystem: i32 = 6;
    };

    pub const UpdateState = enum(i32) {
        pub const UpdateStateUnknown: i32 = 0;
        pub const UpdateStateStable: i32 = 1;
        pub const UpdateStateUnstable: i32 = 2;
        pub const UpdateStateTesting: i32 = 3;
    };

    pub const Group = enum(i32) {
        pub const GroupUnknown: i32 = 0;
        pub const GroupAccessibility: i32 = 1;
        pub const GroupAccessories: i32 = 2;
        pub const GroupAdminTools: i32 = 3;
        pub const GroupCommunication: i32 = 4;
        pub const GroupDesktopGnome: i32 = 5;
        pub const GroupDesktopKde: i32 = 6;
        pub const GroupDesktopOther: i32 = 7;
        pub const GroupDesktopXfce: i32 = 8;
        pub const GroupEducation: i32 = 9;
        pub const GroupFonts: i32 = 10;
        pub const GroupGames: i32 = 11;
        pub const GroupGraphics: i32 = 12;
        pub const GroupInternet: i32 = 13;
        pub const GroupLegacy: i32 = 14;
        pub const GroupLocalization: i32 = 15;
        pub const GroupMaps: i32 = 16;
        pub const GroupMultimedia: i32 = 17;
        pub const GroupNetwork: i32 = 18;
        pub const GroupOffice: i32 = 19;
        pub const GroupOther: i32 = 20;
        pub const GroupPowerManagement: i32 = 21;
        pub const GroupProgramming: i32 = 22;
        pub const GroupPublishing: i32 = 23;
        pub const GroupRepos: i32 = 24;
        pub const GroupSecurity: i32 = 25;
        pub const GroupServers: i32 = 26;
        pub const GroupSystem: i32 = 27;
        pub const GroupVirtualization: i32 = 28;
        pub const GroupScience: i32 = 29;
        pub const GroupDocumentation: i32 = 30;
        pub const GroupElectronics: i32 = 31;
        pub const GroupCollections: i32 = 32;
        pub const GroupVendor: i32 = 33;
        pub const GroupNewest: i32 = 34;
    };

    pub const Info = enum(i32) {
        pub const InfoUnknown: i32 = 0;
        pub const InfoInstalled: i32 = 1;
        pub const InfoAvailable: i32 = 2;
        pub const InfoLow: i32 = 3;
        pub const InfoEnhancement: i32 = 4;
        pub const InfoNormal: i32 = 5;
        pub const InfoBugfix: i32 = 6;
        pub const InfoImportant: i32 = 7;
        pub const InfoSecurity: i32 = 8;
        pub const InfoBlocked: i32 = 9;
        pub const InfoDownloading: i32 = 10;
        pub const InfoUpdating: i32 = 11;
        pub const InfoInstalling: i32 = 12;
        pub const InfoRemoving: i32 = 13;
        pub const InfoCleanup: i32 = 14;
        pub const InfoObsoleting: i32 = 15;
        pub const InfoCollectionInstalled: i32 = 16;
        pub const InfoCollectionAvailable: i32 = 17;
        pub const InfoFinished: i32 = 18;
        pub const InfoReinstalling: i32 = 19;
        pub const InfoDowngrading: i32 = 20;
        pub const InfoPreparing: i32 = 21;
        pub const InfoDecompressing: i32 = 22;
        pub const InfoUntrusted: i32 = 23;
        pub const InfoTrusted: i32 = 24;
        pub const InfoUnavailable: i32 = 25;
        pub const InfoCritical: i32 = 26;
        pub const InfoInstall: i32 = 27;
        pub const InfoRemove: i32 = 28;
        pub const InfoObsolete: i32 = 29;
        pub const InfoDowngrade: i32 = 30;
    };

    pub const SigType = enum(i32) {
        pub const SigTypeUnknown: i32 = 0;
        pub const SigTypeGpg: i32 = 1;
    };
};
