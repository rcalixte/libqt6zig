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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSvg::ImageSet object in C++ memory
    ///
    pub fn new() KSvg__ImageSet {
        return .{ .ptr = qtc.KSvg__ImageSet_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KSvg::ImageSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _imageSetName: []const u8 `
    ///
    pub fn new2(_imageSetName: []const u8) KSvg__ImageSet {
        const imageSetName_str = qtc.libqt_string{
            .len = _imageSetName.len,
            .data = _imageSetName.ptr,
        };
        return .{ .ptr = qtc.KSvg__ImageSet_new2(imageSetName_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KSvg::ImageSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) KSvg__ImageSet {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__ImageSet_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KSvg::ImageSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _imageSetName: []const u8 `
    ///
    /// ` _basePath: []const u8 `
    ///
    pub fn new4(_imageSetName: []const u8, _basePath: []const u8) KSvg__ImageSet {
        const imageSetName_str = qtc.libqt_string{
            .len = _imageSetName.len,
            .data = _imageSetName.ptr,
        };
        const basePath_str = qtc.libqt_string{
            .len = _basePath.len,
            .data = _basePath.ptr,
        };
        return .{ .ptr = qtc.KSvg__ImageSet_new4(imageSetName_str, basePath_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KSvg::ImageSet object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _imageSetName: []const u8 `
    ///
    /// ` _basePath: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_imageSetName: []const u8, _basePath: []const u8, _parent: anytype) KSvg__ImageSet {
        const imageSetName_str = qtc.libqt_string{
            .len = _imageSetName.len,
            .data = _imageSetName.ptr,
        };
        const basePath_str = qtc.libqt_string{
            .len = _basePath.len,
            .data = _basePath.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__ImageSet_new5(imageSetName_str, basePath_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn metaObject(self: KSvg__ImageSet) QMetaObject {
        return .{ .ptr = qtc.KSvg__ImageSet_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KSvg__ImageSet, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSvg__ImageSet_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn superMetaObject(self: KSvg__ImageSet) QMetaObject {
        return .{ .ptr = qtc.KSvg__ImageSet_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KSvg__ImageSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__ImageSet_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSvg__ImageSet_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KSvg__ImageSet, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__ImageSet_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KSvg__ImageSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__ImageSet_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__ImageSet_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KSvg__ImageSet, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__ImageSet_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBasePath` instead
    ///
    pub const SetBasePath = setBasePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setBasePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _basePath: []const u8 `
    ///
    pub fn setBasePath(self: KSvg__ImageSet, _basePath: []const u8) void {
        const basePath_str = qtc.libqt_string{
            .len = _basePath.len,
            .data = _basePath.ptr,
        };
        qtc.KSvg__ImageSet_SetBasePath(@ptrCast(self.ptr), basePath_str);
    }

    /// ### DEPRECATED: Use `basePath` instead
    ///
    pub const BasePath = basePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#basePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn basePath(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__ImageSet_BasePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.basePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSelectors` instead
    ///
    pub const SetSelectors = setSelectors;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setSelectors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _selectors: []const []const u8 `
    ///
    pub fn setSelectors(self: KSvg__ImageSet, allocator: std.mem.Allocator, _selectors: []const []const u8) void {
        const selectors_arr = allocator.alloc(qtc.libqt_string, _selectors.len) catch @panic("KSvg__ImageSet.setSelectors: Memory allocation failed");
        defer allocator.free(selectors_arr);
        for (_selectors, 0.._selectors.len) |str_item, i|
            selectors_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const selectors_list = qtc.libqt_list{
            .len = _selectors.len,
            .data = selectors_arr.ptr,
        };
        qtc.KSvg__ImageSet_SetSelectors(@ptrCast(self.ptr), selectors_list);
    }

    /// ### DEPRECATED: Use `selectors` instead
    ///
    pub const Selectors = selectors;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#selectors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectors(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSvg__ImageSet_Selectors(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSvg__ImageSet.selectors: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSvg__ImageSet.selectors: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setImageSetName` instead
    ///
    pub const SetImageSetName = setImageSetName;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setImageSetName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _imageSetName: []const u8 `
    ///
    pub fn setImageSetName(self: KSvg__ImageSet, _imageSetName: []const u8) void {
        const imageSetName_str = qtc.libqt_string{
            .len = _imageSetName.len,
            .data = _imageSetName.ptr,
        };
        qtc.KSvg__ImageSet_SetImageSetName(@ptrCast(self.ptr), imageSetName_str);
    }

    /// ### DEPRECATED: Use `imageSetName` instead
    ///
    pub const ImageSetName = imageSetName;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#imageSetName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn imageSetName(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__ImageSet_ImageSetName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.imageSetName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `imagePath` instead
    ///
    pub const ImagePath = imagePath;

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
    pub fn imagePath(self: KSvg__ImageSet, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KSvg__ImageSet_ImagePath(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.imagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

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
    pub fn filePath(self: KSvg__ImageSet, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KSvg__ImageSet_FilePath(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentImageSetHasImage` instead
    ///
    pub const CurrentImageSetHasImage = currentImageSetHasImage;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#currentImageSetHasImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn currentImageSetHasImage(self: KSvg__ImageSet, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KSvg__ImageSet_CurrentImageSetHasImage(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setUseGlobalSettings` instead
    ///
    pub const SetUseGlobalSettings = setUseGlobalSettings;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setUseGlobalSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` useGlobal: bool `
    ///
    pub fn setUseGlobalSettings(self: KSvg__ImageSet, useGlobal: bool) void {
        qtc.KSvg__ImageSet_SetUseGlobalSettings(@ptrCast(self.ptr), useGlobal);
    }

    /// ### DEPRECATED: Use `useGlobalSettings` instead
    ///
    pub const UseGlobalSettings = useGlobalSettings;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#useGlobalSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn useGlobalSettings(self: KSvg__ImageSet) bool {
        return qtc.KSvg__ImageSet_UseGlobalSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCacheLimit` instead
    ///
    pub const SetCacheLimit = setCacheLimit;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#setCacheLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` kbytes: i32 `
    ///
    pub fn setCacheLimit(self: KSvg__ImageSet, kbytes: i32) void {
        qtc.KSvg__ImageSet_SetCacheLimit(@ptrCast(self.ptr), @bitCast(kbytes));
    }

    /// ### DEPRECATED: Use `metadata` instead
    ///
    pub const Metadata = metadata;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#metadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn metadata(self: KSvg__ImageSet) KPluginMetaData {
        return .{ .ptr = qtc.KSvg__ImageSet_Metadata(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `imageSetChanged` instead
    ///
    pub const ImageSetChanged = imageSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#imageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _basePath: []const u8 `
    ///
    pub fn imageSetChanged(self: KSvg__ImageSet, _basePath: []const u8) void {
        const basePath_str = qtc.libqt_string{
            .len = _basePath.len,
            .data = _basePath.ptr,
        };
        qtc.KSvg__ImageSet_ImageSetChanged(@ptrCast(self.ptr), basePath_str);
    }

    /// ### DEPRECATED: Use `onImageSetChanged` instead
    ///
    pub const OnImageSetChanged = onImageSetChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#imageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, basePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onImageSetChanged(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__ImageSet_Connect_ImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `basePathChanged` instead
    ///
    pub const BasePathChanged = basePathChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#basePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _basePath: []const u8 `
    ///
    pub fn basePathChanged(self: KSvg__ImageSet, _basePath: []const u8) void {
        const basePath_str = qtc.libqt_string{
            .len = _basePath.len,
            .data = _basePath.ptr,
        };
        qtc.KSvg__ImageSet_BasePathChanged(@ptrCast(self.ptr), basePath_str);
    }

    /// ### DEPRECATED: Use `onBasePathChanged` instead
    ///
    pub const OnBasePathChanged = onBasePathChanged;

    /// ### [Upstream resources](https://api.kde.org/ksvg-imageset.html#basePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, basePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onBasePathChanged(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__ImageSet_Connect_BasePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.tr3: Memory allocation failed");
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KSvg__ImageSet, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSvg__ImageSet.objectName: Memory allocation failed");
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KSvg__ImageSet, name: []const u8) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn isWidgetType(self: KSvg__ImageSet) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn isWindowType(self: KSvg__ImageSet) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn isQuickItemType(self: KSvg__ImageSet) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn signalsBlocked(self: KSvg__ImageSet) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KSvg__ImageSet, b: bool) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn thread(self: KSvg__ImageSet) QThread {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KSvg__ImageSet, _thread: anytype) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KSvg__ImageSet, interval: i32) i32 {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KSvg__ImageSet, time: i64) i32 {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KSvg__ImageSet, id: i32) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KSvg__ImageSet, id: i32) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KSvg__ImageSet, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KSvg__ImageSet.children: Memory allocation failed");
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KSvg__ImageSet, _parent: anytype) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KSvg__ImageSet, filterObj: anytype) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KSvg__ImageSet, obj: anytype) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KSvg__ImageSet, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn disconnect3(self: KSvg__ImageSet) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KSvg__ImageSet, receiver: anytype) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn dumpObjectTree(self: KSvg__ImageSet) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn dumpObjectInfo(self: KSvg__ImageSet) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KSvg__ImageSet, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KSvg__ImageSet, name: [:0]const u8) QVariant {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KSvg__ImageSet, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KSvg__ImageSet.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSvg__ImageSet.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn bindingStorage(self: KSvg__ImageSet) QBindingStorage {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn bindingStorage2(self: KSvg__ImageSet) QBindingStorage {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn destroyed(self: KSvg__ImageSet) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet) callconv(.c) void) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn parent(self: KSvg__ImageSet) QObject {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KSvg__ImageSet, classname: [:0]const u8) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn deleteLater(self: KSvg__ImageSet) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KSvg__ImageSet, interval: i32, timerType: i32) i32 {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KSvg__ImageSet, time: i64, timerType: i32) i32 {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KSvg__ImageSet, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KSvg__ImageSet, signal: [:0]const u8) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KSvg__ImageSet, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KSvg__ImageSet, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KSvg__ImageSet, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KSvg__ImageSet, param1: anytype) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QObject) callconv(.c) void) void {
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KSvg__ImageSet, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__ImageSet_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KSvg__ImageSet, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__ImageSet_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QEvent) callconv(.c) bool) void {
        qtc.KSvg__ImageSet_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KSvg__ImageSet, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__ImageSet_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KSvg__ImageSet, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSvg__ImageSet_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSvg__ImageSet_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KSvg__ImageSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSvg__ImageSet_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KSvg__ImageSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSvg__ImageSet_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QTimerEvent) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KSvg__ImageSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSvg__ImageSet_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KSvg__ImageSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSvg__ImageSet_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QChildEvent) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KSvg__ImageSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSvg__ImageSet_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KSvg__ImageSet, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSvg__ImageSet_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QEvent) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KSvg__ImageSet, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__ImageSet_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__ImageSet_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn sender(self: KSvg__ImageSet) QObject {
        return .{ .ptr = qtc.KSvg__ImageSet_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn superSender(self: KSvg__ImageSet) QObject {
        return .{ .ptr = qtc.KSvg__ImageSet_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KSvg__ImageSet, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSvg__ImageSet_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn senderSignalIndex(self: KSvg__ImageSet) i32 {
        return qtc.KSvg__ImageSet_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    pub fn superSenderSignalIndex(self: KSvg__ImageSet) i32 {
        return qtc.KSvg__ImageSet_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KSvg__ImageSet, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__ImageSet_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KSvg__ImageSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__ImageSet_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KSvg__ImageSet, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__ImageSet_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__ImageSet_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KSvg__ImageSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__ImageSet_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KSvg__ImageSet, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__ImageSet_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__ImageSet`
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, QMetaMethod) callconv(.c) bool) void {
        qtc.KSvg__ImageSet_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__ImageSet `
    ///
    /// ` callback: *const fn (self: KSvg__ImageSet, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KSvg__ImageSet, callback: *const fn (KSvg__ImageSet, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSvg__ImageSet `
    ///
    pub fn delete(self: KSvg__ImageSet) void {
        qtc.KSvg__ImageSet_Delete(@ptrCast(self.ptr));
    }
};
