const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
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
const QPlaceIcon = @import("libqt6").QPlaceIcon;
const QPlaceIdReply = @import("libqt6").QPlaceIdReply;
const QPlaceManager = @import("libqt6").QPlaceManager;
const QPlaceMatchReply = @import("libqt6").QPlaceMatchReply;
const QPlaceMatchRequest = @import("libqt6").QPlaceMatchRequest;
const QPlaceReply = @import("libqt6").QPlaceReply;
const QPlaceSearchReply = @import("libqt6").QPlaceSearchReply;
const QPlaceSearchRequest = @import("libqt6").QPlaceSearchRequest;
const QPlaceSearchSuggestionReply = @import("libqt6").QPlaceSearchSuggestionReply;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qplacereply_enums = @import("libqplacereply.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html)
pub const QPlaceManagerEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceManagerEngine,

    pub const _is_QPlaceManagerEngine = {};
    pub const _is_QObject = {};

    /// New constructs a new QPlaceManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn New(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) QPlaceManagerEngine {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_new(parameters_map) };
    }

    /// New2 constructs a new QPlaceManagerEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, parent: anytype) QPlaceManagerEngine {
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
            parameters_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const parameters_map = qtc.libqt_map{
            .len = parameters_count,
            .keys = @ptrCast(parameters_keys.ptr),
            .values = @ptrCast(parameters_values.ptr),
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPlaceManagerEngine_new2(parameters_map, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn MetaObject(self: QPlaceManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlaceManagerEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn SuperMetaObject(self: QPlaceManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPlaceManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManagerEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlaceManagerEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPlaceManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManagerEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPlaceManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPlaceManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ManagerName(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceManagerEngine_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.ManagerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn ManagerVersion(self: QPlaceManagerEngine) i32 {
        return qtc.QPlaceManagerEngine_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn GetPlaceDetails(self: QPlaceManagerEngine, placeId: []const u8) QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_GetPlaceDetails(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) QPlaceDetailsReply `
    ///
    pub fn OnGetPlaceDetails(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceDetailsReply) void {
        qtc.QPlaceManagerEngine_OnGetPlaceDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn SuperGetPlaceDetails(self: QPlaceManagerEngine, placeId: []const u8) QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperGetPlaceDetails(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceContentRequest `
    ///
    pub fn GetPlaceContent(self: QPlaceManagerEngine, request: anytype) QPlaceContentReply {
        comptime _ = @TypeOf(request)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_GetPlaceContent(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, request: QPlaceContentRequest) callconv(.c) QPlaceContentReply `
    ///
    pub fn OnGetPlaceContent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceContentRequest) callconv(.c) QPlaceContentReply) void {
        qtc.QPlaceManagerEngine_OnGetPlaceContent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceContentRequest `
    ///
    pub fn SuperGetPlaceContent(self: QPlaceManagerEngine, request: anytype) QPlaceContentReply {
        comptime _ = @TypeOf(request)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperGetPlaceContent(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn Search(self: QPlaceManagerEngine, request: anytype) QPlaceSearchReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_Search(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, request: QPlaceSearchRequest) callconv(.c) QPlaceSearchReply `
    ///
    pub fn OnSearch(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceSearchRequest) callconv(.c) QPlaceSearchReply) void {
        qtc.QPlaceManagerEngine_OnSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn SuperSearch(self: QPlaceManagerEngine, request: anytype) QPlaceSearchReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSearch(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn SearchSuggestions(self: QPlaceManagerEngine, request: anytype) QPlaceSearchSuggestionReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SearchSuggestions(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, request: QPlaceSearchRequest) callconv(.c) QPlaceSearchSuggestionReply `
    ///
    pub fn OnSearchSuggestions(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceSearchRequest) callconv(.c) QPlaceSearchSuggestionReply) void {
        qtc.QPlaceManagerEngine_OnSearchSuggestions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn SuperSearchSuggestions(self: QPlaceManagerEngine, request: anytype) QPlaceSearchSuggestionReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSearchSuggestions(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` place: QPlace `
    ///
    pub fn SavePlace(self: QPlaceManagerEngine, place: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_SavePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, place: QPlace) callconv(.c) QPlaceIdReply `
    ///
    pub fn OnSavePlace(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlace) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnSavePlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` place: QPlace `
    ///
    pub fn SuperSavePlace(self: QPlaceManagerEngine, place: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSavePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn RemovePlace(self: QPlaceManagerEngine, placeId: []const u8) QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_RemovePlace(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) QPlaceIdReply `
    ///
    pub fn OnRemovePlace(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnRemovePlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn SuperRemovePlace(self: QPlaceManagerEngine, placeId: []const u8) QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperRemovePlace(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn SaveCategory(self: QPlaceManagerEngine, category: anytype, parentId: []const u8) QPlaceIdReply {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SaveCategory(@ptrCast(self.ptr), @ptrCast(category.ptr), parentId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, category: QPlaceCategory, parentId: [*:0]const u8) callconv(.c) QPlaceIdReply `
    ///
    pub fn OnSaveCategory(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceCategory, [*:0]const u8) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnSaveCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn SuperSaveCategory(self: QPlaceManagerEngine, category: anytype, parentId: []const u8) QPlaceIdReply {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSaveCategory(@ptrCast(self.ptr), @ptrCast(category.ptr), parentId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn RemoveCategory(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_RemoveCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) QPlaceIdReply `
    ///
    pub fn OnRemoveCategory(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnRemoveCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn SuperRemoveCategory(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperRemoveCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn InitializeCategories(self: QPlaceManagerEngine) QPlaceReply {
        return .{ .ptr = qtc.QPlaceManagerEngine_InitializeCategories(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QPlaceReply `
    ///
    pub fn OnInitializeCategories(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QPlaceReply) void {
        qtc.QPlaceManagerEngine_OnInitializeCategories(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn SuperInitializeCategories(self: QPlaceManagerEngine) QPlaceReply {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperInitializeCategories(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn ParentCategoryId(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManagerEngine_ParentCategoryId(@ptrCast(self.ptr), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.ParentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnParentCategoryId(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QPlaceManagerEngine_OnParentCategoryId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn SuperParentCategoryId(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManagerEngine_SuperParentCategoryId(@ptrCast(self.ptr), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.ParentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategoryIds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn ChildCategoryIds(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_ChildCategoryIds(@ptrCast(self.ptr), categoryId_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnChildCategoryIds(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QPlaceManagerEngine_OnChildCategoryIds(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn SuperChildCategoryIds(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperChildCategoryIds(@ptrCast(self.ptr), categoryId_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn Category(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_Category(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) QPlaceCategory `
    ///
    pub fn OnCategory(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceCategory) void {
        qtc.QPlaceManagerEngine_OnCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn SuperCategory(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn ChildCategories(self: QPlaceManagerEngine, allocator: std.mem.Allocator, parentId: []const u8) []QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_ChildCategories(@ptrCast(self.ptr), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("qplacemanagerengine.ChildCategories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, parentId: [*:0]const u8) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QPlaceCategory `
    ///
    pub fn OnChildCategories(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) qtc.libqt_list) void {
        qtc.QPlaceManagerEngine_OnChildCategories(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn SuperChildCategories(self: QPlaceManagerEngine, allocator: std.mem.Allocator, parentId: []const u8) []QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperChildCategories(@ptrCast(self.ptr), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("qplacemanagerengine.ChildCategories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Locales(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_Locales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("qplacemanagerengine.Locales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QLocale `
    ///
    pub fn OnLocales(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QPlaceManagerEngine_OnLocales(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocales(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("qplacemanagerengine.Locales: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` locales: []QLocale `
    ///
    pub fn SetLocales(self: QPlaceManagerEngine, locales: []QLocale) void {
        const locales_list = qtc.libqt_list{
            .len = locales.len,
            .data = @ptrCast(locales.ptr),
        };
        qtc.QPlaceManagerEngine_SetLocales(@ptrCast(self.ptr), locales_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, locales: qtc.libqt_list ([]QLocale)) callconv(.c) void `
    ///
    pub fn OnSetLocales(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, qtc.libqt_list) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnSetLocales(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` locales: []QLocale `
    ///
    pub fn SuperSetLocales(self: QPlaceManagerEngine, locales: []QLocale) void {
        const locales_list = qtc.libqt_list{
            .len = locales.len,
            .data = @ptrCast(locales.ptr),
        };
        qtc.QPlaceManagerEngine_SuperSetLocales(@ptrCast(self.ptr), locales_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` icon: QPlaceIcon `
    ///
    /// ` size: QSize `
    ///
    pub fn ConstructIconUrl(self: QPlaceManagerEngine, icon: anytype, size: anytype) QUrl {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPlaceManagerEngine_ConstructIconUrl(@ptrCast(self.ptr), @ptrCast(icon.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, icon: QPlaceIcon, size: QSize) callconv(.c) QUrl `
    ///
    pub fn OnConstructIconUrl(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceIcon, QSize) callconv(.c) QUrl) void {
        qtc.QPlaceManagerEngine_OnConstructIconUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` icon: QPlaceIcon `
    ///
    /// ` size: QSize `
    ///
    pub fn SuperConstructIconUrl(self: QPlaceManagerEngine, icon: anytype, size: anytype) QUrl {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperConstructIconUrl(@ptrCast(self.ptr), @ptrCast(icon.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` original: QPlace `
    ///
    pub fn CompatiblePlace(self: QPlaceManagerEngine, original: anytype) QPlace {
        comptime _ = @TypeOf(original)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_CompatiblePlace(@ptrCast(self.ptr), @ptrCast(original.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, original: QPlace) callconv(.c) QPlace `
    ///
    pub fn OnCompatiblePlace(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlace) callconv(.c) QPlace) void {
        qtc.QPlaceManagerEngine_OnCompatiblePlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` original: QPlace `
    ///
    pub fn SuperCompatiblePlace(self: QPlaceManagerEngine, original: anytype) QPlace {
        comptime _ = @TypeOf(original)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperCompatiblePlace(@ptrCast(self.ptr), @ptrCast(original.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceMatchRequest `
    ///
    pub fn MatchingPlaces(self: QPlaceManagerEngine, request: anytype) QPlaceMatchReply {
        comptime _ = @TypeOf(request)._is_QPlaceMatchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_MatchingPlaces(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, request: QPlaceMatchRequest) callconv(.c) QPlaceMatchReply `
    ///
    pub fn OnMatchingPlaces(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceMatchRequest) callconv(.c) QPlaceMatchReply) void {
        qtc.QPlaceManagerEngine_OnMatchingPlaces(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceMatchRequest `
    ///
    pub fn SuperMatchingPlaces(self: QPlaceManagerEngine, request: anytype) QPlaceMatchReply {
        comptime _ = @TypeOf(request)._is_QPlaceMatchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperMatchingPlaces(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` reply: QPlaceReply `
    ///
    pub fn Finished(self: QPlaceManagerEngine, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QPlaceReply;
        qtc.QPlaceManagerEngine_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, reply: QPlaceReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceReply) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: QPlaceReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    pub fn ErrorOccurred(self: QPlaceManagerEngine, param1: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        qtc.QPlaceManagerEngine_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: QPlaceReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceReply, i32) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceAdded(self: QPlaceManagerEngine, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceAdded(@ptrCast(self.ptr), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceAdded(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceUpdated(self: QPlaceManagerEngine, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceUpdated(@ptrCast(self.ptr), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceUpdated(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn PlaceRemoved(self: QPlaceManagerEngine, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceRemoved(@ptrCast(self.ptr), placeId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPlaceRemoved(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` category: QPlaceCategory `
    ///
    /// ` parentCategoryId: []const u8 `
    ///
    pub fn CategoryAdded(self: QPlaceManagerEngine, category: anytype, parentCategoryId: []const u8) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        const parentCategoryId_str = qtc.libqt_string{
            .len = parentCategoryId.len,
            .data = parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryAdded(@ptrCast(self.ptr), @ptrCast(category.ptr), parentCategoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, category: QPlaceCategory, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryAdded(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` category: QPlaceCategory `
    ///
    /// ` parentCategoryId: []const u8 `
    ///
    pub fn CategoryUpdated(self: QPlaceManagerEngine, category: anytype, parentCategoryId: []const u8) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        const parentCategoryId_str = qtc.libqt_string{
            .len = parentCategoryId.len,
            .data = parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryUpdated(@ptrCast(self.ptr), @ptrCast(category.ptr), parentCategoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, category: QPlaceCategory, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryUpdated(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` parentCategoryId: []const u8 `
    ///
    pub fn CategoryRemoved(self: QPlaceManagerEngine, categoryId: []const u8, parentCategoryId: []const u8) void {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const parentCategoryId_str = qtc.libqt_string{
            .len = parentCategoryId.len,
            .data = parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryRemoved(@ptrCast(self.ptr), categoryId_str, parentCategoryId_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, categoryId: [*:0]const u8, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCategoryRemoved(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn DataChanged(self: QPlaceManagerEngine) void {
        qtc.QPlaceManagerEngine_DataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn Manager(self: QPlaceManagerEngine) QPlaceManager {
        return .{ .ptr = qtc.QPlaceManagerEngine_Manager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QPlaceManager `
    ///
    pub fn OnManager(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QPlaceManager) void {
        qtc.QPlaceManagerEngine_OnManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn SuperManager(self: QPlaceManagerEngine) QPlaceManager {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperManager(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacemanagerengine.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: QPlaceReply `
    ///
    /// ` errorVal: qplacereply_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn ErrorOccurred3(self: QPlaceManagerEngine, param1: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QPlaceManagerEngine_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: QPlaceReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorOccurred3(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPlaceManagerEngine, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn IsWidgetType(self: QPlaceManagerEngine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn IsWindowType(self: QPlaceManagerEngine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn IsQuickItemType(self: QPlaceManagerEngine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn SignalsBlocked(self: QPlaceManagerEngine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPlaceManagerEngine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn Thread(self: QPlaceManagerEngine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPlaceManagerEngine, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPlaceManagerEngine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPlaceManagerEngine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPlaceManagerEngine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPlaceManagerEngine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qplacemanagerengine.Children: Memory allocation failed");
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPlaceManagerEngine, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPlaceManagerEngine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPlaceManagerEngine, obj: anytype) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPlaceManagerEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn Disconnect3(self: QPlaceManagerEngine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPlaceManagerEngine, receiver: anytype) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn DumpObjectTree(self: QPlaceManagerEngine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn DumpObjectInfo(self: QPlaceManagerEngine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPlaceManagerEngine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPlaceManagerEngine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPlaceManagerEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn BindingStorage(self: QPlaceManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn BindingStorage2(self: QPlaceManagerEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn Destroyed(self: QPlaceManagerEngine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn Parent(self: QPlaceManagerEngine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPlaceManagerEngine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn DeleteLater(self: QPlaceManagerEngine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPlaceManagerEngine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPlaceManagerEngine, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPlaceManagerEngine, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPlaceManagerEngine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPlaceManagerEngine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPlaceManagerEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPlaceManagerEngine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPlaceManagerEngine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QObject) callconv(.c) void) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPlaceManagerEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlaceManagerEngine_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPlaceManagerEngine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlaceManagerEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QEvent) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPlaceManagerEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlaceManagerEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPlaceManagerEngine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlaceManagerEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPlaceManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPlaceManagerEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPlaceManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPlaceManagerEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPlaceManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPlaceManagerEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPlaceManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPlaceManagerEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QChildEvent) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPlaceManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlaceManagerEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPlaceManagerEngine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlaceManagerEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QEvent) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn Sender(self: QPlaceManagerEngine) QObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn SuperSender(self: QPlaceManagerEngine) QObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlaceManagerEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn SenderSignalIndex(self: QPlaceManagerEngine) i32 {
        return qtc.QPlaceManagerEngine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn SuperSenderSignalIndex(self: QPlaceManagerEngine) i32 {
        return qtc.QPlaceManagerEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPlaceManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPlaceManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPlaceManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceManagerEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPlaceManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceManagerEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn Delete(self: QPlaceManagerEngine) void {
        qtc.QPlaceManagerEngine_Delete(@ptrCast(self.ptr));
    }
};
