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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn metaObject(self: QPlaceManager) QMetaObject {
        return .{ .ptr = qtc.QPlaceManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPlaceManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QPlaceManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerName` instead
    ///
    pub const ManagerName = managerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn managerName(self: QPlaceManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceManager_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManager.managerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerVersion` instead
    ///
    pub const ManagerVersion = managerVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn managerVersion(self: QPlaceManager) i32 {
        return qtc.QPlaceManager_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getPlaceDetails` instead
    ///
    pub const GetPlaceDetails = getPlaceDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn getPlaceDetails(self: QPlaceManager, placeId: []const u8) QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_GetPlaceDetails(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### DEPRECATED: Use `getPlaceContent` instead
    ///
    pub const GetPlaceContent = getPlaceContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` request: QPlaceContentRequest `
    ///
    pub fn getPlaceContent(self: QPlaceManager, request: anytype) QPlaceContentReply {
        comptime _ = @TypeOf(request)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceManager_GetPlaceContent(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `search` instead
    ///
    pub const Search = search;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` query: QPlaceSearchRequest `
    ///
    pub fn search(self: QPlaceManager, query: anytype) QPlaceSearchReply {
        comptime _ = @TypeOf(query)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManager_Search(@ptrCast(self.ptr), @ptrCast(query.ptr)) };
    }

    /// ### DEPRECATED: Use `searchSuggestions` instead
    ///
    pub const SearchSuggestions = searchSuggestions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#searchSuggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn searchSuggestions(self: QPlaceManager, request: anytype) QPlaceSearchSuggestionReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManager_SearchSuggestions(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `savePlace` instead
    ///
    pub const SavePlace = savePlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#savePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` place: QPlace `
    ///
    pub fn savePlace(self: QPlaceManager, place: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManager_SavePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### DEPRECATED: Use `removePlace` instead
    ///
    pub const RemovePlace = removePlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn removePlace(self: QPlaceManager, placeId: []const u8) QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_RemovePlace(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### DEPRECATED: Use `saveCategory` instead
    ///
    pub const SaveCategory = saveCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` _category: QPlaceCategory `
    ///
    pub fn saveCategory(self: QPlaceManager, _category: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        return .{ .ptr = qtc.QPlaceManager_SaveCategory(@ptrCast(self.ptr), @ptrCast(_category.ptr)) };
    }

    /// ### DEPRECATED: Use `removeCategory` instead
    ///
    pub const RemoveCategory = removeCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removeCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn removeCategory(self: QPlaceManager, categoryId: []const u8) QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_RemoveCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### DEPRECATED: Use `initializeCategories` instead
    ///
    pub const InitializeCategories = initializeCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#initializeCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn initializeCategories(self: QPlaceManager) QPlaceReply {
        return .{ .ptr = qtc.QPlaceManager_InitializeCategories(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentCategoryId` instead
    ///
    pub const ParentCategoryId = parentCategoryId;

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
    pub fn parentCategoryId(self: QPlaceManager, allocator: std.mem.Allocator, categoryId: []const u8) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManager_ParentCategoryId(@ptrCast(self.ptr), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManager.parentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `childCategoryIds` instead
    ///
    pub const ChildCategoryIds = childCategoryIds;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childCategoryIds(self: QPlaceManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategoryIds(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPlaceManager.childCategoryIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceManager.childCategoryIds: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn category(self: QPlaceManager, categoryId: []const u8) QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_Category(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### DEPRECATED: Use `childCategories` instead
    ///
    pub const ChildCategories = childCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childCategories(self: QPlaceManager, allocator: std.mem.Allocator) []QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("QPlaceManager.childCategories: Memory allocation failed");
        const _data_val: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `locales` instead
    ///
    pub const Locales = locales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#locales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn locales(self: QPlaceManager, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManager_Locales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("QPlaceManager.locales: Memory allocation failed");
        const _data_val: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` locale: QLocale `
    ///
    pub fn setLocale(self: QPlaceManager, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QPlaceManager_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// ### DEPRECATED: Use `setLocales` instead
    ///
    pub const SetLocales = setLocales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` locale: []QLocale `
    ///
    pub fn setLocales(self: QPlaceManager, locale: []QLocale) void {
        const locale_list = qtc.libqt_list{
            .len = locale.len,
            .data = @ptrCast(locale.ptr),
        };
        qtc.QPlaceManager_SetLocales(@ptrCast(self.ptr), locale_list);
    }

    /// ### DEPRECATED: Use `compatiblePlace` instead
    ///
    pub const CompatiblePlace = compatiblePlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#compatiblePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` place: QPlace `
    ///
    pub fn compatiblePlace(self: QPlaceManager, place: anytype) QPlace {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManager_CompatiblePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### DEPRECATED: Use `matchingPlaces` instead
    ///
    pub const MatchingPlaces = matchingPlaces;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#matchingPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` request: QPlaceMatchRequest `
    ///
    pub fn matchingPlaces(self: QPlaceManager, request: anytype) QPlaceMatchReply {
        comptime _ = @TypeOf(request)._is_QPlaceMatchRequest;
        return .{ .ptr = qtc.QPlaceManager_MatchingPlaces(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` reply: QPlaceReply `
    ///
    pub fn finished(self: QPlaceManager, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QPlaceReply;
        qtc.QPlaceManager_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, reply: QPlaceReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceReply) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

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
    pub fn errorOccurred(self: QPlaceManager, param1: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        qtc.QPlaceManager_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, param1: QPlaceReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceReply, i32) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `placeAdded` instead
    ///
    pub const PlaceAdded = placeAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn placeAdded(self: QPlaceManager, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceAdded(@ptrCast(self.ptr), placeId_str);
    }

    /// ### DEPRECATED: Use `onPlaceAdded` instead
    ///
    pub const OnPlaceAdded = onPlaceAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPlaceAdded(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `placeUpdated` instead
    ///
    pub const PlaceUpdated = placeUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn placeUpdated(self: QPlaceManager, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceUpdated(@ptrCast(self.ptr), placeId_str);
    }

    /// ### DEPRECATED: Use `onPlaceUpdated` instead
    ///
    pub const OnPlaceUpdated = onPlaceUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPlaceUpdated(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `placeRemoved` instead
    ///
    pub const PlaceRemoved = placeRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn placeRemoved(self: QPlaceManager, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManager_PlaceRemoved(@ptrCast(self.ptr), placeId_str);
    }

    /// ### DEPRECATED: Use `onPlaceRemoved` instead
    ///
    pub const OnPlaceRemoved = onPlaceRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPlaceRemoved(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_PlaceRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `categoryAdded` instead
    ///
    pub const CategoryAdded = categoryAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` _category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn categoryAdded(self: QPlaceManager, _category: anytype, parentId: []const u8) void {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryAdded(@ptrCast(self.ptr), @ptrCast(_category.ptr), parentId_str);
    }

    /// ### DEPRECATED: Use `onCategoryAdded` instead
    ///
    pub const OnCategoryAdded = onCategoryAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, category: QPlaceCategory, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCategoryAdded(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `categoryUpdated` instead
    ///
    pub const CategoryUpdated = categoryUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` _category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn categoryUpdated(self: QPlaceManager, _category: anytype, parentId: []const u8) void {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        qtc.QPlaceManager_CategoryUpdated(@ptrCast(self.ptr), @ptrCast(_category.ptr), parentId_str);
    }

    /// ### DEPRECATED: Use `onCategoryUpdated` instead
    ///
    pub const OnCategoryUpdated = onCategoryUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, category: QPlaceCategory, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCategoryUpdated(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `categoryRemoved` instead
    ///
    pub const CategoryRemoved = categoryRemoved;

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
    pub fn categoryRemoved(self: QPlaceManager, categoryId: []const u8, parentId: []const u8) void {
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

    /// ### DEPRECATED: Use `onCategoryRemoved` instead
    ///
    pub const OnCategoryRemoved = onCategoryRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, categoryId: [*:0]const u8, parentId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCategoryRemoved(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_CategoryRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn dataChanged(self: QPlaceManager) void {
        qtc.QPlaceManager_DataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QPlaceManager, callback: *const fn (QPlaceManager) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManager.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `saveCategory2` instead
    ///
    pub const SaveCategory2 = saveCategory2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` _category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn saveCategory2(self: QPlaceManager, _category: anytype, parentId: []const u8) QPlaceIdReply {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManager_SaveCategory2(@ptrCast(self.ptr), @ptrCast(_category.ptr), parentId_str) };
    }

    /// ### DEPRECATED: Use `childCategoryIds1` instead
    ///
    pub const ChildCategoryIds1 = childCategoryIds1;

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
    pub fn childCategoryIds1(self: QPlaceManager, allocator: std.mem.Allocator, parentId: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPlaceManager.childCategoryIds1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceManager.childCategoryIds1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `childCategories1` instead
    ///
    pub const ChildCategories1 = childCategories1;

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
    pub fn childCategories1(self: QPlaceManager, allocator: std.mem.Allocator, parentId: []const u8) []QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManager_ChildCategories1(@ptrCast(self.ptr), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("QPlaceManager.childCategories1: Memory allocation failed");
        const _data_val: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `errorOccurred3` instead
    ///
    pub const ErrorOccurred3 = errorOccurred3;

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
    pub fn errorOccurred3(self: QPlaceManager, param1: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QPlaceManager_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred3` instead
    ///
    pub const OnErrorOccurred3 = onErrorOccurred3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, param1: QPlaceReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred3(self: QPlaceManager, callback: *const fn (QPlaceManager, QPlaceReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManager_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPlaceManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPlaceManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPlaceManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManager.objectName: Memory allocation failed");
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
    /// ` self: QPlaceManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPlaceManager, name: []const u8) void {
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
    /// ` self: QPlaceManager `
    ///
    pub fn isWidgetType(self: QPlaceManager) bool {
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
    /// ` self: QPlaceManager `
    ///
    pub fn isWindowType(self: QPlaceManager) bool {
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
    /// ` self: QPlaceManager `
    ///
    pub fn isQuickItemType(self: QPlaceManager) bool {
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
    /// ` self: QPlaceManager `
    ///
    pub fn signalsBlocked(self: QPlaceManager) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPlaceManager, b: bool) bool {
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
    /// ` self: QPlaceManager `
    ///
    pub fn thread(self: QPlaceManager) QThread {
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
    /// ` self: QPlaceManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPlaceManager, _thread: anytype) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPlaceManager, interval: i32) i32 {
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
    /// ` self: QPlaceManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPlaceManager, time: i64) i32 {
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
    /// ` self: QPlaceManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPlaceManager, id: i32) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPlaceManager, id: i32) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPlaceManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPlaceManager.children: Memory allocation failed");
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
    /// ` self: QPlaceManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPlaceManager, _parent: anytype) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPlaceManager, filterObj: anytype) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPlaceManager, obj: anytype) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPlaceManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlaceManager `
    ///
    pub fn disconnect3(self: QPlaceManager) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPlaceManager, receiver: anytype) bool {
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
    /// ` self: QPlaceManager `
    ///
    pub fn dumpObjectTree(self: QPlaceManager) void {
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
    /// ` self: QPlaceManager `
    ///
    pub fn dumpObjectInfo(self: QPlaceManager) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPlaceManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPlaceManager, name: [:0]const u8) QVariant {
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
    /// ` self: QPlaceManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPlaceManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPlaceManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlaceManager `
    ///
    pub fn bindingStorage(self: QPlaceManager) QBindingStorage {
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
    /// ` self: QPlaceManager `
    ///
    pub fn bindingStorage2(self: QPlaceManager) QBindingStorage {
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
    /// ` self: QPlaceManager `
    ///
    pub fn destroyed(self: QPlaceManager) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPlaceManager, callback: *const fn (QPlaceManager) callconv(.c) void) void {
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
    /// ` self: QPlaceManager `
    ///
    pub fn parent(self: QPlaceManager) QObject {
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
    /// ` self: QPlaceManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPlaceManager, classname: [:0]const u8) bool {
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
    /// ` self: QPlaceManager `
    ///
    pub fn deleteLater(self: QPlaceManager) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPlaceManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPlaceManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPlaceManager, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlaceManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPlaceManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlaceManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPlaceManager, signal: [:0]const u8) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPlaceManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPlaceManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPlaceManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPlaceManager, param1: anytype) void {
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
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPlaceManager, callback: *const fn (QPlaceManager, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManager `
    ///
    /// ` callback: *const fn (self: QPlaceManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPlaceManager, callback: *const fn (QPlaceManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dtor.QPlaceManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceManager `
    ///
    pub fn delete(self: QPlaceManager) void {
        qtc.QPlaceManager_Delete(@ptrCast(self.ptr));
    }
};
