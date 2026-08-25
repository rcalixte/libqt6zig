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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::NavigationExtension object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: KParts__ReadOnlyPart `
    ///
    pub fn new(_parent: anytype) KParts__NavigationExtension {
        comptime _ = @TypeOf(_parent)._is_KParts__ReadOnlyPart;
        return .{ .ptr = qtc.KParts__NavigationExtension_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn metaObject(self: KParts__NavigationExtension) QMetaObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__NavigationExtension_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn superMetaObject(self: KParts__NavigationExtension) QMetaObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KParts__NavigationExtension, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__NavigationExtension_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__NavigationExtension_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KParts__NavigationExtension, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__NavigationExtension_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KParts__NavigationExtension, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KParts__NavigationExtension, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__NavigationExtension_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__NavigationExtension.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `xOffset` instead
    ///
    pub const XOffset = xOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn xOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_XOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXOffset` instead
    ///
    pub const OnXOffset = onXOffset;

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
    pub fn onXOffset(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnXOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superXOffset` instead
    ///
    pub const SuperXOffset = superXOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#xOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn superXOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SuperXOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `yOffset` instead
    ///
    pub const YOffset = yOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn yOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_YOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYOffset` instead
    ///
    pub const OnYOffset = onYOffset;

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
    pub fn onYOffset(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnYOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superYOffset` instead
    ///
    pub const SuperYOffset = superYOffset;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#yOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn superYOffset(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SuperYOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveState` instead
    ///
    pub const SaveState = saveState;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn saveState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_SaveState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onSaveState` instead
    ///
    pub const OnSaveState = onSaveState;

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
    pub fn onSaveState(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QDataStream) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnSaveState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveState` instead
    ///
    pub const SuperSaveState = superSaveState;

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
    pub fn superSaveState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_SuperSaveState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `restoreState` instead
    ///
    pub const RestoreState = restoreState;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn restoreState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_RestoreState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onRestoreState` instead
    ///
    pub const OnRestoreState = onRestoreState;

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
    pub fn onRestoreState(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QDataStream) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnRestoreState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRestoreState` instead
    ///
    pub const SuperRestoreState = superRestoreState;

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
    pub fn superRestoreState(self: KParts__NavigationExtension, stream: anytype) void {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KParts__NavigationExtension_SuperRestoreState(@ptrCast(self.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `isURLDropHandlingEnabled` instead
    ///
    pub const IsURLDropHandlingEnabled = isURLDropHandlingEnabled;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#isURLDropHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn isURLDropHandlingEnabled(self: KParts__NavigationExtension) bool {
        return qtc.KParts__NavigationExtension_IsURLDropHandlingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setURLDropHandlingEnabled` instead
    ///
    pub const SetURLDropHandlingEnabled = setURLDropHandlingEnabled;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setURLDropHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` enable: bool `
    ///
    pub fn setURLDropHandlingEnabled(self: KParts__NavigationExtension, enable: bool) void {
        qtc.KParts__NavigationExtension_SetURLDropHandlingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isActionEnabled` instead
    ///
    pub const IsActionEnabled = isActionEnabled;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#isActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn isActionEnabled(self: KParts__NavigationExtension, name: [:0]const u8) bool {
        const name_Cstring = name.ptr;
        return qtc.KParts__NavigationExtension_IsActionEnabled(@ptrCast(self.ptr), name_Cstring);
    }

    /// ### DEPRECATED: Use `actionText` instead
    ///
    pub const ActionText = actionText;

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
    pub fn actionText(self: KParts__NavigationExtension, allocator: std.mem.Allocator, name: [:0]const u8) []const u8 {
        const name_Cstring = name.ptr;
        var _str = qtc.KParts__NavigationExtension_ActionText(@ptrCast(self.ptr), name_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__NavigationExtension.actionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `actionSlotMap` instead
    ///
    pub const ActionSlotMap = actionSlotMap;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#actionSlotMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionSlotMap(allocator: std.mem.Allocator) ArrayMap_u8_u8 {
        const _map: qtc.libqt_map = qtc.KParts__NavigationExtension_ActionSlotMap().?.*;
        var _ret: ArrayMap_u8_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KParts__NavigationExtension.actionSlotMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KParts__NavigationExtension.actionSlotMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KParts__NavigationExtension.actionSlotMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `childObject` instead
    ///
    pub const ChildObject = childObject;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#childObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    pub fn childObject(obj: anytype) KParts__NavigationExtension {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.KParts__NavigationExtension_ChildObject(@ptrCast(obj.ptr)) };
    }

    /// ### DEPRECATED: Use `pasteRequest` instead
    ///
    pub const PasteRequest = pasteRequest;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#pasteRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn pasteRequest(self: KParts__NavigationExtension) void {
        qtc.KParts__NavigationExtension_PasteRequest(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enableAction` instead
    ///
    pub const EnableAction = enableAction;

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
    pub fn enableAction(self: KParts__NavigationExtension, name: [:0]const u8, enabled: bool) void {
        const name_Cstring = name.ptr;
        qtc.KParts__NavigationExtension_EnableAction(@ptrCast(self.ptr), name_Cstring, enabled);
    }

    /// ### DEPRECATED: Use `setActionText` instead
    ///
    pub const SetActionText = setActionText;

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
    pub fn setActionText(self: KParts__NavigationExtension, name: [:0]const u8, text: []const u8) void {
        const name_Cstring = name.ptr;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__NavigationExtension_SetActionText(@ptrCast(self.ptr), name_Cstring, text_str);
    }

    /// ### DEPRECATED: Use `openUrlRequest` instead
    ///
    pub const OpenUrlRequest = openUrlRequest;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#openUrlRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    pub fn openUrlRequest(self: KParts__NavigationExtension, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_OpenUrlRequest(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `openUrlRequestDelayed` instead
    ///
    pub const OpenUrlRequestDelayed = openUrlRequestDelayed;

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
    pub fn openUrlRequestDelayed(self: KParts__NavigationExtension, url: anytype, arguments: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_OpenUrlRequestDelayed(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(arguments.ptr));
    }

    /// ### DEPRECATED: Use `openUrlNotify` instead
    ///
    pub const OpenUrlNotify = openUrlNotify;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#openUrlNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn openUrlNotify(self: KParts__NavigationExtension) void {
        qtc.KParts__NavigationExtension_OpenUrlNotify(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocationBarUrl` instead
    ///
    pub const SetLocationBarUrl = setLocationBarUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setLocationBarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: []const u8 `
    ///
    pub fn setLocationBarUrl(self: KParts__NavigationExtension, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KParts__NavigationExtension_SetLocationBarUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `setIconUrl` instead
    ///
    pub const SetIconUrl = setIconUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setIconUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    pub fn setIconUrl(self: KParts__NavigationExtension, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_SetIconUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `createNewWindow` instead
    ///
    pub const CreateNewWindow = createNewWindow;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#createNewWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` url: QUrl `
    ///
    pub fn createNewWindow(self: KParts__NavigationExtension, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_CreateNewWindow(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `loadingProgress` instead
    ///
    pub const LoadingProgress = loadingProgress;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#loadingProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` percent: i32 `
    ///
    pub fn loadingProgress(self: KParts__NavigationExtension, percent: i32) void {
        qtc.KParts__NavigationExtension_LoadingProgress(@ptrCast(self.ptr), @bitCast(percent));
    }

    /// ### DEPRECATED: Use `speedProgress` instead
    ///
    pub const SpeedProgress = speedProgress;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#speedProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` bytesPerSecond: i32 `
    ///
    pub fn speedProgress(self: KParts__NavigationExtension, bytesPerSecond: i32) void {
        qtc.KParts__NavigationExtension_SpeedProgress(@ptrCast(self.ptr), @bitCast(bytesPerSecond));
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn infoMessage(self: KParts__NavigationExtension, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KParts__NavigationExtension_InfoMessage(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `popupMenu` instead
    ///
    pub const PopupMenu = popupMenu;

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
    pub fn popupMenu(self: KParts__NavigationExtension, global: anytype, items: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KParts__NavigationExtension_PopupMenu(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(items.ptr));
    }

    /// ### DEPRECATED: Use `popupMenu2` instead
    ///
    pub const PopupMenu2 = popupMenu2;

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
    pub fn popupMenu2(self: KParts__NavigationExtension, global: anytype, url: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_PopupMenu2(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `selectionInfo` instead
    ///
    pub const SelectionInfo = selectionInfo;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#selectionInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn selectionInfo(self: KParts__NavigationExtension, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KParts__NavigationExtension_SelectionInfo(@ptrCast(self.ptr), @ptrCast(items.ptr));
    }

    /// ### DEPRECATED: Use `mouseOverInfo` instead
    ///
    pub const MouseOverInfo = mouseOverInfo;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#mouseOverInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` item: KFileItem `
    ///
    pub fn mouseOverInfo(self: KParts__NavigationExtension, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KFileItem;
        qtc.KParts__NavigationExtension_MouseOverInfo(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addWebSideBar` instead
    ///
    pub const AddWebSideBar = addWebSideBar;

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
    pub fn addWebSideBar(self: KParts__NavigationExtension, url: anytype, name: []const u8) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KParts__NavigationExtension_AddWebSideBar(@ptrCast(self.ptr), @ptrCast(url.ptr), name_str);
    }

    /// ### DEPRECATED: Use `moveTopLevelWidget` instead
    ///
    pub const MoveTopLevelWidget = moveTopLevelWidget;

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
    pub fn moveTopLevelWidget(self: KParts__NavigationExtension, x: i32, y: i32) void {
        qtc.KParts__NavigationExtension_MoveTopLevelWidget(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `resizeTopLevelWidget` instead
    ///
    pub const ResizeTopLevelWidget = resizeTopLevelWidget;

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
    pub fn resizeTopLevelWidget(self: KParts__NavigationExtension, w: i32, h: i32) void {
        qtc.KParts__NavigationExtension_ResizeTopLevelWidget(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `requestFocus` instead
    ///
    pub const RequestFocus = requestFocus;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#requestFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` part: KParts__ReadOnlyPart `
    ///
    pub fn requestFocus(self: KParts__NavigationExtension, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__ReadOnlyPart;
        qtc.KParts__NavigationExtension_RequestFocus(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### DEPRECATED: Use `setPageSecurity` instead
    ///
    pub const SetPageSecurity = setPageSecurity;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#setPageSecurity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` pageSecurity: i32 `
    ///
    pub fn setPageSecurity(self: KParts__NavigationExtension, pageSecurity: i32) void {
        qtc.KParts__NavigationExtension_SetPageSecurity(@ptrCast(self.ptr), @bitCast(pageSecurity));
    }

    /// ### DEPRECATED: Use `itemsRemoved` instead
    ///
    pub const ItemsRemoved = itemsRemoved;

    /// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#itemsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` items: KFileItemList `
    ///
    pub fn itemsRemoved(self: KParts__NavigationExtension, items: anytype) void {
        comptime _ = @TypeOf(items)._is_KFileItemList;
        qtc.KParts__NavigationExtension_ItemsRemoved(@ptrCast(self.ptr), @ptrCast(items.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__NavigationExtension.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__NavigationExtension.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `openUrlRequest2` instead
    ///
    pub const OpenUrlRequest2 = openUrlRequest2;

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
    pub fn openUrlRequest2(self: KParts__NavigationExtension, url: anytype, arguments: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_OpenUrlRequest2(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(arguments.ptr));
    }

    /// ### DEPRECATED: Use `popupMenu3` instead
    ///
    pub const PopupMenu3 = popupMenu3;

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
    pub fn popupMenu3(self: KParts__NavigationExtension, global: anytype, items: anytype, arguments: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu3(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(items.ptr), @ptrCast(arguments.ptr));
    }

    /// ### DEPRECATED: Use `popupMenu4` instead
    ///
    pub const PopupMenu4 = popupMenu4;

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
    pub fn popupMenu4(self: KParts__NavigationExtension, global: anytype, items: anytype, arguments: anytype, flags: i32) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu4(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(items.ptr), @ptrCast(arguments.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `popupMenu5` instead
    ///
    pub const PopupMenu5 = popupMenu5;

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
    pub fn popupMenu5(self: KParts__NavigationExtension, allocator: std.mem.Allocator, global: anytype, items: anytype, arguments: anytype, flags: i32, actionGroups: ArrayMap_constu8_SliceQAction) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(items)._is_KFileItemList;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        const actionGroups_count = actionGroups.count();
        const actionGroups_keys = allocator.alloc(qtc.libqt_string, actionGroups_count) catch @panic("KParts__NavigationExtension.popupMenu5: Memory allocation failed");
        defer allocator.free(actionGroups_keys);
        const actionGroups_values = allocator.alloc(qtc.libqt_list, actionGroups_count) catch @panic("KParts__NavigationExtension.popupMenu5: Memory allocation failed");
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

    /// ### DEPRECATED: Use `popupMenu32` instead
    ///
    pub const PopupMenu32 = popupMenu32;

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
    pub fn popupMenu32(self: KParts__NavigationExtension, global: anytype, url: anytype, mode: u32) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__NavigationExtension_PopupMenu32(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr), mode);
    }

    /// ### DEPRECATED: Use `popupMenu42` instead
    ///
    pub const PopupMenu42 = popupMenu42;

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
    pub fn popupMenu42(self: KParts__NavigationExtension, global: anytype, url: anytype, mode: u32, arguments: anytype) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu42(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr), mode, @ptrCast(arguments.ptr));
    }

    /// ### DEPRECATED: Use `popupMenu52` instead
    ///
    pub const PopupMenu52 = popupMenu52;

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
    pub fn popupMenu52(self: KParts__NavigationExtension, global: anytype, url: anytype, mode: u32, arguments: anytype, flags: i32) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__NavigationExtension_PopupMenu52(@ptrCast(self.ptr), @ptrCast(global.ptr), @ptrCast(url.ptr), mode, @ptrCast(arguments.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `popupMenu6` instead
    ///
    pub const PopupMenu6 = popupMenu6;

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
    pub fn popupMenu6(self: KParts__NavigationExtension, allocator: std.mem.Allocator, global: anytype, url: anytype, mode: u32, arguments: anytype, flags: i32, actionGroups: ArrayMap_constu8_SliceQAction) void {
        comptime _ = @TypeOf(global)._is_QPoint;
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        const actionGroups_count = actionGroups.count();
        const actionGroups_keys = allocator.alloc(qtc.libqt_string, actionGroups_count) catch @panic("KParts__NavigationExtension.popupMenu6: Memory allocation failed");
        defer allocator.free(actionGroups_keys);
        const actionGroups_values = allocator.alloc(qtc.libqt_list, actionGroups_count) catch @panic("KParts__NavigationExtension.popupMenu6: Memory allocation failed");
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

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: KParts__NavigationExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__NavigationExtension.objectName: Memory allocation failed");
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KParts__NavigationExtension, name: []const u8) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn isWidgetType(self: KParts__NavigationExtension) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn isWindowType(self: KParts__NavigationExtension) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn isQuickItemType(self: KParts__NavigationExtension) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn signalsBlocked(self: KParts__NavigationExtension) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KParts__NavigationExtension, b: bool) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn thread(self: KParts__NavigationExtension) QThread {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KParts__NavigationExtension, _thread: anytype) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KParts__NavigationExtension, interval: i32) i32 {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KParts__NavigationExtension, time: i64) i32 {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KParts__NavigationExtension, id: i32) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KParts__NavigationExtension, id: i32) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KParts__NavigationExtension, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KParts__NavigationExtension.children: Memory allocation failed");
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KParts__NavigationExtension, _parent: anytype) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KParts__NavigationExtension, filterObj: anytype) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KParts__NavigationExtension, obj: anytype) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KParts__NavigationExtension, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn disconnect3(self: KParts__NavigationExtension) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KParts__NavigationExtension, receiver: anytype) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn dumpObjectTree(self: KParts__NavigationExtension) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn dumpObjectInfo(self: KParts__NavigationExtension) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KParts__NavigationExtension, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KParts__NavigationExtension, name: [:0]const u8) QVariant {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KParts__NavigationExtension, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KParts__NavigationExtension.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KParts__NavigationExtension.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn bindingStorage(self: KParts__NavigationExtension) QBindingStorage {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn bindingStorage2(self: KParts__NavigationExtension) QBindingStorage {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn destroyed(self: KParts__NavigationExtension) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension) callconv(.c) void) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn parent(self: KParts__NavigationExtension) QObject {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KParts__NavigationExtension, classname: [:0]const u8) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn deleteLater(self: KParts__NavigationExtension) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KParts__NavigationExtension, interval: i32, timerType: i32) i32 {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KParts__NavigationExtension, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KParts__NavigationExtension, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KParts__NavigationExtension, signal: [:0]const u8) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KParts__NavigationExtension, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KParts__NavigationExtension, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KParts__NavigationExtension, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KParts__NavigationExtension, param1: anytype) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QObject) callconv(.c) void) void {
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KParts__NavigationExtension, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__NavigationExtension_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KParts__NavigationExtension, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__NavigationExtension_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QEvent) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KParts__NavigationExtension, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__NavigationExtension_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KParts__NavigationExtension, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__NavigationExtension_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KParts__NavigationExtension, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__NavigationExtension_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KParts__NavigationExtension, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__NavigationExtension_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KParts__NavigationExtension, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__NavigationExtension_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KParts__NavigationExtension, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__NavigationExtension_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QChildEvent) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KParts__NavigationExtension, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__NavigationExtension_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KParts__NavigationExtension, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__NavigationExtension_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QEvent) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KParts__NavigationExtension, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__NavigationExtension_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__NavigationExtension_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn sender(self: KParts__NavigationExtension) QObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn superSender(self: KParts__NavigationExtension) QObject {
        return .{ .ptr = qtc.KParts__NavigationExtension_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__NavigationExtension_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn senderSignalIndex(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn superSenderSignalIndex(self: KParts__NavigationExtension) i32 {
        return qtc.KParts__NavigationExtension_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KParts__NavigationExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KParts__NavigationExtension, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__NavigationExtension_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KParts__NavigationExtension, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__NavigationExtension_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__NavigationExtension_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KParts__NavigationExtension, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__NavigationExtension_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KParts__NavigationExtension, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__NavigationExtension_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__NavigationExtension`
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__NavigationExtension_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__NavigationExtension `
    ///
    /// ` callback: *const fn (self: KParts__NavigationExtension, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KParts__NavigationExtension, callback: *const fn (KParts__NavigationExtension, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__NavigationExtension `
    ///
    pub fn delete(self: KParts__NavigationExtension) void {
        qtc.KParts__NavigationExtension_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kparts-navigationextension.html#public-types)
pub const enums = struct {
    pub const PopupFlag = enum {
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
