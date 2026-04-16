const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KPluginMetaData = @import("libqt6").KPluginMetaData;
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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html)
pub const KSvg__ImageSet = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSvg__ImageSet,

    pub const _is_KSvg__ImageSet = {};
    pub const _is_QObject = {};

    /// New constructs a new KSvg::ImageSet object.
    ///
    pub fn New() KSvg__ImageSet {
        return .{ .ptr = qtc.KSvg__ImageSet_new() };
    }

    /// New2 constructs a new KSvg::ImageSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` imageSetName: []const u8 `
    ///
    pub fn New2(imageSetName: []const u8) KSvg__ImageSet {
        const imageSetName_str = qtc.libqt_string{
            .len = imageSetName.len,
            .data = imageSetName.ptr,
        };
        return .{ .ptr = qtc.KSvg__ImageSet_new2(imageSetName_str) };
    }

    /// New3 constructs a new KSvg::ImageSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) KSvg__ImageSet {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__ImageSet_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new KSvg::ImageSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` imageSetName: []const u8 `
    ///
    /// ` basePath: []const u8 `
    ///
    pub fn New4(imageSetName: []const u8, basePath: []const u8) KSvg__ImageSet {
        const imageSetName_str = qtc.libqt_string{
            .len = imageSetName.len,
            .data = imageSetName.ptr,
        };
        const basePath_str = qtc.libqt_string{
            .len = basePath.len,
            .data = basePath.ptr,
        };
        return .{ .ptr = qtc.KSvg__ImageSet_new4(imageSetName_str, basePath_str) };
    }

    /// New5 constructs a new KSvg::ImageSet object.
    ///
    /// ## Parameter(s):
    ///
    /// ` imageSetName: []const u8 `
    ///
    /// ` basePath: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(imageSetName: []const u8, basePath: []const u8, parent: anytype) KSvg__ImageSet {
        const imageSetName_str = qtc.libqt_string{
            .len = imageSetName.len,
            .data = imageSetName.ptr,
        };
        const basePath_str = qtc.libqt_string{
            .len = basePath.len,
            .data = basePath.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__ImageSet_new5(imageSetName_str, basePath_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn MetaObject(self: KSvg__ImageSet) QMetaObject {
        return .{ .ptr = qtc.KSvg__ImageSet_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KSvg__ImageSet, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSvg__ImageSet_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn SuperMetaObject(self: KSvg__ImageSet) QMetaObject {
        return .{ .ptr = qtc.KSvg__ImageSet_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSvg__ImageSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__ImageSet_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSvg__ImageSet_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSvg__ImageSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__ImageSet_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KSvg__ImageSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__ImageSet_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__ImageSet_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KSvg__ImageSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__ImageSet_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setBasePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` basePath: []const u8 `
    ///
    pub fn SetBasePath(self: KSvg__ImageSet, basePath: []const u8) void {
        const basePath_str = qtc.libqt_string{
            .len = basePath.len,
            .data = basePath.ptr,
        };
        qtc.KSvg__ImageSet_SetBasePath(@ptrCast(self.ptr), basePath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#basePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BasePath(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__ImageSet_BasePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.BasePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setSelectors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` selectors: []const []const u8 `
    ///
    pub fn SetSelectors(self: KSvg__ImageSet, allocator: std.mem.Allocator, selectors: []const []const u8) void {
        const selectors_arr = allocator.alloc(qtc.libqt_string, selectors.len) catch @panic("ksvg__imageset.SetSelectors: Memory allocation failed");
        defer allocator.free(selectors_arr);
        for (selectors, 0..selectors.len) |item, i|
            selectors_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const selectors_list = qtc.libqt_list{
            .len = selectors.len,
            .data = selectors_arr.ptr,
        };
        qtc.KSvg__ImageSet_SetSelectors(@ptrCast(self.ptr), selectors_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#selectors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Selectors(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSvg__ImageSet_Selectors(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksvg__imageset.Selectors: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksvg__imageset.Selectors: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setImageSetName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` imageSetName: []const u8 `
    ///
    pub fn SetImageSetName(self: KSvg__ImageSet, imageSetName: []const u8) void {
        const imageSetName_str = qtc.libqt_string{
            .len = imageSetName.len,
            .data = imageSetName.ptr,
        };
        qtc.KSvg__ImageSet_SetImageSetName(@ptrCast(self.ptr), imageSetName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#imageSetName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImageSetName(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__ImageSet_ImageSetName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.ImageSetName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#imagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ImagePath(self: KSvg__ImageSet, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KSvg__ImageSet_ImagePath(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn FilePath(self: KSvg__ImageSet, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KSvg__ImageSet_FilePath(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#currentImageSetHasImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn CurrentImageSetHasImage(self: KSvg__ImageSet, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KSvg__ImageSet_CurrentImageSetHasImage(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setUseGlobalSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` useGlobal: bool `
    ///
    pub fn SetUseGlobalSettings(self: KSvg__ImageSet, useGlobal: bool) void {
        qtc.KSvg__ImageSet_SetUseGlobalSettings(@ptrCast(self.ptr), useGlobal);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#useGlobalSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn UseGlobalSettings(self: KSvg__ImageSet) bool {
        return qtc.KSvg__ImageSet_UseGlobalSettings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` kbytes: i32 `
    ///
    pub fn SetCacheLimit(self: KSvg__ImageSet, kbytes: i32) void {
        qtc.KSvg__ImageSet_SetCacheLimit(@ptrCast(self.ptr), @bitCast(kbytes));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#metadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn Metadata(self: KSvg__ImageSet) KPluginMetaData {
        return .{ .ptr = qtc.KSvg__ImageSet_Metadata(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#imageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` basePath: []const u8 `
    ///
    pub fn ImageSetChanged(self: KSvg__ImageSet, basePath: []const u8) void {
        const basePath_str = qtc.libqt_string{
            .len = basePath.len,
            .data = basePath.ptr,
        };
        qtc.KSvg__ImageSet_ImageSetChanged(@ptrCast(self.ptr), basePath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#imageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, basePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnImageSetChanged(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__ImageSet_Connect_ImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#basePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` basePath: []const u8 `
    ///
    pub fn BasePathChanged(self: KSvg__ImageSet, basePath: []const u8) void {
        const basePath_str = qtc.libqt_string{
            .len = basePath.len,
            .data = basePath.ptr,
        };
        qtc.KSvg__ImageSet_BasePathChanged(@ptrCast(self.ptr), basePath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#basePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, basePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnBasePathChanged(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__ImageSet_Connect_BasePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__imageset.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KSvg__ImageSet, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn IsWidgetType(self: KSvg__ImageSet) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn IsWindowType(self: KSvg__ImageSet) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn IsQuickItemType(self: KSvg__ImageSet) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn SignalsBlocked(self: KSvg__ImageSet) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KSvg__ImageSet, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn Thread(self: KSvg__ImageSet) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSvg__ImageSet, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KSvg__ImageSet, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KSvg__ImageSet, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KSvg__ImageSet, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KSvg__ImageSet, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KSvg__ImageSet, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ksvg__imageset.Children: Memory allocation failed");
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KSvg__ImageSet, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KSvg__ImageSet, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KSvg__ImageSet, obj: anytype) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSvg__ImageSet, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn Disconnect3(self: KSvg__ImageSet) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KSvg__ImageSet, receiver: anytype) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn DumpObjectTree(self: KSvg__ImageSet) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn DumpObjectInfo(self: KSvg__ImageSet) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KSvg__ImageSet, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSvg__ImageSet, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KSvg__ImageSet, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksvg__imageset.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksvg__imageset.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn BindingStorage(self: KSvg__ImageSet) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn BindingStorage2(self: KSvg__ImageSet) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn Destroyed(self: KSvg__ImageSet) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn Parent(self: KSvg__ImageSet) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KSvg__ImageSet, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn DeleteLater(self: KSvg__ImageSet) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KSvg__ImageSet, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KSvg__ImageSet, time: i64, timerType: i32) i32 {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSvg__ImageSet, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSvg__ImageSet, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KSvg__ImageSet, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSvg__ImageSet, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSvg__ImageSet, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSvg__ImageSet, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QObject) callconv(.c) void) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KSvg__ImageSet, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__ImageSet_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KSvg__ImageSet, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__ImageSet_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QEvent) callconv(.c) bool) void {
        qtc.KSvg__ImageSet_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KSvg__ImageSet, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__ImageSet_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KSvg__ImageSet, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__ImageSet_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSvg__ImageSet_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSvg__ImageSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSvg__ImageSet_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSvg__ImageSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSvg__ImageSet_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QTimerEvent) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSvg__ImageSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSvg__ImageSet_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSvg__ImageSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSvg__ImageSet_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QChildEvent) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSvg__ImageSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSvg__ImageSet_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSvg__ImageSet, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSvg__ImageSet_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QEvent) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn Sender(self: KSvg__ImageSet) QObject {
        return .{ .ptr = qtc.KSvg__ImageSet_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn SuperSender(self: KSvg__ImageSet) QObject {
        return .{ .ptr = qtc.KSvg__ImageSet_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KSvg__ImageSet, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSvg__ImageSet_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn SenderSignalIndex(self: KSvg__ImageSet) i32 {
        return qtc.KSvg__ImageSet_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn SuperSenderSignalIndex(self: KSvg__ImageSet) i32 {
        return qtc.KSvg__ImageSet_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KSvg__ImageSet, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__ImageSet_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KSvg__ImageSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__ImageSet_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSvg__ImageSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__ImageSet_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__ImageSet_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KSvg__ImageSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__ImageSet_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSvg__ImageSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__ImageSet_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QMetaMethod) callconv(.c) bool) void {
        qtc.KSvg__ImageSet_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn Delete(self: KSvg__ImageSet) void {
        qtc.KSvg__ImageSet_Delete(@ptrCast(self.ptr));
    }
};
