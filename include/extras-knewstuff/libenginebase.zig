const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const enginebase_enums = enums;
const errorcode_enums = @import("liberrorcode.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/knscore-enginebase.html
pub const knscore__enginebase = struct {
    /// New constructs a new KNSCore::EngineBase object.
    ///
    ///
    pub fn New() QtC.KNSCore__EngineBase {
        return qtc.KNSCore__EngineBase_new();
    }

    /// New2 constructs a new KNSCore::EngineBase object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KNSCore__EngineBase {
        return qtc.KNSCore__EngineBase_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KNSCore__EngineBase_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KNSCore__EngineBase, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__EngineBase_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KNSCore__EngineBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KNSCore__EngineBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KNSCore__EngineBase_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::enginebase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#availableConfigFiles)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailableConfigFiles(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_AvailableConfigFiles();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::enginebase.AvailableConfigFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::enginebase.AvailableConfigFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#init)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, configfile: []const u8 ```
    pub fn Init(self: ?*anyopaque, configfile: []const u8) bool {
        const configfile_str = qtc.libqt_string{
            .len = configfile.len,
            .data = configfile.ptr,
        };
        return qtc.KNSCore__EngineBase_Init(@ptrCast(self), configfile_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#init)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, configfile: [*:0]const u8) callconv(.c) bool ```
    pub fn OnInit(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnInit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#init)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KNSCore__EngineBase, configfile: []const u8 ```
    pub fn QBaseInit(self: ?*anyopaque, configfile: []const u8) bool {
        const configfile_str = qtc.libqt_string{
            .len = configfile.len,
            .data = configfile.ptr,
        };
        return qtc.KNSCore__EngineBase_QBaseInit(@ptrCast(self), configfile_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#name)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__EngineBase_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::enginebase.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#useLabel)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn UseLabel(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__EngineBase_UseLabel(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::enginebase.UseLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#useLabelChanged)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn UseLabelChanged(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_UseLabelChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#uploadEnabled)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn UploadEnabled(self: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_UploadEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#uploadEnabledChanged)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn UploadEnabledChanged(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_UploadEnabledChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#categories)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn Categories(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_Categories(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::enginebase.Categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::enginebase.Categories: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#categoriesMetadata)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn CategoriesMetadata(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KNSCore__Provider__CategoryMetadata {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_CategoriesMetadata(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KNSCore__Provider__CategoryMetadata, _arr.len) catch @panic("knscore::enginebase.CategoriesMetadata: Memory allocation failed");
        const _data: [*]QtC.KNSCore__Provider__CategoryMetadata = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#categoriesMetadata2)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn CategoriesMetadata2(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KNSCore__CategoryMetadata {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_CategoriesMetadata2(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KNSCore__CategoryMetadata, _arr.len) catch @panic("knscore::enginebase.CategoriesMetadata2: Memory allocation failed");
        const _data: [*]QtC.KNSCore__CategoryMetadata = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#searchPresets)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn SearchPresets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KNSCore__Provider__SearchPreset {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_SearchPresets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KNSCore__Provider__SearchPreset, _arr.len) catch @panic("knscore::enginebase.SearchPresets: Memory allocation failed");
        const _data: [*]QtC.KNSCore__Provider__SearchPreset = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#searchPresets2)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn SearchPresets2(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KNSCore__SearchPreset {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_SearchPresets2(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KNSCore__SearchPreset, _arr.len) catch @panic("knscore::enginebase.SearchPresets2: Memory allocation failed");
        const _data: [*]QtC.KNSCore__SearchPreset = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#atticaProviders)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn AtticaProviders(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Provider {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_AtticaProviders(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Provider, _arr.len) catch @panic("knscore::enginebase.AtticaProviders: Memory allocation failed");
        const _data: [*]QtC.Attica__Provider = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#setTagFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, filter: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetTagFilter(self: ?*anyopaque, filter: [][]const u8, allocator: std.mem.Allocator) void {
        var filter_arr = allocator.alloc(qtc.libqt_string, filter.len) catch @panic("knscore::enginebase.SetTagFilter: Memory allocation failed");
        defer allocator.free(filter_arr);
        for (filter, 0..filter.len) |item, i| {
            filter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filter_list = qtc.libqt_list{
            .len = filter.len,
            .data = filter_arr.ptr,
        };
        qtc.KNSCore__EngineBase_SetTagFilter(@ptrCast(self), filter_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#tagFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn TagFilter(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_TagFilter(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::enginebase.TagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::enginebase.TagFilter: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#addTagFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, filter: []const u8 ```
    pub fn AddTagFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KNSCore__EngineBase_AddTagFilter(@ptrCast(self), filter_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#setDownloadTagFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, filter: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetDownloadTagFilter(self: ?*anyopaque, filter: [][]const u8, allocator: std.mem.Allocator) void {
        var filter_arr = allocator.alloc(qtc.libqt_string, filter.len) catch @panic("knscore::enginebase.SetDownloadTagFilter: Memory allocation failed");
        defer allocator.free(filter_arr);
        for (filter, 0..filter.len) |item, i| {
            filter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filter_list = qtc.libqt_list{
            .len = filter.len,
            .data = filter_arr.ptr,
        };
        qtc.KNSCore__EngineBase_SetDownloadTagFilter(@ptrCast(self), filter_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#downloadTagFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn DownloadTagFilter(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_DownloadTagFilter(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::enginebase.DownloadTagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::enginebase.DownloadTagFilter: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#addDownloadTagFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, filter: []const u8 ```
    pub fn AddDownloadTagFilter(self: ?*anyopaque, filter: []const u8) void {
        const filter_str = qtc.libqt_string{
            .len = filter.len,
            .data = filter.ptr,
        };
        qtc.KNSCore__EngineBase_AddDownloadTagFilter(@ptrCast(self), filter_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#userCanVote)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, entry: QtC.KNSCore__Entry ```
    pub fn UserCanVote(self: ?*anyopaque, entry: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_UserCanVote(@ptrCast(self), @ptrCast(entry));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#vote)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, entry: QtC.KNSCore__Entry, rating: u32 ```
    pub fn Vote(self: ?*anyopaque, entry: ?*anyopaque, rating: u32) void {
        qtc.KNSCore__EngineBase_Vote(@ptrCast(self), @ptrCast(entry), @intCast(rating));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#userCanBecomeFan)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, entry: QtC.KNSCore__Entry ```
    pub fn UserCanBecomeFan(self: ?*anyopaque, entry: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_UserCanBecomeFan(@ptrCast(self), @ptrCast(entry));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#becomeFan)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, entry: QtC.KNSCore__Entry ```
    pub fn BecomeFan(self: ?*anyopaque, entry: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_BecomeFan(@ptrCast(self), @ptrCast(entry));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#providerIDs)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn ProviderIDs(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__EngineBase_ProviderIDs(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::enginebase.ProviderIDs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::enginebase.ProviderIDs: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#hasAdoptionCommand)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn HasAdoptionCommand(self: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_HasAdoptionCommand(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#search)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, request: QtC.KNSCore__Provider__SearchRequest ```
    pub fn Search(self: ?*anyopaque, request: ?*anyopaque) QtC.KNSCore__ResultsStream {
        return qtc.KNSCore__EngineBase_Search(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#search)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, request: QtC.KNSCore__SearchRequest ```
    pub fn Search2(self: ?*anyopaque, request: ?*anyopaque) QtC.KNSCore__ResultsStream {
        return qtc.KNSCore__EngineBase_Search2(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#contentWarningType)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    ///
    /// Returns: ``` enginebase_enums.ContentWarningType ```
    pub fn ContentWarningType(self: ?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_ContentWarningType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#contentWarningTypeChanged)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn ContentWarningTypeChanged(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_ContentWarningTypeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalMessage)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, message: []const u8 ```
    pub fn SignalMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KNSCore__EngineBase_SignalMessage(@ptrCast(self), message_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalProvidersLoaded)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn SignalProvidersLoaded(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_SignalProvidersLoaded(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalErrorCode)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, errorCode: errorcode_enums.ErrorCode, message: []const u8, metadata: QtC.QVariant ```
    pub fn SignalErrorCode(self: ?*anyopaque, errorCode: i32, message: []const u8, metadata: ?*anyopaque) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KNSCore__EngineBase_SignalErrorCode(@ptrCast(self), @intCast(errorCode), message_str, @ptrCast(metadata));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoded)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, categories: []QtC.KNSCore__Provider__CategoryMetadata ```
    pub fn SignalCategoriesMetadataLoded(self: ?*anyopaque, categories: []QtC.KNSCore__Provider__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.KNSCore__EngineBase_SignalCategoriesMetadataLoded(@ptrCast(self), categories_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoaded)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, categories: []QtC.KNSCore__CategoryMetadata ```
    pub fn SignalCategoriesMetadataLoaded(self: ?*anyopaque, categories: []QtC.KNSCore__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.KNSCore__EngineBase_SignalCategoriesMetadataLoaded(@ptrCast(self), categories_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, presets: []QtC.KNSCore__Provider__SearchPreset ```
    pub fn SignalSearchPresetsLoaded(self: ?*anyopaque, presets: []QtC.KNSCore__Provider__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__EngineBase_SignalSearchPresetsLoaded(@ptrCast(self), presets_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, presets: []QtC.KNSCore__SearchPreset ```
    pub fn SignalSearchPresetsLoaded2(self: ?*anyopaque, presets: []QtC.KNSCore__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__EngineBase_SignalSearchPresetsLoaded2(@ptrCast(self), presets_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#providersChanged)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn ProvidersChanged(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_ProvidersChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#loadingProvider)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn LoadingProvider(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_LoadingProvider(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#providerAdded)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, provider: QtC.KNSCore__ProviderCore ```
    pub fn ProviderAdded(self: ?*anyopaque, provider: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_ProviderAdded(@ptrCast(self), @ptrCast(provider));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn UpdateStatus(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_UpdateStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateStatus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnUpdateStatus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knscore-enginebase.html#updateStatus)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn QBaseUpdateStatus(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_QBaseUpdateStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KNSCore__EngineBase_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::enginebase.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KNSCore__EngineBase_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::enginebase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::enginebase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, name: []const u8 ```
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
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("knscore::enginebase.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, obj: QtC.QObject ```
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
    /// ``` self: QtC.KNSCore__EngineBase, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("knscore::enginebase.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::enginebase.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KNSCore__EngineBase, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__EngineBase_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNSCore__EngineBase_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNSCore__EngineBase_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KNSCore__EngineBase_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNSCore__EngineBase_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__EngineBase_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__EngineBase_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNSCore__EngineBase_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNSCore__EngineBase_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNSCore__EngineBase_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KNSCore__EngineBase, callback: *const fn (self: QtC.KNSCore__EngineBase, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNSCore__EngineBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__EngineBase_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/knscore-enginebase.html#types
pub const enums = struct {
    pub const ContentWarningType = enum {
        pub const Static: i32 = 0;
        pub const Executables: i32 = 1;
    };
};
