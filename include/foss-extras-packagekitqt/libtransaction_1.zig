const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const PackageKit__Details = @import("libqt6").PackageKit__Details;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDBusObjectPath = @import("libqt6").QDBusObjectPath;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const transaction_enums = enums;

/// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
pub const PackageKit__Transaction = extern struct {
    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.PackageKit__Transaction,

    pub const _is_PackageKit__Transaction = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new PackageKit::Transaction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _tid: QDBusObjectPath `
    ///
    pub fn new(_tid: anytype) PackageKit__Transaction {
        comptime _ = @TypeOf(_tid)._is_QDBusObjectPath;
        return .{ .ptr = qtc.PackageKit__Transaction_new(@ptrCast(_tid.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn metaObject(self: PackageKit__Transaction) QMetaObject {
        return .{ .ptr = qtc.PackageKit__Transaction_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: PackageKit__Transaction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.PackageKit__Transaction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn superMetaObject(self: PackageKit__Transaction) QMetaObject {
        return .{ .ptr = qtc.PackageKit__Transaction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: PackageKit__Transaction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.PackageKit__Transaction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.PackageKit__Transaction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: PackageKit__Transaction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.PackageKit__Transaction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: PackageKit__Transaction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: PackageKit__Transaction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.PackageKit__Transaction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tid` instead
    ///
    pub const Tid = tid;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn tid(self: PackageKit__Transaction) QDBusObjectPath {
        return .{ .ptr = qtc.PackageKit__Transaction_Tid(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `allowCancel` instead
    ///
    pub const AllowCancel = allowCancel;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn allowCancel(self: PackageKit__Transaction) bool {
        return qtc.PackageKit__Transaction_AllowCancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCallerActive` instead
    ///
    pub const IsCallerActive = isCallerActive;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn isCallerActive(self: PackageKit__Transaction) bool {
        return qtc.PackageKit__Transaction_IsCallerActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastPackage` instead
    ///
    pub const LastPackage = lastPackage;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn lastPackage(self: PackageKit__Transaction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_LastPackage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.lastPackage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `percentage` instead
    ///
    pub const Percentage = percentage;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn percentage(self: PackageKit__Transaction) u32 {
        return qtc.PackageKit__Transaction_Percentage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elapsedTime` instead
    ///
    pub const ElapsedTime = elapsedTime;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn elapsedTime(self: PackageKit__Transaction) u32 {
        return qtc.PackageKit__Transaction_ElapsedTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remainingTime` instead
    ///
    pub const RemainingTime = remainingTime;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn remainingTime(self: PackageKit__Transaction) u32 {
        return qtc.PackageKit__Transaction_RemainingTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn speed(self: PackageKit__Transaction) u32 {
        return qtc.PackageKit__Transaction_Speed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `downloadSizeRemaining` instead
    ///
    pub const DownloadSizeRemaining = downloadSizeRemaining;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn downloadSizeRemaining(self: PackageKit__Transaction) usize {
        return qtc.PackageKit__Transaction_DownloadSizeRemaining(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `role` instead
    ///
    pub const Role = role;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.Role `
    ///
    pub fn role(self: PackageKit__Transaction) i32 {
        return qtc.PackageKit__Transaction_Role(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.Status `
    ///
    pub fn status(self: PackageKit__Transaction) i32 {
        return qtc.PackageKit__Transaction_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transactionFlags` instead
    ///
    pub const TransactionFlags = transactionFlags;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ## Returns:
    ///
    /// ` flag of transaction_enums.TransactionFlag `
    ///
    pub fn transactionFlags(self: PackageKit__Transaction) i32 {
        return qtc.PackageKit__Transaction_TransactionFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timespec` instead
    ///
    pub const Timespec = timespec;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn timespec(self: PackageKit__Transaction) QDateTime {
        return .{ .ptr = qtc.PackageKit__Transaction_Timespec(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `succeeded` instead
    ///
    pub const Succeeded = succeeded;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn succeeded(self: PackageKit__Transaction) bool {
        return qtc.PackageKit__Transaction_Succeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn duration(self: PackageKit__Transaction) u32 {
        return qtc.PackageKit__Transaction_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: PackageKit__Transaction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uid` instead
    ///
    pub const Uid = uid;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn uid(self: PackageKit__Transaction) u32 {
        return qtc.PackageKit__Transaction_Uid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `senderName` instead
    ///
    pub const SenderName = senderName;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn senderName(self: PackageKit__Transaction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_SenderName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.senderName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `cmdline` instead
    ///
    pub const Cmdline = cmdline;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cmdline(self: PackageKit__Transaction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.PackageKit__Transaction_Cmdline(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.cmdline: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
        var _str = qtc.PackageKit__Transaction_PackageName(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.packageName: Memory allocation failed");
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
        var _str = qtc.PackageKit__Transaction_PackageVersion(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.packageVersion: Memory allocation failed");
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
        var _str = qtc.PackageKit__Transaction_PackageArch(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.packageArch: Memory allocation failed");
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
        var _str = qtc.PackageKit__Transaction_PackageData(packageID_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.packageData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allowCancelChanged` instead
    ///
    pub const AllowCancelChanged = allowCancelChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn allowCancelChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_AllowCancelChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAllowCancelChanged` instead
    ///
    pub const OnAllowCancelChanged = onAllowCancelChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onAllowCancelChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_AllowCancelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isCallerActiveChanged` instead
    ///
    pub const IsCallerActiveChanged = isCallerActiveChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn isCallerActiveChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_IsCallerActiveChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsCallerActiveChanged` instead
    ///
    pub const OnIsCallerActiveChanged = onIsCallerActiveChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onIsCallerActiveChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_IsCallerActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadSizeRemainingChanged` instead
    ///
    pub const DownloadSizeRemainingChanged = downloadSizeRemainingChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn downloadSizeRemainingChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_DownloadSizeRemainingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadSizeRemainingChanged` instead
    ///
    pub const OnDownloadSizeRemainingChanged = onDownloadSizeRemainingChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onDownloadSizeRemainingChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_DownloadSizeRemainingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `elapsedTimeChanged` instead
    ///
    pub const ElapsedTimeChanged = elapsedTimeChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn elapsedTimeChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_ElapsedTimeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onElapsedTimeChanged` instead
    ///
    pub const OnElapsedTimeChanged = onElapsedTimeChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onElapsedTimeChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_ElapsedTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastPackageChanged` instead
    ///
    pub const LastPackageChanged = lastPackageChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn lastPackageChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_LastPackageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastPackageChanged` instead
    ///
    pub const OnLastPackageChanged = onLastPackageChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onLastPackageChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_LastPackageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `percentageChanged` instead
    ///
    pub const PercentageChanged = percentageChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn percentageChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_PercentageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPercentageChanged` instead
    ///
    pub const OnPercentageChanged = onPercentageChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onPercentageChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_PercentageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `remainingTimeChanged` instead
    ///
    pub const RemainingTimeChanged = remainingTimeChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn remainingTimeChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_RemainingTimeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRemainingTimeChanged` instead
    ///
    pub const OnRemainingTimeChanged = onRemainingTimeChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onRemainingTimeChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RemainingTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `roleChanged` instead
    ///
    pub const RoleChanged = roleChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn roleChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_RoleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRoleChanged` instead
    ///
    pub const OnRoleChanged = onRoleChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onRoleChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `speedChanged` instead
    ///
    pub const SpeedChanged = speedChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn speedChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_SpeedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSpeedChanged` instead
    ///
    pub const OnSpeedChanged = onSpeedChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onSpeedChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_SpeedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `statusChanged` instead
    ///
    pub const StatusChanged = statusChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn statusChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_StatusChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStatusChanged` instead
    ///
    pub const OnStatusChanged = onStatusChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onStatusChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transactionFlagsChanged` instead
    ///
    pub const TransactionFlagsChanged = transactionFlagsChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn transactionFlagsChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_TransactionFlagsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTransactionFlagsChanged` instead
    ///
    pub const OnTransactionFlagsChanged = onTransactionFlagsChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onTransactionFlagsChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_TransactionFlagsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `uidChanged` instead
    ///
    pub const UidChanged = uidChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn uidChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_UidChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUidChanged` instead
    ///
    pub const OnUidChanged = onUidChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onUidChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_UidChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderNameChanged` instead
    ///
    pub const SenderNameChanged = senderNameChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn senderNameChanged(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_SenderNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderNameChanged` instead
    ///
    pub const OnSenderNameChanged = onSenderNameChanged;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onSenderNameChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_SenderNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
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
    pub fn category(self: PackageKit__Transaction, parentId: []const u8, categoryId: []const u8, name: []const u8, summary: []const u8, icon: []const u8) void {
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
        qtc.PackageKit__Transaction_Category(@ptrCast(self.ptr), parentId_str, categoryId_str, name_str, summary_str, icon_str);
    }

    /// ### DEPRECATED: Use `onCategory` instead
    ///
    pub const OnCategory = onCategory;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, parentId: [*:0]const u8, categoryId: [*:0]const u8, name: [*:0]const u8, summary: [*:0]const u8, icon: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCategory(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Category(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `distroUpgrade` instead
    ///
    pub const DistroUpgrade = distroUpgrade;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` typeVal: transaction_enums.DistroUpgrade `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn distroUpgrade(self: PackageKit__Transaction, typeVal: i32, name: []const u8, description: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.PackageKit__Transaction_DistroUpgrade(@ptrCast(self.ptr), @bitCast(typeVal), name_str, description_str);
    }

    /// ### DEPRECATED: Use `onDistroUpgrade` instead
    ///
    pub const OnDistroUpgrade = onDistroUpgrade;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, typeVal: transaction_enums.DistroUpgrade, name: [*:0]const u8, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onDistroUpgrade(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, i32, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_DistroUpgrade(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorCode` instead
    ///
    pub const ErrorCode = errorCode;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` errorVal: transaction_enums.Error `
    ///
    /// ` _details: []const u8 `
    ///
    pub fn errorCode(self: PackageKit__Transaction, errorVal: i32, _details: []const u8) void {
        const details_str = qtc.libqt_string{
            .len = _details.len,
            .data = _details.ptr,
        };
        qtc.PackageKit__Transaction_ErrorCode(@ptrCast(self.ptr), @bitCast(errorVal), details_str);
    }

    /// ### DEPRECATED: Use `onErrorCode` instead
    ///
    pub const OnErrorCode = onErrorCode;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, errorVal: transaction_enums.Error, details: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorCode(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_ErrorCode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eulaRequired` instead
    ///
    pub const EulaRequired = eulaRequired;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` eulaID: []const u8 `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` vendor: []const u8 `
    ///
    /// ` licenseAgreement: []const u8 `
    ///
    pub fn eulaRequired(self: PackageKit__Transaction, eulaID: []const u8, packageID: []const u8, vendor: []const u8, licenseAgreement: []const u8) void {
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
        qtc.PackageKit__Transaction_EulaRequired(@ptrCast(self.ptr), eulaID_str, packageID_str, vendor_str, licenseAgreement_str);
    }

    /// ### DEPRECATED: Use `onEulaRequired` instead
    ///
    pub const OnEulaRequired = onEulaRequired;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, eulaID: [*:0]const u8, packageID: [*:0]const u8, vendor: [*:0]const u8, licenseAgreement: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onEulaRequired(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_EulaRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mediaChangeRequired` instead
    ///
    pub const MediaChangeRequired = mediaChangeRequired;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` typeVal: transaction_enums.MediaType `
    ///
    /// ` id: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn mediaChangeRequired(self: PackageKit__Transaction, typeVal: i32, id: []const u8, text: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.PackageKit__Transaction_MediaChangeRequired(@ptrCast(self.ptr), @bitCast(typeVal), id_str, text_str);
    }

    /// ### DEPRECATED: Use `onMediaChangeRequired` instead
    ///
    pub const OnMediaChangeRequired = onMediaChangeRequired;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, typeVal: transaction_enums.MediaType, id: [*:0]const u8, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMediaChangeRequired(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, i32, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_MediaChangeRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemProgress` instead
    ///
    pub const ItemProgress = itemProgress;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` itemID: []const u8 `
    ///
    /// ` _status: transaction_enums.Status `
    ///
    /// ` _percentage: u32 `
    ///
    pub fn itemProgress(self: PackageKit__Transaction, itemID: []const u8, _status: i32, _percentage: u32) void {
        const itemID_str = qtc.libqt_string{
            .len = itemID.len,
            .data = itemID.ptr,
        };
        qtc.PackageKit__Transaction_ItemProgress(@ptrCast(self.ptr), itemID_str, @bitCast(_status), @bitCast(_percentage));
    }

    /// ### DEPRECATED: Use `onItemProgress` instead
    ///
    pub const OnItemProgress = onItemProgress;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, itemID: [*:0]const u8, status: transaction_enums.Status, percentage: u32) callconv(.c) void `
    ///
    pub fn onItemProgress(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8, i32, u32) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_ItemProgress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `files` instead
    ///
    pub const Files = files;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` filenames: []const []const u8 `
    ///
    pub fn files(self: PackageKit__Transaction, allocator: std.mem.Allocator, packageID: []const u8, filenames: []const []const u8) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const filenames_arr = allocator.alloc(qtc.libqt_string, filenames.len) catch @panic("PackageKit__Transaction.files: Memory allocation failed");
        defer allocator.free(filenames_arr);
        for (filenames, 0..filenames.len) |str_item, i|
            filenames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filenames_list = qtc.libqt_list{
            .len = filenames.len,
            .data = filenames_arr.ptr,
        };
        qtc.PackageKit__Transaction_Files(@ptrCast(self.ptr), packageID_str, filenames_list);
    }

    /// ### DEPRECATED: Use `onFiles` instead
    ///
    pub const OnFiles = onFiles;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, packageID: [*:0]const u8, filenames: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onFiles(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Files(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _status: transaction_enums.Exit `
    ///
    /// ` runtime: u32 `
    ///
    pub fn finished(self: PackageKit__Transaction, _status: i32, runtime: u32) void {
        qtc.PackageKit__Transaction_Finished(@ptrCast(self.ptr), @bitCast(_status), @bitCast(runtime));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, status: transaction_enums.Exit, runtime: u32) callconv(.c) void `
    ///
    pub fn onFinished(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, i32, u32) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `package` instead
    ///
    pub const Package = package;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` info: transaction_enums.Info `
    ///
    /// ` packageID: []const u8 `
    ///
    /// ` summary: []const u8 `
    ///
    pub fn package(self: PackageKit__Transaction, info: i32, packageID: []const u8, summary: []const u8) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.PackageKit__Transaction_Package(@ptrCast(self.ptr), @bitCast(info), packageID_str, summary_str);
    }

    /// ### DEPRECATED: Use `onPackage` instead
    ///
    pub const OnPackage = onPackage;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, info: transaction_enums.Info, packageID: [*:0]const u8, summary: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPackage(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, i32, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Package(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `details` instead
    ///
    pub const Details = details;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` values: PackageKit__Details `
    ///
    pub fn details(self: PackageKit__Transaction, values: anytype) void {
        comptime _ = @TypeOf(values)._is_PackageKit__Details;
        qtc.PackageKit__Transaction_Details(@ptrCast(self.ptr), @ptrCast(values.ptr));
    }

    /// ### DEPRECATED: Use `onDetails` instead
    ///
    pub const OnDetails = onDetails;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, values: PackageKit__Details) callconv(.c) void `
    ///
    pub fn onDetails(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, PackageKit__Details) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Details(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateDetail` instead
    ///
    pub const UpdateDetail = updateDetail;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
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
    /// ` issued: QDateTime `
    ///
    /// ` updated: QDateTime `
    ///
    pub fn updateDetail(self: PackageKit__Transaction, allocator: std.mem.Allocator, packageID: []const u8, updates: []const []const u8, obsoletes: []const []const u8, vendorUrls: []const []const u8, bugzillaUrls: []const []const u8, cveUrls: []const []const u8, restart: i32, updateText: []const u8, changelog: []const u8, state: i32, issued: anytype, updated: anytype) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        const updates_arr = allocator.alloc(qtc.libqt_string, updates.len) catch @panic("PackageKit__Transaction.updateDetail: Memory allocation failed");
        defer allocator.free(updates_arr);
        for (updates, 0..updates.len) |str_item, i|
            updates_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const updates_list = qtc.libqt_list{
            .len = updates.len,
            .data = updates_arr.ptr,
        };
        const obsoletes_arr = allocator.alloc(qtc.libqt_string, obsoletes.len) catch @panic("PackageKit__Transaction.updateDetail: Memory allocation failed");
        defer allocator.free(obsoletes_arr);
        for (obsoletes, 0..obsoletes.len) |str_item, i|
            obsoletes_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const obsoletes_list = qtc.libqt_list{
            .len = obsoletes.len,
            .data = obsoletes_arr.ptr,
        };
        const vendorUrls_arr = allocator.alloc(qtc.libqt_string, vendorUrls.len) catch @panic("PackageKit__Transaction.updateDetail: Memory allocation failed");
        defer allocator.free(vendorUrls_arr);
        for (vendorUrls, 0..vendorUrls.len) |str_item, i|
            vendorUrls_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const vendorUrls_list = qtc.libqt_list{
            .len = vendorUrls.len,
            .data = vendorUrls_arr.ptr,
        };
        const bugzillaUrls_arr = allocator.alloc(qtc.libqt_string, bugzillaUrls.len) catch @panic("PackageKit__Transaction.updateDetail: Memory allocation failed");
        defer allocator.free(bugzillaUrls_arr);
        for (bugzillaUrls, 0..bugzillaUrls.len) |str_item, i|
            bugzillaUrls_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const bugzillaUrls_list = qtc.libqt_list{
            .len = bugzillaUrls.len,
            .data = bugzillaUrls_arr.ptr,
        };
        const cveUrls_arr = allocator.alloc(qtc.libqt_string, cveUrls.len) catch @panic("PackageKit__Transaction.updateDetail: Memory allocation failed");
        defer allocator.free(cveUrls_arr);
        for (cveUrls, 0..cveUrls.len) |str_item, i|
            cveUrls_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
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
        comptime _ = @TypeOf(issued)._is_QDateTime;
        comptime _ = @TypeOf(updated)._is_QDateTime;
        qtc.PackageKit__Transaction_UpdateDetail(@ptrCast(self.ptr), packageID_str, updates_list, obsoletes_list, vendorUrls_list, bugzillaUrls_list, cveUrls_list, @bitCast(restart), updateText_str, changelog_str, @bitCast(state), @ptrCast(issued.ptr), @ptrCast(updated.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateDetail` instead
    ///
    pub const OnUpdateDetail = onUpdateDetail;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, packageID: [*:0]const u8, updates: ?[*:null]?[*:0]const u8, obsoletes: ?[*:null]?[*:0]const u8, vendorUrls: ?[*:null]?[*:0]const u8, bugzillaUrls: ?[*:null]?[*:0]const u8, cveUrls: ?[*:null]?[*:0]const u8, restart: transaction_enums.Restart, updateText: [*:0]const u8, changelog: [*:0]const u8, state: transaction_enums.UpdateState, issued: QDateTime, updated: QDateTime) callconv(.c) void `
    ///
    pub fn onUpdateDetail(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, ?[*:null]?[*:0]const u8, i32, [*:0]const u8, [*:0]const u8, i32, QDateTime, QDateTime) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_UpdateDetail(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `repoDetail` instead
    ///
    pub const RepoDetail = repoDetail;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` repoId: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` enabled: bool `
    ///
    pub fn repoDetail(self: PackageKit__Transaction, repoId: []const u8, description: []const u8, enabled: bool) void {
        const repoId_str = qtc.libqt_string{
            .len = repoId.len,
            .data = repoId.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.PackageKit__Transaction_RepoDetail(@ptrCast(self.ptr), repoId_str, description_str, enabled);
    }

    /// ### DEPRECATED: Use `onRepoDetail` instead
    ///
    pub const OnRepoDetail = onRepoDetail;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, repoId: [*:0]const u8, description: [*:0]const u8, enabled: bool) callconv(.c) void `
    ///
    pub fn onRepoDetail(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RepoDetail(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `repoSignatureRequired` instead
    ///
    pub const RepoSignatureRequired = repoSignatureRequired;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
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
    pub fn repoSignatureRequired(self: PackageKit__Transaction, packageID: []const u8, repoName: []const u8, keyUrl: []const u8, keyUserid: []const u8, keyId: []const u8, keyFingerprint: []const u8, keyTimestamp: []const u8, typeVal: i32) void {
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
        qtc.PackageKit__Transaction_RepoSignatureRequired(@ptrCast(self.ptr), packageID_str, repoName_str, keyUrl_str, keyUserid_str, keyId_str, keyFingerprint_str, keyTimestamp_str, @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onRepoSignatureRequired` instead
    ///
    pub const OnRepoSignatureRequired = onRepoSignatureRequired;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, packageID: [*:0]const u8, repoName: [*:0]const u8, keyUrl: [*:0]const u8, keyUserid: [*:0]const u8, keyId: [*:0]const u8, keyFingerprint: [*:0]const u8, keyTimestamp: [*:0]const u8, typeVal: transaction_enums.SigType) callconv(.c) void `
    ///
    pub fn onRepoSignatureRequired(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RepoSignatureRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `requireRestart` instead
    ///
    pub const RequireRestart = requireRestart;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` typeVal: transaction_enums.Restart `
    ///
    /// ` packageID: []const u8 `
    ///
    pub fn requireRestart(self: PackageKit__Transaction, typeVal: i32, packageID: []const u8) void {
        const packageID_str = qtc.libqt_string{
            .len = packageID.len,
            .data = packageID.ptr,
        };
        qtc.PackageKit__Transaction_RequireRestart(@ptrCast(self.ptr), @bitCast(typeVal), packageID_str);
    }

    /// ### DEPRECATED: Use `onRequireRestart` instead
    ///
    pub const OnRequireRestart = onRequireRestart;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, typeVal: transaction_enums.Restart, packageID: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRequireRestart(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_RequireRestart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transaction` instead
    ///
    pub const Transaction = transaction;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _transaction: PackageKit__Transaction `
    ///
    pub fn transaction(self: PackageKit__Transaction, _transaction: anytype) void {
        comptime _ = @TypeOf(_transaction)._is_PackageKit__Transaction;
        qtc.PackageKit__Transaction_Transaction(@ptrCast(self.ptr), @ptrCast(_transaction.ptr));
    }

    /// ### DEPRECATED: Use `onTransaction` instead
    ///
    pub const OnTransaction = onTransaction;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, transaction: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onTransaction(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, PackageKit__Transaction) callconv(.c) void) void {
        qtc.PackageKit__Transaction_Connect_Transaction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parseError` instead
    ///
    pub const ParseError = parseError;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` errorName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.InternalError `
    ///
    pub fn parseError(self: PackageKit__Transaction, errorName: []const u8) i32 {
        const errorName_str = qtc.libqt_string{
            .len = errorName.len,
            .data = errorName.ptr,
        };
        return qtc.PackageKit__Transaction_ParseError(@ptrCast(self.ptr), errorName_str);
    }

    /// ### DEPRECATED: Use `onParseError` instead
    ///
    pub const OnParseError = onParseError;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, errorName: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onParseError(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8) callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnParseError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParseError` instead
    ///
    pub const SuperParseError = superParseError;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` errorName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` transaction_enums.InternalError `
    ///
    pub fn superParseError(self: PackageKit__Transaction, errorName: []const u8) i32 {
        const errorName_str = qtc.libqt_string{
            .len = errorName.len,
            .data = errorName.ptr,
        };
        return qtc.PackageKit__Transaction_SuperParseError(@ptrCast(self.ptr), errorName_str);
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: PackageKit__Transaction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.PackageKit__Transaction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QMetaMethod) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: PackageKit__Transaction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.PackageKit__Transaction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: PackageKit__Transaction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.PackageKit__Transaction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QMetaMethod) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// ### [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: PackageKit__Transaction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.PackageKit__Transaction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: PackageKit__Transaction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("PackageKit__Transaction.objectName: Memory allocation failed");
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: PackageKit__Transaction, name: []const u8) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn isWidgetType(self: PackageKit__Transaction) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn isWindowType(self: PackageKit__Transaction) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn isQuickItemType(self: PackageKit__Transaction) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn signalsBlocked(self: PackageKit__Transaction) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: PackageKit__Transaction, b: bool) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn thread(self: PackageKit__Transaction) QThread {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: PackageKit__Transaction, _thread: anytype) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: PackageKit__Transaction, interval: i32) i32 {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: PackageKit__Transaction, time: i64) i32 {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: PackageKit__Transaction, id: i32) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: PackageKit__Transaction, id: i32) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: PackageKit__Transaction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("PackageKit__Transaction.children: Memory allocation failed");
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: PackageKit__Transaction, _parent: anytype) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: PackageKit__Transaction, filterObj: anytype) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: PackageKit__Transaction, obj: anytype) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: PackageKit__Transaction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn disconnect3(self: PackageKit__Transaction) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: PackageKit__Transaction, receiver: anytype) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn dumpObjectTree(self: PackageKit__Transaction) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn dumpObjectInfo(self: PackageKit__Transaction) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: PackageKit__Transaction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: PackageKit__Transaction, name: [:0]const u8) QVariant {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: PackageKit__Transaction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("PackageKit__Transaction.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("PackageKit__Transaction.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn bindingStorage(self: PackageKit__Transaction) QBindingStorage {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn bindingStorage2(self: PackageKit__Transaction) QBindingStorage {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn destroyed(self: PackageKit__Transaction) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction) callconv(.c) void `
    ///
    pub fn onDestroyed(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction) callconv(.c) void) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn parent(self: PackageKit__Transaction) QObject {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: PackageKit__Transaction, classname: [:0]const u8) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn deleteLater(self: PackageKit__Transaction) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: PackageKit__Transaction, interval: i32, timerType: i32) i32 {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: PackageKit__Transaction, time: i64, timerType: i32) i32 {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: PackageKit__Transaction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: PackageKit__Transaction, signal: [:0]const u8) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: PackageKit__Transaction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: PackageKit__Transaction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: PackageKit__Transaction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: PackageKit__Transaction, param1: anytype) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: PackageKit__Transaction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.PackageKit__Transaction_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: PackageKit__Transaction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.PackageKit__Transaction_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QEvent) callconv(.c) bool) void {
        qtc.PackageKit__Transaction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: PackageKit__Transaction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.PackageKit__Transaction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: PackageKit__Transaction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.PackageKit__Transaction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QObject, QEvent) callconv(.c) bool) void {
        qtc.PackageKit__Transaction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: PackageKit__Transaction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.PackageKit__Transaction_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: PackageKit__Transaction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.PackageKit__Transaction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QTimerEvent) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: PackageKit__Transaction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.PackageKit__Transaction_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: PackageKit__Transaction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.PackageKit__Transaction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QChildEvent) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: PackageKit__Transaction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.PackageKit__Transaction_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: PackageKit__Transaction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.PackageKit__Transaction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QEvent) callconv(.c) void) void {
        qtc.PackageKit__Transaction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn sender(self: PackageKit__Transaction) QObject {
        return .{ .ptr = qtc.PackageKit__Transaction_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn superSender(self: PackageKit__Transaction) QObject {
        return .{ .ptr = qtc.PackageKit__Transaction_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: PackageKit__Transaction, callback: *const fn () callconv(.c) QObject) void {
        qtc.PackageKit__Transaction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn senderSignalIndex(self: PackageKit__Transaction) i32 {
        return qtc.PackageKit__Transaction_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    pub fn superSenderSignalIndex(self: PackageKit__Transaction) i32 {
        return qtc.PackageKit__Transaction_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: PackageKit__Transaction, callback: *const fn () callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: PackageKit__Transaction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.PackageKit__Transaction_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: PackageKit__Transaction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.PackageKit__Transaction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8) callconv(.c) i32) void {
        qtc.PackageKit__Transaction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: PackageKit__Transaction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.PackageKit__Transaction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: PackageKit__Transaction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: PackageKit__Transaction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.PackageKit__Transaction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: PackageKit__Transaction`
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, QMetaMethod) callconv(.c) bool) void {
        qtc.PackageKit__Transaction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: PackageKit__Transaction `
    ///
    /// ` callback: *const fn (self: PackageKit__Transaction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: PackageKit__Transaction, callback: *const fn (PackageKit__Transaction, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: PackageKit__Transaction `
    ///
    pub fn delete(self: PackageKit__Transaction) void {
        qtc.PackageKit__Transaction_Delete(@ptrCast(self.ptr));
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
