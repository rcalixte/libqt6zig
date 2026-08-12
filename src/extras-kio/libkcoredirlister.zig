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
const kcoredirlister_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcoredirlister.html)
pub const KCoreDirLister = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreDirLister,

    pub const _is_KCoreDirLister = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCoreDirLister object in C++ memory
    ///
    pub fn new() KCoreDirLister {
        return .{ .ptr = qtc.KCoreDirLister_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCoreDirLister object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KCoreDirLister {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KCoreDirLister_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn metaObject(self: KCoreDirLister) QMetaObject {
        return .{ .ptr = qtc.KCoreDirLister_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KCoreDirLister, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCoreDirLister_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    pub fn superMetaObject(self: KCoreDirLister) QMetaObject {
        return .{ .ptr = qtc.KCoreDirLister_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KCoreDirLister, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreDirLister_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KCoreDirLister, callback: *const fn (KCoreDirLister, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCoreDirLister_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KCoreDirLister, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreDirLister_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KCoreDirLister, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreDirLister_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KCoreDirLister, callback: *const fn (KCoreDirLister, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCoreDirLister_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KCoreDirLister, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCoreDirLister_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreDirLister.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `openUrl` instead
    ///
    pub const OpenUrl = openUrl;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn openUrl(self: KCoreDirLister, dirUrl: anytype) bool {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return qtc.KCoreDirLister_OpenUrl(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn stop(self: KCoreDirLister) void {
        qtc.KCoreDirLister_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop2` instead
    ///
    pub const Stop2 = stop2;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn stop2(self: KCoreDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_Stop2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `forgetDirs` instead
    ///
    pub const ForgetDirs = forgetDirs;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#forgetDirs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn forgetDirs(self: KCoreDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ForgetDirs(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `delayedMimeTypes` instead
    ///
    pub const DelayedMimeTypes = delayedMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#delayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn delayedMimeTypes(self: KCoreDirLister) bool {
        return qtc.KCoreDirLister_DelayedMimeTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDelayedMimeTypes` instead
    ///
    pub const SetDelayedMimeTypes = setDelayedMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setDelayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` _delayedMimeTypes: bool `
    ///
    pub fn setDelayedMimeTypes(self: KCoreDirLister, _delayedMimeTypes: bool) void {
        qtc.KCoreDirLister_SetDelayedMimeTypes(@ptrCast(self.ptr), _delayedMimeTypes);
    }

    /// ### DEPRECATED: Use `autoUpdate` instead
    ///
    pub const AutoUpdate = autoUpdate;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#autoUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn autoUpdate(self: KCoreDirLister) bool {
        return qtc.KCoreDirLister_AutoUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoUpdate` instead
    ///
    pub const SetAutoUpdate = setAutoUpdate;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoUpdate(self: KCoreDirLister, enable: bool) void {
        qtc.KCoreDirLister_SetAutoUpdate(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `showHiddenFiles` instead
    ///
    pub const ShowHiddenFiles = showHiddenFiles;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#showHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn showHiddenFiles(self: KCoreDirLister) bool {
        return qtc.KCoreDirLister_ShowHiddenFiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowHiddenFiles` instead
    ///
    pub const SetShowHiddenFiles = setShowHiddenFiles;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setShowHiddenFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` _showHiddenFiles: bool `
    ///
    pub fn setShowHiddenFiles(self: KCoreDirLister, _showHiddenFiles: bool) void {
        qtc.KCoreDirLister_SetShowHiddenFiles(@ptrCast(self.ptr), _showHiddenFiles);
    }

    /// ### DEPRECATED: Use `dirOnlyMode` instead
    ///
    pub const DirOnlyMode = dirOnlyMode;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#dirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn dirOnlyMode(self: KCoreDirLister) bool {
        return qtc.KCoreDirLister_DirOnlyMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirOnlyMode` instead
    ///
    pub const SetDirOnlyMode = setDirOnlyMode;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setDirOnlyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirsOnly: bool `
    ///
    pub fn setDirOnlyMode(self: KCoreDirLister, dirsOnly: bool) void {
        qtc.KCoreDirLister_SetDirOnlyMode(@ptrCast(self.ptr), dirsOnly);
    }

    /// ### DEPRECATED: Use `requestMimeTypeWhileListing` instead
    ///
    pub const RequestMimeTypeWhileListing = requestMimeTypeWhileListing;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#requestMimeTypeWhileListing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn requestMimeTypeWhileListing(self: KCoreDirLister) bool {
        return qtc.KCoreDirLister_RequestMimeTypeWhileListing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRequestMimeTypeWhileListing` instead
    ///
    pub const SetRequestMimeTypeWhileListing = setRequestMimeTypeWhileListing;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setRequestMimeTypeWhileListing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` request: bool `
    ///
    pub fn setRequestMimeTypeWhileListing(self: KCoreDirLister, request: bool) void {
        qtc.KCoreDirLister_SetRequestMimeTypeWhileListing(@ptrCast(self.ptr), request);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn url(self: KCoreDirLister) QUrl {
        return .{ .ptr = qtc.KCoreDirLister_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `directories` instead
    ///
    pub const Directories = directories;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#directories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn directories(self: KCoreDirLister, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_Directories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KCoreDirLister.directories: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `emitChanges` instead
    ///
    pub const EmitChanges = emitChanges;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#emitChanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn emitChanges(self: KCoreDirLister) void {
        qtc.KCoreDirLister_EmitChanges(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateDirectory` instead
    ///
    pub const UpdateDirectory = updateDirectory;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#updateDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn updateDirectory(self: KCoreDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_UpdateDirectory(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn isFinished(self: KCoreDirLister) bool {
        return qtc.KCoreDirLister_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rootItem` instead
    ///
    pub const RootItem = rootItem;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#rootItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn rootItem(self: KCoreDirLister) KFileItem {
        return .{ .ptr = qtc.KCoreDirLister_RootItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `findByUrl` instead
    ///
    pub const FindByUrl = findByUrl;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#findByUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` _url: QUrl `
    ///
    pub fn findByUrl(self: KCoreDirLister, _url: anytype) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_FindByUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `findByName` instead
    ///
    pub const FindByName = findByName;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#findByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` name: []const u8 `
    ///
    pub fn findByName(self: KCoreDirLister, name: []const u8) KFileItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreDirLister_FindByName(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setNameFilter` instead
    ///
    pub const SetNameFilter = setNameFilter;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setNameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn setNameFilter(self: KCoreDirLister, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KCoreDirLister_SetNameFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### DEPRECATED: Use `nameFilter` instead
    ///
    pub const NameFilter = nameFilter;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#nameFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nameFilter(self: KCoreDirLister, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreDirLister_NameFilter(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreDirLister.nameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMimeFilter` instead
    ///
    pub const SetMimeFilter = setMimeFilter;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeList: []const []const u8 `
    ///
    pub fn setMimeFilter(self: KCoreDirLister, allocator: std.mem.Allocator, mimeList: []const []const u8) void {
        const mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("KCoreDirLister.setMimeFilter: Memory allocation failed");
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

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeExcludeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeList: []const []const u8 `
    ///
    pub fn setMimeExcludeFilter(self: KCoreDirLister, allocator: std.mem.Allocator, mimeList: []const []const u8) void {
        const mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("KCoreDirLister.setMimeExcludeFilter: Memory allocation failed");
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

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clearMimeFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn clearMimeFilter(self: KCoreDirLister) void {
        qtc.KCoreDirLister_ClearMimeFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mimeFilters` instead
    ///
    pub const MimeFilters = mimeFilters;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#mimeFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeFilters(self: KCoreDirLister, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_MimeFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCoreDirLister.mimeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCoreDirLister.mimeFilters: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn items(self: KCoreDirLister) KFileItemList {
        return .{ .ptr = qtc.KCoreDirLister_Items(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `itemsForDir` instead
    ///
    pub const ItemsForDir = itemsForDir;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn itemsForDir(self: KCoreDirLister, dirUrl: anytype) KFileItemList {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return .{ .ptr = qtc.KCoreDirLister_ItemsForDir(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `cachedItemForUrl` instead
    ///
    pub const CachedItemForUrl = cachedItemForUrl;

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

    /// ### DEPRECATED: Use `autoErrorHandlingEnabled` instead
    ///
    pub const AutoErrorHandlingEnabled = autoErrorHandlingEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#autoErrorHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn autoErrorHandlingEnabled(self: KCoreDirLister) bool {
        return qtc.KCoreDirLister_AutoErrorHandlingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoErrorHandlingEnabled` instead
    ///
    pub const SetAutoErrorHandlingEnabled = setAutoErrorHandlingEnabled;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoErrorHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoErrorHandlingEnabled(self: KCoreDirLister, enable: bool) void {
        qtc.KCoreDirLister_SetAutoErrorHandlingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `started` instead
    ///
    pub const Started = started;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn started(self: KCoreDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_Started(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn onStarted(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `completed` instead
    ///
    pub const Completed = completed;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn completed(self: KCoreDirLister) void {
        qtc.KCoreDirLister_Completed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCompleted` instead
    ///
    pub const OnCompleted = onCompleted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister) callconv(.c) void `
    ///
    pub fn onCompleted(self: KCoreDirLister, callback: *const fn (KCoreDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `listingDirCompleted` instead
    ///
    pub const ListingDirCompleted = listingDirCompleted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn listingDirCompleted(self: KCoreDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ListingDirCompleted(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onListingDirCompleted` instead
    ///
    pub const OnListingDirCompleted = onListingDirCompleted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn onListingDirCompleted(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCompleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canceled` instead
    ///
    pub const Canceled = canceled;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn canceled(self: KCoreDirLister) void {
        qtc.KCoreDirLister_Canceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanceled` instead
    ///
    pub const OnCanceled = onCanceled;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister) callconv(.c) void `
    ///
    pub fn onCanceled(self: KCoreDirLister, callback: *const fn (KCoreDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `listingDirCanceled` instead
    ///
    pub const ListingDirCanceled = listingDirCanceled;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn listingDirCanceled(self: KCoreDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ListingDirCanceled(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onListingDirCanceled` instead
    ///
    pub const OnListingDirCanceled = onListingDirCanceled;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn onListingDirCanceled(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCanceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirection` instead
    ///
    pub const Redirection = redirection;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` oldUrl: QUrl `
    ///
    /// ` newUrl: QUrl `
    ///
    pub fn redirection(self: KCoreDirLister, oldUrl: anytype, newUrl: anytype) void {
        comptime _ = @TypeOf(oldUrl)._is_QUrl;
        comptime _ = @TypeOf(newUrl)._is_QUrl;
        qtc.KCoreDirLister_Redirection(@ptrCast(self.ptr), @ptrCast(oldUrl.ptr), @ptrCast(newUrl.ptr));
    }

    /// ### DEPRECATED: Use `onRedirection` instead
    ///
    pub const OnRedirection = onRedirection;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, oldUrl: QUrl, newUrl: QUrl) callconv(.c) void `
    ///
    pub fn onRedirection(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QUrl, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Redirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn clear(self: KCoreDirLister) void {
        qtc.KCoreDirLister_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister) callconv(.c) void `
    ///
    pub fn onClear(self: KCoreDirLister, callback: *const fn (KCoreDirLister) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Clear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearDir` instead
    ///
    pub const ClearDir = clearDir;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    pub fn clearDir(self: KCoreDirLister, dirUrl: anytype) void {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        qtc.KCoreDirLister_ClearDir(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr));
    }

    /// ### DEPRECATED: Use `onClearDir` instead
    ///
    pub const OnClearDir = onClearDir;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, dirUrl: QUrl) callconv(.c) void `
    ///
    pub fn onClearDir(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QUrl) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ClearDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `newItems` instead
    ///
    pub const NewItems = newItems;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` _items: KFileItemList `
    ///
    pub fn newItems(self: KCoreDirLister, _items: anytype) void {
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_NewItems(@ptrCast(self.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onNewItems` instead
    ///
    pub const OnNewItems = onNewItems;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, items: KFileItemList) callconv(.c) void `
    ///
    pub fn onNewItems(self: KCoreDirLister, callback: *const fn (KCoreDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_NewItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsAdded` instead
    ///
    pub const ItemsAdded = itemsAdded;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` directoryUrl: QUrl `
    ///
    /// ` _items: KFileItemList `
    ///
    pub fn itemsAdded(self: KCoreDirLister, directoryUrl: anytype, _items: anytype) void {
        comptime _ = @TypeOf(directoryUrl)._is_QUrl;
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsAdded(@ptrCast(self.ptr), @ptrCast(directoryUrl.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onItemsAdded` instead
    ///
    pub const OnItemsAdded = onItemsAdded;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, directoryUrl: QUrl, items: KFileItemList) callconv(.c) void `
    ///
    pub fn onItemsAdded(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QUrl, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsFilteredByMime` instead
    ///
    pub const ItemsFilteredByMime = itemsFilteredByMime;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` _items: KFileItemList `
    ///
    pub fn itemsFilteredByMime(self: KCoreDirLister, _items: anytype) void {
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsFilteredByMime(@ptrCast(self.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onItemsFilteredByMime` instead
    ///
    pub const OnItemsFilteredByMime = onItemsFilteredByMime;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, items: KFileItemList) callconv(.c) void `
    ///
    pub fn onItemsFilteredByMime(self: KCoreDirLister, callback: *const fn (KCoreDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsFilteredByMime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemsDeleted` instead
    ///
    pub const ItemsDeleted = itemsDeleted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` _items: KFileItemList `
    ///
    pub fn itemsDeleted(self: KCoreDirLister, _items: anytype) void {
        comptime _ = @TypeOf(_items)._is_KFileItemList;
        qtc.KCoreDirLister_ItemsDeleted(@ptrCast(self.ptr), @ptrCast(_items.ptr));
    }

    /// ### DEPRECATED: Use `onItemsDeleted` instead
    ///
    pub const OnItemsDeleted = onItemsDeleted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, items: KFileItemList) callconv(.c) void `
    ///
    pub fn onItemsDeleted(self: KCoreDirLister, callback: *const fn (KCoreDirLister, KFileItemList) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsDeleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn infoMessage(self: KCoreDirLister, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KCoreDirLister_InfoMessage(@ptrCast(self.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `onInfoMessage` instead
    ///
    pub const OnInfoMessage = onInfoMessage;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, msg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInfoMessage(self: KCoreDirLister, callback: *const fn (KCoreDirLister, [*:0]const u8) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `percent` instead
    ///
    pub const Percent = percent;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` _percent: i32 `
    ///
    pub fn percent(self: KCoreDirLister, _percent: i32) void {
        qtc.KCoreDirLister_Percent(@ptrCast(self.ptr), @bitCast(_percent));
    }

    /// ### DEPRECATED: Use `onPercent` instead
    ///
    pub const OnPercent = onPercent;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, percent: i32) callconv(.c) void `
    ///
    pub fn onPercent(self: KCoreDirLister, callback: *const fn (KCoreDirLister, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Percent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` size: usize `
    ///
    pub fn totalSize(self: KCoreDirLister, size: usize) void {
        qtc.KCoreDirLister_TotalSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onTotalSize` instead
    ///
    pub const OnTotalSize = onTotalSize;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, size: usize) callconv(.c) void `
    ///
    pub fn onTotalSize(self: KCoreDirLister, callback: *const fn (KCoreDirLister, usize) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` size: usize `
    ///
    pub fn processedSize(self: KCoreDirLister, size: usize) void {
        qtc.KCoreDirLister_ProcessedSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onProcessedSize` instead
    ///
    pub const OnProcessedSize = onProcessedSize;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, size: usize) callconv(.c) void `
    ///
    pub fn onProcessedSize(self: KCoreDirLister, callback: *const fn (KCoreDirLister, usize) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` bytes_per_second: i32 `
    ///
    pub fn speed(self: KCoreDirLister, bytes_per_second: i32) void {
        qtc.KCoreDirLister_Speed(@ptrCast(self.ptr), @bitCast(bytes_per_second));
    }

    /// ### DEPRECATED: Use `onSpeed` instead
    ///
    pub const OnSpeed = onSpeed;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, bytes_per_second: i32) callconv(.c) void `
    ///
    pub fn onSpeed(self: KCoreDirLister, callback: *const fn (KCoreDirLister, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `jobError` instead
    ///
    pub const JobError = jobError;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn jobError(self: KCoreDirLister, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KCoreDirLister_JobError(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onJobError` instead
    ///
    pub const OnJobError = onJobError;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, job: KIO__Job) callconv(.c) void `
    ///
    pub fn onJobError(self: KCoreDirLister, callback: *const fn (KCoreDirLister, KIO__Job) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_JobError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `jobStarted` instead
    ///
    pub const JobStarted = jobStarted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#jobStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` param1: KIO__ListJob `
    ///
    pub fn jobStarted(self: KCoreDirLister, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ListJob;
        qtc.KCoreDirLister_JobStarted(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onJobStarted` instead
    ///
    pub const OnJobStarted = onJobStarted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#jobStarted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, param1: KIO__ListJob) callconv(.c) void `
    ///
    pub fn onJobStarted(self: KCoreDirLister, callback: *const fn (KCoreDirLister, KIO__ListJob) callconv(.c) void) void {
        qtc.KCoreDirLister_OnJobStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJobStarted` instead
    ///
    pub const SuperJobStarted = superJobStarted;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#jobStarted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` param1: KIO__ListJob `
    ///
    pub fn superJobStarted(self: KCoreDirLister, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__ListJob;
        qtc.KCoreDirLister_SuperJobStarted(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreDirLister.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreDirLister.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `openUrl2` instead
    ///
    pub const OpenUrl2 = openUrl2;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    /// ` flags: flag of kcoredirlister_enums.OpenUrlFlag `
    ///
    pub fn openUrl2(self: KCoreDirLister, dirUrl: anytype, flags: i32) bool {
        comptime _ = @TypeOf(dirUrl)._is_QUrl;
        return qtc.KCoreDirLister_OpenUrl2(@ptrCast(self.ptr), @ptrCast(dirUrl.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `items1` instead
    ///
    pub const Items1 = items1;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` which: kcoredirlister_enums.WhichItems `
    ///
    pub fn items1(self: KCoreDirLister, which: i32) KFileItemList {
        return .{ .ptr = qtc.KCoreDirLister_Items1(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `itemsForDir2` instead
    ///
    pub const ItemsForDir2 = itemsForDir2;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCoreDirLister `
    ///
    /// ` dirUrl: QUrl `
    ///
    /// ` which: kcoredirlister_enums.WhichItems `
    ///
    pub fn itemsForDir2(self: KCoreDirLister, dirUrl: anytype, which: i32) KFileItemList {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KCoreDirLister, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreDirLister.objectName: Memory allocation failed");
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
    /// ` self: KCoreDirLister `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KCoreDirLister, name: []const u8) void {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn isWidgetType(self: KCoreDirLister) bool {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn isWindowType(self: KCoreDirLister) bool {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn isQuickItemType(self: KCoreDirLister) bool {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn signalsBlocked(self: KCoreDirLister) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KCoreDirLister, b: bool) bool {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn thread(self: KCoreDirLister) QThread {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KCoreDirLister, _thread: anytype) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KCoreDirLister, interval: i32) i32 {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KCoreDirLister, time: i64) i32 {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KCoreDirLister, id: i32) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KCoreDirLister, id: i32) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KCoreDirLister, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KCoreDirLister.children: Memory allocation failed");
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KCoreDirLister, _parent: anytype) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KCoreDirLister, filterObj: anytype) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KCoreDirLister, obj: anytype) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KCoreDirLister, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn disconnect3(self: KCoreDirLister) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KCoreDirLister, receiver: anytype) bool {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn dumpObjectTree(self: KCoreDirLister) void {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn dumpObjectInfo(self: KCoreDirLister) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KCoreDirLister, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KCoreDirLister, name: [:0]const u8) QVariant {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KCoreDirLister, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KCoreDirLister.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCoreDirLister.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCoreDirLister `
    ///
    pub fn bindingStorage(self: KCoreDirLister) QBindingStorage {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn bindingStorage2(self: KCoreDirLister) QBindingStorage {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn destroyed(self: KCoreDirLister) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KCoreDirLister, callback: *const fn (KCoreDirLister) callconv(.c) void) void {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn parent(self: KCoreDirLister) QObject {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KCoreDirLister, classname: [:0]const u8) bool {
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
    /// ` self: KCoreDirLister `
    ///
    pub fn deleteLater(self: KCoreDirLister) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KCoreDirLister, interval: i32, timerType: i32) i32 {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KCoreDirLister, time: i64, timerType: i32) i32 {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KCoreDirLister, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KCoreDirLister, signal: [:0]const u8) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KCoreDirLister, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KCoreDirLister, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KCoreDirLister, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KCoreDirLister, param1: anytype) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QObject) callconv(.c) void) void {
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KCoreDirLister, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreDirLister_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KCoreDirLister, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreDirLister_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QEvent) callconv(.c) bool) void {
        qtc.KCoreDirLister_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KCoreDirLister, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreDirLister_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KCoreDirLister, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCoreDirLister_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCoreDirLister_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KCoreDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCoreDirLister_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KCoreDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCoreDirLister_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QTimerEvent) callconv(.c) void) void {
        qtc.KCoreDirLister_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KCoreDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCoreDirLister_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KCoreDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCoreDirLister_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QChildEvent) callconv(.c) void) void {
        qtc.KCoreDirLister_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KCoreDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCoreDirLister_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KCoreDirLister, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCoreDirLister_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QEvent) callconv(.c) void) void {
        qtc.KCoreDirLister_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KCoreDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreDirLister_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KCoreDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreDirLister_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreDirLister_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KCoreDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreDirLister_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KCoreDirLister, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCoreDirLister_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QMetaMethod) callconv(.c) void) void {
        qtc.KCoreDirLister_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    pub fn sender(self: KCoreDirLister) QObject {
        return .{ .ptr = qtc.KCoreDirLister_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreDirLister `
    ///
    pub fn superSender(self: KCoreDirLister) QObject {
        return .{ .ptr = qtc.KCoreDirLister_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KCoreDirLister, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCoreDirLister_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    pub fn senderSignalIndex(self: KCoreDirLister) i32 {
        return qtc.KCoreDirLister_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    pub fn superSenderSignalIndex(self: KCoreDirLister) i32 {
        return qtc.KCoreDirLister_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KCoreDirLister, callback: *const fn () callconv(.c) i32) void {
        qtc.KCoreDirLister_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KCoreDirLister, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreDirLister_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KCoreDirLister, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreDirLister_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KCoreDirLister, callback: *const fn (KCoreDirLister, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCoreDirLister_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KCoreDirLister, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreDirLister_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KCoreDirLister, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCoreDirLister_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCoreDirLister`
    ///
    /// ` callback: *const fn (self: KCoreDirLister, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KCoreDirLister, callback: *const fn (KCoreDirLister, QMetaMethod) callconv(.c) bool) void {
        qtc.KCoreDirLister_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCoreDirLister `
    ///
    /// ` callback: *const fn (self: KCoreDirLister, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KCoreDirLister, callback: *const fn (KCoreDirLister, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#dtor.KCoreDirLister)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCoreDirLister `
    ///
    pub fn delete(self: KCoreDirLister) void {
        qtc.KCoreDirLister_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcoredirlister.html#public-types)
pub const enums = struct {
    pub const OpenUrlFlag = enum(i32) {
        pub const NoFlags: i32 = 0;
        pub const Keep: i32 = 1;
        pub const Reload: i32 = 2;
    };

    pub const WhichItems = enum(i32) {
        pub const AllItems: i32 = 0;
        pub const FilteredItems: i32 = 1;
    };
};
