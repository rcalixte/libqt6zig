const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QVirtualKeyboardDictionary = @import("libqt6").QVirtualKeyboardDictionary;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html)
pub const QVirtualKeyboardDictionaryManager = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVirtualKeyboardDictionaryManager,

    pub const _is_QVirtualKeyboardDictionaryManager = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn metaObject(self: QVirtualKeyboardDictionaryManager) QMetaObject {
        return .{ .ptr = qtc.QVirtualKeyboardDictionaryManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVirtualKeyboardDictionaryManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVirtualKeyboardDictionaryManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVirtualKeyboardDictionaryManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVirtualKeyboardDictionaryManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QVirtualKeyboardDictionaryManager_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardDictionaryManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#instance)
    ///
    pub fn instance() QVirtualKeyboardDictionaryManager {
        return .{ .ptr = qtc.QVirtualKeyboardDictionaryManager_Instance() };
    }

    /// ### DEPRECATED: Use `availableDictionaries` instead
    ///
    pub const AvailableDictionaries = availableDictionaries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#availableDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableDictionaries(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardDictionaryManager_AvailableDictionaries(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QVirtualKeyboardDictionaryManager.availableDictionaries: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardDictionaryManager.availableDictionaries: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `baseDictionaries` instead
    ///
    pub const BaseDictionaries = baseDictionaries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#baseDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn baseDictionaries(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardDictionaryManager_BaseDictionaries(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QVirtualKeyboardDictionaryManager.baseDictionaries: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardDictionaryManager.baseDictionaries: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setBaseDictionaries` instead
    ///
    pub const SetBaseDictionaries = setBaseDictionaries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#setBaseDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _baseDictionaries: []const []const u8 `
    ///
    pub fn setBaseDictionaries(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator, _baseDictionaries: []const []const u8) void {
        const baseDictionaries_arr = allocator.alloc(qtc.libqt_string, _baseDictionaries.len) catch @panic("QVirtualKeyboardDictionaryManager.setBaseDictionaries: Memory allocation failed");
        defer allocator.free(baseDictionaries_arr);
        for (_baseDictionaries, 0.._baseDictionaries.len) |str_item, i|
            baseDictionaries_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const baseDictionaries_list = qtc.libqt_list{
            .len = _baseDictionaries.len,
            .data = baseDictionaries_arr.ptr,
        };
        qtc.QVirtualKeyboardDictionaryManager_SetBaseDictionaries(@ptrCast(self.ptr), baseDictionaries_list);
    }

    /// ### DEPRECATED: Use `extraDictionaries` instead
    ///
    pub const ExtraDictionaries = extraDictionaries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#extraDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extraDictionaries(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardDictionaryManager_ExtraDictionaries(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QVirtualKeyboardDictionaryManager.extraDictionaries: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardDictionaryManager.extraDictionaries: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setExtraDictionaries` instead
    ///
    pub const SetExtraDictionaries = setExtraDictionaries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#setExtraDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _extraDictionaries: []const []const u8 `
    ///
    pub fn setExtraDictionaries(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator, _extraDictionaries: []const []const u8) void {
        const extraDictionaries_arr = allocator.alloc(qtc.libqt_string, _extraDictionaries.len) catch @panic("QVirtualKeyboardDictionaryManager.setExtraDictionaries: Memory allocation failed");
        defer allocator.free(extraDictionaries_arr);
        for (_extraDictionaries, 0.._extraDictionaries.len) |str_item, i|
            extraDictionaries_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const extraDictionaries_list = qtc.libqt_list{
            .len = _extraDictionaries.len,
            .data = extraDictionaries_arr.ptr,
        };
        qtc.QVirtualKeyboardDictionaryManager_SetExtraDictionaries(@ptrCast(self.ptr), extraDictionaries_list);
    }

    /// ### DEPRECATED: Use `activeDictionaries` instead
    ///
    pub const ActiveDictionaries = activeDictionaries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#activeDictionaries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activeDictionaries(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QVirtualKeyboardDictionaryManager_ActiveDictionaries(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QVirtualKeyboardDictionaryManager.activeDictionaries: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardDictionaryManager.activeDictionaries: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `createDictionary` instead
    ///
    pub const CreateDictionary = createDictionary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#createDictionary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn createDictionary(self: QVirtualKeyboardDictionaryManager, name: []const u8) QVirtualKeyboardDictionary {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QVirtualKeyboardDictionaryManager_CreateDictionary(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `dictionary` instead
    ///
    pub const Dictionary = dictionary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#dictionary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn dictionary(self: QVirtualKeyboardDictionaryManager, name: []const u8) QVirtualKeyboardDictionary {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QVirtualKeyboardDictionaryManager_Dictionary(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `availableDictionariesChanged` instead
    ///
    pub const AvailableDictionariesChanged = availableDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#availableDictionariesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn availableDictionariesChanged(self: QVirtualKeyboardDictionaryManager) void {
        qtc.QVirtualKeyboardDictionaryManager_AvailableDictionariesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAvailableDictionariesChanged` instead
    ///
    pub const OnAvailableDictionariesChanged = onAvailableDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#availableDictionariesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardDictionaryManager) callconv(.c) void `
    ///
    pub fn onAvailableDictionariesChanged(self: QVirtualKeyboardDictionaryManager, callback: *const fn (QVirtualKeyboardDictionaryManager) callconv(.c) void) void {
        qtc.QVirtualKeyboardDictionaryManager_Connect_AvailableDictionariesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseDictionariesChanged` instead
    ///
    pub const BaseDictionariesChanged = baseDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#baseDictionariesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn baseDictionariesChanged(self: QVirtualKeyboardDictionaryManager) void {
        qtc.QVirtualKeyboardDictionaryManager_BaseDictionariesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBaseDictionariesChanged` instead
    ///
    pub const OnBaseDictionariesChanged = onBaseDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#baseDictionariesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardDictionaryManager) callconv(.c) void `
    ///
    pub fn onBaseDictionariesChanged(self: QVirtualKeyboardDictionaryManager, callback: *const fn (QVirtualKeyboardDictionaryManager) callconv(.c) void) void {
        qtc.QVirtualKeyboardDictionaryManager_Connect_BaseDictionariesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `extraDictionariesChanged` instead
    ///
    pub const ExtraDictionariesChanged = extraDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#extraDictionariesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn extraDictionariesChanged(self: QVirtualKeyboardDictionaryManager) void {
        qtc.QVirtualKeyboardDictionaryManager_ExtraDictionariesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExtraDictionariesChanged` instead
    ///
    pub const OnExtraDictionariesChanged = onExtraDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#extraDictionariesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardDictionaryManager) callconv(.c) void `
    ///
    pub fn onExtraDictionariesChanged(self: QVirtualKeyboardDictionaryManager, callback: *const fn (QVirtualKeyboardDictionaryManager) callconv(.c) void) void {
        qtc.QVirtualKeyboardDictionaryManager_Connect_ExtraDictionariesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeDictionariesChanged` instead
    ///
    pub const ActiveDictionariesChanged = activeDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#activeDictionariesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn activeDictionariesChanged(self: QVirtualKeyboardDictionaryManager) void {
        qtc.QVirtualKeyboardDictionaryManager_ActiveDictionariesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActiveDictionariesChanged` instead
    ///
    pub const OnActiveDictionariesChanged = onActiveDictionariesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#activeDictionariesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardDictionaryManager) callconv(.c) void `
    ///
    pub fn onActiveDictionariesChanged(self: QVirtualKeyboardDictionaryManager, callback: *const fn (QVirtualKeyboardDictionaryManager) callconv(.c) void) void {
        qtc.QVirtualKeyboardDictionaryManager_Connect_ActiveDictionariesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QVirtualKeyboardDictionaryManager_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardDictionaryManager.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QVirtualKeyboardDictionaryManager_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardDictionaryManager.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVirtualKeyboardDictionaryManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVirtualKeyboardDictionaryManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVirtualKeyboardDictionaryManager.objectName: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVirtualKeyboardDictionaryManager, name: []const u8) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn isWidgetType(self: QVirtualKeyboardDictionaryManager) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn isWindowType(self: QVirtualKeyboardDictionaryManager) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn isQuickItemType(self: QVirtualKeyboardDictionaryManager) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn signalsBlocked(self: QVirtualKeyboardDictionaryManager) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVirtualKeyboardDictionaryManager, b: bool) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn thread(self: QVirtualKeyboardDictionaryManager) QThread {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVirtualKeyboardDictionaryManager, _thread: anytype) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVirtualKeyboardDictionaryManager, interval: i32) i32 {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVirtualKeyboardDictionaryManager, time: i64) i32 {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVirtualKeyboardDictionaryManager, id: i32) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVirtualKeyboardDictionaryManager, id: i32) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVirtualKeyboardDictionaryManager.children: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVirtualKeyboardDictionaryManager, _parent: anytype) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVirtualKeyboardDictionaryManager, filterObj: anytype) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVirtualKeyboardDictionaryManager, obj: anytype) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVirtualKeyboardDictionaryManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn disconnect3(self: QVirtualKeyboardDictionaryManager) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVirtualKeyboardDictionaryManager, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn dumpObjectTree(self: QVirtualKeyboardDictionaryManager) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn dumpObjectInfo(self: QVirtualKeyboardDictionaryManager) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVirtualKeyboardDictionaryManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVirtualKeyboardDictionaryManager, name: [:0]const u8) QVariant {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVirtualKeyboardDictionaryManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVirtualKeyboardDictionaryManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVirtualKeyboardDictionaryManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn bindingStorage(self: QVirtualKeyboardDictionaryManager) QBindingStorage {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn bindingStorage2(self: QVirtualKeyboardDictionaryManager) QBindingStorage {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn destroyed(self: QVirtualKeyboardDictionaryManager) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardDictionaryManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVirtualKeyboardDictionaryManager, callback: *const fn (QVirtualKeyboardDictionaryManager) callconv(.c) void) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn parent(self: QVirtualKeyboardDictionaryManager) QObject {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVirtualKeyboardDictionaryManager, classname: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn deleteLater(self: QVirtualKeyboardDictionaryManager) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVirtualKeyboardDictionaryManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVirtualKeyboardDictionaryManager, time: i64, timerType: i32) i32 {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVirtualKeyboardDictionaryManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVirtualKeyboardDictionaryManager, signal: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVirtualKeyboardDictionaryManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVirtualKeyboardDictionaryManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVirtualKeyboardDictionaryManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVirtualKeyboardDictionaryManager, param1: anytype) void {
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardDictionaryManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVirtualKeyboardDictionaryManager, callback: *const fn (QVirtualKeyboardDictionaryManager, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    /// ` callback: *const fn (self: QVirtualKeyboardDictionaryManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVirtualKeyboardDictionaryManager, callback: *const fn (QVirtualKeyboardDictionaryManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboarddictionarymanager.html#dtor.QVirtualKeyboardDictionaryManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVirtualKeyboardDictionaryManager `
    ///
    pub fn delete(self: QVirtualKeyboardDictionaryManager) void {
        qtc.QVirtualKeyboardDictionaryManager_Delete(@ptrCast(self.ptr));
    }
};
