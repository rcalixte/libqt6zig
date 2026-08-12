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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KDirLister object in C++ memory
    ///
    pub fn new() KDirLister {
        return .{ .ptr = qtc.KDirLister_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KDirLister object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KDirLister {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KDirLister_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn metaObject(self: KDirLister) QMetaObject {
        return .{ .ptr = qtc.KDirLister_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KDirLister, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDirLister_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    pub fn superMetaObject(self: KDirLister) QMetaObject {
        return .{ .ptr = qtc.KDirLister_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KDirLister, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirLister_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDirLister_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KDirLister, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirLister_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KDirLister, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirLister_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KDirLister, callback: *const fn (KDirLister, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDirLister_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KDirLister, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirLister_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirLister.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `autoErrorHandlingEnabled` instead
    ///
    pub const AutoErrorHandlingEnabled = autoErrorHandlingEnabled;

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#autoErrorHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn autoErrorHandlingEnabled(self: KDirLister) bool {
        return qtc.KDirLister_AutoErrorHandlingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMainWindow` instead
    ///
    pub const SetMainWindow = setMainWindow;

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#setMainWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` window: QWidget `
    ///
    pub fn setMainWindow(self: KDirLister, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QWidget;
        qtc.KDirLister_SetMainWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

    /// ### DEPRECATED: Use `mainWindow` instead
    ///
    pub const MainWindow = mainWindow;

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#mainWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn mainWindow(self: KDirLister) QWidget {
        return .{ .ptr = qtc.KDirLister_MainWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `jobStarted` instead
    ///
    pub const JobStarted = jobStarted;

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#jobStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` param1: KIO__ListJob `
    ///
    pub fn jobStarted(self: KDirLister, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ListJob;
        qtc.KDirLister_JobStarted(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onJobStarted` instead
    ///
    pub const OnJobStarted = onJobStarted;

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
    pub fn onJobStarted(self: KDirLister, callback: *const fn (KDirLister, KIO__ListJob) callconv(.c) void) void {
        qtc.KDirLister_OnJobStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJobStarted` instead
    ///
    pub const SuperJobStarted = superJobStarted;

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
    pub fn superJobStarted(self: KDirLister, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ListJob;
        qtc.KDirLister_SuperJobStarted(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirLister.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirLister.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `openUrl` instead
    ///
    pub const OpenUrl = openUrl;

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
    pub fn openUrl(self: KDirLister, dirUrl: anytype) bool {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return qtc.KCoreDirLister_OpenUrl(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn stop(self: KDirLister) void {
        qtc.KCoreDirLister_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop2` instead
    ///
    pub const Stop2 = stop2;

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
    pub fn stop2(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_Stop2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `forgetDirs` instead
    ///
    pub const ForgetDirs = forgetDirs;

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
    pub fn forgetDirs(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ForgetDirs(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `delayedMimeTypes` instead
    ///
    pub const DelayedMimeTypes = delayedMimeTypes;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#delayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn delayedMimeTypes(self: KDirLister) bool {
        return qtc.KCoreDirLister_DelayedMimeTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDelayedMimeTypes` instead
    ///
    pub const SetDelayedMimeTypes = setDelayedMimeTypes;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setDelayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` _delayedMimeTypes: bool `
    ///
    pub fn setDelayedMimeTypes(self: KDirLister, _delayedMimeTypes: bool) void {
        qtc.KCoreDirLister_SetDelayedMimeTypes(@ptrCast(self.ptr), _delayedMimeTypes);
    }

    /// ### DEPRECATED: Use `autoUpdate` instead
    ///
    pub const AutoUpdate = autoUpdate;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#autoUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn autoUpdate(self: KDirLister) bool {
        return qtc.KCoreDirLister_AutoUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoUpdate` instead
    ///
    pub const SetAutoUpdate = setAutoUpdate;

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
    pub fn setAutoUpdate(self: KDirLister, enable: bool) void {
        qtc.KCoreDirLister_SetAutoUpdate(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `showHiddenFiles` instead
    ///
    pub const ShowHiddenFiles = showHiddenFiles;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#showHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn showHiddenFiles(self: KDirLister) bool {
        return qtc.KCoreDirLister_ShowHiddenFiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowHiddenFiles` instead
    ///
    pub const SetShowHiddenFiles = setShowHiddenFiles;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setShowHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` _showHiddenFiles: bool `
    ///
    pub fn setShowHiddenFiles(self: KDirLister, _showHiddenFiles: bool) void {
        qtc.KCoreDirLister_SetShowHiddenFiles(@ptrCast(self.ptr), _showHiddenFiles);
    }

    /// ### DEPRECATED: Use `dirOnlyMode` instead
    ///
    pub const DirOnlyMode = dirOnlyMode;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#dirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn dirOnlyMode(self: KDirLister) bool {
        return qtc.KCoreDirLister_DirOnlyMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirOnlyMode` instead
    ///
    pub const SetDirOnlyMode = setDirOnlyMode;

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
    pub fn setDirOnlyMode(self: KDirLister, dirsOnly: bool) void {
        qtc.KCoreDirLister_SetDirOnlyMode(@ptrCast(self.ptr), dirsOnly);
    }

    /// ### DEPRECATED: Use `requestMimeTypeWhileListing` instead
    ///
    pub const RequestMimeTypeWhileListing = requestMimeTypeWhileListing;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#requestMimeTypeWhileListing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn requestMimeTypeWhileListing(self: KDirLister) bool {
        return qtc.KCoreDirLister_RequestMimeTypeWhileListing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRequestMimeTypeWhileListing` instead
    ///
    pub const SetRequestMimeTypeWhileListing = setRequestMimeTypeWhileListing;

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
    pub fn setRequestMimeTypeWhileListing(self: KDirLister, request: bool) void {
        qtc.KCoreDirLister_SetRequestMimeTypeWhileListing(@ptrCast(self.ptr), request);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn url(self: KDirLister) QUrl {
        return .{ .ptr = qtc.KCoreDirLister_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `directories` instead
    ///
    pub const Directories = directories;

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
    pub fn directories(self: KDirLister, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_Directories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KDirLister.directories: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `emitChanges` instead
    ///
    pub const EmitChanges = emitChanges;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#emitChanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn emitChanges(self: KDirLister) void {
        qtc.KCoreDirLister_EmitChanges(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateDirectory` instead
    ///
    pub const UpdateDirectory = updateDirectory;

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
    pub fn updateDirectory(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_UpdateDirectory(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn isFinished(self: KDirLister) bool {
        return qtc.KCoreDirLister_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rootItem` instead
    ///
    pub const RootItem = rootItem;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#rootItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn rootItem(self: KDirLister) KFileItem {
        return .{ .ptr = qtc.KCoreDirLister_RootItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `findByUrl` instead
    ///
    pub const FindByUrl = findByUrl;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#findByUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` _url: QUrl `
    ///
    pub fn findByUrl(self: KDirLister, _url: anytype) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_FindByUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `findByName` instead
    ///
    pub const FindByName = findByName;

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
    pub fn findByName(self: KDirLister, name: []const u8) KFileItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreDirLister_FindByName(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setNameFilter` instead
    ///
    pub const SetNameFilter = setNameFilter;

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
    pub fn setNameFilter(self: KDirLister, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KCoreDirLister_SetNameFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### DEPRECATED: Use `nameFilter` instead
    ///
    pub const NameFilter = nameFilter;

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
    pub fn nameFilter(self: KDirLister, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreDirLister_NameFilter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirLister.nameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMimeFilter` instead
    ///
    pub const SetMimeFilter = setMimeFilter;

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
    pub fn setMimeFilter(self: KDirLister, allocator: std.mem.Allocator, mimeList: []const []const u8) void {
        const mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("KDirLister.setMimeFilter: Memory allocation failed");
        defer allocator.free(mimeList_arr);
        for (mimeList, 0..mimeList.len) |str_item, i|
            mimeList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mimeList_list = qtc.libqt_list{
            .len = mimeList.len,
            .data = mimeList_arr.ptr,
        };
        qtc.KCoreDirLister_SetMimeFilter(@ptrCast(self.ptr), mimeList_list);
    }

    /// ### DEPRECATED: Use `setMimeExcludeFilter` instead
    ///
    pub const SetMimeExcludeFilter = setMimeExcludeFilter;

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
    pub fn setMimeExcludeFilter(self: KDirLister, allocator: std.mem.Allocator, mimeList: []const []const u8) void {
        const mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("KDirLister.setMimeExcludeFilter: Memory allocation failed");
        defer allocator.free(mimeList_arr);
        for (mimeList, 0..mimeList.len) |str_item, i|
            mimeList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mimeList_list = qtc.libqt_list{
            .len = mimeList.len,
            .data = mimeList_arr.ptr,
        };
        qtc.KCoreDirLister_SetMimeExcludeFilter(@ptrCast(self.ptr), mimeList_list);
    }

    /// ### DEPRECATED: Use `clearMimeFilter` instead
    ///
    pub const ClearMimeFilter = clearMimeFilter;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clearMimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn clearMimeFilter(self: KDirLister) void {
        qtc.KCoreDirLister_ClearMimeFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mimeFilters` instead
    ///
    pub const MimeFilters = mimeFilters;

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
    pub fn mimeFilters(self: KDirLister, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_MimeFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KDirLister.mimeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDirLister.mimeFilters: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn items(self: KDirLister) KFileItemList {
        return .{ .ptr = qtc.KCoreDirLister_Items(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `itemsForDir` instead
    ///
    pub const ItemsForDir = itemsForDir;

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
    pub fn itemsForDir(self: KDirLister, dirUrl: anytype) KFileItemList {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_ItemsForDir(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `cachedItemForUrl` instead
    ///
    pub const CachedItemForUrl = cachedItemForUrl;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#cachedItemForUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    pub fn cachedItemForUrl(_url: anytype) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_CachedItemForUrl(@ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoErrorHandlingEnabled` instead
    ///
    pub const SetAutoErrorHandlingEnabled = setAutoErrorHandlingEnabled;

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
    pub fn setAutoErrorHandlingEnabled(self: KDirLister, enable: bool) void {
        qtc.KCoreDirLister_SetAutoErrorHandlingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `started` instead
    ///
    pub const Started = started;

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
    pub fn started(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_Started(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

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
    pub fn onStarted(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `completed` instead
    ///
    pub const Completed = completed;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn completed(self: KDirLister) void {
        qtc.KCoreDirLister_Completed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCompleted` instead
    ///
    pub const OnCompleted = onCompleted;

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
    pub fn onCompleted(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `listingDirCompleted` instead
    ///
    pub const ListingDirCompleted = listingDirCompleted;

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
    pub fn listingDirCompleted(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ListingDirCompleted(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onListingDirCompleted` instead
    ///
    pub const OnListingDirCompleted = onListingDirCompleted;

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
    pub fn onListingDirCompleted(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCompleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canceled` instead
    ///
    pub const Canceled = canceled;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn canceled(self: KDirLister) void {
        qtc.KCoreDirLister_Canceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanceled` instead
    ///
    pub const OnCanceled = onCanceled;

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
    pub fn onCanceled(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `listingDirCanceled` instead
    ///
    pub const ListingDirCanceled = listingDirCanceled;

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
    pub fn listingDirCanceled(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ListingDirCanceled(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onListingDirCanceled` instead
    ///
    pub const OnListingDirCanceled = onListingDirCanceled;

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
    pub fn onListingDirCanceled(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCanceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirection` instead
    ///
    pub const Redirection = redirection;

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
    pub fn redirection(self: KDirLister, oldUrl: anytype, newUrl: anytype) void {
        comptime _ = @TypeOf(oldUrl)._is_QUrl;
        comptime _ = @TypeOf(newUrl)._is_QUrl;
        qtc.KCoreDirLister_Redirection(@ptrCast(self.ptr), @ptrCast(oldUrl.ptr), @ptrCast(newUrl.ptr));
    }

    /// ### DEPRECATED: Use `onRedirection` instead
    ///
    pub const OnRedirection = onRedirection;

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
    pub fn onRedirection(self: KDirLister, callback: *const fn (KDirLister, QUrl, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Redirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    pub fn clear(self: KDirLister) void {
        qtc.KCoreDirLister_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

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
    pub fn onClear(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Clear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearDir` instead
    ///
    pub const ClearDir = clearDir;

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
    pub fn clearDir(self: KDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ClearDir(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onClearDir` instead
    ///
    pub const OnClearDir = onClearDir;

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
    pub fn onClearDir(self: KDirLister, callback: *const fn (KDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ClearDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `newItems` instead
    ///
    pub const NewItems = newItems;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` _items: KFileItemList `
    ///
    pub fn newItems(self: KDirLister, _items: anytype) void {
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_NewItems(@ptrCast(self.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onNewItems` instead
    ///
    pub const OnNewItems = onNewItems;

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
    pub fn onNewItems(self: KDirLister, callback: *const fn (KDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_NewItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsAdded` instead
    ///
    pub const ItemsAdded = itemsAdded;

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
    /// ` _items: KFileItemList `
    ///
    pub fn itemsAdded(self: KDirLister, directoryUrl: anytype, _items: anytype) void {
        comptime _ = @TypeOf(directoryUrl)._is_QUrl;
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsAdded(@ptrCast(self.ptr), @ptrCast(directoryUrl.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onItemsAdded` instead
    ///
    pub const OnItemsAdded = onItemsAdded;

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
    pub fn onItemsAdded(self: KDirLister, callback: *const fn (KDirLister, QUrl, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsFilteredByMime` instead
    ///
    pub const ItemsFilteredByMime = itemsFilteredByMime;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` _items: KFileItemList `
    ///
    pub fn itemsFilteredByMime(self: KDirLister, _items: anytype) void {
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsFilteredByMime(@ptrCast(self.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onItemsFilteredByMime` instead
    ///
    pub const OnItemsFilteredByMime = onItemsFilteredByMime;

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
    pub fn onItemsFilteredByMime(self: KDirLister, callback: *const fn (KDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsFilteredByMime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsDeleted` instead
    ///
    pub const ItemsDeleted = itemsDeleted;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` _items: KFileItemList `
    ///
    pub fn itemsDeleted(self: KDirLister, _items: anytype) void {
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsDeleted(@ptrCast(self.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onItemsDeleted` instead
    ///
    pub const OnItemsDeleted = onItemsDeleted;

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
    pub fn onItemsDeleted(self: KDirLister, callback: *const fn (KDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsDeleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

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
    pub fn infoMessage(self: KDirLister, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KCoreDirLister_InfoMessage(@ptrCast(self.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `onInfoMessage` instead
    ///
    pub const OnInfoMessage = onInfoMessage;

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
    pub fn onInfoMessage(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `percent` instead
    ///
    pub const Percent = percent;

    /// Inherited from KCoreDirLister
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirLister `
    ///
    /// ` _percent: i32 `
    ///
    pub fn percent(self: KDirLister, _percent: i32) void {
        qtc.KCoreDirLister_Percent(@ptrCast(self.ptr), @bitCast(_percent));
    }

    /// ### DEPRECATED: Use `onPercent` instead
    ///
    pub const OnPercent = onPercent;

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
    pub fn onPercent(self: KDirLister, callback: *const fn (KDirLister, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Percent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

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
    pub fn totalSize(self: KDirLister, size: usize) void {
        qtc.KCoreDirLister_TotalSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onTotalSize` instead
    ///
    pub const OnTotalSize = onTotalSize;

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
    pub fn onTotalSize(self: KDirLister, callback: *const fn (KDirLister, usize) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

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
    pub fn processedSize(self: KDirLister, size: usize) void {
        qtc.KCoreDirLister_ProcessedSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onProcessedSize` instead
    ///
    pub const OnProcessedSize = onProcessedSize;

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
    pub fn onProcessedSize(self: KDirLister, callback: *const fn (KDirLister, usize) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

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
    pub fn speed(self: KDirLister, bytes_per_second: i32) void {
        qtc.KCoreDirLister_Speed(@ptrCast(self.ptr), @bitCast(bytes_per_second));
    }

    /// ### DEPRECATED: Use `onSpeed` instead
    ///
    pub const OnSpeed = onSpeed;

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
    pub fn onSpeed(self: KDirLister, callback: *const fn (KDirLister, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `jobError` instead
    ///
    pub const JobError = jobError;

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
    pub fn jobError(self: KDirLister, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KCoreDirLister_JobError(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onJobError` instead
    ///
    pub const OnJobError = onJobError;

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
    pub fn onJobError(self: KDirLister, callback: *const fn (KDirLister, KIO__Job) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_JobError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `openUrl2` instead
    ///
    pub const OpenUrl2 = openUrl2;

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
    pub fn openUrl2(self: KDirLister, dirUrl: anytype, flags: i32) bool {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return qtc.KCoreDirLister_OpenUrl2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `items1` instead
    ///
    pub const Items1 = items1;

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
    pub fn items1(self: KDirLister, which: i32) KFileItemList {
        return .{ .ptr = qtc.KCoreDirLister_Items1(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `itemsForDir2` instead
    ///
    pub const ItemsForDir2 = itemsForDir2;

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
    pub fn itemsForDir2(self: KDirLister, dirUrl: anytype, which: i32) KFileItemList {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_ItemsForDir2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr), @bitCast(which)) };
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
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KDirLister, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDirLister.objectName: Memory allocation failed");
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
    /// ` self: KDirLister `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KDirLister, name: []const u8) void {
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
    /// ` self: KDirLister `
    ///
    pub fn isWidgetType(self: KDirLister) bool {
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
    /// ` self: KDirLister `
    ///
    pub fn isWindowType(self: KDirLister) bool {
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
    /// ` self: KDirLister `
    ///
    pub fn isQuickItemType(self: KDirLister) bool {
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
    /// ` self: KDirLister `
    ///
    pub fn signalsBlocked(self: KDirLister) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KDirLister, b: bool) bool {
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
    /// ` self: KDirLister `
    ///
    pub fn thread(self: KDirLister) QThread {
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
    /// ` self: KDirLister `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KDirLister, _thread: anytype) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KDirLister, interval: i32) i32 {
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
    /// ` self: KDirLister `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KDirLister, time: i64) i32 {
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
    /// ` self: KDirLister `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KDirLister, id: i32) void {
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
    /// ` self: KDirLister `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KDirLister, id: i32) void {
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
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KDirLister, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KDirLister.children: Memory allocation failed");
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
    /// ` self: KDirLister `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KDirLister, _parent: anytype) void {
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
    /// ` self: KDirLister `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KDirLister, filterObj: anytype) void {
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
    /// ` self: KDirLister `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KDirLister, obj: anytype) void {
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
    /// ` self: KDirLister `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KDirLister, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KDirLister `
    ///
    pub fn disconnect3(self: KDirLister) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KDirLister, receiver: anytype) bool {
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
    /// ` self: KDirLister `
    ///
    pub fn dumpObjectTree(self: KDirLister) void {
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
    /// ` self: KDirLister `
    ///
    pub fn dumpObjectInfo(self: KDirLister) void {
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
    /// ` self: KDirLister `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KDirLister, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KDirLister, name: [:0]const u8) QVariant {
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
    /// ` self: KDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KDirLister, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KDirLister.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDirLister.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDirLister `
    ///
    pub fn bindingStorage(self: KDirLister) QBindingStorage {
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
    /// ` self: KDirLister `
    ///
    pub fn bindingStorage2(self: KDirLister) QBindingStorage {
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
    /// ` self: KDirLister `
    ///
    pub fn destroyed(self: KDirLister) void {
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
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KDirLister, callback: *const fn (KDirLister) callconv(.c) void) void {
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
    /// ` self: KDirLister `
    ///
    pub fn parent(self: KDirLister) QObject {
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
    /// ` self: KDirLister `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KDirLister, classname: [:0]const u8) bool {
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
    /// ` self: KDirLister `
    ///
    pub fn deleteLater(self: KDirLister) void {
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
    /// ` self: KDirLister `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KDirLister, interval: i32, timerType: i32) i32 {
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
    /// ` self: KDirLister `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KDirLister, time: i64, timerType: i32) i32 {
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
    /// ` self: KDirLister `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KDirLister, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KDirLister, signal: [:0]const u8) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KDirLister, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KDirLister, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KDirLister, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirLister `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KDirLister, param1: anytype) void {
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
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KDirLister, callback: *const fn (KDirLister, QObject) callconv(.c) void) void {
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KDirLister, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirLister_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KDirLister, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirLister_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KDirLister, callback: *const fn (KDirLister, QEvent) callconv(.c) bool) void {
        qtc.KDirLister_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KDirLister, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirLister_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KDirLister, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDirLister_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KDirLister, callback: *const fn (KDirLister, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDirLister_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KDirLister_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KDirLister_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KDirLister, callback: *const fn (KDirLister, QTimerEvent) callconv(.c) void) void {
        qtc.KDirLister_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KDirLister_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KDirLister_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KDirLister, callback: *const fn (KDirLister, QChildEvent) callconv(.c) void) void {
        qtc.KDirLister_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirLister_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDirLister_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KDirLister, callback: *const fn (KDirLister, QEvent) callconv(.c) void) void {
        qtc.KDirLister_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: KDirLister, callback: *const fn (KDirLister, QMetaMethod) callconv(.c) void) void {
        qtc.KDirLister_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: KDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirLister_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: KDirLister, callback: *const fn (KDirLister, QMetaMethod) callconv(.c) void) void {
        qtc.KDirLister_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    pub fn sender(self: KDirLister) QObject {
        return .{ .ptr = qtc.KDirLister_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirLister `
    ///
    pub fn superSender(self: KDirLister) QObject {
        return .{ .ptr = qtc.KDirLister_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KDirLister, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDirLister_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    pub fn senderSignalIndex(self: KDirLister) i32 {
        return qtc.KDirLister_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirLister `
    ///
    pub fn superSenderSignalIndex(self: KDirLister) i32 {
        return qtc.KDirLister_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KDirLister, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirLister_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KDirLister, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirLister_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KDirLister, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirLister_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirLister_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KDirLister, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirLister_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KDirLister, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirLister_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirLister`
    ///
    /// ` callback: *const fn (self: KDirLister, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KDirLister, callback: *const fn (KDirLister, QMetaMethod) callconv(.c) bool) void {
        qtc.KDirLister_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirLister `
    ///
    /// ` callback: *const fn (self: KDirLister, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KDirLister, callback: *const fn (KDirLister, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kdirlister.html#dtor.KDirLister)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KDirLister `
    ///
    pub fn delete(self: KDirLister) void {
        qtc.KDirLister_Delete(@ptrCast(self.ptr));
    }
};
