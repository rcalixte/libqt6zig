const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileItem = @import("libqt6").KFileItem;
const KFileItemList = @import("libqt6").KFileItemList;
const KIO__Job = @import("libqt6").KIO__Job;
const KIO__ListJob = @import("libqt6").KIO__ListJob;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kcoredirlister_enums = @import("libkcoredirlister.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kdirlister.html)
pub const KDirLister = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdirlister.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDirLister,

    pub const _is_KDirLister = {};
    pub const _is_KCoreDirLister = {};
    pub const _is_QObject = {};

    /// New constructs a new KDirLister object.
    ///
    pub fn New() KDirLister {
        return .{ .ptr = qtc.KDirLister_new() };
    }

    /// New2 constructs a new KDirLister object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KDirLister {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KDirLister_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn MetaObject(self: KDirLister) QMetaObject {
        return .{ .ptr = qtc.KDirLister_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KDirLister, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDirLister_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    pub fn SuperMetaObject(self: KDirLister) QMetaObject {
        return .{ .ptr = qtc.KDirLister_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KDirLister, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirLister_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDirLister_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KDirLister, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirLister_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KDirLister, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirLister_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KDirLister, callback: *const fn (KDirLister, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDirLister_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KDirLister, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirLister_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#autoErrorHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn AutoErrorHandlingEnabled(self: KDirLister) bool {
        return qtc.KDirLister_AutoErrorHandlingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#setMainWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` window: QWidget `
    ///
    pub fn SetMainWindow(self: KDirLister, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QWidget;
        qtc.KDirLister_SetMainWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#mainWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn MainWindow(self: KDirLister) QWidget {
        return .{ .ptr = qtc.KDirLister_MainWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#jobStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: KIO__ListJob `
    ///
    pub fn JobStarted(self: KDirLister, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ListJob;
        qtc.KDirLister_JobStarted(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#jobStarted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, param1: KIO__ListJob) callconv(.c) void `
    ///
    pub fn OnJobStarted(self: KDirLister, callback: *const fn (KDirLister, KIO__ListJob) callconv(.c) void) void {
        qtc.KDirLister_OnJobStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperJobStarted` instead
    ///
    pub const QBaseJobStarted = SuperJobStarted;

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#jobStarted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: KIO__ListJob `
    ///
    pub fn SuperJobStarted(self: KDirLister, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ListJob;
        qtc.KDirLister_SuperJobStarted(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn OpenUrl(self: KDirLister, dirUrl: anytype) bool {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return qtc.KCoreDirLister_OpenUrl(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Stop(self: KDirLister) void {
        qtc.KCoreDirLister_Stop(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn Stop2(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_Stop2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#forgetDirs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn ForgetDirs(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ForgetDirs(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#delayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn DelayedMimeTypes(self: KDirLister) bool {
        return qtc.KCoreDirLister_DelayedMimeTypes(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setDelayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` delayedMimeTypes: bool `
    ///
    pub fn SetDelayedMimeTypes(self: KDirLister, delayedMimeTypes: bool) void {
        qtc.KCoreDirLister_SetDelayedMimeTypes(@ptrCast(self.ptr), delayedMimeTypes);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#autoUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn AutoUpdate(self: KDirLister) bool {
        return qtc.KCoreDirLister_AutoUpdate(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoUpdate(self: KDirLister, enable: bool) void {
        qtc.KCoreDirLister_SetAutoUpdate(@ptrCast(self.ptr), enable);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#showHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn ShowHiddenFiles(self: KDirLister) bool {
        return qtc.KCoreDirLister_ShowHiddenFiles(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setShowHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` showHiddenFiles: bool `
    ///
    pub fn SetShowHiddenFiles(self: KDirLister, showHiddenFiles: bool) void {
        qtc.KCoreDirLister_SetShowHiddenFiles(@ptrCast(self.ptr), showHiddenFiles);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#dirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn DirOnlyMode(self: KDirLister) bool {
        return qtc.KCoreDirLister_DirOnlyMode(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setDirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirsOnly: bool `
    ///
    pub fn SetDirOnlyMode(self: KDirLister, dirsOnly: bool) void {
        qtc.KCoreDirLister_SetDirOnlyMode(@ptrCast(self.ptr), dirsOnly);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#requestMimeTypeWhileListing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn RequestMimeTypeWhileListing(self: KDirLister) bool {
        return qtc.KCoreDirLister_RequestMimeTypeWhileListing(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setRequestMimeTypeWhileListing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` request: bool `
    ///
    pub fn SetRequestMimeTypeWhileListing(self: KDirLister, request: bool) void {
        qtc.KCoreDirLister_SetRequestMimeTypeWhileListing(@ptrCast(self.ptr), request);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Url(self: KDirLister) QUrl {
        return .{ .ptr = qtc.KCoreDirLister_Url(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#directories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Directories(self: KDirLister, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_Directories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("kdirlister.Directories: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#emitChanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn EmitChanges(self: KDirLister) void {
        qtc.KCoreDirLister_EmitChanges(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#updateDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn UpdateDirectory(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_UpdateDirectory(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn IsFinished(self: KDirLister) bool {
        return qtc.KCoreDirLister_IsFinished(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#rootItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn RootItem(self: KDirLister) KFileItem {
        return .{ .ptr = qtc.KCoreDirLister_RootItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#findByUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` url: QUrl `
    ///
    pub fn FindByUrl(self: KDirLister, url: anytype) KFileItem {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_FindByUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#findByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` name: []const u8 `
    ///
    pub fn FindByName(self: KDirLister, name: []const u8) KFileItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreDirLister_FindByName(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setNameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn SetNameFilter(self: KDirLister, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KCoreDirLister_SetNameFilter(@ptrCast(self.ptr), filter_str);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#nameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NameFilter(self: KDirLister, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreDirLister_NameFilter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.NameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeList: []const []const u8 `
    ///
    pub fn SetMimeFilter(self: KDirLister, allocator: std.mem.Allocator, mimeList: []const []const u8) void {
        const mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("kdirlister.SetMimeFilter: Memory allocation failed");
        defer allocator.free(mimeList_arr);
        for (mimeList, 0..mimeList.len) |item, i|
            mimeList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mimeList_list = qtc.libqt_list{
            .len = mimeList.len,
            .data = mimeList_arr.ptr,
        };
        qtc.KCoreDirLister_SetMimeFilter(@ptrCast(self.ptr), mimeList_list);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeExcludeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeList: []const []const u8 `
    ///
    pub fn SetMimeExcludeFilter(self: KDirLister, allocator: std.mem.Allocator, mimeList: []const []const u8) void {
        const mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("kdirlister.SetMimeExcludeFilter: Memory allocation failed");
        defer allocator.free(mimeList_arr);
        for (mimeList, 0..mimeList.len) |item, i|
            mimeList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mimeList_list = qtc.libqt_list{
            .len = mimeList.len,
            .data = mimeList_arr.ptr,
        };
        qtc.KCoreDirLister_SetMimeExcludeFilter(@ptrCast(self.ptr), mimeList_list);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clearMimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn ClearMimeFilter(self: KDirLister) void {
        qtc.KCoreDirLister_ClearMimeFilter(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#mimeFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeFilters(self: KDirLister, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_MimeFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdirlister.MimeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdirlister.MimeFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Items(self: KDirLister) KFileItemList {
        return .{ .ptr = qtc.KCoreDirLister_Items(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn ItemsForDir(self: KDirLister, dirUrl: anytype) KFileItemList {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_ItemsForDir(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr)) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#cachedItemForUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn CachedItemForUrl(url: anytype) KFileItem {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_CachedItemForUrl(@ptrCast(url.ptr)) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoErrorHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoErrorHandlingEnabled(self: KDirLister, enable: bool) void {
        qtc.KCoreDirLister_SetAutoErrorHandlingEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn Started(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_Started(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn OnStarted(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Completed(self: KDirLister) void {
        qtc.KCoreDirLister_Completed(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister) callconv(.c) void `
    ///
    pub fn OnCompleted(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn ListingDirCompleted(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ListingDirCompleted(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn OnListingDirCompleted(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCompleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Canceled(self: KDirLister) void {
        qtc.KCoreDirLister_Canceled(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister) callconv(.c) void `
    ///
    pub fn OnCanceled(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn ListingDirCanceled(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ListingDirCanceled(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn OnListingDirCanceled(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCanceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` oldUrl: QUrl `
    ///
    /// ` newUrl: QUrl `
    ///
    pub fn Redirection(self: KDirLister, oldUrl: anytype, newUrl: anytype) void {
        comptime _ = @TypeOf(oldUrl)._is_QUrl;
        comptime _ = @TypeOf(newUrl)._is_QUrl;
        qtc.KCoreDirLister_Redirection(@ptrCast(self.ptr), @ptrCast(oldUrl.ptr), @ptrCast(newUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, oldUrl: QUrl, newUrl: QUrl) callconv(.c) void `
    ///
    pub fn OnRedirection(self: KDirLister, callback: *const fn (KDirLister, QUrl, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Redirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Clear(self: KDirLister) void {
        qtc.KCoreDirLister_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister) callconv(.c) void `
    ///
    pub fn OnClear(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Clear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn ClearDir(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ClearDir(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn OnClearDir(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ClearDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn NewItems(self: KDirLister, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KCoreDirLister_NewItems(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, items: KFileItemList) callconv(.c) void `
    ///
    pub fn OnNewItems(self: KDirLister, callback: *const fn (KDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_NewItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` directoryUrl: QUrl `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn ItemsAdded(self: KDirLister, directoryUrl: anytype, items: anytype) void {
        comptime _ = @TypeOf(directoryUrl)._is_QUrl;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsAdded(@ptrCast(self.ptr), @ptrCast(directoryUrl.ptr), @ptrCast(items.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, directoryUrl: QUrl, items: KFileItemList) callconv(.c) void `
    ///
    pub fn OnItemsAdded(self: KDirLister, callback: *const fn (KDirLister, QUrl, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn ItemsFilteredByMime(self: KDirLister, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsFilteredByMime(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, items: KFileItemList) callconv(.c) void `
    ///
    pub fn OnItemsFilteredByMime(self: KDirLister, callback: *const fn (KDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsFilteredByMime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn ItemsDeleted(self: KDirLister, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsDeleted(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, items: KFileItemList) callconv(.c) void `
    ///
    pub fn OnItemsDeleted(self: KDirLister, callback: *const fn (KDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsDeleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn InfoMessage(self: KDirLister, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KCoreDirLister_InfoMessage(@ptrCast(self.ptr), msg_str);
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, msg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInfoMessage(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` percent: i32 `
    ///
    pub fn Percent(self: KDirLister, percent: i32) void {
        qtc.KCoreDirLister_Percent(@ptrCast(self.ptr), @bitCast(percent));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, percent: i32) callconv(.c) void `
    ///
    pub fn OnPercent(self: KDirLister, callback: *const fn (KDirLister, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Percent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` size: usize `
    ///
    pub fn TotalSize(self: KDirLister, size: usize) void {
        qtc.KCoreDirLister_TotalSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, size: usize) callconv(.c) void `
    ///
    pub fn OnTotalSize(self: KDirLister, callback: *const fn (KDirLister, usize) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` size: usize `
    ///
    pub fn ProcessedSize(self: KDirLister, size: usize) void {
        qtc.KCoreDirLister_ProcessedSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, size: usize) callconv(.c) void `
    ///
    pub fn OnProcessedSize(self: KDirLister, callback: *const fn (KDirLister, usize) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` bytes_per_second: i32 `
    ///
    pub fn Speed(self: KDirLister, bytes_per_second: i32) void {
        qtc.KCoreDirLister_Speed(@ptrCast(self.ptr), @bitCast(bytes_per_second));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, bytes_per_second: i32) callconv(.c) void `
    ///
    pub fn OnSpeed(self: KDirLister, callback: *const fn (KDirLister, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn JobError(self: KDirLister, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KCoreDirLister_JobError(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, job: KIO__Job) callconv(.c) void `
    ///
    pub fn OnJobError(self: KDirLister, callback: *const fn (KDirLister, KIO__Job) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_JobError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    /// ` flags: flag of kcoredirlister_enums.OpenUrlFlag `
    ///
    pub fn OpenUrl2(self: KDirLister, dirUrl: anytype, flags: i32) bool {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return qtc.KCoreDirLister_OpenUrl2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr), @bitCast(flags));
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` which: kcoredirlister_enums.WhichItems `
    ///
    pub fn Items1(self: KDirLister, which: i32) KFileItemList {
        return .{ .ptr = qtc.KCoreDirLister_Items1(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    /// ` which: kcoredirlister_enums.WhichItems `
    ///
    pub fn ItemsForDir2(self: KDirLister, dirUrl: anytype, which: i32) KFileItemList {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_ItemsForDir2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr), @bitCast(which)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KDirLister, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KDirLister, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn IsWidgetType(self: KDirLister) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn IsWindowType(self: KDirLister) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn IsQuickItemType(self: KDirLister) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn SignalsBlocked(self: KDirLister) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KDirLister, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Thread(self: KDirLister) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KDirLister, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KDirLister, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KDirLister, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KDirLister, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KDirLister, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KDirLister, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kdirlister.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KDirLister, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KDirLister, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KDirLister, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KDirLister, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Disconnect3(self: KDirLister) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KDirLister, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn DumpObjectTree(self: KDirLister) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn DumpObjectInfo(self: KDirLister) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KDirLister, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KDirLister, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KDirLister, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kdirlister.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdirlister.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDirLister `
    ///
    pub fn BindingStorage(self: KDirLister) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn BindingStorage2(self: KDirLister) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Destroyed(self: KDirLister) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Parent(self: KDirLister) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KDirLister, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn DeleteLater(self: KDirLister) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KDirLister, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KDirLister, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KDirLister, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KDirLister, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KDirLister, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KDirLister, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KDirLister, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KDirLister, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KDirLister, callback: *const fn (KDirLister, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KDirLister, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirLister_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KDirLister, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirLister_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KDirLister, callback: *const fn (KDirLister, QEvent) callconv(.c) bool) void {
        qtc.KDirLister_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KDirLister, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirLister_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KDirLister, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirLister_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KDirLister, callback: *const fn (KDirLister, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDirLister_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KDirLister, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirLister_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KDirLister, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirLister_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KDirLister, callback: *const fn (KDirLister, QTimerEvent) callconv(.c) void) void {
        qtc.KDirLister_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KDirLister, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirLister_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KDirLister, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirLister_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KDirLister, callback: *const fn (KDirLister, QChildEvent) callconv(.c) void) void {
        qtc.KDirLister_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KDirLister, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirLister_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KDirLister, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirLister_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KDirLister, callback: *const fn (KDirLister, QEvent) callconv(.c) void) void {
        qtc.KDirLister_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KDirLister, callback: *const fn (KDirLister, QMetaMethod) callconv(.c) void) void {
        qtc.KDirLister_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KDirLister, callback: *const fn (KDirLister, QMetaMethod) callconv(.c) void) void {
        qtc.KDirLister_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn Sender(self: KDirLister) QObject {
        return .{ .ptr = qtc.KDirLister_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirLister `
    ///
    pub fn SuperSender(self: KDirLister) QObject {
        return .{ .ptr = qtc.KDirLister_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KDirLister, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDirLister_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn SenderSignalIndex(self: KDirLister) i32 {
        return qtc.KDirLister_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirLister `
    ///
    pub fn SuperSenderSignalIndex(self: KDirLister) i32 {
        return qtc.KDirLister_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KDirLister, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirLister_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KDirLister, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirLister_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KDirLister, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirLister_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirLister_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KDirLister, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirLister_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KDirLister, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirLister_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KDirLister, callback: *const fn (KDirLister, QMetaMethod) callconv(.c) bool) void {
        qtc.KDirLister_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#dtor.KDirLister)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KDirLister `
    ///
    pub fn Delete(self: KDirLister) void {
        qtc.KDirLister_Delete(@ptrCast(self.ptr));
    }
};
