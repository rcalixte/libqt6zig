const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qplacereply_enums = @import("libqplacereply.zig").enums;
const std = @import("std");
const arraymap_constu8_qtcqvariant = std.StringArrayHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html)
pub const qplacemanagerengine = struct {
    /// New constructs a new QPlaceManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parameters: arraymap_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New(parameters: arraymap_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QPlaceManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qplacemanagerengine.New: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qplacemanagerengine.New: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |it_entry| : (i += 1) {
            const parameters_key = it_entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = parameters_key.len,
                .data = parameters_key.ptr,
            };
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };

        return qtc.QPlaceManagerEngine_new(parameters_map);
    }

    /// New2 constructs a new QPlaceManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parameters: arraymap_constu8_qtcqvariant `
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New2(parameters: arraymap_constu8_qtcqvariant, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.QPlaceManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("qplacemanagerengine.New2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("qplacemanagerengine.New2: Memory allocation failed");
        defer allocator.free(parameters_values);
        var i: usize = 0;
        var parameters_it = parameters.iterator();
        while (parameters_it.next()) |it_entry| : (i += 1) {
            const parameters_key = it_entry.key_ptr.*;
            parameters_keys[i] = qtc.libqt_string{
                .len = parameters_key.len,
                .data = parameters_key.ptr,
            };
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QPlaceManagerEngine_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPlaceManagerEngine_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManagerEngine_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlaceManagerEngine_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManagerEngine_SuperMetacast(@ptrCast(self), param1_Cstring);
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
        return qtc.QPlaceManagerEngine_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        qtc.QPlaceManagerEngine_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        qtc.QPlaceManagerEngine_OnGetPlaceDetails(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetPlaceDetails` instead
    ///
    pub const QBaseGetPlaceDetails = SuperGetPlaceDetails;

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
    pub fn SuperGetPlaceDetails(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManagerEngine_SuperGetPlaceDetails(@ptrCast(self), placeId_str);
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
        qtc.QPlaceManagerEngine_OnGetPlaceContent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetPlaceContent` instead
    ///
    pub const QBaseGetPlaceContent = SuperGetPlaceContent;

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
    pub fn SuperGetPlaceContent(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceContentReply {
        return qtc.QPlaceManagerEngine_SuperGetPlaceContent(@ptrCast(self), @ptrCast(request));
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
        qtc.QPlaceManagerEngine_OnSearch(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSearch` instead
    ///
    pub const QBaseSearch = SuperSearch;

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
    pub fn SuperSearch(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceSearchReply {
        return qtc.QPlaceManagerEngine_SuperSearch(@ptrCast(self), @ptrCast(request));
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
        qtc.QPlaceManagerEngine_OnSearchSuggestions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSearchSuggestions` instead
    ///
    pub const QBaseSearchSuggestions = SuperSearchSuggestions;

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
    pub fn SuperSearchSuggestions(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceSearchSuggestionReply {
        return qtc.QPlaceManagerEngine_SuperSearchSuggestions(@ptrCast(self), @ptrCast(request));
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
        qtc.QPlaceManagerEngine_OnSavePlace(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSavePlace` instead
    ///
    pub const QBaseSavePlace = SuperSavePlace;

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
    pub fn SuperSavePlace(self: ?*anyopaque, place: ?*anyopaque) QtC.QPlaceIdReply {
        return qtc.QPlaceManagerEngine_SuperSavePlace(@ptrCast(self), @ptrCast(place));
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
        qtc.QPlaceManagerEngine_OnRemovePlace(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemovePlace` instead
    ///
    pub const QBaseRemovePlace = SuperRemovePlace;

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
    pub fn SuperRemovePlace(self: ?*anyopaque, placeId: []const u8) QtC.QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return qtc.QPlaceManagerEngine_SuperRemovePlace(@ptrCast(self), placeId_str);
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
        qtc.QPlaceManagerEngine_OnSaveCategory(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveCategory` instead
    ///
    pub const QBaseSaveCategory = SuperSaveCategory;

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
    pub fn SuperSaveCategory(self: ?*anyopaque, category: ?*anyopaque, parentId: []const u8) QtC.QPlaceIdReply {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return qtc.QPlaceManagerEngine_SuperSaveCategory(@ptrCast(self), @ptrCast(category), parentId_str);
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
        qtc.QPlaceManagerEngine_OnRemoveCategory(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveCategory` instead
    ///
    pub const QBaseRemoveCategory = SuperRemoveCategory;

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
    pub fn SuperRemoveCategory(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManagerEngine_SuperRemoveCategory(@ptrCast(self), categoryId_str);
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
        qtc.QPlaceManagerEngine_OnInitializeCategories(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeCategories` instead
    ///
    pub const QBaseInitializeCategories = SuperInitializeCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn SuperInitializeCategories(self: ?*anyopaque) QtC.QPlaceReply {
        return qtc.QPlaceManagerEngine_SuperInitializeCategories(@ptrCast(self));
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
        qtc.QPlaceManagerEngine_OnParentCategoryId(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParentCategoryId` instead
    ///
    pub const QBaseParentCategoryId = SuperParentCategoryId;

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
    pub fn SuperParentCategoryId(self: ?*anyopaque, categoryId: []const u8, allocator: std.mem.Allocator) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManagerEngine_SuperParentCategoryId(@ptrCast(self), categoryId_str);
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
    pub fn ChildCategoryIds(self: ?*anyopaque, categoryId: []const u8, allocator: std.mem.Allocator) []const []const u8 {
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
        qtc.QPlaceManagerEngine_OnChildCategoryIds(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChildCategoryIds` instead
    ///
    pub const QBaseChildCategoryIds = SuperChildCategoryIds;

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
    pub fn SuperChildCategoryIds(self: ?*anyopaque, categoryId: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperChildCategoryIds(@ptrCast(self), categoryId_str);
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
        qtc.QPlaceManagerEngine_OnCategory(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCategory` instead
    ///
    pub const QBaseCategory = SuperCategory;

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
    pub fn SuperCategory(self: ?*anyopaque, categoryId: []const u8) QtC.QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return qtc.QPlaceManagerEngine_SuperCategory(@ptrCast(self), categoryId_str);
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
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, parentId: [*:0]const u8) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QPlaceCategory `
    ///
    pub fn OnChildCategories(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) qtc.libqt_list) void {
        qtc.QPlaceManagerEngine_OnChildCategories(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChildCategories` instead
    ///
    pub const QBaseChildCategories = SuperChildCategories;

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
    pub fn SuperChildCategories(self: ?*anyopaque, parentId: []const u8, allocator: std.mem.Allocator) []QtC.QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperChildCategories(@ptrCast(self), parentId_str);
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
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QLocale `
    ///
    pub fn OnLocales(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QPlaceManagerEngine_OnLocales(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLocales` instead
    ///
    pub const QBaseLocales = SuperLocales;

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
    pub fn SuperLocales(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperLocales(@ptrCast(self));
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
    /// ` callback: *const fn (self: QtC.QPlaceManagerEngine, locales: qtc.libqt_list ([]QtC.QLocale)) callconv(.c) void `
    ///
    pub fn OnSetLocales(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnSetLocales(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLocales` instead
    ///
    pub const QBaseSetLocales = SuperSetLocales;

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
    pub fn SuperSetLocales(self: ?*anyopaque, locales: []QtC.QLocale) void {
        const locales_list = qtc.libqt_list{
            .len = locales.len,
            .data = @ptrCast(locales.ptr),
        };
        qtc.QPlaceManagerEngine_SuperSetLocales(@ptrCast(self), locales_list);
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
        qtc.QPlaceManagerEngine_OnConstructIconUrl(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConstructIconUrl` instead
    ///
    pub const QBaseConstructIconUrl = SuperConstructIconUrl;

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
    pub fn SuperConstructIconUrl(self: ?*anyopaque, icon: ?*anyopaque, size: ?*anyopaque) QtC.QUrl {
        return qtc.QPlaceManagerEngine_SuperConstructIconUrl(@ptrCast(self), @ptrCast(icon), @ptrCast(size));
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
        qtc.QPlaceManagerEngine_OnCompatiblePlace(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCompatiblePlace` instead
    ///
    pub const QBaseCompatiblePlace = SuperCompatiblePlace;

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
    pub fn SuperCompatiblePlace(self: ?*anyopaque, original: ?*anyopaque) QtC.QPlace {
        return qtc.QPlaceManagerEngine_SuperCompatiblePlace(@ptrCast(self), @ptrCast(original));
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
        qtc.QPlaceManagerEngine_OnMatchingPlaces(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMatchingPlaces` instead
    ///
    pub const QBaseMatchingPlaces = SuperMatchingPlaces;

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
    pub fn SuperMatchingPlaces(self: ?*anyopaque, request: ?*anyopaque) QtC.QPlaceMatchReply {
        return qtc.QPlaceManagerEngine_SuperMatchingPlaces(@ptrCast(self), @ptrCast(request));
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
        qtc.QPlaceManagerEngine_Connect_Finished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_ErrorOccurred(@ptrCast(self), @ptrCast(param1), @bitCast(errorVal));
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
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_Connect_PlaceAdded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_Connect_PlaceUpdated(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_Connect_PlaceRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_Connect_CategoryAdded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_Connect_CategoryUpdated(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_Connect_CategoryRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_Connect_DataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QPlaceManagerEngine_OnManager(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperManager` instead
    ///
    pub const QBaseManager = SuperManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn SuperManager(self: ?*anyopaque) QtC.QPlaceManager {
        return qtc.QPlaceManagerEngine_SuperManager(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
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
        qtc.QPlaceManagerEngine_ErrorOccurred3(@ptrCast(self), @ptrCast(param1), @bitCast(errorVal), errorString_str);
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
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred3(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
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
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
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
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
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
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
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
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
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
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
    /// ` self: QtC.QPlaceManagerEngine `
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
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_SuperEvent(@ptrCast(self), @ptrCast(event));
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
        qtc.QPlaceManagerEngine_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
        qtc.QPlaceManagerEngine_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
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
        qtc.QPlaceManagerEngine_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_SuperChildEvent(@ptrCast(self), @ptrCast(event));
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
        qtc.QPlaceManagerEngine_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
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
        qtc.QPlaceManagerEngine_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
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
        qtc.QPlaceManagerEngine_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
        qtc.QPlaceManagerEngine_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPlaceManagerEngine_SuperSender(@ptrCast(self));
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
        qtc.QPlaceManagerEngine_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_SuperSenderSignalIndex(@ptrCast(self));
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
        qtc.QPlaceManagerEngine_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_SuperReceivers(@ptrCast(self), signal_Cstring);
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
        qtc.QPlaceManagerEngine_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPlaceManagerEngine_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
        qtc.QPlaceManagerEngine_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dtor.QPlaceManagerEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceManagerEngine `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPlaceManagerEngine_Delete(@ptrCast(self));
    }
};
