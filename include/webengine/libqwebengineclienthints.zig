const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://doc.qt.io/qt-6/qwebengineclienthints.html
pub const qwebengineclienthints = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebEngineClientHints_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QWebEngineClientHints, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineClientHints_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QWebEngineClientHints, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QWebEngineClientHints_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QWebEngineClientHints_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#qt_qmlMarker_uncreatable)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn QmlMarkerUncreatable(self: ?*anyopaque) void {
        qtc.QWebEngineClientHints_QmlMarkerUncreatable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#arch)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn Arch(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineClientHints_Arch(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.Arch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#platform)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn Platform(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineClientHints_Platform(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.Platform: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#model)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn Model(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineClientHints_Model(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.Model: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isMobile)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn IsMobile(self: ?*anyopaque) bool {
        return qtc.QWebEngineClientHints_IsMobile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#fullVersion)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn FullVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineClientHints_FullVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.FullVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#platformVersion)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn PlatformVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineClientHints_PlatformVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.PlatformVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#bitness)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn Bitness(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineClientHints_Bitness(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.Bitness: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#fullVersionList)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn FullVersionList(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QWebEngineClientHints_FullVersionList(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qwebengineclienthints.FullVersionList: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isWow64)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn IsWow64(self: ?*anyopaque) bool {
        return qtc.QWebEngineClientHints_IsWow64(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setArch)
    ///
    /// ``` self: QtC.QWebEngineClientHints, arch: []const u8 ```
    pub fn SetArch(self: ?*anyopaque, arch: []const u8) void {
        const arch_str = qtc.struct_libqt_string{
            .len = arch.len,
            .data = arch.ptr,
        };
        qtc.QWebEngineClientHints_SetArch(@ptrCast(self), arch_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setPlatform)
    ///
    /// ``` self: QtC.QWebEngineClientHints, platform: []const u8 ```
    pub fn SetPlatform(self: ?*anyopaque, platform: []const u8) void {
        const platform_str = qtc.struct_libqt_string{
            .len = platform.len,
            .data = platform.ptr,
        };
        qtc.QWebEngineClientHints_SetPlatform(@ptrCast(self), platform_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setModel)
    ///
    /// ``` self: QtC.QWebEngineClientHints, model: []const u8 ```
    pub fn SetModel(self: ?*anyopaque, model: []const u8) void {
        const model_str = qtc.struct_libqt_string{
            .len = model.len,
            .data = model.ptr,
        };
        qtc.QWebEngineClientHints_SetModel(@ptrCast(self), model_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setIsMobile)
    ///
    /// ``` self: QtC.QWebEngineClientHints, isMobile: bool ```
    pub fn SetIsMobile(self: ?*anyopaque, isMobile: bool) void {
        qtc.QWebEngineClientHints_SetIsMobile(@ptrCast(self), isMobile);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setFullVersion)
    ///
    /// ``` self: QtC.QWebEngineClientHints, fullVersion: []const u8 ```
    pub fn SetFullVersion(self: ?*anyopaque, fullVersion: []const u8) void {
        const fullVersion_str = qtc.struct_libqt_string{
            .len = fullVersion.len,
            .data = fullVersion.ptr,
        };
        qtc.QWebEngineClientHints_SetFullVersion(@ptrCast(self), fullVersion_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setPlatformVersion)
    ///
    /// ``` self: QtC.QWebEngineClientHints, platformVersion: []const u8 ```
    pub fn SetPlatformVersion(self: ?*anyopaque, platformVersion: []const u8) void {
        const platformVersion_str = qtc.struct_libqt_string{
            .len = platformVersion.len,
            .data = platformVersion.ptr,
        };
        qtc.QWebEngineClientHints_SetPlatformVersion(@ptrCast(self), platformVersion_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setBitness)
    ///
    /// ``` self: QtC.QWebEngineClientHints, bitness: []const u8 ```
    pub fn SetBitness(self: ?*anyopaque, bitness: []const u8) void {
        const bitness_str = qtc.struct_libqt_string{
            .len = bitness.len,
            .data = bitness.ptr,
        };
        qtc.QWebEngineClientHints_SetBitness(@ptrCast(self), bitness_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setFullVersionList)
    ///
    /// ``` self: QtC.QWebEngineClientHints, fullVersionList: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetFullVersionList(self: ?*anyopaque, fullVersionList: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const fullVersionList_keys = allocator.alloc(qtc.struct_libqt_string, fullVersionList.count()) catch @panic("qwebengineclienthints.SetFullVersionList: Memory allocation failed");
        defer allocator.free(fullVersionList_keys);
        const fullVersionList_values = allocator.alloc(QtC.QVariant, fullVersionList.count()) catch @panic("qwebengineclienthints.SetFullVersionList: Memory allocation failed");
        defer allocator.free(fullVersionList_values);
        var i: usize = 0;
        var fullVersionList_it = fullVersionList.iterator();
        while (fullVersionList_it.next()) |entry| {
            const key = entry.key_ptr.*;
            fullVersionList_keys[i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            fullVersionList_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const fullVersionList_map = qtc.struct_libqt_map{
            .len = fullVersionList.count(),
            .keys = @ptrCast(fullVersionList_keys.ptr),
            .values = @ptrCast(fullVersionList_values.ptr),
        };
        qtc.QWebEngineClientHints_SetFullVersionList(@ptrCast(self), fullVersionList_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setIsWow64)
    ///
    /// ``` self: QtC.QWebEngineClientHints, isWow64: bool ```
    pub fn SetIsWow64(self: ?*anyopaque, isWow64: bool) void {
        qtc.QWebEngineClientHints_SetIsWow64(@ptrCast(self), isWow64);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isAllClientHintsEnabled)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn IsAllClientHintsEnabled(self: ?*anyopaque) bool {
        return qtc.QWebEngineClientHints_IsAllClientHintsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setAllClientHintsEnabled)
    ///
    /// ``` self: QtC.QWebEngineClientHints, enabled: bool ```
    pub fn SetAllClientHintsEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWebEngineClientHints_SetAllClientHintsEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#resetAll)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn ResetAll(self: ?*anyopaque) void {
        qtc.QWebEngineClientHints_ResetAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWebEngineClientHints_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWebEngineClientHints_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QWebEngineClientHints, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QWebEngineClientHints, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineclienthints.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QWebEngineClientHints, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QWebEngineClientHints, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWebEngineClientHints, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWebEngineClientHints, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWebEngineClientHints, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWebEngineClientHints, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwebengineclienthints.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QWebEngineClientHints, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QWebEngineClientHints, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QWebEngineClientHints, obj: QtC.QObject ```
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
    /// ``` self: QtC.QWebEngineClientHints, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QWebEngineClientHints, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QWebEngineClientHints, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QWebEngineClientHints, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebengineclienthints.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebengineclienthints.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QWebEngineClientHints, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWebEngineClientHints, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWebEngineClientHints, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QWebEngineClientHints, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineClientHints, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QWebEngineClientHints, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#dtor.QWebEngineClientHints)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineClientHints ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineClientHints_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebengineclienthints.html#types
pub const enums = struct {
    pub const QmlIsUncreatable = enum {
        pub const Yes: i32 = 1;
    };
};
