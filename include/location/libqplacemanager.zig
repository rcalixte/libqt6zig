const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qplacereply_enums = @import("libqplacereply.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html)
pub const qplacemanager = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPlaceManager_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManager_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManagerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceManager_ManagerName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.ManagerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    pub fn ManagerVersion(self: ?*anyopaque) i32 {
        return qtc.QPlaceManager_ManagerVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn GetPlaceDetails(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManager_GetPlaceDetails(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` request: QtC.QPlaceContentRequest `
    ///
    pub fn GetPlaceContent(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceContentReply {
        return qtc.QPlaceManager_GetPlaceContent(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` query: QtC.QPlaceSearchRequest `
    ///
    pub fn Search(self: ?*anyopaque, query: ?*anyopaque) QtC.QPlaceSearchReply {
        return qtc.QPlaceManager_Search(@ptrCast(self), @ptrCast(query));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#searchSuggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` request: QtC.QPlaceSearchRequest `
    ///
    pub fn SearchSuggestions(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceSearchSuggestionReply {
        return qtc.QPlaceManager_SearchSuggestions(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#savePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` place: QtC.QPlace `
    ///
    pub fn SavePlace(self: ?*anyopaque, place: ?*anyopaque) QtC.QPlaceIdReply {
        return qtc.QPlaceManager_SavePlace(@ptrCast(self), @ptrCast(place));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn RemovePlace(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManager_RemovePlace(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    pub fn SaveCategory(self: ?*anyopaque, category: ?*anyopaque) QtC.QPlaceIdReply {
        return qtc.QPlaceManager_SaveCategory(@ptrCast(self), @ptrCast(category));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removeCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn RemoveCategory(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManager_RemoveCategory(@ptrCast(self), categoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#initializeCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    pub fn InitializeCategories(self: ?*anyopaque) QtC.QPlaceReply {
        return qtc.QPlaceManager_InitializeCategories(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#parentCategoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParentCategoryId(self: ?*anyopaque, categoryId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManager_ParentCategoryId(@ptrCast(self), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.ParentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategoryIds(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategoryIds(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qplacemanager.ChildCategoryIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplacemanager.ChildCategoryIds: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn Category(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManager_Category(@ptrCast(self), categoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategories(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategories(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlaceCategory, _arr.len) catch @panic("qplacemanager.ChildCategories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#locales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locales(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_Locales(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLocale, _arr.len) catch @panic("qplacemanager.Locales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` locale: QtC.QLocale `
    ///
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QPlaceManager_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` locale: []QtC.QLocale `
    ///
    pub fn SetLocales(self: ?*anyopaque, locale: []QtC.QLocale) void {
        const locale_list = qtc.libqt_list{
            .len = locale.len,
            .data = @ptrCast(locale.ptr),
        };
        qtc.QPlaceManager_SetLocales(@ptrCast(self), locale_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#compatiblePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` place: QtC.QPlace `
    ///
    pub fn CompatiblePlace(self: ?*anyopaque, place: ?*anyopaque) QtC.QPlace {
        return qtc.QPlaceManager_CompatiblePlace(@ptrCast(self), @ptrCast(place));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#matchingPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` request: QtC.QPlaceMatchRequest `
    ///
    pub fn MatchingPlaces(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceMatchReply {
        return qtc.QPlaceManager_MatchingPlaces(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` reply: QtC.QPlaceReply `
    ///
    pub fn Finished(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QPlaceManager_Finished(@ptrCast(self), @ptrCast(reply));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, reply: QtC.QPlaceReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` param1: QtC.QPlaceReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, param1: ?*anyopaque, errorVal: i32) void {
        qtc.QPlaceManager_ErrorOccurred(@ptrCast(self), @ptrCast(param1), @intCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, param1: QtC.QPlaceReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceAdded(self: ?*anyopaque, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceAdded(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceUpdated(self: ?*anyopaque, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceUpdated(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceUpdated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceRemoved(self: ?*anyopaque, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceRemoved(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn CategoryAdded(self: ?*anyopaque, category: ?*anyopaque, parentId: []const u8) void {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryAdded(@ptrCast(self), @ptrCast(category), parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, category: QtC.QPlaceCategory, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn CategoryUpdated(self: ?*anyopaque, category: ?*anyopaque, parentId: []const u8) void {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryUpdated(@ptrCast(self), @ptrCast(category), parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, category: QtC.QPlaceCategory, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryUpdated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn CategoryRemoved(self: ?*anyopaque, categoryId: []const u8, parentId: []const u8) void {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryRemoved(@ptrCast(self), categoryId_str, parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, categoryId: [*:0]const u8, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    pub fn DataChanged(self: ?*anyopaque) void {
        qtc.QPlaceManager_DataChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn SaveCategory2(self: ?*anyopaque, category: ?*anyopaque, parentId: []const u8) QtC.QPlaceIdReply {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return qtc.QPlaceManager_SaveCategory2(@ptrCast(self), @ptrCast(category), parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` parentId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategoryIds1(self: ?*anyopaque, parentId: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategoryIds1(@ptrCast(self), parentId_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qplacemanager.ChildCategoryIds1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplacemanager.ChildCategoryIds1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` parentId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategories1(self: ?*anyopaque, parentId: []const u8, allocator: std.mem.Allocator) []QtC.QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategories1(@ptrCast(self), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlaceCategory, _arr.len) catch @panic("qplacemanager.ChildCategories1: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` param1: QtC.QPlaceReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred3(self: ?*anyopaque, param1: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QPlaceManager_ErrorOccurred3(@ptrCast(self), @ptrCast(param1), @intCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, param1: QtC.QPlaceReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_ErrorOccurred3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qplacemanager.Children: Memory allocation failed");
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qplacemanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplacemanager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager) callconv(.c) void `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
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
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @intCast(param5));
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
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
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
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QPlaceManager `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dtor.QPlaceManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceManager `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceManager_Delete(@ptrCast(self));
    }
};
