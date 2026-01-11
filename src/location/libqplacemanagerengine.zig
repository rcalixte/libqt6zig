const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qplacereply_enums = @import("libqplacereply.zig").enums;
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html)
pub const qplacemanagerengine = struct {
    /// New constructs a new QPlaceManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New(parameters: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QPlaceManagerEngine {
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters.count()) catch @panic("qplacemanagerengine.New: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters.count()) catch @panic("qplacemanagerengine.New: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            parameters_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters.count(),
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };

        return qtc.QPlaceManagerEngine_new(parameters_map);
    }

    /// New2 constructs a new QPlaceManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parameters: map_constu8_qtcqvariant `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New2(parameters: map_constu8_qtcqvariant, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QPlaceManagerEngine {
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters.count()) catch @panic("qplacemanagerengine.New2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters.count()) catch @panic("qplacemanagerengine.New2: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |entry| : (i += 1) {
            const key = entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            parameters_values[i] = @ptrCast(entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters.count(),
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };

        return qtc.QPlaceManagerEngine_new2(parameters_map, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPlaceManagerEngine_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManagerEngine_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManagerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceManagerEngine_ManagerName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.ManagerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn ManagerVersion(self: ?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_ManagerVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn GetPlaceDetails(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManagerEngine_GetPlaceDetails(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) QtC.QPlaceDetailsReply `
    ///
    pub fn OnGetPlaceDetails(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QPlaceDetailsReply) void {
        qtc.QPlaceManagerEngine_OnGetPlaceDetails(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn QBaseGetPlaceDetails(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManagerEngine_QBaseGetPlaceDetails(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceContentRequest `
    ///
    pub fn GetPlaceContent(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceContentReply {
        return qtc.QPlaceManagerEngine_GetPlaceContent(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, request: QtC.QPlaceContentRequest) callconv(.c) QtC.QPlaceContentReply `
    ///
    pub fn OnGetPlaceContent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPlaceContentReply) void {
        qtc.QPlaceManagerEngine_OnGetPlaceContent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceContentRequest `
    ///
    pub fn QBaseGetPlaceContent(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceContentReply {
        return qtc.QPlaceManagerEngine_QBaseGetPlaceContent(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceSearchRequest `
    ///
    pub fn Search(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceSearchReply {
        return qtc.QPlaceManagerEngine_Search(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, request: QtC.QPlaceSearchRequest) callconv(.c) QtC.QPlaceSearchReply `
    ///
    pub fn OnSearch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPlaceSearchReply) void {
        qtc.QPlaceManagerEngine_OnSearch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceSearchRequest `
    ///
    pub fn QBaseSearch(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceSearchReply {
        return qtc.QPlaceManagerEngine_QBaseSearch(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceSearchRequest `
    ///
    pub fn SearchSuggestions(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceSearchSuggestionReply {
        return qtc.QPlaceManagerEngine_SearchSuggestions(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, request: QtC.QPlaceSearchRequest) callconv(.c) QtC.QPlaceSearchSuggestionReply `
    ///
    pub fn OnSearchSuggestions(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPlaceSearchSuggestionReply) void {
        qtc.QPlaceManagerEngine_OnSearchSuggestions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceSearchRequest `
    ///
    pub fn QBaseSearchSuggestions(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceSearchSuggestionReply {
        return qtc.QPlaceManagerEngine_QBaseSearchSuggestions(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` place: QtC.QPlace `
    ///
    pub fn SavePlace(self: ?*anyopaque, place: ?*anyopaque) QtC.QPlaceIdReply {
        return qtc.QPlaceManagerEngine_SavePlace(@ptrCast(self), @ptrCast(place));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, place: QtC.QPlace) callconv(.c) QtC.QPlaceIdReply `
    ///
    pub fn OnSavePlace(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnSavePlace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` place: QtC.QPlace `
    ///
    pub fn QBaseSavePlace(self: ?*anyopaque, place: ?*anyopaque) QtC.QPlaceIdReply {
        return qtc.QPlaceManagerEngine_QBaseSavePlace(@ptrCast(self), @ptrCast(place));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn RemovePlace(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManagerEngine_RemovePlace(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) QtC.QPlaceIdReply `
    ///
    pub fn OnRemovePlace(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnRemovePlace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn QBaseRemovePlace(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManagerEngine_QBaseRemovePlace(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn SaveCategory(self: ?*anyopaque, category: ?*anyopaque, parentId: []const u8) QtC.QPlaceIdReply {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return qtc.QPlaceManagerEngine_SaveCategory(@ptrCast(self), @ptrCast(category), parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, category: QtC.QPlaceCategory, parentId: [*:0]const u8) callconv(.c) QtC.QPlaceIdReply `
    ///
    pub fn OnSaveCategory(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) QtC.QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnSaveCategory(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn QBaseSaveCategory(self: ?*anyopaque, category: ?*anyopaque, parentId: []const u8) QtC.QPlaceIdReply {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return qtc.QPlaceManagerEngine_QBaseSaveCategory(@ptrCast(self), @ptrCast(category), parentId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn RemoveCategory(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManagerEngine_RemoveCategory(@ptrCast(self), categoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) QtC.QPlaceIdReply `
    ///
    pub fn OnRemoveCategory(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnRemoveCategory(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn QBaseRemoveCategory(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManagerEngine_QBaseRemoveCategory(@ptrCast(self), categoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn InitializeCategories(self: ?*anyopaque) QtC.QPlaceReply {
        return qtc.QPlaceManagerEngine_InitializeCategories(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPlaceReply `
    ///
    pub fn OnInitializeCategories(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPlaceReply) void {
        qtc.QPlaceManagerEngine_OnInitializeCategories(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn QBaseInitializeCategories(self: ?*anyopaque) QtC.QPlaceReply {
        return qtc.QPlaceManagerEngine_QBaseInitializeCategories(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
        var _str = qtc.QPlaceManagerEngine_ParentCategoryId(@ptrCast(self), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.ParentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnParentCategoryId(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QPlaceManagerEngine_OnParentCategoryId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseParentCategoryId(self: ?*anyopaque, categoryId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManagerEngine_QBaseParentCategoryId(@ptrCast(self), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.ParentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategoryIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategoryIds(self: ?*anyopaque, categoryId: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_ChildCategoryIds(@ptrCast(self), categoryId_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qplacemanagerengine.ChildCategoryIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplacemanagerengine.ChildCategoryIds: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategoryIds)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnChildCategoryIds(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QPlaceManagerEngine_OnChildCategoryIds(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategoryIds)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseChildCategoryIds(self: ?*anyopaque, categoryId: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_QBaseChildCategoryIds(@ptrCast(self), categoryId_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qplacemanagerengine.ChildCategoryIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplacemanagerengine.ChildCategoryIds: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn Category(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManagerEngine_Category(@ptrCast(self), categoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) QtC.QPlaceCategory `
    ///
    pub fn OnCategory(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QPlaceCategory) void {
        qtc.QPlaceManagerEngine_OnCategory(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn QBaseCategory(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManagerEngine_QBaseCategory(@ptrCast(self), categoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` parentId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildCategories(self: ?*anyopaque, parentId: []const u8, allocator: std.mem.Allocator) []QtC.QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_ChildCategories(@ptrCast(self), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlaceCategory, _arr.len) catch @panic("qplacemanagerengine.ChildCategories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, parentId: [*:0]const u8) callconv(.c) [*:null]QtC.QPlaceCategory `
    ///
    pub fn OnChildCategories(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) [*:null]QtC.QPlaceCategory) void {
        qtc.QPlaceManagerEngine_OnChildCategories(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` parentId: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseChildCategories(self: ?*anyopaque, parentId: []const u8, allocator: std.mem.Allocator) []QtC.QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_QBaseChildCategories(@ptrCast(self), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPlaceCategory, _arr.len) catch @panic("qplacemanagerengine.ChildCategories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locales(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_Locales(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLocale, _arr.len) catch @panic("qplacemanagerengine.Locales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:null]QtC.QLocale `
    ///
    pub fn OnLocales(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QLocale) void {
        qtc.QPlaceManagerEngine_OnLocales(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseLocales(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_QBaseLocales(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QLocale, _arr.len) catch @panic("qplacemanagerengine.Locales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` locales: []QtC.QLocale `
    ///
    pub fn SetLocales(self: ?*anyopaque, locales: []QtC.QLocale) void {
        const locales_list = qtc.libqt_list{
            .len = locales.len,
            .data = @ptrCast(locales.ptr),
        };
        qtc.QPlaceManagerEngine_SetLocales(@ptrCast(self), locales_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, locales: [*]QtC.QLocale) callconv(.c) void `
    ///
    pub fn OnSetLocales(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QLocale) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnSetLocales(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` locales: []QtC.QLocale `
    ///
    pub fn QBaseSetLocales(self: ?*anyopaque, locales: []QtC.QLocale) void {
        const locales_list = qtc.libqt_list{
            .len = locales.len,
            .data = @ptrCast(locales.ptr),
        };
        qtc.QPlaceManagerEngine_QBaseSetLocales(@ptrCast(self), locales_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn ConstructIconUrl(self: ?*anyopaque, icon: ?*anyopaque, size: ?*anyopaque) QtC.QUrl {
        return qtc.QPlaceManagerEngine_ConstructIconUrl(@ptrCast(self), @ptrCast(icon), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, icon: QtC.QPlaceIcon, size: QtC.QSize) callconv(.c) QtC.QUrl `
    ///
    pub fn OnConstructIconUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QUrl) void {
        qtc.QPlaceManagerEngine_OnConstructIconUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` icon: QtC.QPlaceIcon `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn QBaseConstructIconUrl(self: ?*anyopaque, icon: ?*anyopaque, size: ?*anyopaque) QtC.QUrl {
        return qtc.QPlaceManagerEngine_QBaseConstructIconUrl(@ptrCast(self), @ptrCast(icon), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` original: QtC.QPlace `
    ///
    pub fn CompatiblePlace(self: ?*anyopaque, original: ?*anyopaque) QtC.QPlace {
        return qtc.QPlaceManagerEngine_CompatiblePlace(@ptrCast(self), @ptrCast(original));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, original: QtC.QPlace) callconv(.c) QtC.QPlace `
    ///
    pub fn OnCompatiblePlace(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPlace) void {
        qtc.QPlaceManagerEngine_OnCompatiblePlace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` original: QtC.QPlace `
    ///
    pub fn QBaseCompatiblePlace(self: ?*anyopaque, original: ?*anyopaque) QtC.QPlace {
        return qtc.QPlaceManagerEngine_QBaseCompatiblePlace(@ptrCast(self), @ptrCast(original));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceMatchRequest `
    ///
    pub fn MatchingPlaces(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceMatchReply {
        return qtc.QPlaceManagerEngine_MatchingPlaces(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, request: QtC.QPlaceMatchRequest) callconv(.c) QtC.QPlaceMatchReply `
    ///
    pub fn OnMatchingPlaces(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPlaceMatchReply) void {
        qtc.QPlaceManagerEngine_OnMatchingPlaces(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` request: QtC.QPlaceMatchRequest `
    ///
    pub fn QBaseMatchingPlaces(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceMatchReply {
        return qtc.QPlaceManagerEngine_QBaseMatchingPlaces(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` reply: QtC.QPlaceReply `
    ///
    pub fn Finished(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_Finished(@ptrCast(self), @ptrCast(reply));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, reply: QtC.QPlaceReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` param1: QtC.QPlaceReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, param1: ?*anyopaque, errorVal: i32) void {
        qtc.QPlaceManagerEngine_ErrorOccurred(@ptrCast(self), @ptrCast(param1), @intCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, param1: QtC.QPlaceReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceAdded(self: ?*anyopaque, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceAdded(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceUpdated(self: ?*anyopaque, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceUpdated(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceUpdated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceRemoved(self: ?*anyopaque, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceRemoved(@ptrCast(self), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    /// ` parentCategoryId: []const u8 `
    ///
    pub fn CategoryAdded(self: ?*anyopaque, category: ?*anyopaque, parentCategoryId: []const u8) void {
        const parentCategoryId_str = qtc.libqt_string{
            .len = parentCategoryId.len,
            .data = parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryAdded(@ptrCast(self), @ptrCast(category), parentCategoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, category: QtC.QPlaceCategory, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` category: QtC.QPlaceCategory `
    ///
    /// ` parentCategoryId: []const u8 `
    ///
    pub fn CategoryUpdated(self: ?*anyopaque, category: ?*anyopaque, parentCategoryId: []const u8) void {
        const parentCategoryId_str = qtc.libqt_string{
            .len = parentCategoryId.len,
            .data = parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryUpdated(@ptrCast(self), @ptrCast(category), parentCategoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, category: QtC.QPlaceCategory, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryUpdated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` parentCategoryId: []const u8 `
    ///
    pub fn CategoryRemoved(self: ?*anyopaque, categoryId: []const u8, parentCategoryId: []const u8) void {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const parentCategoryId_str = qtc.libqt_string{
            .len = parentCategoryId.len,
            .data = parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryRemoved(@ptrCast(self), categoryId_str, parentCategoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, categoryId: [*:0]const u8, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn DataChanged(self: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_DataChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn Manager(self: ?*anyopaque) QtC.QPlaceManager {
        return qtc.QPlaceManagerEngine_Manager(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPlaceManager `
    ///
    pub fn OnManager(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPlaceManager) void {
        qtc.QPlaceManagerEngine_OnManager(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn QBaseManager(self: ?*anyopaque) QtC.QPlaceManager {
        return qtc.QPlaceManagerEngine_QBaseManager(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    /// ` c: []const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
        qtc.QPlaceManagerEngine_ErrorOccurred3(@ptrCast(self), @ptrCast(param1), @intCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, param1: QtC.QPlaceReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qplacemanagerengine.Children: Memory allocation failed");
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
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
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qplacemanagerengine.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplacemanagerengine.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine) callconv(.c) void `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` classname: []const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` member: []const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPlaceManagerEngine_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPlaceManagerEngine_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QPlaceManagerEngine_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dtor.QPlaceManagerEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_Delete(@ptrCast(self));
    }
};
