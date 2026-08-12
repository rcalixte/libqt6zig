const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileItem = @import("libqt6").KFileItem;
const KFileItemList = @import("libqt6").KFileItemList;
const KIO__Job = @import("libqt6").KIO__Job;
const KIO__JobUiDelegateExtension = @import("libqt6").KIO__JobUiDelegateExtension;
const KIO__MetaData = @import("libqt6").KIO__MetaData;
const KJob = @import("libqt6").KJob;
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
const KPluginMetaData = @import("libqt6").KPluginMetaData;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPixmap = @import("libqt6").QPixmap;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const previewjob_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kio-previewjob.html)
pub const KIO__PreviewJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__PreviewJob,

    pub const _is_KIO__PreviewJob = {};
    pub const _is_KIO__Job = {};
    pub const _is_KCompositeJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::PreviewJob object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` items: KFileItemList `
    ///
    /// ` size: QSize `
    ///
    pub fn new(items: anytype, size: anytype) KIO__PreviewJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIO__PreviewJob_new(@ptrCast(items.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIO::PreviewJob object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` size: QSize `
    ///
    /// ` enabledPlugins: []const []const u8 `
    ///
    pub fn new2(allocator: std.mem.Allocator, items: anytype, size: anytype, enabledPlugins: []const []const u8) KIO__PreviewJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(size)._is_QSize;
        const enabledPlugins_arr = allocator.alloc(qtc.libqt_string, enabledPlugins.len) catch @panic("KIO__PreviewJob.new2: Memory allocation failed");
        defer allocator.free(enabledPlugins_arr);
        for (enabledPlugins, 0..enabledPlugins.len) |str_item, i|
            enabledPlugins_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const enabledPlugins_list = qtc.libqt_list{
            .len = enabledPlugins.len,
            .data = enabledPlugins_arr.ptr,
        };
        return .{ .ptr = qtc.KIO__PreviewJob_new2(@ptrCast(items.ptr), @ptrCast(size.ptr), enabledPlugins_list) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn metaObject(self: KIO__PreviewJob) QMetaObject {
        return .{ .ptr = qtc.KIO__PreviewJob_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KIO__PreviewJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIO__PreviewJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superMetaObject(self: KIO__PreviewJob) QMetaObject {
        return .{ .ptr = qtc.KIO__PreviewJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KIO__PreviewJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__PreviewJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__PreviewJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KIO__PreviewJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__PreviewJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KIO__PreviewJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__PreviewJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__PreviewJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KIO__PreviewJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__PreviewJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setScaleType` instead
    ///
    pub const SetScaleType = setScaleType;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#setScaleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` typeVal: previewjob_enums.ScaleType `
    ///
    pub fn setScaleType(self: KIO__PreviewJob, typeVal: i32) void {
        qtc.KIO__PreviewJob_SetScaleType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `scaleType` instead
    ///
    pub const ScaleType = scaleType;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#scaleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ## Returns:
    ///
    /// ` previewjob_enums.ScaleType `
    ///
    pub fn scaleType(self: KIO__PreviewJob) i32 {
        return qtc.KIO__PreviewJob_ScaleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` url: QUrl `
    ///
    pub fn removeItem(self: KIO__PreviewJob, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KIO__PreviewJob_RemoveItem(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `setIgnoreMaximumSize` instead
    ///
    pub const SetIgnoreMaximumSize = setIgnoreMaximumSize;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#setIgnoreMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn setIgnoreMaximumSize(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_SetIgnoreMaximumSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSequenceIndex` instead
    ///
    pub const SetSequenceIndex = setSequenceIndex;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#setSequenceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` index: i32 `
    ///
    pub fn setSequenceIndex(self: KIO__PreviewJob, index: i32) void {
        qtc.KIO__PreviewJob_SetSequenceIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `sequenceIndex` instead
    ///
    pub const SequenceIndex = sequenceIndex;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#sequenceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn sequenceIndex(self: KIO__PreviewJob) i32 {
        return qtc.KIO__PreviewJob_SequenceIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sequenceIndexWraparoundPoint` instead
    ///
    pub const SequenceIndexWraparoundPoint = sequenceIndexWraparoundPoint;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#sequenceIndexWraparoundPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn sequenceIndexWraparoundPoint(self: KIO__PreviewJob) f32 {
        return qtc.KIO__PreviewJob_SequenceIndexWraparoundPoint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `handlesSequences` instead
    ///
    pub const HandlesSequences = handlesSequences;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#handlesSequences)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn handlesSequences(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_HandlesSequences(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` dpr: f64 `
    ///
    pub fn setDevicePixelRatio(self: KIO__PreviewJob, dpr: f64) void {
        qtc.KIO__PreviewJob_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(dpr));
    }

    /// ### DEPRECATED: Use `availablePlugins` instead
    ///
    pub const AvailablePlugins = availablePlugins;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#availablePlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availablePlugins(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__PreviewJob_AvailablePlugins();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__PreviewJob.availablePlugins: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__PreviewJob.availablePlugins: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableThumbnailerPlugins` instead
    ///
    pub const AvailableThumbnailerPlugins = availableThumbnailerPlugins;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#availableThumbnailerPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableThumbnailerPlugins(allocator: std.mem.Allocator) []KPluginMetaData {
        const _arr: qtc.libqt_list = qtc.KIO__PreviewJob_AvailableThumbnailerPlugins();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPluginMetaData, _arr.len) catch @panic("KIO__PreviewJob.availableThumbnailerPlugins: Memory allocation failed");
        const _data_val: [*]QtC.KPluginMetaData = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultPlugins` instead
    ///
    pub const DefaultPlugins = defaultPlugins;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#defaultPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultPlugins(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__PreviewJob_DefaultPlugins();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__PreviewJob.defaultPlugins: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__PreviewJob.defaultPlugins: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedMimeTypes` instead
    ///
    pub const SupportedMimeTypes = supportedMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#supportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedMimeTypes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__PreviewJob_SupportedMimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__PreviewJob.supportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__PreviewJob.supportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `gotPreview` instead
    ///
    pub const GotPreview = gotPreview;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#gotPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` item: KFileItem `
    ///
    /// ` preview: QPixmap `
    ///
    pub fn gotPreview(self: KIO__PreviewJob, item: anytype, preview: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        comptime _ = @TypeOf(preview)._is_QPixmap;
        qtc.KIO__PreviewJob_GotPreview(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(preview.ptr));
    }

    /// ### DEPRECATED: Use `onGotPreview` instead
    ///
    pub const OnGotPreview = onGotPreview;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#gotPreview)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, item: KFileItem, preview: QPixmap) callconv(.c) void `
    ///
    pub fn onGotPreview(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KFileItem, QPixmap) callconv(.c) void) void {
        qtc.KIO__PreviewJob_Connect_GotPreview(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `failed` instead
    ///
    pub const Failed = failed;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#failed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` item: KFileItem `
    ///
    pub fn failed(self: KIO__PreviewJob, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KIO__PreviewJob_Failed(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onFailed` instead
    ///
    pub const OnFailed = onFailed;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#failed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, item: KFileItem) callconv(.c) void `
    ///
    pub fn onFailed(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KFileItem) callconv(.c) void) void {
        qtc.KIO__PreviewJob_Connect_Failed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotResult` instead
    ///
    pub const SlotResult = slotResult;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#slotResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    pub fn slotResult(self: KIO__PreviewJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KIO__PreviewJob_SlotResult(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onSlotResult` instead
    ///
    pub const OnSlotResult = onSlotResult;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#slotResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob) callconv(.c) void `
    ///
    pub fn onSlotResult(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSlotResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotResult` instead
    ///
    pub const SuperSlotResult = superSlotResult;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#slotResult)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    pub fn superSlotResult(self: KIO__PreviewJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KIO__PreviewJob_SuperSlotResult(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultDevicePixelRatio` instead
    ///
    pub const SetDefaultDevicePixelRatio = setDefaultDevicePixelRatio;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#setDefaultDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` devicePixelRatio: f64 `
    ///
    pub fn setDefaultDevicePixelRatio(devicePixelRatio: f64) void {
        qtc.KIO__PreviewJob_SetDefaultDevicePixelRatio(@bitCast(devicePixelRatio));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIgnoreMaximumSize1` instead
    ///
    pub const SetIgnoreMaximumSize1 = setIgnoreMaximumSize1;

    /// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#setIgnoreMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` ignoreSize: bool `
    ///
    pub fn setIgnoreMaximumSize1(self: KIO__PreviewJob, ignoreSize: bool) void {
        qtc.KIO__PreviewJob_SetIgnoreMaximumSize1(@ptrCast(self.ptr), ignoreSize);
    }

    /// ### DEPRECATED: Use `uiDelegateExtension` instead
    ///
    pub const UiDelegateExtension = uiDelegateExtension;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#uiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn uiDelegateExtension(self: KIO__PreviewJob) KIO__JobUiDelegateExtension {
        return .{ .ptr = qtc.KIO__Job_UiDelegateExtension(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUiDelegateExtension` instead
    ///
    pub const SetUiDelegateExtension = setUiDelegateExtension;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setUiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` extension: KIO__JobUiDelegateExtension `
    ///
    pub fn setUiDelegateExtension(self: KIO__PreviewJob, extension: anytype) void {
        comptime _ = @TypeOf(extension)._is_KIO__JobUiDelegateExtension;
        qtc.KIO__Job_SetUiDelegateExtension(@ptrCast(self.ptr), @ptrCast(extension.ptr));
    }

    /// ### DEPRECATED: Use `detailedErrorStrings` instead
    ///
    pub const DetailedErrorStrings = detailedErrorStrings;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn detailedErrorStrings(self: KIO__PreviewJob, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__PreviewJob.detailedErrorStrings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__PreviewJob.detailedErrorStrings: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setParentJob` instead
    ///
    pub const SetParentJob = setParentJob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setParentJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _parentJob: KIO__Job `
    ///
    pub fn setParentJob(self: KIO__PreviewJob, _parentJob: anytype) void {
        comptime _ = @TypeOf(_parentJob)._is_KIO__Job;
        qtc.KIO__Job_SetParentJob(@ptrCast(self.ptr), @ptrCast(_parentJob.ptr));
    }

    /// ### DEPRECATED: Use `parentJob` instead
    ///
    pub const ParentJob = parentJob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#parentJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn parentJob(self: KIO__PreviewJob) KIO__Job {
        return .{ .ptr = qtc.KIO__Job_ParentJob(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMetaData` instead
    ///
    pub const SetMetaData = setMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _metaData: KIO__MetaData `
    ///
    pub fn setMetaData(self: KIO__PreviewJob, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_KIO__MetaData;
        qtc.KIO__Job_SetMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `addMetaData` instead
    ///
    pub const AddMetaData = addMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn addMetaData(self: KIO__PreviewJob, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__Job_AddMetaData(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### DEPRECATED: Use `addMetaData2` instead
    ///
    pub const AddMetaData2 = addMetaData2;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn addMetaData2(self: KIO__PreviewJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__PreviewJob.addMetaData2: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__PreviewJob.addMetaData2: Memory allocation failed");
        defer allocator.free(values_values);
        var i: usize = 0;
        var values_it = values.iterator();
        while (values_it.next()) |it_entry| : (i += 1) {
            const values_key = it_entry.key_ptr.*;
            values_keys[i] = qtc.libqt_string{
                .len = values_key.len,
                .data = values_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            values_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const values_map = qtc.libqt_map{
            .len = values_count,
            .keys = @ptrCast(values_keys.ptr),
            .values = @ptrCast(values_values.ptr),
        };
        qtc.KIO__Job_AddMetaData2(@ptrCast(self.ptr), values_map);
    }

    /// ### DEPRECATED: Use `mergeMetaData` instead
    ///
    pub const MergeMetaData = mergeMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#mergeMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn mergeMetaData(self: KIO__PreviewJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__PreviewJob.mergeMetaData: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__PreviewJob.mergeMetaData: Memory allocation failed");
        defer allocator.free(values_values);
        var i: usize = 0;
        var values_it = values.iterator();
        while (values_it.next()) |it_entry| : (i += 1) {
            const values_key = it_entry.key_ptr.*;
            values_keys[i] = qtc.libqt_string{
                .len = values_key.len,
                .data = values_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            values_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const values_map = qtc.libqt_map{
            .len = values_count,
            .keys = @ptrCast(values_keys.ptr),
            .values = @ptrCast(values_values.ptr),
        };
        qtc.KIO__Job_MergeMetaData(@ptrCast(self.ptr), values_map);
    }

    /// ### DEPRECATED: Use `outgoingMetaData` instead
    ///
    pub const OutgoingMetaData = outgoingMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#outgoingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn outgoingMetaData(self: KIO__PreviewJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_OutgoingMetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn metaData(self: KIO__PreviewJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queryMetaData` instead
    ///
    pub const QueryMetaData = queryMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#queryMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn queryMetaData(self: KIO__PreviewJob, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__Job_QueryMetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.queryMetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connected` instead
    ///
    pub const Connected = connected;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn connected(self: KIO__PreviewJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__Job_Connected(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onConnected` instead
    ///
    pub const OnConnected = onConnected;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KIO__Job) callconv(.c) void `
    ///
    pub fn onConnected(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KIO__Job) callconv(.c) void) void {
        qtc.KIO__Job_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `detailedErrorStrings1` instead
    ///
    pub const DetailedErrorStrings1 = detailedErrorStrings1;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    pub fn detailedErrorStrings1(self: KIO__PreviewJob, allocator: std.mem.Allocator, reqUrl: anytype) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings1(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__PreviewJob.detailedErrorStrings1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__PreviewJob.detailedErrorStrings1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `detailedErrorStrings2` instead
    ///
    pub const DetailedErrorStrings2 = detailedErrorStrings2;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    /// ` method: i32 `
    ///
    pub fn detailedErrorStrings2(self: KIO__PreviewJob, allocator: std.mem.Allocator, reqUrl: anytype, method: i32) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings2(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr), @bitCast(method));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__PreviewJob.detailedErrorStrings2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__PreviewJob.detailedErrorStrings2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setUiDelegate` instead
    ///
    pub const SetUiDelegate = setUiDelegate;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn setUiDelegate(self: KIO__PreviewJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `uiDelegate` instead
    ///
    pub const UiDelegate = uiDelegate;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn uiDelegate(self: KIO__PreviewJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn capabilities(self: KIO__PreviewJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspended` instead
    ///
    pub const IsSuspended = isSuspended;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isSuspended(self: KIO__PreviewJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `kill` instead
    ///
    pub const Kill = kill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn kill(self: KIO__PreviewJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suspend0` instead
    ///
    pub const Suspend = suspend0;

    pub const @"suspend" = suspend0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn suspend0(self: KIO__PreviewJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn resume0(self: KIO__PreviewJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn exec(self: KIO__PreviewJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn error0(self: KIO__PreviewJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorText` instead
    ///
    pub const ErrorText = errorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorText(self: KIO__PreviewJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.errorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `processedAmount` instead
    ///
    pub const ProcessedAmount = processedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn processedAmount(self: KIO__PreviewJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `totalAmount` instead
    ///
    pub const TotalAmount = totalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn totalAmount(self: KIO__PreviewJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `percent` instead
    ///
    pub const Percent = percent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn percent(self: KIO__PreviewJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDelete` instead
    ///
    pub const SetAutoDelete = setAutoDelete;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn setAutoDelete(self: KIO__PreviewJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// ### DEPRECATED: Use `isAutoDelete` instead
    ///
    pub const IsAutoDelete = isAutoDelete;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isAutoDelete(self: KIO__PreviewJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden` instead
    ///
    pub const SetFinishedNotificationHidden = setFinishedNotificationHidden;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn setFinishedNotificationHidden(self: KIO__PreviewJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinishedNotificationHidden` instead
    ///
    pub const IsFinishedNotificationHidden = isFinishedNotificationHidden;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isFinishedNotificationHidden(self: KIO__PreviewJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStartedWithExec` instead
    ///
    pub const IsStartedWithExec = isStartedWithExec;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isStartedWithExec(self: KIO__PreviewJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elapsedTime` instead
    ///
    pub const ElapsedTime = elapsedTime;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn elapsedTime(self: KIO__PreviewJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn infoMessage(self: KIO__PreviewJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onInfoMessage` instead
    ///
    pub const OnInfoMessage = onInfoMessage;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInfoMessage(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `warning` instead
    ///
    pub const Warning = warning;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn warning(self: KIO__PreviewJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onWarning` instead
    ///
    pub const OnWarning = onWarning;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWarning(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn totalSize(self: KIO__PreviewJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onTotalSize` instead
    ///
    pub const OnTotalSize = onTotalSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onTotalSize(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn processedSize(self: KIO__PreviewJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onProcessedSize` instead
    ///
    pub const OnProcessedSize = onProcessedSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onProcessedSize(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn speed(self: KIO__PreviewJob, job: anytype, _speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onSpeed` instead
    ///
    pub const OnSpeed = onSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn onSpeed(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `kill1` instead
    ///
    pub const Kill1 = kill1;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn kill1(self: KIO__PreviewJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden1` instead
    ///
    pub const SetFinishedNotificationHidden1 = setFinishedNotificationHidden1;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` hide: bool `
    ///
    pub fn setFinishedNotificationHidden1(self: KIO__PreviewJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KIO__PreviewJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.objectName: Memory allocation failed");
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KIO__PreviewJob, name: []const u8) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isWidgetType(self: KIO__PreviewJob) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isWindowType(self: KIO__PreviewJob) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isQuickItemType(self: KIO__PreviewJob) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn signalsBlocked(self: KIO__PreviewJob) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KIO__PreviewJob, b: bool) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn thread(self: KIO__PreviewJob) QThread {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KIO__PreviewJob, _thread: anytype) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KIO__PreviewJob, interval: i32) i32 {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KIO__PreviewJob, time: i64) i32 {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KIO__PreviewJob, id: i32) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KIO__PreviewJob, id: i32) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KIO__PreviewJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KIO__PreviewJob.children: Memory allocation failed");
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KIO__PreviewJob, _parent: anytype) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KIO__PreviewJob, filterObj: anytype) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KIO__PreviewJob, obj: anytype) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KIO__PreviewJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn disconnect3(self: KIO__PreviewJob) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KIO__PreviewJob, receiver: anytype) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn dumpObjectTree(self: KIO__PreviewJob) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn dumpObjectInfo(self: KIO__PreviewJob) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KIO__PreviewJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KIO__PreviewJob, name: [:0]const u8) QVariant {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KIO__PreviewJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KIO__PreviewJob.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__PreviewJob.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn bindingStorage(self: KIO__PreviewJob) QBindingStorage {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn bindingStorage2(self: KIO__PreviewJob) QBindingStorage {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn destroyed(self: KIO__PreviewJob) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob) callconv(.c) void) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn parent(self: KIO__PreviewJob) QObject {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KIO__PreviewJob, classname: [:0]const u8) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn deleteLater(self: KIO__PreviewJob) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KIO__PreviewJob, interval: i32, timerType: i32) i32 {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KIO__PreviewJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KIO__PreviewJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KIO__PreviewJob, signal: [:0]const u8) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KIO__PreviewJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KIO__PreviewJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KIO__PreviewJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KIO__PreviewJob, param1: anytype) void {
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#start)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn start(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStart` instead
    ///
    pub const SuperStart = superStart;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#start)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superStart(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_SuperStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStart` instead
    ///
    pub const OnStart = onStart;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#start)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStart(self: KIO__PreviewJob, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doKill` instead
    ///
    pub const DoKill = doKill;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn doKill(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_DoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoKill` instead
    ///
    pub const SuperDoKill = superDoKill;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doKill)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superDoKill(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_SuperDoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoKill` instead
    ///
    pub const OnDoKill = onDoKill;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoKill(self: KIO__PreviewJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnDoKill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doSuspend` instead
    ///
    pub const DoSuspend = doSuspend;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn doSuspend(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_DoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoSuspend` instead
    ///
    pub const SuperDoSuspend = superDoSuspend;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superDoSuspend(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_SuperDoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoSuspend` instead
    ///
    pub const OnDoSuspend = onDoSuspend;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoSuspend(self: KIO__PreviewJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnDoSuspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doResume` instead
    ///
    pub const DoResume = doResume;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn doResume(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_DoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoResume` instead
    ///
    pub const SuperDoResume = superDoResume;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superDoResume(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_SuperDoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoResume` instead
    ///
    pub const OnDoResume = onDoResume;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoResume(self: KIO__PreviewJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnDoResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KIO__PreviewJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__PreviewJob_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superErrorString` instead
    ///
    pub const SuperErrorString = superErrorString;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superErrorString(self: KIO__PreviewJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__PreviewJob_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__PreviewJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onErrorString` instead
    ///
    pub const OnErrorString = onErrorString;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onErrorString(self: KIO__PreviewJob, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIO__PreviewJob_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addSubjob` instead
    ///
    pub const AddSubjob = addSubjob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addSubjob)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    pub fn addSubjob(self: KIO__PreviewJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KIO__PreviewJob_AddSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `superAddSubjob` instead
    ///
    pub const SuperAddSubjob = superAddSubjob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addSubjob)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    pub fn superAddSubjob(self: KIO__PreviewJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KIO__PreviewJob_SuperAddSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onAddSubjob` instead
    ///
    pub const OnAddSubjob = onAddSubjob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addSubjob)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob) callconv(.c) bool `
    ///
    pub fn onAddSubjob(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob) callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnAddSubjob(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeSubjob` instead
    ///
    pub const RemoveSubjob = removeSubjob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#removeSubjob)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    pub fn removeSubjob(self: KIO__PreviewJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KIO__PreviewJob_RemoveSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveSubjob` instead
    ///
    pub const SuperRemoveSubjob = superRemoveSubjob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#removeSubjob)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    pub fn superRemoveSubjob(self: KIO__PreviewJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KIO__PreviewJob_SuperRemoveSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveSubjob` instead
    ///
    pub const OnRemoveSubjob = onRemoveSubjob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#removeSubjob)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob) callconv(.c) bool `
    ///
    pub fn onRemoveSubjob(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob) callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnRemoveSubjob(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotInfoMessage` instead
    ///
    pub const SlotInfoMessage = slotInfoMessage;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn slotInfoMessage(self: KIO__PreviewJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KIO__PreviewJob_SlotInfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `superSlotInfoMessage` instead
    ///
    pub const SuperSlotInfoMessage = superSlotInfoMessage;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn superSlotInfoMessage(self: KIO__PreviewJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KIO__PreviewJob_SuperSlotInfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onSlotInfoMessage` instead
    ///
    pub const OnSlotInfoMessage = onSlotInfoMessage;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSlotInfoMessage(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSlotInfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KIO__PreviewJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__PreviewJob_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KIO__PreviewJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__PreviewJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QEvent) callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KIO__PreviewJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__PreviewJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KIO__PreviewJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__PreviewJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KIO__PreviewJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIO__PreviewJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KIO__PreviewJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIO__PreviewJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QTimerEvent) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KIO__PreviewJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIO__PreviewJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KIO__PreviewJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIO__PreviewJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QChildEvent) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KIO__PreviewJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIO__PreviewJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KIO__PreviewJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIO__PreviewJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QEvent) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KIO__PreviewJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__PreviewJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KIO__PreviewJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__PreviewJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KIO__PreviewJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__PreviewJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KIO__PreviewJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__PreviewJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasSubjobs` instead
    ///
    pub const HasSubjobs = hasSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn hasSubjobs(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_HasSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasSubjobs` instead
    ///
    pub const SuperHasSubjobs = superHasSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superHasSubjobs(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_SuperHasSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasSubjobs` instead
    ///
    pub const OnHasSubjobs = onHasSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasSubjobs(self: KIO__PreviewJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnHasSubjobs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `subjobs` instead
    ///
    pub const Subjobs = subjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subjobs(self: KIO__PreviewJob, allocator: std.mem.Allocator) []KJob {
        const _arr: qtc.libqt_list = qtc.KIO__PreviewJob_Subjobs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KJob, _arr.len) catch @panic("KIO__PreviewJob.subjobs: Memory allocation failed");
        const _data_val: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superSubjobs` instead
    ///
    pub const SuperSubjobs = superSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superSubjobs(self: KIO__PreviewJob, allocator: std.mem.Allocator) []KJob {
        const _arr: qtc.libqt_list = qtc.KIO__PreviewJob_SuperSubjobs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KJob, _arr.len) catch @panic("KIO__PreviewJob.subjobs: Memory allocation failed");
        const _data_val: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onSubjobs` instead
    ///
    pub const OnSubjobs = onSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []KJob `
    ///
    pub fn onSubjobs(self: KIO__PreviewJob, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KIO__PreviewJob_OnSubjobs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearSubjobs` instead
    ///
    pub const ClearSubjobs = clearSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn clearSubjobs(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_ClearSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClearSubjobs` instead
    ///
    pub const SuperClearSubjobs = superClearSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superClearSubjobs(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_SuperClearSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearSubjobs` instead
    ///
    pub const OnClearSubjobs = onClearSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClearSubjobs(self: KIO__PreviewJob, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnClearSubjobs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCapabilities` instead
    ///
    pub const SetCapabilities = setCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn setCapabilities(self: KIO__PreviewJob, _capabilities: i32) void {
        qtc.KIO__PreviewJob_SetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `superSetCapabilities` instead
    ///
    pub const SuperSetCapabilities = superSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn superSetCapabilities(self: KIO__PreviewJob, _capabilities: i32) void {
        qtc.KIO__PreviewJob_SuperSetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `onSetCapabilities` instead
    ///
    pub const OnSetCapabilities = onSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn onSetCapabilities(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, i32) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSetCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn isFinished(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsFinished` instead
    ///
    pub const SuperIsFinished = superIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superIsFinished(self: KIO__PreviewJob) bool {
        return qtc.KIO__PreviewJob_SuperIsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFinished` instead
    ///
    pub const OnIsFinished = onIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsFinished(self: KIO__PreviewJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnIsFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn setError(self: KIO__PreviewJob, errorCode: i32) void {
        qtc.KIO__PreviewJob_SetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn superSetError(self: KIO__PreviewJob, errorCode: i32) void {
        qtc.KIO__PreviewJob_SuperSetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn onSetError(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, i32) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorText` instead
    ///
    pub const SetErrorText = setErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn setErrorText(self: KIO__PreviewJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KIO__PreviewJob_SetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `superSetErrorText` instead
    ///
    pub const SuperSetErrorText = superSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn superSetErrorText(self: KIO__PreviewJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KIO__PreviewJob_SuperSetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `onSetErrorText` instead
    ///
    pub const OnSetErrorText = onSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorText(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSetErrorText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProcessedAmount` instead
    ///
    pub const SetProcessedAmount = setProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setProcessedAmount(self: KIO__PreviewJob, unit: i32, amount: usize) void {
        qtc.KIO__PreviewJob_SetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `superSetProcessedAmount` instead
    ///
    pub const SuperSetProcessedAmount = superSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetProcessedAmount(self: KIO__PreviewJob, unit: i32, amount: usize) void {
        qtc.KIO__PreviewJob_SuperSetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetProcessedAmount` instead
    ///
    pub const OnSetProcessedAmount = onSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetProcessedAmount(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, i32, usize) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSetProcessedAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTotalAmount` instead
    ///
    pub const SetTotalAmount = setTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setTotalAmount(self: KIO__PreviewJob, unit: i32, amount: usize) void {
        qtc.KIO__PreviewJob_SetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `superSetTotalAmount` instead
    ///
    pub const SuperSetTotalAmount = superSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetTotalAmount(self: KIO__PreviewJob, unit: i32, amount: usize) void {
        qtc.KIO__PreviewJob_SuperSetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetTotalAmount` instead
    ///
    pub const OnSetTotalAmount = onSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetTotalAmount(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, i32, usize) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSetTotalAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProgressUnit` instead
    ///
    pub const SetProgressUnit = setProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn setProgressUnit(self: KIO__PreviewJob, unit: i32) void {
        qtc.KIO__PreviewJob_SetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `superSetProgressUnit` instead
    ///
    pub const SuperSetProgressUnit = superSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn superSetProgressUnit(self: KIO__PreviewJob, unit: i32) void {
        qtc.KIO__PreviewJob_SuperSetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `onSetProgressUnit` instead
    ///
    pub const OnSetProgressUnit = onSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn onSetProgressUnit(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, i32) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSetProgressUnit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPercent` instead
    ///
    pub const SetPercent = setPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn setPercent(self: KIO__PreviewJob, percentage: usize) void {
        qtc.KIO__PreviewJob_SetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `superSetPercent` instead
    ///
    pub const SuperSetPercent = superSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn superSetPercent(self: KIO__PreviewJob, percentage: usize) void {
        qtc.KIO__PreviewJob_SuperSetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `onSetPercent` instead
    ///
    pub const OnSetPercent = onSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, percentage: usize) callconv(.c) void `
    ///
    pub fn onSetPercent(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, usize) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnSetPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitResult` instead
    ///
    pub const EmitResult = emitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn emitResult(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_EmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEmitResult` instead
    ///
    pub const SuperEmitResult = superEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superEmitResult(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_SuperEmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEmitResult` instead
    ///
    pub const OnEmitResult = onEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEmitResult(self: KIO__PreviewJob, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnEmitResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitPercent` instead
    ///
    pub const EmitPercent = emitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn emitPercent(self: KIO__PreviewJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KIO__PreviewJob_EmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `superEmitPercent` instead
    ///
    pub const SuperEmitPercent = superEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn superEmitPercent(self: KIO__PreviewJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KIO__PreviewJob_SuperEmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `onEmitPercent` instead
    ///
    pub const OnEmitPercent = onEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, processedAmount: usize, totalAmount: usize) callconv(.c) void `
    ///
    pub fn onEmitPercent(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, usize, usize) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnEmitPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitSpeed` instead
    ///
    pub const EmitSpeed = emitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn emitSpeed(self: KIO__PreviewJob, _speed: usize) void {
        qtc.KIO__PreviewJob_EmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `superEmitSpeed` instead
    ///
    pub const SuperEmitSpeed = superEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn superEmitSpeed(self: KIO__PreviewJob, _speed: usize) void {
        qtc.KIO__PreviewJob_SuperEmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onEmitSpeed` instead
    ///
    pub const OnEmitSpeed = onEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, speed: usize) callconv(.c) void `
    ///
    pub fn onEmitSpeed(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, usize) callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnEmitSpeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startElapsedTimer` instead
    ///
    pub const StartElapsedTimer = startElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn startElapsedTimer(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_StartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStartElapsedTimer` instead
    ///
    pub const SuperStartElapsedTimer = superStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superStartElapsedTimer(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_SuperStartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartElapsedTimer` instead
    ///
    pub const OnStartElapsedTimer = onStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartElapsedTimer(self: KIO__PreviewJob, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__PreviewJob_OnStartElapsedTimer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn sender(self: KIO__PreviewJob) QObject {
        return .{ .ptr = qtc.KIO__PreviewJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superSender(self: KIO__PreviewJob) QObject {
        return .{ .ptr = qtc.KIO__PreviewJob_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KIO__PreviewJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIO__PreviewJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn senderSignalIndex(self: KIO__PreviewJob) i32 {
        return qtc.KIO__PreviewJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    pub fn superSenderSignalIndex(self: KIO__PreviewJob) i32 {
        return qtc.KIO__PreviewJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KIO__PreviewJob, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__PreviewJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KIO__PreviewJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__PreviewJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KIO__PreviewJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__PreviewJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__PreviewJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KIO__PreviewJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__PreviewJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KIO__PreviewJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__PreviewJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__PreviewJob`
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, QMetaMethod) callconv(.c) bool) void {
        qtc.KIO__PreviewJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob) callconv(.c) void `
    ///
    pub fn onFinished(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onSuspended` instead
    ///
    pub const OnSuspended = onSuspended;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob) callconv(.c) void `
    ///
    pub fn onSuspended(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResumed` instead
    ///
    pub const OnResumed = onResumed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResumed(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResult` instead
    ///
    pub const OnResult = onResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResult(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onTotalAmountChanged` instead
    ///
    pub const OnTotalAmountChanged = onTotalAmountChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onTotalAmountChanged(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onProcessedAmountChanged` instead
    ///
    pub const OnProcessedAmountChanged = onProcessedAmountChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onProcessedAmountChanged(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onPercentChanged` instead
    ///
    pub const OnPercentChanged = onPercentChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn onPercentChanged(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__PreviewJob `
    ///
    /// ` callback: *const fn (self: KIO__PreviewJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KIO__PreviewJob, callback: *const fn (KIO__PreviewJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__PreviewJob `
    ///
    pub fn delete(self: KIO__PreviewJob) void {
        qtc.KIO__PreviewJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### DEPRECATED: Use `filePreview` instead
    ///
    pub const FilePreview = filePreview;

    /// ### [Upstream resources](https://api.kde.org/kio.html#filePreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` size: QSize `
    ///
    /// ` enabledPlugins: []const []const u8 `
    ///
    pub fn filePreview(allocator: std.mem.Allocator, items: anytype, size: anytype, enabledPlugins: []const []const u8) KIO__PreviewJob {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(size)._is_QSize;
        const enabledPlugins_arr = allocator.alloc(qtc.libqt_string, enabledPlugins.len) catch @panic("KIO.filePreview: Memory allocation failed");
        defer allocator.free(enabledPlugins_arr);
        for (enabledPlugins, 0..enabledPlugins.len) |str_item, i|
            enabledPlugins_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const enabledPlugins_list = qtc.libqt_list{
            .len = enabledPlugins.len,
            .data = enabledPlugins_arr.ptr,
        };
        return .{ .ptr = qtc.KIO_FilePreview(@ptrCast(items.ptr), @ptrCast(size.ptr), enabledPlugins_list) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-previewjob.html#public-types)
pub const enums = struct {
    pub const ScaleType = enum(i32) {
        pub const Unscaled: i32 = 0;
        pub const Scaled: i32 = 1;
        pub const ScaledAndCached: i32 = 2;
    };
};
