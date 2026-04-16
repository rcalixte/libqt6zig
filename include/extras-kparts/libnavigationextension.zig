const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KFileItem = @import("libqt6").KFileItem;
const KFileItemList = @import("libqt6").KFileItemList;
const KParts__OpenUrlArguments = @import("libqt6").KParts__OpenUrlArguments;
const KParts__ReadOnlyPart = @import("libqt6").KParts__ReadOnlyPart;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const navigationextension_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_SliceQAction = std.array_hash_map.String([]QAction);
const ArrayMap_u8_u8 = std.array_hash_map.String([]u8);

/// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html)
pub const KParts__NavigationExtension = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__NavigationExtension,

    pub const _is_KParts__NavigationExtension = {};
    pub const _is_QObject = {};

    /// New constructs a new KParts::NavigationExtension object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: KParts__ReadOnlyPart `
    ///
    pub fn New(parent: anytype) KParts__NavigationExtension {
        comptime _ = @TypeOf(parent)._is_KParts__ReadOnlyPart;
        return .{ .ptr = qtc.KParts__NavigationExtension_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn MetaObject(self: KParts__NavigationExtension) QMetaObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__NavigationExtension_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn SuperMetaObject(self: KParts__NavigationExtension) QMetaObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KParts__NavigationExtension, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__NavigationExtension_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__NavigationExtension_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KParts__NavigationExtension, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__NavigationExtension_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KParts__NavigationExtension, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KParts__NavigationExtension, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__navigationextension.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn XOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_XOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnXOffset(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnXOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperXOffset` instead
    ///
    pub const QBaseXOffset = SuperXOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn SuperXOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SuperXOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn YOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_YOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnYOffset(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnYOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperYOffset` instead
    ///
    pub const QBaseYOffset = SuperYOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn SuperYOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SuperYOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SaveState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_SaveState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#saveState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, stream: QDataStream) callconv(.c) void `
    ///
    pub fn OnSaveState(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QDataStream) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnSaveState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveState` instead
    ///
    pub const QBaseSaveState = SuperSaveState;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#saveState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperSaveState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_SuperSaveState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn RestoreState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_RestoreState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#restoreState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, stream: QDataStream) callconv(.c) void `
    ///
    pub fn OnRestoreState(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QDataStream) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnRestoreState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRestoreState` instead
    ///
    pub const QBaseRestoreState = SuperRestoreState;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#restoreState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperRestoreState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_SuperRestoreState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#isURLDropHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn IsURLDropHandlingEnabled(self: KParts__NavigationExtension) bool {
        return qtc.KParts__NavigationExtension_IsURLDropHandlingEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setURLDropHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` enable: bool `
    ///
    pub fn SetURLDropHandlingEnabled(self: KParts__NavigationExtension, enable: bool) void {
        qtc.KParts__NavigationExtension_SetURLDropHandlingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#isActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn IsActionEnabled(self: KParts__NavigationExtension, name: [:0]const u8) bool {
        const name_Cstring = name.ptr;
        return qtc.KParts__NavigationExtension_IsActionEnabled(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#actionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn ActionText(self: KParts__NavigationExtension, allocator: std.mem.Allocator, name: [:0]const u8) []const u8 {
        const name_Cstring = name.ptr;
        var _str = qtc.KParts__NavigationExtension_ActionText(@ptrCast(self.ptr), name_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__navigationextension.ActionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#actionSlotMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionSlotMap(allocator: std.mem.Allocator) ArrayMap_u8_u8 {
        const _map: qtc.libqt_map = qtc.KParts__NavigationExtension_ActionSlotMap().?.*;
        var _ret: ArrayMap_u8_u8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kparts__navigationextension.ActionSlotMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kparts__navigationextension.ActionSlotMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kparts__navigationextension.ActionSlotMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#childObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    pub fn ChildObject(obj: anytype) KParts__NavigationExtension {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.KParts__NavigationExtension_ChildObject(@ptrCast(obj.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#pasteRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn PasteRequest(self: KParts__NavigationExtension) void {
        qtc.KParts__NavigationExtension_PasteRequest(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#enableAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnableAction(self: KParts__NavigationExtension, name: [:0]const u8, enabled: bool) void {
        const name_Cstring = name.ptr;
        qtc.KParts__NavigationExtension_EnableAction(@ptrCast(self.ptr), name_Cstring, enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setActionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetActionText(self: KParts__NavigationExtension, name: [:0]const u8, text: []const u8) void {
        const name_Cstring = name.ptr;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__NavigationExtension_SetActionText(@ptrCast(self.ptr), name_Cstring, text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#openUrlRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenUrlRequest(self: KParts__NavigationExtension, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_OpenUrlRequest(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#openUrlRequestDelayed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    pub fn OpenUrlRequestDelayed(self: KParts__NavigationExtension, url: anytype, arguments: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_OpenUrlRequestDelayed(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(arguments.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#openUrlNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn OpenUrlNotify(self: KParts__NavigationExtension) void {
        qtc.KParts__NavigationExtension_OpenUrlNotify(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setLocationBarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetLocationBarUrl(self: KParts__NavigationExtension, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KParts__NavigationExtension_SetLocationBarUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setIconUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetIconUrl(self: KParts__NavigationExtension, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_SetIconUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#createNewWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    pub fn CreateNewWindow(self: KParts__NavigationExtension, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_CreateNewWindow(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#loadingProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` percent: i32 `
    ///
    pub fn LoadingProgress(self: KParts__NavigationExtension, percent: i32) void {
        qtc.KParts__NavigationExtension_LoadingProgress(@ptrCast(self.ptr), @bitCast(percent));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#speedProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` bytesPerSecond: i32 `
    ///
    pub fn SpeedProgress(self: KParts__NavigationExtension, bytesPerSecond: i32) void {
        qtc.KParts__NavigationExtension_SpeedProgress(@ptrCast(self.ptr), @bitCast(bytesPerSecond));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn InfoMessage(self: KParts__NavigationExtension, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KParts__NavigationExtension_InfoMessage(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` global: QPoint `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn PopupMenu(self: KParts__NavigationExtension, global: anytype, items: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KParts__NavigationExtension_PopupMenu(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(items.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` global: QPoint `
    ///
    /// ` url: QUrl `
    ///
    pub fn PopupMenu2(self: KParts__NavigationExtension, global: anytype, url: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_PopupMenu2(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#selectionInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn SelectionInfo(self: KParts__NavigationExtension, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KParts__NavigationExtension_SelectionInfo(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#mouseOverInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` item: KFileItem `
    ///
    pub fn MouseOverInfo(self: KParts__NavigationExtension, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KParts__NavigationExtension_MouseOverInfo(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#addWebSideBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddWebSideBar(self: KParts__NavigationExtension, url: anytype, name: []const u8) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KParts__NavigationExtension_AddWebSideBar(@ptrCast(self.ptr), @ptrCast(url.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#moveTopLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn MoveTopLevelWidget(self: KParts__NavigationExtension, x: i32, y: i32) void {
        qtc.KParts__NavigationExtension_MoveTopLevelWidget(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#resizeTopLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn ResizeTopLevelWidget(self: KParts__NavigationExtension, w: i32, h: i32) void {
        qtc.KParts__NavigationExtension_ResizeTopLevelWidget(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#requestFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` part: KParts__ReadOnlyPart `
    ///
    pub fn RequestFocus(self: KParts__NavigationExtension, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__ReadOnlyPart;
        qtc.KParts__NavigationExtension_RequestFocus(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setPageSecurity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` pageSecurity: i32 `
    ///
    pub fn SetPageSecurity(self: KParts__NavigationExtension, pageSecurity: i32) void {
        qtc.KParts__NavigationExtension_SetPageSecurity(@ptrCast(self.ptr), @bitCast(pageSecurity));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#itemsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn ItemsRemoved(self: KParts__NavigationExtension, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KParts__NavigationExtension_ItemsRemoved(@ptrCast(self.ptr), @ptrCast(items.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__navigationextension.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__navigationextension.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#openUrlRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    pub fn OpenUrlRequest2(self: KParts__NavigationExtension, url: anytype, arguments: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_OpenUrlRequest2(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(arguments.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` global: QPoint `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    pub fn PopupMenu3(self: KParts__NavigationExtension, global: anytype, items: anytype, arguments: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu3(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(items.ptr), @ptrCast(arguments.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` global: QPoint `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    /// ` flags: flag of navigationextension_enums.PopupFlag `
    ///
    pub fn PopupMenu4(self: KParts__NavigationExtension, global: anytype, items: anytype, arguments: anytype, flags: i32) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu4(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(items.ptr), @ptrCast(arguments.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` global: QPoint `
    ///
    /// ` items: KFileItemList `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    /// ` flags: flag of navigationextension_enums.PopupFlag `
    ///
    /// ` actionGroups: ArrayMap_constu8_SliceQAction `
    ///
    pub fn PopupMenu5(self: KParts__NavigationExtension, allocator: std.mem.Allocator, global: anytype, items: anytype, arguments: anytype, flags: i32, actionGroups: ArrayMap_constu8_SliceQAction) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        const actionGroups_count = actionGroups.count();
        const actionGroups_keys = allocator.alloc(qtc.libqt_string, actionGroups_count) catch @panic("kparts__navigationextension.PopupMenu5: Memory allocation failed");
        defer allocator.free(actionGroups_keys);
        const actionGroups_values = allocator.alloc(qtc.libqt_list, actionGroups_count) catch @panic("kparts__navigationextension.PopupMenu5: Memory allocation failed");
        defer allocator.free(actionGroups_values);
        var i: usize = 0;
        var actionGroups_it = actionGroups.iterator();
        while (actionGroups_it.next()) |it_entry| : (i += 1) {
            const actionGroups_key = it_entry.key_ptr.*;
            actionGroups_keys[i] = qtc.libqt_string{
                .len = actionGroups_key.len,
                .data = actionGroups_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            actionGroups_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const actionGroups_map = qtc.libqt_map{
            .len = actionGroups_count,
            .keys = @ptrCast(actionGroups_keys.ptr),
            .values = @ptrCast(actionGroups_values.ptr),
        };
        qtc.KParts__NavigationExtension_PopupMenu5(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(items.ptr), @ptrCast(arguments.ptr), @bitCast(flags), actionGroups_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` global: QPoint `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: u32 `
    ///
    pub fn PopupMenu32(self: KParts__NavigationExtension, global: anytype, url: anytype, mode: u32) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_PopupMenu32(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr), mode);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` global: QPoint `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: u32 `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    pub fn PopupMenu42(self: KParts__NavigationExtension, global: anytype, url: anytype, mode: u32, arguments: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu42(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr), mode, @ptrCast(arguments.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` global: QPoint `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: u32 `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    /// ` flags: flag of navigationextension_enums.PopupFlag `
    ///
    pub fn PopupMenu52(self: KParts__NavigationExtension, global: anytype, url: anytype, mode: u32, arguments: anytype, flags: i32) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu52(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr), mode, @ptrCast(arguments.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#popupMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` global: QPoint `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: u32 `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    /// ` flags: flag of navigationextension_enums.PopupFlag `
    ///
    /// ` actionGroups: ArrayMap_constu8_SliceQAction `
    ///
    pub fn PopupMenu6(self: KParts__NavigationExtension, allocator: std.mem.Allocator, global: anytype, url: anytype, mode: u32, arguments: anytype, flags: i32, actionGroups: ArrayMap_constu8_SliceQAction) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        const actionGroups_count = actionGroups.count();
        const actionGroups_keys = allocator.alloc(qtc.libqt_string, actionGroups_count) catch @panic("kparts__navigationextension.PopupMenu6: Memory allocation failed");
        defer allocator.free(actionGroups_keys);
        const actionGroups_values = allocator.alloc(qtc.libqt_list, actionGroups_count) catch @panic("kparts__navigationextension.PopupMenu6: Memory allocation failed");
        defer allocator.free(actionGroups_values);
        var i: usize = 0;
        var actionGroups_it = actionGroups.iterator();
        while (actionGroups_it.next()) |it_entry| : (i += 1) {
            const actionGroups_key = it_entry.key_ptr.*;
            actionGroups_keys[i] = qtc.libqt_string{
                .len = actionGroups_key.len,
                .data = actionGroups_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            actionGroups_values[i] = qtc.libqt_list{
                .len = value.len,
                .data = @ptrCast(value.ptr),
            };
        }
        const actionGroups_map = qtc.libqt_map{
            .len = actionGroups_count,
            .keys = @ptrCast(actionGroups_keys.ptr),
            .values = @ptrCast(actionGroups_values.ptr),
        };
        qtc.KParts__NavigationExtension_PopupMenu6(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr), mode, @ptrCast(arguments.ptr), @bitCast(flags), actionGroups_map);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KParts__NavigationExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__navigationextension.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KParts__NavigationExtension, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn IsWidgetType(self: KParts__NavigationExtension) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn IsWindowType(self: KParts__NavigationExtension) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn IsQuickItemType(self: KParts__NavigationExtension) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn SignalsBlocked(self: KParts__NavigationExtension) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KParts__NavigationExtension, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn Thread(self: KParts__NavigationExtension) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KParts__NavigationExtension, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KParts__NavigationExtension, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KParts__NavigationExtension, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KParts__NavigationExtension, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KParts__NavigationExtension, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KParts__NavigationExtension, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kparts__navigationextension.Children: Memory allocation failed");
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KParts__NavigationExtension, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KParts__NavigationExtension, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KParts__NavigationExtension, obj: anytype) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KParts__NavigationExtension, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn Disconnect3(self: KParts__NavigationExtension) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KParts__NavigationExtension, receiver: anytype) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn DumpObjectTree(self: KParts__NavigationExtension) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn DumpObjectInfo(self: KParts__NavigationExtension) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KParts__NavigationExtension, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KParts__NavigationExtension, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KParts__NavigationExtension, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts__navigationextension.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts__navigationextension.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn BindingStorage(self: KParts__NavigationExtension) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn BindingStorage2(self: KParts__NavigationExtension) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn Destroyed(self: KParts__NavigationExtension) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn Parent(self: KParts__NavigationExtension) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KParts__NavigationExtension, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn DeleteLater(self: KParts__NavigationExtension) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KParts__NavigationExtension, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KParts__NavigationExtension, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KParts__NavigationExtension, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KParts__NavigationExtension, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KParts__NavigationExtension, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KParts__NavigationExtension, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KParts__NavigationExtension, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KParts__NavigationExtension, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QObject) callconv(.c) void) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KParts__NavigationExtension, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__NavigationExtension_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KParts__NavigationExtension, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__NavigationExtension_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QEvent) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KParts__NavigationExtension, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__NavigationExtension_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KParts__NavigationExtension, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__NavigationExtension_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KParts__NavigationExtension, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__NavigationExtension_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KParts__NavigationExtension, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__NavigationExtension_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KParts__NavigationExtension, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__NavigationExtension_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KParts__NavigationExtension, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__NavigationExtension_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QChildEvent) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KParts__NavigationExtension, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__NavigationExtension_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KParts__NavigationExtension, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__NavigationExtension_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QEvent) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn Sender(self: KParts__NavigationExtension) QObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn SuperSender(self: KParts__NavigationExtension) QObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__NavigationExtension_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn SenderSignalIndex(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn SuperSenderSignalIndex(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KParts__NavigationExtension, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__NavigationExtension_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KParts__NavigationExtension, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__NavigationExtension_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KParts__NavigationExtension, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__NavigationExtension_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KParts__NavigationExtension, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__NavigationExtension_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn Delete(self: KParts__NavigationExtension) void {
        qtc.KParts__NavigationExtension_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#public-types)
pub const enums = struct {
    pub const PopupFlag = enum(i32) {
        pub const DefaultPopupItems: i32 = 0;
        pub const ShowBookmark: i32 = 8;
        pub const ShowCreateDirectory: i32 = 16;
        pub const ShowTextSelectionItems: i32 = 32;
        pub const NoDeletion: i32 = 64;
        pub const IsLink: i32 = 128;
        pub const ShowUrlOperations: i32 = 256;
        pub const ShowProperties: i32 = 512;
    };
};
