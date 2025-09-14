const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcoredirlister_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_qtckfileitem_qtckfileitem = extern struct { first: QtC.KFileItem, second: QtC.KFileItem };

/// https://api.kde.org/kcoredirlister.html
pub const kcoredirlister = struct {
    /// New constructs a new KCoreDirLister object.
    ///
    ///
    pub fn New() QtC.KCoreDirLister {
        return qtc.KCoreDirLister_new();
    }

    /// New2 constructs a new KCoreDirLister object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KCoreDirLister {
        return qtc.KCoreDirLister_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KCoreDirLister_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KCoreDirLister, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCoreDirLister_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KCoreDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCoreDirLister_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KCoreDirLister_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KCoreDirLister, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCoreDirLister_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KCoreDirLister_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoredirlister.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn OpenUrl(self: ?*anyopaque, dirUrl: ?*anyopaque) bool {
        return qtc.KCoreDirLister_OpenUrl(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#stop)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn Stop2(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_Stop2(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#forgetDirs)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn ForgetDirs(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ForgetDirs(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#delayedMimeTypes)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn DelayedMimeTypes(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_DelayedMimeTypes(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setDelayedMimeTypes)
    ///
    /// ``` self: QtC.KCoreDirLister, delayedMimeTypes: bool ```
    pub fn SetDelayedMimeTypes(self: ?*anyopaque, delayedMimeTypes: bool) void {
        qtc.KCoreDirLister_SetDelayedMimeTypes(@ptrCast(self), delayedMimeTypes);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#autoUpdate)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn AutoUpdate(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_AutoUpdate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setAutoUpdate)
    ///
    /// ``` self: QtC.KCoreDirLister, enable: bool ```
    pub fn SetAutoUpdate(self: ?*anyopaque, enable: bool) void {
        qtc.KCoreDirLister_SetAutoUpdate(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#showHiddenFiles)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn ShowHiddenFiles(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_ShowHiddenFiles(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setShowHiddenFiles)
    ///
    /// ``` self: QtC.KCoreDirLister, showHiddenFiles: bool ```
    pub fn SetShowHiddenFiles(self: ?*anyopaque, showHiddenFiles: bool) void {
        qtc.KCoreDirLister_SetShowHiddenFiles(@ptrCast(self), showHiddenFiles);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#dirOnlyMode)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn DirOnlyMode(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_DirOnlyMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setDirOnlyMode)
    ///
    /// ``` self: QtC.KCoreDirLister, dirsOnly: bool ```
    pub fn SetDirOnlyMode(self: ?*anyopaque, dirsOnly: bool) void {
        qtc.KCoreDirLister_SetDirOnlyMode(@ptrCast(self), dirsOnly);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#requestMimeTypeWhileListing)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn RequestMimeTypeWhileListing(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_RequestMimeTypeWhileListing(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setRequestMimeTypeWhileListing)
    ///
    /// ``` self: QtC.KCoreDirLister, request: bool ```
    pub fn SetRequestMimeTypeWhileListing(self: ?*anyopaque, request: bool) void {
        qtc.KCoreDirLister_SetRequestMimeTypeWhileListing(@ptrCast(self), request);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#url)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KCoreDirLister_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#directories)
    ///
    /// ``` self: QtC.KCoreDirLister, allocator: std.mem.Allocator ```
    pub fn Directories(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_Directories(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kcoredirlister.Directories: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#emitChanges)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn EmitChanges(self: ?*anyopaque) void {
        qtc.KCoreDirLister_EmitChanges(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#updateDirectory)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn UpdateDirectory(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_UpdateDirectory(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#isFinished)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#rootItem)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn RootItem(self: ?*anyopaque) QtC.KFileItem {
        return qtc.KCoreDirLister_RootItem(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#findByUrl)
    ///
    /// ``` self: QtC.KCoreDirLister, url: QtC.QUrl ```
    pub fn FindByUrl(self: ?*anyopaque, url: ?*anyopaque) QtC.KFileItem {
        return qtc.KCoreDirLister_FindByUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#findByName)
    ///
    /// ``` self: QtC.KCoreDirLister, name: []const u8 ```
    pub fn FindByName(self: ?*anyopaque, name: []const u8) QtC.KFileItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreDirLister_FindByName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setNameFilter)
    ///
    /// ``` self: QtC.KCoreDirLister, filter: []const u8 ```
    pub fn SetNameFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KCoreDirLister_SetNameFilter(@ptrCast(self), filter_str);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#nameFilter)
    ///
    /// ``` self: QtC.KCoreDirLister, allocator: std.mem.Allocator ```
    pub fn NameFilter(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCoreDirLister_NameFilter(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoredirlister.NameFilter: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setMimeFilter)
    ///
    /// ``` self: QtC.KCoreDirLister, mimeList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetMimeFilter(self: ?*anyopaque, mimeList: [][]const u8, allocator: std.mem.Allocator) void {
        var mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("kcoredirlister.SetMimeFilter: Memory allocation failed");
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

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setMimeExcludeFilter)
    ///
    /// ``` self: QtC.KCoreDirLister, mimeList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetMimeExcludeFilter(self: ?*anyopaque, mimeList: [][]const u8, allocator: std.mem.Allocator) void {
        var mimeList_arr = allocator.alloc(qtc.libqt_string, mimeList.len) catch @panic("kcoredirlister.SetMimeExcludeFilter: Memory allocation failed");
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

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clearMimeFilter)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn ClearMimeFilter(self: ?*anyopaque) void {
        qtc.KCoreDirLister_ClearMimeFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#mimeFilters)
    ///
    /// ``` self: QtC.KCoreDirLister, allocator: std.mem.Allocator ```
    pub fn MimeFilters(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KCoreDirLister_MimeFilters(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcoredirlister.MimeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcoredirlister.MimeFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Items(self: ?*anyopaque) QtC.KFileItemList {
        return qtc.KCoreDirLister_Items(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn ItemsForDir(self: ?*anyopaque, dirUrl: ?*anyopaque) QtC.KFileItemList {
        return qtc.KCoreDirLister_ItemsForDir(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#cachedItemForUrl)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn CachedItemForUrl(url: ?*anyopaque) QtC.KFileItem {
        return qtc.KCoreDirLister_CachedItemForUrl(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#autoErrorHandlingEnabled)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn AutoErrorHandlingEnabled(self: ?*anyopaque) bool {
        return qtc.KCoreDirLister_AutoErrorHandlingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#setAutoErrorHandlingEnabled)
    ///
    /// ``` self: QtC.KCoreDirLister, enable: bool ```
    pub fn SetAutoErrorHandlingEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KCoreDirLister_SetAutoErrorHandlingEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn Started(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_Started(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#started)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnStarted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Started(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Completed(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Completed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#completed)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister) callconv(.c) void ```
    pub fn OnCompleted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Completed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn ListingDirCompleted(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ListingDirCompleted(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnListingDirCompleted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCompleted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Canceled(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Canceled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#canceled)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister) callconv(.c) void ```
    pub fn OnCanceled(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Canceled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn ListingDirCanceled(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ListingDirCanceled(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnListingDirCanceled(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ListingDirCanceled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ``` self: QtC.KCoreDirLister, oldUrl: QtC.QUrl, newUrl: QtC.QUrl ```
    pub fn Redirection(self: ?*anyopaque, oldUrl: ?*anyopaque, newUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_Redirection(@ptrCast(self), @ptrCast(oldUrl), @ptrCast(newUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#redirection)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, oldUrl: QtC.QUrl, newUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnRedirection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Redirection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clear)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister) callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Clear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl ```
    pub fn ClearDir(self: ?*anyopaque, dirUrl: ?*anyopaque) void {
        qtc.KCoreDirLister_ClearDir(@ptrCast(self), @ptrCast(dirUrl));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#clearDir)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, dirUrl: QtC.QUrl) callconv(.c) void ```
    pub fn OnClearDir(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ClearDir(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ``` self: QtC.KCoreDirLister, items: QtC.KFileItemList ```
    pub fn NewItems(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_NewItems(@ptrCast(self), @ptrCast(items));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#newItems)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnNewItems(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_NewItems(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ``` self: QtC.KCoreDirLister, directoryUrl: QtC.QUrl, items: QtC.KFileItemList ```
    pub fn ItemsAdded(self: ?*anyopaque, directoryUrl: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_ItemsAdded(@ptrCast(self), @ptrCast(directoryUrl), @ptrCast(items));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsAdded)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, directoryUrl: QtC.QUrl, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnItemsAdded(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ``` self: QtC.KCoreDirLister, items: QtC.KFileItemList ```
    pub fn ItemsFilteredByMime(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_ItemsFilteredByMime(@ptrCast(self), @ptrCast(items));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnItemsFilteredByMime(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsFilteredByMime(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ``` self: QtC.KCoreDirLister, items: QtC.KFileItemList ```
    pub fn ItemsDeleted(self: ?*anyopaque, items: ?*anyopaque) void {
        qtc.KCoreDirLister_ItemsDeleted(@ptrCast(self), @ptrCast(items));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsDeleted)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, items: QtC.KFileItemList) callconv(.c) void ```
    pub fn OnItemsDeleted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ItemsDeleted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#refreshItems)
    ///
    /// ``` self: QtC.KCoreDirLister, items: []struct_qtckfileitem_qtckfileitem ```
    pub fn RefreshItems(self: ?*anyopaque, items: []struct_qtckfileitem_qtckfileitem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items.ptr,
        };
        qtc.KCoreDirLister_RefreshItems(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ``` self: QtC.KCoreDirLister, msg: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KCoreDirLister_InfoMessage(@ptrCast(self), msg_str);
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#infoMessage)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, msg: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_InfoMessage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ``` self: QtC.KCoreDirLister, percent: i32 ```
    pub fn Percent(self: ?*anyopaque, percent: i32) void {
        qtc.KCoreDirLister_Percent(@ptrCast(self), @intCast(percent));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#percent)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, percent: i32) callconv(.c) void ```
    pub fn OnPercent(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Percent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ``` self: QtC.KCoreDirLister, size: u64 ```
    pub fn TotalSize(self: ?*anyopaque, size: u64) void {
        qtc.KCoreDirLister_TotalSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#totalSize)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, size: u64) callconv(.c) void ```
    pub fn OnTotalSize(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_TotalSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ``` self: QtC.KCoreDirLister, size: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, size: u64) void {
        qtc.KCoreDirLister_ProcessedSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#processedSize)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, size: u64) callconv(.c) void ```
    pub fn OnProcessedSize(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_ProcessedSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ``` self: QtC.KCoreDirLister, bytes_per_second: i32 ```
    pub fn Speed(self: ?*anyopaque, bytes_per_second: i32) void {
        qtc.KCoreDirLister_Speed(@ptrCast(self), @intCast(bytes_per_second));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#speed)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, bytes_per_second: i32) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_Speed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ``` self: QtC.KCoreDirLister, job: QtC.KIO__Job ```
    pub fn JobError(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KCoreDirLister_JobError(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#jobError)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, job: QtC.KIO__Job) callconv(.c) void ```
    pub fn OnJobError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_Connect_JobError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#jobStarted)
    ///
    /// ``` self: QtC.KCoreDirLister, param1: QtC.KIO__ListJob ```
    pub fn JobStarted(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCoreDirLister_JobStarted(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#jobStarted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, param1: QtC.KIO__ListJob) callconv(.c) void ```
    pub fn OnJobStarted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_OnJobStarted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#jobStarted)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCoreDirLister, param1: QtC.KIO__ListJob ```
    pub fn QBaseJobStarted(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCoreDirLister_QBaseJobStarted(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCoreDirLister_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoredirlister.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCoreDirLister_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoredirlister.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#openUrl)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl, flags: flag of kcoredirlister_enums.OpenUrlFlag ```
    pub fn OpenUrl2(self: ?*anyopaque, dirUrl: ?*anyopaque, flags: i32) bool {
        return qtc.KCoreDirLister_OpenUrl2(@ptrCast(self), @ptrCast(dirUrl), @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#items)
    ///
    /// ``` self: QtC.KCoreDirLister, which: kcoredirlister_enums.WhichItems ```
    pub fn Items1(self: ?*anyopaque, which: i32) QtC.KFileItemList {
        return qtc.KCoreDirLister_Items1(@ptrCast(self), @intCast(which));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#itemsForDir)
    ///
    /// ``` self: QtC.KCoreDirLister, dirUrl: QtC.QUrl, which: kcoredirlister_enums.WhichItems ```
    pub fn ItemsForDir2(self: ?*anyopaque, dirUrl: ?*anyopaque, which: i32) QtC.KFileItemList {
        return qtc.KCoreDirLister_ItemsForDir2(@ptrCast(self), @ptrCast(dirUrl), @intCast(which));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KCoreDirLister, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoredirlister.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KCoreDirLister, name: []const u8 ```
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
    /// ``` self: QtC.KCoreDirLister ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KCoreDirLister, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCoreDirLister, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCoreDirLister, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCoreDirLister, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCoreDirLister, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KCoreDirLister, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kcoredirlister.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KCoreDirLister, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KCoreDirLister, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KCoreDirLister, obj: QtC.QObject ```
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
    /// ``` self: QtC.KCoreDirLister, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KCoreDirLister ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KCoreDirLister, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KCoreDirLister, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KCoreDirLister, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcoredirlister.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcoredirlister.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KCoreDirLister, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCoreDirLister, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCoreDirLister, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KCoreDirLister, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCoreDirLister, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreDirLister_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreDirLister_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreDirLister_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreDirLister_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCoreDirLister_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreDirLister_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreDirLister_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreDirLister_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreDirLister_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreDirLister_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreDirLister_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCoreDirLister_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreDirLister_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreDirLister_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreDirLister_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCoreDirLister_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCoreDirLister_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCoreDirLister_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCoreDirLister_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KCoreDirLister_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCoreDirLister_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCoreDirLister_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KCoreDirLister_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreDirLister_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCoreDirLister_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCoreDirLister_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCoreDirLister_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCoreDirLister_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCoreDirLister_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCoreDirLister, slot: fn (self: QtC.KCoreDirLister, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kcoredirlister.html#dtor.KCoreDirLister)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCoreDirLister ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCoreDirLister_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kcoredirlister.html#types
pub const enums = struct {
    pub const OpenUrlFlag = enum {
        pub const NoFlags: i32 = 0;
        pub const Keep: i32 = 1;
        pub const Reload: i32 = 2;
    };

    pub const WhichItems = enum {
        pub const AllItems: i32 = 0;
        pub const FilteredItems: i32 = 1;
    };
};
