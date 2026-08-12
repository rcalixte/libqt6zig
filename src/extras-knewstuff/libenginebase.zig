const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Attica__Provider = @import("libqt6").Attica__Provider;
const KNSCore__CategoryMetadata = @import("libqt6").KNSCore__CategoryMetadata;
const KNSCore__Entry = @import("libqt6").KNSCore__Entry;
const KNSCore__ProviderCore = @import("libqt6").KNSCore__ProviderCore;
const KNSCore__Provider__CategoryMetadata = @import("libqt6").KNSCore__Provider__CategoryMetadata;
const KNSCore__Provider__SearchPreset = @import("libqt6").KNSCore__Provider__SearchPreset;
const KNSCore__Provider__SearchRequest = @import("libqt6").KNSCore__Provider__SearchRequest;
const KNSCore__ResultsStream = @import("libqt6").KNSCore__ResultsStream;
const KNSCore__SearchPreset = @import("libqt6").KNSCore__SearchPreset;
const KNSCore__SearchRequest = @import("libqt6").KNSCore__SearchRequest;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const enginebase_enums = enums;
const errorcode_enums = @import("liberrorcode.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html)
pub const KNSCore__EngineBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__EngineBase,

    pub const _is_KNSCore__EngineBase = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::EngineBase object in C++ memory
    ///
    pub fn new() KNSCore__EngineBase {
        return .{ .ptr = qtc.KNSCore__EngineBase_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::EngineBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KNSCore__EngineBase {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KNSCore__EngineBase_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn metaObject(self: KNSCore__EngineBase) QMetaObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNSCore__EngineBase_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn superMetaObject(self: KNSCore__EngineBase) QMetaObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KNSCore__EngineBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__EngineBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNSCore__EngineBase_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KNSCore__EngineBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__EngineBase_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KNSCore__EngineBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KNSCore__EngineBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__EngineBase.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availableConfigFiles` instead
    ///
    pub const AvailableConfigFiles = availableConfigFiles;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#availableConfigFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableConfigFiles(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_AvailableConfigFiles();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__EngineBase.availableConfigFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__EngineBase.availableConfigFiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `init` instead
    ///
    pub const Init = init;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` configfile: []const u8 `
    ///
    pub fn init(self: KNSCore__EngineBase, configfile: []const u8) bool {
        const configfile_str = qtc.libqt_string{
            .len = configfile.len,
            .data = configfile.ptr,
        };
        return qtc.KNSCore__EngineBase_Init(@ptrCast(self.ptr), configfile_str);
    }

    /// ### DEPRECATED: Use `onInit` instead
    ///
    pub const OnInit = onInit;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#init)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, configfile: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onInit(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnInit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInit` instead
    ///
    pub const SuperInit = superInit;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#init)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` configfile: []const u8 `
    ///
    pub fn superInit(self: KNSCore__EngineBase, configfile: []const u8) bool {
        const configfile_str = qtc.libqt_string{
            .len = configfile.len,
            .data = configfile.ptr,
        };
        return qtc.KNSCore__EngineBase_SuperInit(@ptrCast(self.ptr), configfile_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__EngineBase_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__EngineBase.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `useLabel` instead
    ///
    pub const UseLabel = useLabel;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#useLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn useLabel(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__EngineBase_UseLabel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__EngineBase.useLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `useLabelChanged` instead
    ///
    pub const UseLabelChanged = useLabelChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#useLabelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn useLabelChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_UseLabelChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uploadEnabled` instead
    ///
    pub const UploadEnabled = uploadEnabled;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#uploadEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn uploadEnabled(self: KNSCore__EngineBase) bool {
        return qtc.KNSCore__EngineBase_UploadEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uploadEnabledChanged` instead
    ///
    pub const UploadEnabledChanged = uploadEnabledChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#uploadEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn uploadEnabledChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_UploadEnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_Categories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__EngineBase.categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__EngineBase.categories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `categoriesMetadata` instead
    ///
    pub const CategoriesMetadata = categoriesMetadata;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#categoriesMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categoriesMetadata(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__Provider__CategoryMetadata {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_CategoriesMetadata(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__Provider__CategoryMetadata, _arr.len) catch @panic("KNSCore__EngineBase.categoriesMetadata: Memory allocation failed");
        const _data_val: [*]QtC.KNSCore__Provider__CategoryMetadata = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `categoriesMetadata2` instead
    ///
    pub const CategoriesMetadata2 = categoriesMetadata2;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#categoriesMetadata2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categoriesMetadata2(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__CategoryMetadata {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_CategoriesMetadata2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__CategoryMetadata, _arr.len) catch @panic("KNSCore__EngineBase.categoriesMetadata2: Memory allocation failed");
        const _data_val: [*]QtC.KNSCore__CategoryMetadata = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `searchPresets` instead
    ///
    pub const SearchPresets = searchPresets;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#searchPresets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchPresets(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__Provider__SearchPreset {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_SearchPresets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__Provider__SearchPreset, _arr.len) catch @panic("KNSCore__EngineBase.searchPresets: Memory allocation failed");
        const _data_val: [*]QtC.KNSCore__Provider__SearchPreset = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `searchPresets2` instead
    ///
    pub const SearchPresets2 = searchPresets2;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#searchPresets2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchPresets2(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__SearchPreset {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_SearchPresets2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__SearchPreset, _arr.len) catch @panic("KNSCore__EngineBase.searchPresets2: Memory allocation failed");
        const _data_val: [*]QtC.KNSCore__SearchPreset = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `atticaProviders` instead
    ///
    pub const AtticaProviders = atticaProviders;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#atticaProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn atticaProviders(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []Attica__Provider {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_AtticaProviders(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Provider, _arr.len) catch @panic("KNSCore__EngineBase.atticaProviders: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Provider = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTagFilter` instead
    ///
    pub const SetTagFilter = setTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#setTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filter: []const []const u8 `
    ///
    pub fn setTagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator, filter: []const []const u8) void {
        const filter_arr = allocator.alloc(qtc.libqt_string, filter.len) catch @panic("KNSCore__EngineBase.setTagFilter: Memory allocation failed");
        defer allocator.free(filter_arr);
        for (filter, 0..filter.len) |str_item, i|
            filter_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filter_list = qtc.libqt_list{
            .len = filter.len,
            .data = filter_arr.ptr,
        };
        qtc.KNSCore__EngineBase_SetTagFilter(@ptrCast(self.ptr), filter_list);
    }

    /// ### DEPRECATED: Use `tagFilter` instead
    ///
    pub const TagFilter = tagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#tagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_TagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__EngineBase.tagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__EngineBase.tagFilter: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `addTagFilter` instead
    ///
    pub const AddTagFilter = addTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#addTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn addTagFilter(self: KNSCore__EngineBase, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KNSCore__EngineBase_AddTagFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### DEPRECATED: Use `setDownloadTagFilter` instead
    ///
    pub const SetDownloadTagFilter = setDownloadTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#setDownloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filter: []const []const u8 `
    ///
    pub fn setDownloadTagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator, filter: []const []const u8) void {
        const filter_arr = allocator.alloc(qtc.libqt_string, filter.len) catch @panic("KNSCore__EngineBase.setDownloadTagFilter: Memory allocation failed");
        defer allocator.free(filter_arr);
        for (filter, 0..filter.len) |str_item, i|
            filter_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filter_list = qtc.libqt_list{
            .len = filter.len,
            .data = filter_arr.ptr,
        };
        qtc.KNSCore__EngineBase_SetDownloadTagFilter(@ptrCast(self.ptr), filter_list);
    }

    /// ### DEPRECATED: Use `downloadTagFilter` instead
    ///
    pub const DownloadTagFilter = downloadTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#downloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadTagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_DownloadTagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__EngineBase.downloadTagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__EngineBase.downloadTagFilter: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `addDownloadTagFilter` instead
    ///
    pub const AddDownloadTagFilter = addDownloadTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#addDownloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn addDownloadTagFilter(self: KNSCore__EngineBase, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KNSCore__EngineBase_AddDownloadTagFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### DEPRECATED: Use `userCanVote` instead
    ///
    pub const UserCanVote = userCanVote;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#userCanVote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    pub fn userCanVote(self: KNSCore__EngineBase, entry: anytype) bool {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        return qtc.KNSCore__EngineBase_UserCanVote(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `vote` instead
    ///
    pub const Vote = vote;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#vote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    /// ` rating: u32 `
    ///
    pub fn vote(self: KNSCore__EngineBase, entry: anytype, rating: u32) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__EngineBase_Vote(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(rating));
    }

    /// ### DEPRECATED: Use `userCanBecomeFan` instead
    ///
    pub const UserCanBecomeFan = userCanBecomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#userCanBecomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    pub fn userCanBecomeFan(self: KNSCore__EngineBase, entry: anytype) bool {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        return qtc.KNSCore__EngineBase_UserCanBecomeFan(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `becomeFan` instead
    ///
    pub const BecomeFan = becomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    pub fn becomeFan(self: KNSCore__EngineBase, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__EngineBase_BecomeFan(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `providerIDs` instead
    ///
    pub const ProviderIDs = providerIDs;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#providerIDs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providerIDs(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_ProviderIDs(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__EngineBase.providerIDs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__EngineBase.providerIDs: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAdoptionCommand` instead
    ///
    pub const HasAdoptionCommand = hasAdoptionCommand;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#hasAdoptionCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn hasAdoptionCommand(self: KNSCore__EngineBase) bool {
        return qtc.KNSCore__EngineBase_HasAdoptionCommand(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `search` instead
    ///
    pub const Search = search;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` request: KNSCore__Provider__SearchRequest `
    ///
    pub fn search(self: KNSCore__EngineBase, request: anytype) KNSCore__ResultsStream {
        comptime _ = @TypeOf(request)._is_KNSCore__Provider__SearchRequest;
        return .{ .ptr = qtc.KNSCore__EngineBase_Search(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `search2` instead
    ///
    pub const Search2 = search2;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` request: KNSCore__SearchRequest `
    ///
    pub fn search2(self: KNSCore__EngineBase, request: anytype) KNSCore__ResultsStream {
        comptime _ = @TypeOf(request)._is_KNSCore__SearchRequest;
        return .{ .ptr = qtc.KNSCore__EngineBase_Search2(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `contentWarningType` instead
    ///
    pub const ContentWarningType = contentWarningType;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#contentWarningType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ## Returns:
    ///
    /// ` enginebase_enums.ContentWarningType `
    ///
    pub fn contentWarningType(self: KNSCore__EngineBase) i32 {
        return qtc.KNSCore__EngineBase_ContentWarningType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contentWarningTypeChanged` instead
    ///
    pub const ContentWarningTypeChanged = contentWarningTypeChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#contentWarningTypeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn contentWarningTypeChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_ContentWarningTypeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalMessage` instead
    ///
    pub const SignalMessage = signalMessage;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` message: []const u8 `
    ///
    pub fn signalMessage(self: KNSCore__EngineBase, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KNSCore__EngineBase_SignalMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `signalProvidersLoaded` instead
    ///
    pub const SignalProvidersLoaded = signalProvidersLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalProvidersLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn signalProvidersLoaded(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_SignalProvidersLoaded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalErrorCode` instead
    ///
    pub const SignalErrorCode = signalErrorCode;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalErrorCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` errorCode: errorcode_enums.ErrorCode `
    ///
    /// ` message: []const u8 `
    ///
    /// ` metadata: QVariant `
    ///
    pub fn signalErrorCode(self: KNSCore__EngineBase, errorCode: i32, message: []const u8, metadata: anytype) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(metadata)._is_QVariant;
        qtc.KNSCore__EngineBase_SignalErrorCode(@ptrCast(self.ptr), @bitCast(errorCode), message_str, @ptrCast(metadata.ptr));
    }

    /// ### DEPRECATED: Use `signalCategoriesMetadataLoded` instead
    ///
    pub const SignalCategoriesMetadataLoded = signalCategoriesMetadataLoded;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _categories: []KNSCore__Provider__CategoryMetadata `
    ///
    pub fn signalCategoriesMetadataLoded(self: KNSCore__EngineBase, _categories: []KNSCore__Provider__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = _categories.len,
            .data = @ptrCast(_categories.ptr),
        };
        qtc.KNSCore__EngineBase_SignalCategoriesMetadataLoded(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `signalCategoriesMetadataLoaded` instead
    ///
    pub const SignalCategoriesMetadataLoaded = signalCategoriesMetadataLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _categories: []KNSCore__CategoryMetadata `
    ///
    pub fn signalCategoriesMetadataLoaded(self: KNSCore__EngineBase, _categories: []KNSCore__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = _categories.len,
            .data = @ptrCast(_categories.ptr),
        };
        qtc.KNSCore__EngineBase_SignalCategoriesMetadataLoaded(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `signalSearchPresetsLoaded` instead
    ///
    pub const SignalSearchPresetsLoaded = signalSearchPresetsLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` presets: []KNSCore__Provider__SearchPreset `
    ///
    pub fn signalSearchPresetsLoaded(self: KNSCore__EngineBase, presets: []KNSCore__Provider__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__EngineBase_SignalSearchPresetsLoaded(@ptrCast(self.ptr), presets_list);
    }

    /// ### DEPRECATED: Use `signalSearchPresetsLoaded2` instead
    ///
    pub const SignalSearchPresetsLoaded2 = signalSearchPresetsLoaded2;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` presets: []KNSCore__SearchPreset `
    ///
    pub fn signalSearchPresetsLoaded2(self: KNSCore__EngineBase, presets: []KNSCore__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__EngineBase_SignalSearchPresetsLoaded2(@ptrCast(self.ptr), presets_list);
    }

    /// ### DEPRECATED: Use `providersChanged` instead
    ///
    pub const ProvidersChanged = providersChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#providersChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn providersChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_ProvidersChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loadingProvider` instead
    ///
    pub const LoadingProvider = loadingProvider;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#loadingProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn loadingProvider(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_LoadingProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `providerAdded` instead
    ///
    pub const ProviderAdded = providerAdded;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#providerAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` provider: KNSCore__ProviderCore `
    ///
    pub fn providerAdded(self: KNSCore__EngineBase, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KNSCore__ProviderCore;
        qtc.KNSCore__EngineBase_ProviderAdded(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `updateStatus` instead
    ///
    pub const UpdateStatus = updateStatus;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn updateStatus(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_UpdateStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateStatus` instead
    ///
    pub const OnUpdateStatus = onUpdateStatus;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateStatus(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnUpdateStatus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateStatus` instead
    ///
    pub const SuperUpdateStatus = superUpdateStatus;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn superUpdateStatus(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_SuperUpdateStatus(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__EngineBase.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__EngineBase.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__EngineBase.objectName: Memory allocation failed");
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: KNSCore__EngineBase, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn isWidgetType(self: KNSCore__EngineBase) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn isWindowType(self: KNSCore__EngineBase) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn isQuickItemType(self: KNSCore__EngineBase) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn signalsBlocked(self: KNSCore__EngineBase) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KNSCore__EngineBase, b: bool) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn thread(self: KNSCore__EngineBase) QThread {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KNSCore__EngineBase, _thread: anytype) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KNSCore__EngineBase, interval: i32) i32 {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KNSCore__EngineBase, time: i64) i32 {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KNSCore__EngineBase, id: i32) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KNSCore__EngineBase, id: i32) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KNSCore__EngineBase.children: Memory allocation failed");
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KNSCore__EngineBase, _parent: anytype) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KNSCore__EngineBase, filterObj: anytype) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KNSCore__EngineBase, obj: anytype) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KNSCore__EngineBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn disconnect3(self: KNSCore__EngineBase) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KNSCore__EngineBase, receiver: anytype) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn dumpObjectTree(self: KNSCore__EngineBase) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn dumpObjectInfo(self: KNSCore__EngineBase) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KNSCore__EngineBase, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: KNSCore__EngineBase, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KNSCore__EngineBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KNSCore__EngineBase.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__EngineBase.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn bindingStorage(self: KNSCore__EngineBase) QBindingStorage {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn bindingStorage2(self: KNSCore__EngineBase) QBindingStorage {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn destroyed(self: KNSCore__EngineBase) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase) callconv(.c) void) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn parent(self: KNSCore__EngineBase) QObject {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KNSCore__EngineBase, classname: [:0]const u8) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn deleteLater(self: KNSCore__EngineBase) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KNSCore__EngineBase, interval: i32, timerType: i32) i32 {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KNSCore__EngineBase, time: i64, timerType: i32) i32 {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KNSCore__EngineBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KNSCore__EngineBase, signal: [:0]const u8) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KNSCore__EngineBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KNSCore__EngineBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KNSCore__EngineBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KNSCore__EngineBase, param1: anytype) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QObject) callconv(.c) void) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KNSCore__EngineBase, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__EngineBase_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KNSCore__EngineBase, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__EngineBase_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KNSCore__EngineBase, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__EngineBase_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KNSCore__EngineBase, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__EngineBase_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KNSCore__EngineBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNSCore__EngineBase_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KNSCore__EngineBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNSCore__EngineBase_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QTimerEvent) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KNSCore__EngineBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNSCore__EngineBase_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KNSCore__EngineBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNSCore__EngineBase_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QChildEvent) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KNSCore__EngineBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNSCore__EngineBase_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KNSCore__EngineBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNSCore__EngineBase_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QEvent) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn sender(self: KNSCore__EngineBase) QObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn superSender(self: KNSCore__EngineBase) QObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNSCore__EngineBase_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn senderSignalIndex(self: KNSCore__EngineBase) i32 {
        return qtc.KNSCore__EngineBase_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn superSenderSignalIndex(self: KNSCore__EngineBase) i32 {
        return qtc.KNSCore__EngineBase_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KNSCore__EngineBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__EngineBase_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KNSCore__EngineBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__EngineBase_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KNSCore__EngineBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__EngineBase_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KNSCore__EngineBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__EngineBase_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase`
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QMetaMethod) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn delete(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#public-types)
pub const enums = struct {
    pub const ContentWarningType = enum(i32) {
        pub const Static: i32 = 0;
        pub const Executables: i32 = 1;
    };
};
