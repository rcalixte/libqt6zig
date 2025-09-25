const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcoredirlister_enums = @import("libkcoredirlister.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kdirlister.html
pub const kdirlister = struct {
    /// New constructs a new KDirLister object.
    ///
    ///
    pub fn New() QtC.KDirLister {
        return qtc.KDirLister_new();
    }

    /// New2 constructs a new KDirLister object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KDirLister {
        return qtc.KDirLister_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KDirLister_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KDirLister, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirLister_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KDirLister_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KDirLister_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KDirLister_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KDirLister_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdirlister.html#autoErrorHandlingEnabled)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn AutoErrorHandlingEnabled(self: ?*anyopaque) bool {
        return qtc.KDirLister_AutoErrorHandlingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdirlister.html#setMainWindow)
    ///
    /// ``` self: QtC.KDirLister, window: QtC.QWidget ```
    pub fn SetMainWindow(self: ?*anyopaque, window: ?*anyopaque) void {
        qtc.KDirLister_SetMainWindow(@ptrCast(self), @ptrCast(window));
    }

    /// [Qt documentation](https://api.kde.org/kdirlister.html#mainWindow)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn MainWindow(self: ?*anyopaque) QtC.QWidget {
        return qtc.KDirLister_MainWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdirlister.html#jobStarted)
    ///
    /// ``` self: QtC.KDirLister, param1: QtC.KIO__ListJob ```
    pub fn JobStarted(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KDirLister_JobStarted(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kdirlister.html#jobStarted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, param1: QtC.KIO__ListJob) callconv(.c) void ```
    pub fn OnJobStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirLister_OnJobStarted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdirlister.html#jobStarted)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDirLister, param1: QtC.KIO__ListJob ```
    pub fn QBaseJobStarted(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KDirLister_QBaseJobStarted(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KDirLister_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KDirLister_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn OpenUrl(self: ?*anyopaque, dirUrl: ?*anyopaque) bool {
        return qtc.KCoreDirLister_OpenUrl(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Stop(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn Stop2(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_Stop2(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#forgetDirs)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn ForgetDirs(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ForgetDirs(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#delayedMimeTypes)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn DelayedMimeTypes(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_DelayedMimeTypes(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setDelayedMimeTypes)
    ///
    /// ``` self: QtC.KDirLister, delayedMimeTypes: bool ```
    pub fn SetDelayedMimeTypes(self: ?*anyopaque, delayedMimeTypes: bool) void {
        qtc.KCoreDirLister_SetDelayedMimeTypes(@ptrCast(self), delayedMimeTypes);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#autoUpdate)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn AutoUpdate(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_AutoUpdate(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setAutoUpdate)
    ///
    /// ``` self: QtC.KDirLister, enable: bool ```
    pub fn SetAutoUpdate(self: ?*anyopaque, enable: bool) void {
        qtc.KCoreDirLister_SetAutoUpdate(@ptrCast(self), enable);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#showHiddenFiles)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn ShowHiddenFiles(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_ShowHiddenFiles(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setShowHiddenFiles)
    ///
    /// ``` self: QtC.KDirLister, showHiddenFiles: bool ```
    pub fn SetShowHiddenFiles(self: ?*anyopaque, showHiddenFiles: bool) void {
        qtc.KCoreDirLister_SetShowHiddenFiles(@ptrCast(self), showHiddenFiles);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#dirOnlyMode)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn DirOnlyMode(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_DirOnlyMode(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setDirOnlyMode)
    ///
    /// ``` self: QtC.KDirLister, dirsOnly: bool ```
    pub fn SetDirOnlyMode(self: ?*anyopaque, dirsOnly: bool) void {
        qtc.KCoreDirLister_SetDirOnlyMode(@ptrCast(self), dirsOnly);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#requestMimeTypeWhileListing)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn RequestMimeTypeWhileListing(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_RequestMimeTypeWhileListing(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setRequestMimeTypeWhileListing)
    ///
    /// ``` self: QtC.KDirLister, request: bool ```
    pub fn SetRequestMimeTypeWhileListing(self: ?*anyopaque, request: bool) void {
        qtc.KCoreDirLister_SetRequestMimeTypeWhileListing(@ptrCast(self), request);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#url)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KCoreDirLister_Url(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#directories)
    ///
    /// ``` self: QtC.KDirLister, allocator: std.mem.Allocator ```
    pub fn Directories(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_Directories(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kdirlister.Directories: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#emitChanges)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn EmitChanges(self: ?*anyopaque) void {
        qtc.KCoreDirLister_EmitChanges(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#updateDirectory)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn UpdateDirectory(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_UpdateDirectory(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#isFinished)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_IsFinished(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#rootItem)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn RootItem(self: ?*anyopaque) QtC.KFileItem {
        return qtc.KCoreDirLister_RootItem(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#findByUrl)
    ///
    /// ``` self: QtC.KDirLister, url: QtC.QUrl ```
    pub fn FindByUrl(self: ?*anyopaque, url: ?*anyopaque) QtC.KFileItem {
        return qtc.KCoreDirLister_FindByUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#findByName)
    ///
    /// ``` self: QtC.KDirLister, name: []const u8 ```
    pub fn FindByName(self: ?*anyopaque, name: []const u8) QtC.KFileItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreDirLister_FindByName(@ptrCast(self), name_str);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setNameFilter)
    ///
    /// ``` self: QtC.KDirLister, filter: []const u8 ```
    pub fn SetNameFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KCoreDirLister_SetNameFilter(@ptrCast(self), filter_str);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#nameFilter)
    ///
    /// ``` self: QtC.KDirLister, allocator: std.mem.Allocator ```
    pub fn NameFilter(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCoreDirLister_NameFilter(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.NameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setMimeFilter)
    ///
    /// ``` self: QtC.KDirLister, mimeList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetMimeFilter(self: ?*anyopaque, mimeList: [][]const u8, allocator: std.mem.Allocator) void {
        var mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("kdirlister.SetMimeFilter: Memory allocation failed");
        defer allocator.free(mimeList_arr);
        for (mimeList, 0..mimeList.len) |item, i| {
            mimeList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const mimeList_list = qtc.libqt_list{
            .len = mimeList.len,
            .data = mimeList_arr.ptr,
        };
        qtc.KCoreDirLister_SetMimeFilter(@ptrCast(self), mimeList_list);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setMimeExcludeFilter)
    ///
    /// ``` self: QtC.KDirLister, mimeList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetMimeExcludeFilter(self: ?*anyopaque, mimeList: [][]const u8, allocator: std.mem.Allocator) void {
        var mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("kdirlister.SetMimeExcludeFilter: Memory allocation failed");
        defer allocator.free(mimeList_arr);
        for (mimeList, 0..mimeList.len) |item, i| {
            mimeList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const mimeList_list = qtc.libqt_list{
            .len = mimeList.len,
            .data = mimeList_arr.ptr,
        };
        qtc.KCoreDirLister_SetMimeExcludeFilter(@ptrCast(self), mimeList_list);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clearMimeFilter)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn ClearMimeFilter(self: ?*anyopaque) void {
        qtc.KCoreDirLister_ClearMimeFilter(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#mimeFilters)
    ///
    /// ``` self: QtC.KDirLister, allocator: std.mem.Allocator ```
    pub fn MimeFilters(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_MimeFilters(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Items(self: ?*anyopaque) QtC.KFileItemList {
        return qtc.KCoreDirLister_Items(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn ItemsForDir(self: ?*anyopaque, dirUrl: ?*anyopaque) QtC.KFileItemList {
        return qtc.KCoreDirLister_ItemsForDir(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#cachedItemForUrl)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn CachedItemForUrl(url: ?*anyopaque) QtC.KFileItem {
        return qtc.KCoreDirLister_CachedItemForUrl(@ptrCast(url));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setAutoErrorHandlingEnabled)
    ///
    /// ``` self: QtC.KDirLister, enable: bool ```
    pub fn SetAutoErrorHandlingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KCoreDirLister_SetAutoErrorHandlingEnabled(@ptrCast(self), enable);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn Started(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_Started(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Completed(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Completed(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister) callconv(.c) void ```
    pub fn OnCompleted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Completed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn ListingDirCompleted(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ListingDirCompleted(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnListingDirCompleted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCompleted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Canceled(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Canceled(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister) callconv(.c) void ```
    pub fn OnCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Canceled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn ListingDirCanceled(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ListingDirCanceled(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnListingDirCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCanceled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ``` self: QtC.KDirLister, oldUrl: QtC.QUrl, newUrl: QtC.QUrl ```
    pub fn Redirection(self: ?*anyopaque, oldUrl: ?*anyopaque, newUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_Redirection(@ptrCast(self), @ptrCast(oldUrl), @ptrCast(newUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, oldUrl: QtC.QUrl, newUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnRedirection(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Redirection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Clear(@ptrCast(self));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister) callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Clear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl ```
    pub fn ClearDir(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ClearDir(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnClearDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ClearDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ``` self: QtC.KDirLister, items: QtC.KFileItemList ```
    pub fn NewItems(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_NewItems(@ptrCast(self), @ptrCast(items));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnNewItems(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_NewItems(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ``` self: QtC.KDirLister, directoryUrl: QtC.QUrl, items: QtC.KFileItemList ```
    pub fn ItemsAdded(self: ?*anyopaque, directoryUrl: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_ItemsAdded(@ptrCast(self), @ptrCast(directoryUrl), @ptrCast(items));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, directoryUrl: QtC.QUrl, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnItemsAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ``` self: QtC.KDirLister, items: QtC.KFileItemList ```
    pub fn ItemsFilteredByMime(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_ItemsFilteredByMime(@ptrCast(self), @ptrCast(items));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnItemsFilteredByMime(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsFilteredByMime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ``` self: QtC.KDirLister, items: QtC.KFileItemList ```
    pub fn ItemsDeleted(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_ItemsDeleted(@ptrCast(self), @ptrCast(items));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnItemsDeleted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsDeleted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ``` self: QtC.KDirLister, msg: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KCoreDirLister_InfoMessage(@ptrCast(self), msg_str);
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, msg: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_InfoMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ``` self: QtC.KDirLister, percent: i32 ```
    pub fn Percent(self: ?*anyopaque, percent: i32) void {
        qtc.KCoreDirLister_Percent(@ptrCast(self), @intCast(percent));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, percent: i32) callconv(.c) void ```
    pub fn OnPercent(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Percent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ``` self: QtC.KDirLister, size: u64 ```
    pub fn TotalSize(self: ?*anyopaque, size: u64) void {
        qtc.KCoreDirLister_TotalSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, size: u64) callconv(.c) void ```
    pub fn OnTotalSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_TotalSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ``` self: QtC.KDirLister, size: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, size: u64) void {
        qtc.KCoreDirLister_ProcessedSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, size: u64) callconv(.c) void ```
    pub fn OnProcessedSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ProcessedSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ``` self: QtC.KDirLister, bytes_per_second: i32 ```
    pub fn Speed(self: ?*anyopaque, bytes_per_second: i32) void {
        qtc.KCoreDirLister_Speed(@ptrCast(self), @intCast(bytes_per_second));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, bytes_per_second: i32) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Speed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ``` self: QtC.KDirLister, job: QtC.KIO__Job ```
    pub fn JobError(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KCoreDirLister_JobError(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, job: QtC.KIO__Job) callconv(.c) void ```
    pub fn OnJobError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_JobError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl, flags: flag of kcoredirlister_enums.OpenUrlFlag ```
    pub fn OpenUrl2(self: ?*anyopaque, dirUrl: ?*anyopaque, flags: i32) bool {
        return qtc.KCoreDirLister_OpenUrl2(@ptrCast(self), @ptrCast(dirUrl), @intCast(flags));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ``` self: QtC.KDirLister, which: kcoredirlister_enums.WhichItems ```
    pub fn Items1(self: ?*anyopaque, which: i32) QtC.KFileItemList {
        return qtc.KCoreDirLister_Items1(@ptrCast(self), @intCast(which));
    }

    /// Inherited from KCoreDirLister
    ///
    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ``` self: QtC.KDirLister, dirUrl: QtC.QUrl, which: kcoredirlister_enums.WhichItems ```
    pub fn ItemsForDir2(self: ?*anyopaque, dirUrl: ?*anyopaque, which: i32) QtC.KFileItemList {
        return qtc.KCoreDirLister_ItemsForDir2(@ptrCast(self), @ptrCast(dirUrl), @intCast(which));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KDirLister, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirlister.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KDirLister, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KDirLister, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KDirLister, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KDirLister, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KDirLister, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KDirLister, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KDirLister, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kdirlister.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KDirLister, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KDirLister, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KDirLister, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KDirLister, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KDirLister, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KDirLister, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KDirLister, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KDirLister, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KDirLister, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KDirLister, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KDirLister, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirLister, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirLister_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirLister_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirLister_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirLister_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirLister_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirLister_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirLister_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirLister_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirLister_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirLister_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirLister_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirLister_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirLister_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirLister_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirLister_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirLister_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirLister_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirLister_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirLister_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirLister_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirLister_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KDirLister_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KDirLister_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KDirLister_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KDirLister_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KDirLister_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirLister_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirLister_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirLister_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirLister_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KDirLister_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KDirLister_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirLister_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirLister, callback: *const fn (self: QtC.KDirLister, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdirlister.html#dtor.KDirLister)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KDirLister ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KDirLister_Delete(@ptrCast(self));
    }
};
