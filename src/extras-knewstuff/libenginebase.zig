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

    /// New constructs a new KNSCore::EngineBase object.
    ///
    pub fn New() KNSCore__EngineBase {
        return .{ .ptr = qtc.KNSCore__EngineBase_new() };
    }

    /// New2 constructs a new KNSCore::EngineBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KNSCore__EngineBase {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KNSCore__EngineBase_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn MetaObject(self: KNSCore__EngineBase) QMetaObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNSCore__EngineBase_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn SuperMetaObject(self: KNSCore__EngineBase) QMetaObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KNSCore__EngineBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__EngineBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNSCore__EngineBase_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KNSCore__EngineBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__EngineBase_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KNSCore__EngineBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` callback: *const fn (self: KNSCore__EngineBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KNSCore__EngineBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__enginebase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#availableConfigFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableConfigFiles(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_AvailableConfigFiles();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__enginebase.AvailableConfigFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__enginebase.AvailableConfigFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` configfile: []const u8 `
    ///
    pub fn Init(self: KNSCore__EngineBase, configfile: []const u8) bool {
        const configfile_str = qtc.libqt_string{
            .len = configfile.len,
            .data = configfile.ptr,
        };
        return qtc.KNSCore__EngineBase_Init(@ptrCast(self.ptr), configfile_str);
    }

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
    pub fn OnInit(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnInit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInit` instead
    ///
    pub const QBaseInit = SuperInit;

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
    pub fn SuperInit(self: KNSCore__EngineBase, configfile: []const u8) bool {
        const configfile_str = qtc.libqt_string{
            .len = configfile.len,
            .data = configfile.ptr,
        };
        return qtc.KNSCore__EngineBase_SuperInit(@ptrCast(self.ptr), configfile_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__EngineBase_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__enginebase.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#useLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UseLabel(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__EngineBase_UseLabel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__enginebase.UseLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#useLabelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn UseLabelChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_UseLabelChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#uploadEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn UploadEnabled(self: KNSCore__EngineBase) bool {
        return qtc.KNSCore__EngineBase_UploadEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#uploadEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn UploadEnabledChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_UploadEnabledChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_Categories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__enginebase.Categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__enginebase.Categories: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#categoriesMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CategoriesMetadata(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__Provider__CategoryMetadata {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_CategoriesMetadata(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__Provider__CategoryMetadata, _arr.len) catch @panic("knscore__enginebase.CategoriesMetadata: Memory allocation failed");
        const _data: [*]QtC.KNSCore__Provider__CategoryMetadata = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#categoriesMetadata2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CategoriesMetadata2(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__CategoryMetadata {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_CategoriesMetadata2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__CategoryMetadata, _arr.len) catch @panic("knscore__enginebase.CategoriesMetadata2: Memory allocation failed");
        const _data: [*]QtC.KNSCore__CategoryMetadata = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#searchPresets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchPresets(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__Provider__SearchPreset {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_SearchPresets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__Provider__SearchPreset, _arr.len) catch @panic("knscore__enginebase.SearchPresets: Memory allocation failed");
        const _data: [*]QtC.KNSCore__Provider__SearchPreset = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#searchPresets2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchPresets2(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []KNSCore__SearchPreset {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_SearchPresets2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__SearchPreset, _arr.len) catch @panic("knscore__enginebase.SearchPresets2: Memory allocation failed");
        const _data: [*]QtC.KNSCore__SearchPreset = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#atticaProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AtticaProviders(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []Attica__Provider {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_AtticaProviders(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Provider, _arr.len) catch @panic("knscore__enginebase.AtticaProviders: Memory allocation failed");
        const _data: [*]QtC.Attica__Provider = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn SetTagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator, filter: []const []const u8) void {
        const filter_arr = allocator.alloc(qtc.libqt_string, filter.len) catch @panic("knscore__enginebase.SetTagFilter: Memory allocation failed");
        defer allocator.free(filter_arr);
        for (filter, 0..filter.len) |item, i|
            filter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filter_list = qtc.libqt_list{
            .len = filter.len,
            .data = filter_arr.ptr,
        };
        qtc.KNSCore__EngineBase_SetTagFilter(@ptrCast(self.ptr), filter_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#tagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_TagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__enginebase.TagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__enginebase.TagFilter: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#addTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn AddTagFilter(self: KNSCore__EngineBase, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KNSCore__EngineBase_AddTagFilter(@ptrCast(self.ptr), filter_str);
    }

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
    pub fn SetDownloadTagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator, filter: []const []const u8) void {
        const filter_arr = allocator.alloc(qtc.libqt_string, filter.len) catch @panic("knscore__enginebase.SetDownloadTagFilter: Memory allocation failed");
        defer allocator.free(filter_arr);
        for (filter, 0..filter.len) |item, i|
            filter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filter_list = qtc.libqt_list{
            .len = filter.len,
            .data = filter_arr.ptr,
        };
        qtc.KNSCore__EngineBase_SetDownloadTagFilter(@ptrCast(self.ptr), filter_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#downloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadTagFilter(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_DownloadTagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__enginebase.DownloadTagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__enginebase.DownloadTagFilter: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#addDownloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` filter: []const u8 `
    ///
    pub fn AddDownloadTagFilter(self: KNSCore__EngineBase, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KNSCore__EngineBase_AddDownloadTagFilter(@ptrCast(self.ptr), filter_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#userCanVote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    pub fn UserCanVote(self: KNSCore__EngineBase, entry: anytype) bool {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        return qtc.KNSCore__EngineBase_UserCanVote(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

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
    pub fn Vote(self: KNSCore__EngineBase, entry: anytype, rating: u32) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__EngineBase_Vote(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#userCanBecomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    pub fn UserCanBecomeFan(self: KNSCore__EngineBase, entry: anytype) bool {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        return qtc.KNSCore__EngineBase_UserCanBecomeFan(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    pub fn BecomeFan(self: KNSCore__EngineBase, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__EngineBase_BecomeFan(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#providerIDs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderIDs(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_ProviderIDs(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__enginebase.ProviderIDs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__enginebase.ProviderIDs: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#hasAdoptionCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn HasAdoptionCommand(self: KNSCore__EngineBase) bool {
        return qtc.KNSCore__EngineBase_HasAdoptionCommand(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` request: KNSCore__Provider__SearchRequest `
    ///
    pub fn Search(self: KNSCore__EngineBase, request: anytype) KNSCore__ResultsStream {
        comptime _ = @TypeOf(request)._is_KNSCore__Provider__SearchRequest;
        return .{ .ptr = qtc.KNSCore__EngineBase_Search(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#search)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` request: KNSCore__SearchRequest `
    ///
    pub fn Search2(self: KNSCore__EngineBase, request: anytype) KNSCore__ResultsStream {
        comptime _ = @TypeOf(request)._is_KNSCore__SearchRequest;
        return .{ .ptr = qtc.KNSCore__EngineBase_Search2(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

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
    pub fn ContentWarningType(self: KNSCore__EngineBase) i32 {
        return qtc.KNSCore__EngineBase_ContentWarningType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#contentWarningTypeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn ContentWarningTypeChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_ContentWarningTypeChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SignalMessage(self: KNSCore__EngineBase, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KNSCore__EngineBase_SignalMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalProvidersLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn SignalProvidersLoaded(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_SignalProvidersLoaded(@ptrCast(self.ptr));
    }

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
    pub fn SignalErrorCode(self: KNSCore__EngineBase, errorCode: i32, message: []const u8, metadata: anytype) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(metadata)._is_QVariant;
        qtc.KNSCore__EngineBase_SignalErrorCode(@ptrCast(self.ptr), @bitCast(errorCode), message_str, @ptrCast(metadata.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` categories: []KNSCore__Provider__CategoryMetadata `
    ///
    pub fn SignalCategoriesMetadataLoded(self: KNSCore__EngineBase, categories: []KNSCore__Provider__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.KNSCore__EngineBase_SignalCategoriesMetadataLoded(@ptrCast(self.ptr), categories_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` categories: []KNSCore__CategoryMetadata `
    ///
    pub fn SignalCategoriesMetadataLoaded(self: KNSCore__EngineBase, categories: []KNSCore__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.KNSCore__EngineBase_SignalCategoriesMetadataLoaded(@ptrCast(self.ptr), categories_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` presets: []KNSCore__Provider__SearchPreset `
    ///
    pub fn SignalSearchPresetsLoaded(self: KNSCore__EngineBase, presets: []KNSCore__Provider__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__EngineBase_SignalSearchPresetsLoaded(@ptrCast(self.ptr), presets_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` presets: []KNSCore__SearchPreset `
    ///
    pub fn SignalSearchPresetsLoaded2(self: KNSCore__EngineBase, presets: []KNSCore__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__EngineBase_SignalSearchPresetsLoaded2(@ptrCast(self.ptr), presets_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#providersChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn ProvidersChanged(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_ProvidersChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#loadingProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn LoadingProvider(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_LoadingProvider(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#providerAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` provider: KNSCore__ProviderCore `
    ///
    pub fn ProviderAdded(self: KNSCore__EngineBase, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_KNSCore__ProviderCore;
        qtc.KNSCore__EngineBase_ProviderAdded(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn UpdateStatus(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_UpdateStatus(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateStatus(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnUpdateStatus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateStatus` instead
    ///
    pub const QBaseUpdateStatus = SuperUpdateStatus;

    /// ### [Upstream resources](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn SuperUpdateStatus(self: KNSCore__EngineBase) void {
        qtc.KNSCore__EngineBase_SuperUpdateStatus(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__enginebase.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__enginebase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__enginebase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KNSCore__EngineBase, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn IsWidgetType(self: KNSCore__EngineBase) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn IsWindowType(self: KNSCore__EngineBase) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn IsQuickItemType(self: KNSCore__EngineBase) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn SignalsBlocked(self: KNSCore__EngineBase) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KNSCore__EngineBase, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn Thread(self: KNSCore__EngineBase) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KNSCore__EngineBase, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KNSCore__EngineBase, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KNSCore__EngineBase, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KNSCore__EngineBase, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KNSCore__EngineBase, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KNSCore__EngineBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("knscore__enginebase.Children: Memory allocation failed");
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KNSCore__EngineBase, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KNSCore__EngineBase, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KNSCore__EngineBase, obj: anytype) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KNSCore__EngineBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn Disconnect3(self: KNSCore__EngineBase) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KNSCore__EngineBase, receiver: anytype) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn DumpObjectTree(self: KNSCore__EngineBase) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn DumpObjectInfo(self: KNSCore__EngineBase) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KNSCore__EngineBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KNSCore__EngineBase, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KNSCore__EngineBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("knscore__enginebase.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__enginebase.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn BindingStorage(self: KNSCore__EngineBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn BindingStorage2(self: KNSCore__EngineBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn Destroyed(self: KNSCore__EngineBase) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn Parent(self: KNSCore__EngineBase) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KNSCore__EngineBase, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn DeleteLater(self: KNSCore__EngineBase) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KNSCore__EngineBase, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KNSCore__EngineBase, time: i64, timerType: i32) i32 {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KNSCore__EngineBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KNSCore__EngineBase, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KNSCore__EngineBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KNSCore__EngineBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KNSCore__EngineBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KNSCore__EngineBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QObject) callconv(.c) void) void {
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KNSCore__EngineBase, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__EngineBase_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KNSCore__EngineBase, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__EngineBase_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KNSCore__EngineBase, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__EngineBase_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KNSCore__EngineBase, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__EngineBase_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KNSCore__EngineBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNSCore__EngineBase_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KNSCore__EngineBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNSCore__EngineBase_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QTimerEvent) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KNSCore__EngineBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNSCore__EngineBase_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KNSCore__EngineBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNSCore__EngineBase_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QChildEvent) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KNSCore__EngineBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNSCore__EngineBase_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KNSCore__EngineBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNSCore__EngineBase_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QEvent) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KNSCore__EngineBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__EngineBase_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KNSCore__EngineBase) QObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn SuperSender(self: KNSCore__EngineBase) QObject {
        return .{ .ptr = qtc.KNSCore__EngineBase_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNSCore__EngineBase_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KNSCore__EngineBase) i32 {
        return qtc.KNSCore__EngineBase_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn SuperSenderSignalIndex(self: KNSCore__EngineBase) i32 {
        return qtc.KNSCore__EngineBase_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KNSCore__EngineBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KNSCore__EngineBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__EngineBase_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KNSCore__EngineBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__EngineBase_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KNSCore__EngineBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__EngineBase_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__EngineBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KNSCore__EngineBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__EngineBase_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, QMetaMethod) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KNSCore__EngineBase, callback: *const fn (KNSCore__EngineBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__EngineBase `
    ///
    pub fn Delete(self: KNSCore__EngineBase) void {
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
