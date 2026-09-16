const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPixmap = @import("libqt6").QPixmap;
const QQuickTextureFactory = @import("libqt6").QQuickTextureFactory;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qqmlengine_enums = @import("../qml/libqqmlengine.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kquickiconprovider.html)
pub const KQuickIconProvider = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kquickiconprovider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KQuickIconProvider,

    pub const _is_KQuickIconProvider = {};
    pub const _is_QQuickImageProvider = {};
    pub const _is_QQmlImageProviderBase = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KQuickIconProvider object in C++ memory
    ///
    pub fn new() KQuickIconProvider {
        return .{ .ptr = qtc.KQuickIconProvider_new() };
    }

    /// ### DEPRECATED: Use `requestPixmap` instead
    ///
    pub const RequestPixmap = requestPixmap;

    /// ### [Upstream resources](https://api.kde.org/kquickiconprovider.html#requestPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` requestedSize: QSize `
    ///
    pub fn requestPixmap(self: KQuickIconProvider, id: []const u8, size: anytype, requestedSize: anytype) QPixmap {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(requestedSize)._is_QSize;
        return .{ .ptr = qtc.KQuickIconProvider_RequestPixmap(@ptrCast(self.ptr), id_str, @ptrCast(size.ptr), @ptrCast(requestedSize.ptr)) };
    }

    /// ### DEPRECATED: Use `onRequestPixmap` instead
    ///
    pub const OnRequestPixmap = onRequestPixmap;

    /// ### [Upstream resources](https://api.kde.org/kquickiconprovider.html#requestPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, id: [*:0]const u8, size: QSize, requestedSize: QSize) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRequestPixmap(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, [*:0]const u8, QSize, QSize) callconv(.c) QPixmap) void {
        qtc.KQuickIconProvider_OnRequestPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRequestPixmap` instead
    ///
    pub const SuperRequestPixmap = superRequestPixmap;

    /// ### [Upstream resources](https://api.kde.org/kquickiconprovider.html#requestPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` requestedSize: QSize `
    ///
    pub fn superRequestPixmap(self: KQuickIconProvider, id: []const u8, size: anytype, requestedSize: anytype) QPixmap {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(requestedSize)._is_QSize;
        return .{ .ptr = qtc.KQuickIconProvider_SuperRequestPixmap(@ptrCast(self.ptr), id_str, @ptrCast(size.ptr), @ptrCast(requestedSize.ptr)) };
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KQuickIconProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KQuickIconProvider.objectName: Memory allocation failed");
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KQuickIconProvider, name: []const u8) void {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn isWidgetType(self: KQuickIconProvider) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn isWindowType(self: KQuickIconProvider) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn isQuickItemType(self: KQuickIconProvider) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn signalsBlocked(self: KQuickIconProvider) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KQuickIconProvider, b: bool) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn thread(self: KQuickIconProvider) QThread {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KQuickIconProvider, _thread: anytype) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KQuickIconProvider, interval: i32) i32 {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KQuickIconProvider, time: i64) i32 {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KQuickIconProvider, id: i32) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KQuickIconProvider, id: i32) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KQuickIconProvider, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KQuickIconProvider.children: Memory allocation failed");
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KQuickIconProvider, _parent: anytype) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KQuickIconProvider, filterObj: anytype) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KQuickIconProvider, obj: anytype) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KQuickIconProvider, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn disconnect3(self: KQuickIconProvider) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KQuickIconProvider, receiver: anytype) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn dumpObjectTree(self: KQuickIconProvider) void {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn dumpObjectInfo(self: KQuickIconProvider) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KQuickIconProvider, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KQuickIconProvider, name: [:0]const u8) QVariant {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KQuickIconProvider, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KQuickIconProvider.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KQuickIconProvider.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn bindingStorage(self: KQuickIconProvider) QBindingStorage {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn bindingStorage2(self: KQuickIconProvider) QBindingStorage {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn destroyed(self: KQuickIconProvider) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` callback: *const fn (self: KQuickIconProvider) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider) callconv(.c) void) void {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn parent(self: KQuickIconProvider) QObject {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KQuickIconProvider, classname: [:0]const u8) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn deleteLater(self: KQuickIconProvider) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KQuickIconProvider, interval: i32, timerType: i32) i32 {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KQuickIconProvider, time: i64, timerType: i32) i32 {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KQuickIconProvider, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KQuickIconProvider, signal: [:0]const u8) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KQuickIconProvider, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KQuickIconProvider, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KQuickIconProvider, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KQuickIconProvider, param1: anytype) void {
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    pub fn metaObject(self: KQuickIconProvider) QMetaObject {
        return .{ .ptr = qtc.KQuickIconProvider_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    pub fn superMetaObject(self: KQuickIconProvider) QMetaObject {
        return .{ .ptr = qtc.KQuickIconProvider_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KQuickIconProvider, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KQuickIconProvider_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KQuickIconProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KQuickIconProvider_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KQuickIconProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KQuickIconProvider_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KQuickIconProvider_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KQuickIconProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KQuickIconProvider_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KQuickIconProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KQuickIconProvider_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KQuickIconProvider_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `imageType` instead
    ///
    pub const ImageType = imageType;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` qqmlengine_enums.ImageType `
    ///
    pub fn imageType(self: KQuickIconProvider) i32 {
        return qtc.KQuickIconProvider_ImageType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superImageType` instead
    ///
    pub const SuperImageType = superImageType;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` qqmlengine_enums.ImageType `
    ///
    pub fn superImageType(self: KQuickIconProvider) i32 {
        return qtc.KQuickIconProvider_SuperImageType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImageType` instead
    ///
    pub const OnImageType = onImageType;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onImageType(self: KQuickIconProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.KQuickIconProvider_OnImageType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qqmlengine_enums.Flag `
    ///
    pub fn flags(self: KQuickIconProvider) i32 {
        return qtc.KQuickIconProvider_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ## Returns:
    ///
    /// ` flag of qqmlengine_enums.Flag `
    ///
    pub fn superFlags(self: KQuickIconProvider) i32 {
        return qtc.KQuickIconProvider_SuperFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onFlags(self: KQuickIconProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.KQuickIconProvider_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `requestImage` instead
    ///
    pub const RequestImage = requestImage;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` requestedSize: QSize `
    ///
    pub fn requestImage(self: KQuickIconProvider, id: []const u8, size: anytype, requestedSize: anytype) QImage {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(requestedSize)._is_QSize;
        return .{ .ptr = qtc.KQuickIconProvider_RequestImage(@ptrCast(self.ptr), id_str, @ptrCast(size.ptr), @ptrCast(requestedSize.ptr)) };
    }

    /// ### DEPRECATED: Use `superRequestImage` instead
    ///
    pub const SuperRequestImage = superRequestImage;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` requestedSize: QSize `
    ///
    pub fn superRequestImage(self: KQuickIconProvider, id: []const u8, size: anytype, requestedSize: anytype) QImage {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(requestedSize)._is_QSize;
        return .{ .ptr = qtc.KQuickIconProvider_SuperRequestImage(@ptrCast(self.ptr), id_str, @ptrCast(size.ptr), @ptrCast(requestedSize.ptr)) };
    }

    /// ### DEPRECATED: Use `onRequestImage` instead
    ///
    pub const OnRequestImage = onRequestImage;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, id: [*:0]const u8, size: QSize, requestedSize: QSize) callconv(.c) QImage `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRequestImage(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, [*:0]const u8, QSize, QSize) callconv(.c) QImage) void {
        qtc.KQuickIconProvider_OnRequestImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `requestTexture` instead
    ///
    pub const RequestTexture = requestTexture;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` requestedSize: QSize `
    ///
    pub fn requestTexture(self: KQuickIconProvider, id: []const u8, size: anytype, requestedSize: anytype) QQuickTextureFactory {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(requestedSize)._is_QSize;
        return .{ .ptr = qtc.KQuickIconProvider_RequestTexture(@ptrCast(self.ptr), id_str, @ptrCast(size.ptr), @ptrCast(requestedSize.ptr)) };
    }

    /// ### DEPRECATED: Use `superRequestTexture` instead
    ///
    pub const SuperRequestTexture = superRequestTexture;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KQuickIconProvider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` requestedSize: QSize `
    ///
    pub fn superRequestTexture(self: KQuickIconProvider, id: []const u8, size: anytype, requestedSize: anytype) QQuickTextureFactory {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(requestedSize)._is_QSize;
        return .{ .ptr = qtc.KQuickIconProvider_SuperRequestTexture(@ptrCast(self.ptr), id_str, @ptrCast(size.ptr), @ptrCast(requestedSize.ptr)) };
    }

    /// ### DEPRECATED: Use `onRequestTexture` instead
    ///
    pub const OnRequestTexture = onRequestTexture;

    /// Inherited from QQuickImageProvider
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, id: [*:0]const u8, size: QSize, requestedSize: QSize) callconv(.c) QQuickTextureFactory `
    ///
    pub fn onRequestTexture(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, [*:0]const u8, QSize, QSize) callconv(.c) QQuickTextureFactory) void {
        qtc.KQuickIconProvider_OnRequestTexture(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KQuickIconProvider, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KQuickIconProvider_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KQuickIconProvider, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KQuickIconProvider_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QEvent) callconv(.c) bool) void {
        qtc.KQuickIconProvider_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KQuickIconProvider, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KQuickIconProvider_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KQuickIconProvider, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KQuickIconProvider_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QObject, QEvent) callconv(.c) bool) void {
        qtc.KQuickIconProvider_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KQuickIconProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KQuickIconProvider_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KQuickIconProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KQuickIconProvider_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QTimerEvent) callconv(.c) void) void {
        qtc.KQuickIconProvider_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KQuickIconProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KQuickIconProvider_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KQuickIconProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KQuickIconProvider_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QChildEvent) callconv(.c) void) void {
        qtc.KQuickIconProvider_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KQuickIconProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KQuickIconProvider_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KQuickIconProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KQuickIconProvider_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QEvent) callconv(.c) void) void {
        qtc.KQuickIconProvider_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KQuickIconProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KQuickIconProvider_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KQuickIconProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KQuickIconProvider_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KQuickIconProvider_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KQuickIconProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KQuickIconProvider_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KQuickIconProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KQuickIconProvider_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KQuickIconProvider_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn sender(self: KQuickIconProvider) QObject {
        return .{ .ptr = qtc.KQuickIconProvider_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn superSender(self: KQuickIconProvider) QObject {
        return .{ .ptr = qtc.KQuickIconProvider_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KQuickIconProvider, callback: *const fn () callconv(.c) QObject) void {
        qtc.KQuickIconProvider_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn senderSignalIndex(self: KQuickIconProvider) i32 {
        return qtc.KQuickIconProvider_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    pub fn superSenderSignalIndex(self: KQuickIconProvider) i32 {
        return qtc.KQuickIconProvider_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KQuickIconProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.KQuickIconProvider_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KQuickIconProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KQuickIconProvider_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KQuickIconProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KQuickIconProvider_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, [*:0]const u8) callconv(.c) i32) void {
        qtc.KQuickIconProvider_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KQuickIconProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KQuickIconProvider_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KQuickIconProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KQuickIconProvider_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KQuickIconProvider`
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, QMetaMethod) callconv(.c) bool) void {
        qtc.KQuickIconProvider_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KQuickIconProvider `
    ///
    /// ` callback: *const fn (self: KQuickIconProvider, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KQuickIconProvider, callback: *const fn (KQuickIconProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kquickiconprovider.html#dtor.KQuickIconProvider)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KQuickIconProvider `
    ///
    pub fn delete(self: KQuickIconProvider) void {
        qtc.KQuickIconProvider_Delete(@ptrCast(self.ptr));
    }
};
