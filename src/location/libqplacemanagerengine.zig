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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceManagerEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    pub fn new(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant) QPlaceManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QPlaceManagerEngine.new: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QPlaceManagerEngine.new: Memory allocation failed");
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

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceManagerEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parameters: ArrayMap_constu8_QVariant `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(allocator: std.mem.Allocator, parameters: ArrayMap_constu8_QVariant, _parent: anytype) QPlaceManagerEngine {
        const parameters_count = parameters.count();
        const parameters_keys = allocator.alloc(qtc.libqt_string, parameters_count) catch @panic("QPlaceManagerEngine.new2: Memory allocation failed");
        defer allocator.free(parameters_keys);
        const parameters_values = allocator.alloc(QtC.QVariant, parameters_count) catch @panic("QPlaceManagerEngine.new2: Memory allocation failed");
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
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPlaceManagerEngine_new2(parameters_map, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn metaObject(self: QPlaceManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlaceManagerEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn superMetaObject(self: QPlaceManagerEngine) QMetaObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPlaceManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManagerEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlaceManagerEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPlaceManagerEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlaceManagerEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QPlaceManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QPlaceManagerEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlaceManagerEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManagerEngine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerName` instead
    ///
    pub const ManagerName = managerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn managerName(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceManagerEngine_ManagerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManagerEngine.managerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managerVersion` instead
    ///
    pub const ManagerVersion = managerVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn managerVersion(self: QPlaceManagerEngine) i32 {
        return qtc.QPlaceManagerEngine_ManagerVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getPlaceDetails` instead
    ///
    pub const GetPlaceDetails = getPlaceDetails;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn getPlaceDetails(self: QPlaceManagerEngine, placeId: []const u8) QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_GetPlaceDetails(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### DEPRECATED: Use `onGetPlaceDetails` instead
    ///
    pub const OnGetPlaceDetails = onGetPlaceDetails;

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
    pub fn onGetPlaceDetails(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceDetailsReply) void {
        qtc.QPlaceManagerEngine_OnGetPlaceDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetPlaceDetails` instead
    ///
    pub const SuperGetPlaceDetails = superGetPlaceDetails;

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
    pub fn superGetPlaceDetails(self: QPlaceManagerEngine, placeId: []const u8) QPlaceDetailsReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperGetPlaceDetails(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### DEPRECATED: Use `getPlaceContent` instead
    ///
    pub const GetPlaceContent = getPlaceContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceContentRequest `
    ///
    pub fn getPlaceContent(self: QPlaceManagerEngine, request: anytype) QPlaceContentReply {
        comptime _ = @TypeOf(request)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_GetPlaceContent(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `onGetPlaceContent` instead
    ///
    pub const OnGetPlaceContent = onGetPlaceContent;

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
    pub fn onGetPlaceContent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceContentRequest) callconv(.c) QPlaceContentReply) void {
        qtc.QPlaceManagerEngine_OnGetPlaceContent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetPlaceContent` instead
    ///
    pub const SuperGetPlaceContent = superGetPlaceContent;

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
    pub fn superGetPlaceContent(self: QPlaceManagerEngine, request: anytype) QPlaceContentReply {
        comptime _ = @TypeOf(request)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperGetPlaceContent(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `search` instead
    ///
    pub const Search = search;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn search(self: QPlaceManagerEngine, request: anytype) QPlaceSearchReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_Search(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `onSearch` instead
    ///
    pub const OnSearch = onSearch;

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
    pub fn onSearch(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceSearchRequest) callconv(.c) QPlaceSearchReply) void {
        qtc.QPlaceManagerEngine_OnSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSearch` instead
    ///
    pub const SuperSearch = superSearch;

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
    pub fn superSearch(self: QPlaceManagerEngine, request: anytype) QPlaceSearchReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSearch(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `searchSuggestions` instead
    ///
    pub const SearchSuggestions = searchSuggestions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceSearchRequest `
    ///
    pub fn searchSuggestions(self: QPlaceManagerEngine, request: anytype) QPlaceSearchSuggestionReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SearchSuggestions(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `onSearchSuggestions` instead
    ///
    pub const OnSearchSuggestions = onSearchSuggestions;

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
    pub fn onSearchSuggestions(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceSearchRequest) callconv(.c) QPlaceSearchSuggestionReply) void {
        qtc.QPlaceManagerEngine_OnSearchSuggestions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSearchSuggestions` instead
    ///
    pub const SuperSearchSuggestions = superSearchSuggestions;

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
    pub fn superSearchSuggestions(self: QPlaceManagerEngine, request: anytype) QPlaceSearchSuggestionReply {
        comptime _ = @TypeOf(request)._is_QPlaceSearchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSearchSuggestions(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `savePlace` instead
    ///
    pub const SavePlace = savePlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` place: QPlace `
    ///
    pub fn savePlace(self: QPlaceManagerEngine, place: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_SavePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### DEPRECATED: Use `onSavePlace` instead
    ///
    pub const OnSavePlace = onSavePlace;

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
    pub fn onSavePlace(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlace) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnSavePlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSavePlace` instead
    ///
    pub const SuperSavePlace = superSavePlace;

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
    pub fn superSavePlace(self: QPlaceManagerEngine, place: anytype) QPlaceIdReply {
        comptime _ = @TypeOf(place)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSavePlace(@ptrCast(self.ptr), @ptrCast(place.ptr)) };
    }

    /// ### DEPRECATED: Use `removePlace` instead
    ///
    pub const RemovePlace = removePlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn removePlace(self: QPlaceManagerEngine, placeId: []const u8) QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_RemovePlace(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### DEPRECATED: Use `onRemovePlace` instead
    ///
    pub const OnRemovePlace = onRemovePlace;

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
    pub fn onRemovePlace(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnRemovePlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemovePlace` instead
    ///
    pub const SuperRemovePlace = superRemovePlace;

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
    pub fn superRemovePlace(self: QPlaceManagerEngine, placeId: []const u8) QPlaceIdReply {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperRemovePlace(@ptrCast(self.ptr), placeId_str) };
    }

    /// ### DEPRECATED: Use `saveCategory` instead
    ///
    pub const SaveCategory = saveCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn saveCategory(self: QPlaceManagerEngine, _category: anytype, parentId: []const u8) QPlaceIdReply {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SaveCategory(@ptrCast(self.ptr), @ptrCast(_category.ptr), parentId_str) };
    }

    /// ### DEPRECATED: Use `onSaveCategory` instead
    ///
    pub const OnSaveCategory = onSaveCategory;

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
    pub fn onSaveCategory(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceCategory, [*:0]const u8) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnSaveCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveCategory` instead
    ///
    pub const SuperSaveCategory = superSaveCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _category: QPlaceCategory `
    ///
    /// ` parentId: []const u8 `
    ///
    pub fn superSaveCategory(self: QPlaceManagerEngine, _category: anytype, parentId: []const u8) QPlaceIdReply {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSaveCategory(@ptrCast(self.ptr), @ptrCast(_category.ptr), parentId_str) };
    }

    /// ### DEPRECATED: Use `removeCategory` instead
    ///
    pub const RemoveCategory = removeCategory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn removeCategory(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_RemoveCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### DEPRECATED: Use `onRemoveCategory` instead
    ///
    pub const OnRemoveCategory = onRemoveCategory;

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
    pub fn onRemoveCategory(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceIdReply) void {
        qtc.QPlaceManagerEngine_OnRemoveCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveCategory` instead
    ///
    pub const SuperRemoveCategory = superRemoveCategory;

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
    pub fn superRemoveCategory(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceIdReply {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperRemoveCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### DEPRECATED: Use `initializeCategories` instead
    ///
    pub const InitializeCategories = initializeCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn initializeCategories(self: QPlaceManagerEngine) QPlaceReply {
        return .{ .ptr = qtc.QPlaceManagerEngine_InitializeCategories(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onInitializeCategories` instead
    ///
    pub const OnInitializeCategories = onInitializeCategories;

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
    pub fn onInitializeCategories(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QPlaceReply) void {
        qtc.QPlaceManagerEngine_OnInitializeCategories(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeCategories` instead
    ///
    pub const SuperInitializeCategories = superInitializeCategories;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn superInitializeCategories(self: QPlaceManagerEngine) QPlaceReply {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperInitializeCategories(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentCategoryId` instead
    ///
    pub const ParentCategoryId = parentCategoryId;

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
    pub fn parentCategoryId(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManagerEngine_ParentCategoryId(@ptrCast(self.ptr), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManagerEngine.parentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onParentCategoryId` instead
    ///
    pub const OnParentCategoryId = onParentCategoryId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, categoryId: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onParentCategoryId(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QPlaceManagerEngine_OnParentCategoryId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParentCategoryId` instead
    ///
    pub const SuperParentCategoryId = superParentCategoryId;

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
    pub fn superParentCategoryId(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const u8 {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        var _str = qtc.QPlaceManagerEngine_SuperParentCategoryId(@ptrCast(self.ptr), categoryId_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManagerEngine.parentCategoryId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `childCategoryIds` instead
    ///
    pub const ChildCategoryIds = childCategoryIds;

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
    pub fn childCategoryIds(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPlaceManagerEngine.childCategoryIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceManagerEngine.childCategoryIds: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onChildCategoryIds` instead
    ///
    pub const OnChildCategoryIds = onChildCategoryIds;

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
    pub fn onChildCategoryIds(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QPlaceManagerEngine_OnChildCategoryIds(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChildCategoryIds` instead
    ///
    pub const SuperChildCategoryIds = superChildCategoryIds;

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
    pub fn superChildCategoryIds(self: QPlaceManagerEngine, allocator: std.mem.Allocator, categoryId: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPlaceManagerEngine.childCategoryIds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceManagerEngine.childCategoryIds: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    pub fn category(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_Category(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### DEPRECATED: Use `onCategory` instead
    ///
    pub const OnCategory = onCategory;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCategory(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) QPlaceCategory) void {
        qtc.QPlaceManagerEngine_OnCategory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCategory` instead
    ///
    pub const SuperCategory = superCategory;

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
    pub fn superCategory(self: QPlaceManagerEngine, categoryId: []const u8) QPlaceCategory {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperCategory(@ptrCast(self.ptr), categoryId_str) };
    }

    /// ### DEPRECATED: Use `childCategories` instead
    ///
    pub const ChildCategories = childCategories;

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
    pub fn childCategories(self: QPlaceManagerEngine, allocator: std.mem.Allocator, parentId: []const u8) []QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_ChildCategories(@ptrCast(self.ptr), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("QPlaceManagerEngine.childCategories: Memory allocation failed");
        const _data_val: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onChildCategories` instead
    ///
    pub const OnChildCategories = onChildCategories;

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
    pub fn onChildCategories(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) qtc.libqt_list) void {
        qtc.QPlaceManagerEngine_OnChildCategories(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChildCategories` instead
    ///
    pub const SuperChildCategories = superChildCategories;

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
    pub fn superChildCategories(self: QPlaceManagerEngine, allocator: std.mem.Allocator, parentId: []const u8) []QPlaceCategory {
        const parentId_str = qtc.libqt_string{
            .len = parentId.len,
            .data = parentId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperChildCategories(@ptrCast(self.ptr), parentId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("QPlaceManagerEngine.childCategories: Memory allocation failed");
        const _data_val: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `locales` instead
    ///
    pub const Locales = locales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn locales(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_Locales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("QPlaceManagerEngine.locales: Memory allocation failed");
        const _data_val: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocales` instead
    ///
    pub const OnLocales = onLocales;

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
    pub fn onLocales(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QPlaceManagerEngine_OnLocales(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLocales` instead
    ///
    pub const SuperLocales = superLocales;

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
    pub fn superLocales(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.QPlaceManagerEngine_SuperLocales(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("QPlaceManagerEngine.locales: Memory allocation failed");
        const _data_val: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocales` instead
    ///
    pub const SetLocales = setLocales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _locales: []QLocale `
    ///
    pub fn setLocales(self: QPlaceManagerEngine, _locales: []QLocale) void {
        const locales_list = qtc.libqt_list{
            .len = _locales.len,
            .data = @ptrCast(_locales.ptr),
        };
        qtc.QPlaceManagerEngine_SetLocales(@ptrCast(self.ptr), locales_list);
    }

    /// ### DEPRECATED: Use `onSetLocales` instead
    ///
    pub const OnSetLocales = onSetLocales;

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
    pub fn onSetLocales(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, qtc.libqt_list) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnSetLocales(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLocales` instead
    ///
    pub const SuperSetLocales = superSetLocales;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _locales: []QLocale `
    ///
    pub fn superSetLocales(self: QPlaceManagerEngine, _locales: []QLocale) void {
        const locales_list = qtc.libqt_list{
            .len = _locales.len,
            .data = @ptrCast(_locales.ptr),
        };
        qtc.QPlaceManagerEngine_SuperSetLocales(@ptrCast(self.ptr), locales_list);
    }

    /// ### DEPRECATED: Use `constructIconUrl` instead
    ///
    pub const ConstructIconUrl = constructIconUrl;

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
    pub fn constructIconUrl(self: QPlaceManagerEngine, icon: anytype, size: anytype) QUrl {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPlaceManagerEngine_ConstructIconUrl(@ptrCast(self.ptr), @ptrCast(icon.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `onConstructIconUrl` instead
    ///
    pub const OnConstructIconUrl = onConstructIconUrl;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onConstructIconUrl(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceIcon, QSize) callconv(.c) QUrl) void {
        qtc.QPlaceManagerEngine_OnConstructIconUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConstructIconUrl` instead
    ///
    pub const SuperConstructIconUrl = superConstructIconUrl;

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
    pub fn superConstructIconUrl(self: QPlaceManagerEngine, icon: anytype, size: anytype) QUrl {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperConstructIconUrl(@ptrCast(self.ptr), @ptrCast(icon.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `compatiblePlace` instead
    ///
    pub const CompatiblePlace = compatiblePlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` original: QPlace `
    ///
    pub fn compatiblePlace(self: QPlaceManagerEngine, original: anytype) QPlace {
        comptime _ = @TypeOf(original)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_CompatiblePlace(@ptrCast(self.ptr), @ptrCast(original.ptr)) };
    }

    /// ### DEPRECATED: Use `onCompatiblePlace` instead
    ///
    pub const OnCompatiblePlace = onCompatiblePlace;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCompatiblePlace(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlace) callconv(.c) QPlace) void {
        qtc.QPlaceManagerEngine_OnCompatiblePlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompatiblePlace` instead
    ///
    pub const SuperCompatiblePlace = superCompatiblePlace;

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
    pub fn superCompatiblePlace(self: QPlaceManagerEngine, original: anytype) QPlace {
        comptime _ = @TypeOf(original)._is_QPlace;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperCompatiblePlace(@ptrCast(self.ptr), @ptrCast(original.ptr)) };
    }

    /// ### DEPRECATED: Use `matchingPlaces` instead
    ///
    pub const MatchingPlaces = matchingPlaces;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` request: QPlaceMatchRequest `
    ///
    pub fn matchingPlaces(self: QPlaceManagerEngine, request: anytype) QPlaceMatchReply {
        comptime _ = @TypeOf(request)._is_QPlaceMatchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_MatchingPlaces(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `onMatchingPlaces` instead
    ///
    pub const OnMatchingPlaces = onMatchingPlaces;

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
    pub fn onMatchingPlaces(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceMatchRequest) callconv(.c) QPlaceMatchReply) void {
        qtc.QPlaceManagerEngine_OnMatchingPlaces(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMatchingPlaces` instead
    ///
    pub const SuperMatchingPlaces = superMatchingPlaces;

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
    pub fn superMatchingPlaces(self: QPlaceManagerEngine, request: anytype) QPlaceMatchReply {
        comptime _ = @TypeOf(request)._is_QPlaceMatchRequest;
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperMatchingPlaces(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` reply: QPlaceReply `
    ///
    pub fn finished(self: QPlaceManagerEngine, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QPlaceReply;
        qtc.QPlaceManagerEngine_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, reply: QPlaceReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceReply) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

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
    pub fn errorOccurred(self: QPlaceManagerEngine, param1: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        qtc.QPlaceManagerEngine_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: QPlaceReply, errorVal: qplacereply_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceReply, i32) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `placeAdded` instead
    ///
    pub const PlaceAdded = placeAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn placeAdded(self: QPlaceManagerEngine, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceAdded(@ptrCast(self.ptr), placeId_str);
    }

    /// ### DEPRECATED: Use `onPlaceAdded` instead
    ///
    pub const OnPlaceAdded = onPlaceAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPlaceAdded(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `placeUpdated` instead
    ///
    pub const PlaceUpdated = placeUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn placeUpdated(self: QPlaceManagerEngine, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceUpdated(@ptrCast(self.ptr), placeId_str);
    }

    /// ### DEPRECATED: Use `onPlaceUpdated` instead
    ///
    pub const OnPlaceUpdated = onPlaceUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPlaceUpdated(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `placeRemoved` instead
    ///
    pub const PlaceRemoved = placeRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` placeId: []const u8 `
    ///
    pub fn placeRemoved(self: QPlaceManagerEngine, placeId: []const u8) void {
        const placeId_str = qtc.libqt_string{
            .len = placeId.len,
            .data = placeId.ptr,
        };
        qtc.QPlaceManagerEngine_PlaceRemoved(@ptrCast(self.ptr), placeId_str);
    }

    /// ### DEPRECATED: Use `onPlaceRemoved` instead
    ///
    pub const OnPlaceRemoved = onPlaceRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, placeId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onPlaceRemoved(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_PlaceRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `categoryAdded` instead
    ///
    pub const CategoryAdded = categoryAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _category: QPlaceCategory `
    ///
    /// ` _parentCategoryId: []const u8 `
    ///
    pub fn categoryAdded(self: QPlaceManagerEngine, _category: anytype, _parentCategoryId: []const u8) void {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        const parentCategoryId_str = qtc.libqt_string{
            .len = _parentCategoryId.len,
            .data = _parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryAdded(@ptrCast(self.ptr), @ptrCast(_category.ptr), parentCategoryId_str);
    }

    /// ### DEPRECATED: Use `onCategoryAdded` instead
    ///
    pub const OnCategoryAdded = onCategoryAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, category: QPlaceCategory, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCategoryAdded(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `categoryUpdated` instead
    ///
    pub const CategoryUpdated = categoryUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _category: QPlaceCategory `
    ///
    /// ` _parentCategoryId: []const u8 `
    ///
    pub fn categoryUpdated(self: QPlaceManagerEngine, _category: anytype, _parentCategoryId: []const u8) void {
        comptime _ = @TypeOf(_category)._is_QPlaceCategory;
        const parentCategoryId_str = qtc.libqt_string{
            .len = _parentCategoryId.len,
            .data = _parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryUpdated(@ptrCast(self.ptr), @ptrCast(_category.ptr), parentCategoryId_str);
    }

    /// ### DEPRECATED: Use `onCategoryUpdated` instead
    ///
    pub const OnCategoryUpdated = onCategoryUpdated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, category: QPlaceCategory, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCategoryUpdated(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceCategory, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `categoryRemoved` instead
    ///
    pub const CategoryRemoved = categoryRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` categoryId: []const u8 `
    ///
    /// ` _parentCategoryId: []const u8 `
    ///
    pub fn categoryRemoved(self: QPlaceManagerEngine, categoryId: []const u8, _parentCategoryId: []const u8) void {
        const categoryId_str = qtc.libqt_string{
            .len = categoryId.len,
            .data = categoryId.ptr,
        };
        const parentCategoryId_str = qtc.libqt_string{
            .len = _parentCategoryId.len,
            .data = _parentCategoryId.ptr,
        };
        qtc.QPlaceManagerEngine_CategoryRemoved(@ptrCast(self.ptr), categoryId_str, parentCategoryId_str);
    }

    /// ### DEPRECATED: Use `onCategoryRemoved` instead
    ///
    pub const OnCategoryRemoved = onCategoryRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, categoryId: [*:0]const u8, parentCategoryId: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCategoryRemoved(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_CategoryRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn dataChanged(self: QPlaceManagerEngine) void {
        qtc.QPlaceManagerEngine_DataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `manager` instead
    ///
    pub const Manager = manager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn manager(self: QPlaceManagerEngine) QPlaceManager {
        return .{ .ptr = qtc.QPlaceManagerEngine_Manager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onManager` instead
    ///
    pub const OnManager = onManager;

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
    pub fn onManager(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QPlaceManager) void {
        qtc.QPlaceManagerEngine_OnManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superManager` instead
    ///
    pub const SuperManager = superManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn superManager(self: QPlaceManagerEngine) QPlaceManager {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperManager(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManagerEngine.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManagerEngine.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorOccurred3` instead
    ///
    pub const ErrorOccurred3 = errorOccurred3;

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
    pub fn errorOccurred3(self: QPlaceManagerEngine, param1: anytype, errorVal: i32, errorString: []const u8) void {
        comptime _ = @TypeOf(param1)._is_QPlaceReply;
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QPlaceManagerEngine_ErrorOccurred3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(errorVal), errorString_str);
    }

    /// ### DEPRECATED: Use `onErrorOccurred3` instead
    ///
    pub const OnErrorOccurred3 = onErrorOccurred3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: QPlaceReply, errorVal: qplacereply_enums.Error, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onErrorOccurred3(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QPlaceReply, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_Connect_ErrorOccurred3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceManagerEngine.objectName: Memory allocation failed");
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPlaceManagerEngine, name: []const u8) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn isWidgetType(self: QPlaceManagerEngine) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn isWindowType(self: QPlaceManagerEngine) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn isQuickItemType(self: QPlaceManagerEngine) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn signalsBlocked(self: QPlaceManagerEngine) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPlaceManagerEngine, b: bool) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn thread(self: QPlaceManagerEngine) QThread {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPlaceManagerEngine, _thread: anytype) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPlaceManagerEngine, interval: i32) i32 {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPlaceManagerEngine, time: i64) i32 {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPlaceManagerEngine, id: i32) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPlaceManagerEngine, id: i32) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPlaceManagerEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPlaceManagerEngine.children: Memory allocation failed");
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPlaceManagerEngine, _parent: anytype) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPlaceManagerEngine, filterObj: anytype) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPlaceManagerEngine, obj: anytype) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPlaceManagerEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn disconnect3(self: QPlaceManagerEngine) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPlaceManagerEngine, receiver: anytype) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn dumpObjectTree(self: QPlaceManagerEngine) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn dumpObjectInfo(self: QPlaceManagerEngine) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPlaceManagerEngine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPlaceManagerEngine, name: [:0]const u8) QVariant {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPlaceManagerEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPlaceManagerEngine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlaceManagerEngine.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn bindingStorage(self: QPlaceManagerEngine) QBindingStorage {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn bindingStorage2(self: QPlaceManagerEngine) QBindingStorage {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn destroyed(self: QPlaceManagerEngine) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine) callconv(.c) void) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn parent(self: QPlaceManagerEngine) QObject {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPlaceManagerEngine, classname: [:0]const u8) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn deleteLater(self: QPlaceManagerEngine) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPlaceManagerEngine, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPlaceManagerEngine, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPlaceManagerEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPlaceManagerEngine, signal: [:0]const u8) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPlaceManagerEngine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPlaceManagerEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPlaceManagerEngine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPlaceManagerEngine, param1: anytype) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QObject) callconv(.c) void) void {
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPlaceManagerEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceManagerEngine_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPlaceManagerEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceManagerEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QEvent) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPlaceManagerEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceManagerEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPlaceManagerEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlaceManagerEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPlaceManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlaceManagerEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPlaceManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlaceManagerEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPlaceManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlaceManagerEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPlaceManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlaceManagerEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QChildEvent) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPlaceManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlaceManagerEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPlaceManagerEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlaceManagerEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QEvent) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPlaceManagerEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlaceManagerEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QPlaceManagerEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn sender(self: QPlaceManagerEngine) QObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn superSender(self: QPlaceManagerEngine) QObject {
        return .{ .ptr = qtc.QPlaceManagerEngine_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlaceManagerEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn senderSignalIndex(self: QPlaceManagerEngine) i32 {
        return qtc.QPlaceManagerEngine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn superSenderSignalIndex(self: QPlaceManagerEngine) i32 {
        return qtc.QPlaceManagerEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPlaceManagerEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPlaceManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPlaceManagerEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlaceManagerEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlaceManagerEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPlaceManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceManagerEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPlaceManagerEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlaceManagerEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlaceManagerEngine`
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlaceManagerEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlaceManagerEngine `
    ///
    /// ` callback: *const fn (self: QPlaceManagerEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPlaceManagerEngine, callback: *const fn (QPlaceManagerEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dtor.QPlaceManagerEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceManagerEngine `
    ///
    pub fn delete(self: QPlaceManagerEngine) void {
        qtc.QPlaceManagerEngine_Delete(@ptrCast(self.ptr));
    }
};
