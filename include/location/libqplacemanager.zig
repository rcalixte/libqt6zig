const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QLocale = @import("libqt6").QLocale;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPlace = @import("libqt6").QPlace;
const QPlaceCategory = @import("libqt6").QPlaceCategory;
const QPlaceContentReply = @import("libqt6").QPlaceContentReply;
const QPlaceContentRequest = @import("libqt6").QPlaceContentRequest;
const QPlaceDetailsReply = @import("libqt6").QPlaceDetailsReply;
const QPlaceIdReply = @import("libqt6").QPlaceIdReply;
const QPlaceMatchReply = @import("libqt6").QPlaceMatchReply;
const QPlaceMatchRequest = @import("libqt6").QPlaceMatchRequest;
const QPlaceReply = @import("libqt6").QPlaceReply;
const QPlaceSearchReply = @import("libqt6").QPlaceSearchReply;
const QPlaceSearchRequest = @import("libqt6").QPlaceSearchRequest;
const QPlaceSearchSuggestionReply = @import("libqt6").QPlaceSearchSuggestionReply;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qplacereply_enums = @import("libqplacereply.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html)
pub const QPlaceManager = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceManager,

    pub const _is_QPlaceManager = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn MetaObject(self: QPlaceManager) QMetaObject {
        return .{ .ptr = qtc.QPlaceManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPlaceManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPlaceManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManagerName(self: QPlaceManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceManager_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.ManagerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn ManagerVersion(self: QPlaceManager) i32 {
        return qtc.QPlaceManager_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn GetPlaceDetails(self: QPlaceManager, placeId: []const u8) QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_GetPlaceDetails(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` request: QPlaceContentRequest `
    ///
    pub fn GetPlaceContent(self: QPlaceManager, request: anytype) QPlaceContentReply {
        comptime _ = @TypeOf(request)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceManager_GetPlaceContent(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` query: QPlaceSearchRequest `
    ///
    pub fn Search(self: QPlaceManager, query: anytype) QPlaceSearchReply {
        comptime _ = @TypeOf(query)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManager_Search(@ptrCast(self.ptr), @ptrCast(query.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#searchSuggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn SearchSuggestions(self: QPlaceManager, request: anytype) QPlaceSearchSuggestionReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManager_SearchSuggestions(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#savePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` place: QPlace `
    ///
    pub fn SavePlace(self: QPlaceManager, place: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManager_SavePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn RemovePlace(self: QPlaceManager, placeId: []const u8) QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_RemovePlace(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` category: QPlaceCategory `
    ///
    pub fn SaveCategory(self: QPlaceManager, category: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        return .{ .ptr = qtc.QPlaceManager_SaveCategory(@ptrCast(self.ptr), @ptrCast(category.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removeCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn RemoveCategory(self: QPlaceManager, categoryId: []const u8) QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_RemoveCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#initializeCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn InitializeCategories(self: QPlaceManager) QPlaceReply {
        return .{ .ptr = qtc.QPlaceManager_InitializeCategories(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#parentCategoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn ParentCategoryId(self: QPlaceManager, allocator: std.mem.Allocator, categoryId: []const u8) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManager_ParentCategoryId(@ptrCast(self.ptr), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.ParentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategoryIds(self: QPlaceManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategoryIds(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn Category(self: QPlaceManager, categoryId: []const u8) QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_Category(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategories(self: QPlaceManager, allocator: std.mem.Allocator) []QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("qplacemanager.ChildCategories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#locales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locales(self: QPlaceManager, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_Locales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("qplacemanager.Locales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QPlaceManager, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QPlaceManager_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` locale: []QLocale `
    ///
    pub fn SetLocales(self: QPlaceManager, locale: []QLocale) void {
        const locale_list = qtc.libqt_list{
            .len = locale.len,
            .data = @ptrCast(locale.ptr),
        };
        qtc.QPlaceManager_SetLocales(@ptrCast(self.ptr), locale_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#compatiblePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` place: QPlace `
    ///
    pub fn CompatiblePlace(self: QPlaceManager, place: anytype) QPlace {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManager_CompatiblePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#matchingPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` request: QPlaceMatchRequest `
    ///
    pub fn MatchingPlaces(self: QPlaceManager, request: anytype) QPlaceMatchReply {
        comptime _ = @TypeOf(request)._is_QPlaceMatchRequest;
        return .{ .ptr = qtc.QPlaceManager_MatchingPlaces(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` reply: QPlaceReply `
    ///
    pub fn Finished(self: QPlaceManager, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QPlaceReply;
        qtc.QPlaceManager_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, reply: QPlaceReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceReply) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` param1: QPlaceReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    pub fn ErrorOccurred(self: QPlaceManager, param1: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        qtc.QPlaceManager_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, param1: QPlaceReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceReply, i32) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceAdded(self: QPlaceManager, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceAdded(@ptrCast(self.ptr), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceAdded(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceUpdated(self: QPlaceManager, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceUpdated(@ptrCast(self.ptr), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceUpdated(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceRemoved(self: QPlaceManager, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceRemoved(@ptrCast(self.ptr), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceRemoved(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn CategoryAdded(self: QPlaceManager, category: anytype, parentId: []const u8) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryAdded(@ptrCast(self.ptr), @ptrCast(category.ptr), parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, category: QPlaceCategory, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryAdded(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn CategoryUpdated(self: QPlaceManager, category: anytype, parentId: []const u8) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryUpdated(@ptrCast(self.ptr), @ptrCast(category.ptr), parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, category: QPlaceCategory, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryUpdated(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn CategoryRemoved(self: QPlaceManager, categoryId: []const u8, parentId: []const u8) void {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryRemoved(@ptrCast(self.ptr), categoryId_str, parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, categoryId: [*:0]const u8, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryRemoved(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn DataChanged(self: QPlaceManager) void {
        qtc.QPlaceManager_DataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: QPlaceManager, callback: *const fn (QPlaceManager) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn SaveCategory2(self: QPlaceManager, category: anytype, parentId: []const u8) QPlaceIdReply {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_SaveCategory2(@ptrCast(self.ptr), @ptrCast(category.ptr), parentId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn ChildCategoryIds1(self: QPlaceManager, allocator: std.mem.Allocator, parentId: []const u8) []const []const u8 {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategoryIds1(@ptrCast(self.ptr), parentId_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn ChildCategories1(self: QPlaceManager, allocator: std.mem.Allocator, parentId: []const u8) []QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategories1(@ptrCast(self.ptr), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("qplacemanager.ChildCategories1: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` param1: QPlaceReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred3(self: QPlaceManager, param1: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QPlaceManager_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, param1: QPlaceReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred3(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPlaceManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPlaceManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPlaceManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QPlaceManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPlaceManager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn IsWidgetType(self: QPlaceManager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn IsWindowType(self: QPlaceManager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn IsQuickItemType(self: QPlaceManager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn SignalsBlocked(self: QPlaceManager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPlaceManager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn Thread(self: QPlaceManager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPlaceManager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPlaceManager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPlaceManager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPlaceManager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPlaceManager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPlaceManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qplacemanager.Children: Memory allocation failed");
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
    /// ` self: QPlaceManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPlaceManager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPlaceManager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPlaceManager, obj: anytype) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPlaceManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlaceManager `
    ///
    pub fn Disconnect3(self: QPlaceManager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPlaceManager, receiver: anytype) bool {
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
    /// ` self: QPlaceManager `
    ///
    pub fn DumpObjectTree(self: QPlaceManager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn DumpObjectInfo(self: QPlaceManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPlaceManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPlaceManager, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPlaceManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QPlaceManager `
    ///
    pub fn BindingStorage(self: QPlaceManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn BindingStorage2(self: QPlaceManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn Destroyed(self: QPlaceManager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPlaceManager, callback: *const fn (QPlaceManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn Parent(self: QPlaceManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPlaceManager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn DeleteLater(self: QPlaceManager) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPlaceManager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPlaceManager, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlaceManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPlaceManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlaceManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPlaceManager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPlaceManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPlaceManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPlaceManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPlaceManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPlaceManager, callback: *const fn (QPlaceManager, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dtor.QPlaceManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn Delete(self: QPlaceManager) void {
        qtc.QPlaceManager_Delete(@ptrCast(self.ptr));
    }
};
